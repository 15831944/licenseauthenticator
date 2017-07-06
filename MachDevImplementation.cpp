// MachDevImplementation.cpp 
// This is the place where the implementor puts his/her code to actually implement the plugin
//
// -----------------------------------------------------------------------------------------------------
// Revision History:
// 7 June 2006 - Separated from MachDevice by JAP
// -----------------------------------------------------------------------------------------------------

//                    Blank Device
 

#include "stdafx.h"
#include "resource.h"
#include ".\MachIncludes\TrajectoryControl.h"
#include ".\MachIncludes\Mach4View.h"
#include ".\MachIncludes\Engine.h"
#include ".\MachIncludes\rs274ngc.h"
#include "XMLProfile.h"
#include "MachDevImplementation.h"
// --------------------------------------->>>>>>> See this file for the Mach functions that can be
//												called and the pointers to the variable blocks.
//#include "xxxxxxxx.h"					// add includes for code you call here

#include <mmsystem.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <process.h>
#include <Tlhelp32.h>
#include <winbase.h>
 
 

// ==================================================================================================
// 
// Global variables for this code 
//
// ===================================================================================================
 

extern CMach4View *MachView;
 
	

//Templates of control routines.



// ==================================================================================================
//
// Declare helper routines for your code - more obvious here than in your header
//
//====================================================================================================

//  Routines. 






//======================================================================================================
//
// Here are the routines which are called by Mach3 via MachDevice. They are the "meat" of every plugin
//
//====================================================================================================
void myCleanUp() //used for destrcution of variables prior to exit..  Called as MAch3 shuts down. 
{
   
   
}


CString	myProfileInit (CString name, CXMLProfile *DevProf)	
// initial access to Mach profile when enumerating available plugins
// Returns the second half on the "pluging id" for the list in Operator
// MachDevice adds the file name at the start of the string

{
	//this gets the default directory DefDir in which Mach3 is located.  and the profile name ex. "Mach3Mill"
	//DefDir = DevProf->GetProfileString("Preferences","DefDir","C:\\Mach3\\");
    //Profile = DevProf->GetProfileString("Preferences","Profile","Mach3Mill");
	return " Digitizing PlugIn - A.Fenerty Ver 1.0a";
} // myProfileInit

void killProcessByName(const char *filename)
{
    HANDLE hSnapShot = CreateToolhelp32Snapshot(TH32CS_SNAPALL, NULL);
    PROCESSENTRY32 pEntry;
    pEntry.dwSize = sizeof (pEntry);
    BOOL hRes = Process32First(hSnapShot, &pEntry);
    while (hRes)
    {
        if (strcmp(pEntry.szExeFile, filename) == 0)
        {
            HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, 0, (DWORD) pEntry.th32ProcessID);
            if (hProcess != NULL)
            {
                TerminateProcess(hProcess, 9);
                CloseHandle(hProcess);
            }
        }
        hRes = Process32Next(hSnapShot, &pEntry);
    }
    CloseHandle(hSnapShot);
}

char* append(char* array, char a)
{
    size_t len = strlen(array);

    char* ret = new char[len+2];

    strcpy(ret, array);    
    ret[len] = a;
    ret[len+1] = '\0';

    return ret;
}

char* decode(char* data, char* key)
{
    size_t len = strlen(data);

    char* decodedData = new char[len];

	for(int i = 0; i < len; i++){
		decodedData[i] = data[i]^key[i];
	}

	decodedData[len] = '\0';

    return decodedData;
}

int authenticateInitialization ()
// called during Mach initialisation. You can influence subsequent init by actions here
// **** Not used in typical device plugin

{	
	std::string line;
	std::ifstream myfile ("C:\\mach3license.jrg");
	if (myfile.is_open()){
		getline(myfile, line);
		myfile.close();
	}

	char* encodedStr = "";
	char* decodingKey = "abcdefghijklmnopqrstuvxwyz";
	

	std::string substr;
	const char* csubstr;
	long lsubstr;
	char auxchar;
	for(int i = 0; i < (strlen(line.c_str())); i=i+2){
		substr = line.substr(i, 2);
		csubstr = substr.c_str();
		lsubstr = strtol(csubstr, NULL, 16);
		auxchar = static_cast<unsigned char>(lsubstr);
		encodedStr = append(encodedStr, auxchar);
	}

	char* decodedStr = decode(encodedStr, decodingKey);

	/**
	if(missingLicenseFile()) return 1;
	if(licenseExpired()) return 2;
	if(adultaratedSOTime()) return 3;
    **/

	return 0;
} //myInitControl



void	myInitControl ()
// called during Mach initialisation. You can influence subsequent init by actions here
// **** Not used in typical device plugin

{	
	authenticateInitialization();
	killProcessByName("Mach3.exe");
	/**
	int errorCode = authenticateInitialization();
	if(errorCode > 0){
		showAuthenticationErrorMessage(errorCode);
		killProcessByName("Mach3.exe");
	}
	**/
	return;
} //myInitControl



void	myPostInitControl ()
// called when mach fully set up so all data can be used but initialization  outcomes not affected

{
  //In the case of a MotionControl plugin, this rouine is only called to tell us to 
  // take over. We HAVE been selected and are now commanded to do whatever it takes 
  // to OWN the IO and movement of this run.
  // If you wish for example, to zero all IO at this point, your free to do so..


  //First, lets add a message tracking facility to handle message traffic output.
  //Output is in its own class because its important that we do not overrun the G100's
  //buffers or queues. We'll make the tracker object intelligent enough to be able to handle any errors, retransmissions
  // and trackign ack numbers and such..
//First lets open a Debug File. We'll only use it if instructed by Mach3's DebugThisRun selection in config/state

  
  return;
} //myPostInitControl


//This is called by Mach3 when homing is commanded. Relevent axis are in the Engine.Axis status
//word to indicate they should be homed..

 


//This routine is called by Mach3 when a probe should occur. Relevent positions are stored in 
// the MainPlanner as ProbeX, ProbeY..ect..

 
 

void	myConfig (CXMLProfile *DevProf)
// Called to configure the device
// Has read/write access to Mach XML profile to remember what it needs to.

{
	 

} // myConfig

void	myUpdate ()
// 10Hz update loop
//Updates the G100 10 times a second.
{

 
// Check here for disconnection for G100. If more than 1/2 second has passed and no ethernet message, trigger an EStop
// Inputs to InActive..
 
    
} // myUpdate

void	myHighSpeedUpdate ()
// called at 40Hz. This is used for Higher Res timing needs. 
// only use as required, it can use alot of system reosurces. 
//not really required in the G100, so Ill leave it blank for now..

{

	

} // myHighSpeed Update
 
// ======================================================================================================
//
// The Helpers follow
//
//=======================================================================================================

// put your helper routines here

//This is a helper for Debug Messages. Mach3's MainPlanner->DebugRun var makes messages fill the file up during a run.




//All the following code runs th evarious phases of the G100. 

///PHASE Code. The thing to remember about phase fucntions below, is they are all called 10 times a second whan their phase is active;

//Discovery. This guys job is to open the G100 in the event of boot, attach, or reflash timeouts. It allows for an asyncronous way 
//           to attach to a G100 thats on the network. Furture work: Attach to selection of devices. 
 