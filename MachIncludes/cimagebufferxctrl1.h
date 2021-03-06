#pragma once

// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CCimagebufferxctrl1 wrapper class

class CCimagebufferxctrl1 : public CWnd
{
protected:
	DECLARE_DYNCREATE(CCimagebufferxctrl1)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0xEAF9E456, 0x155, 0x47A9, { 0xAC, 0x8, 0xE8, 0xBB, 0xAD, 0x11, 0x33, 0x79 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
						const RECT& rect, CWnd* pParentWnd, UINT nID, 
						CCreateContext* pContext = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); 
	}

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, 
				UINT nID, CFile* pPersist = NULL, BOOL bStorage = FALSE,
				BSTR bstrLicKey = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); 
	}

// Attributes
public:


// Operations
public:

// _DCImageBufferX

// Functions
//

	double SetZoomFactor(double zoomFactor)
	{
		double result;
		static BYTE parms[] = VTS_R8 ;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_R8, (void*)&result, parms, zoomFactor);
		return result;
	}
	double GetZoomFactor()
	{
		double result;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
		return result;
	}
	double SetZoomAuto()
	{
		double result;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
		return result;
	}
	BOOL LoadImage(LPCTSTR fileName, long bDisplayInterface)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_I4 ;
		InvokeHelper(0x4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, fileName, bDisplayInterface);
		return result;
	}
	BOOL ConnectVideo()
	{
		BOOL result;
		InvokeHelper(0x5, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL DisconnectVideo()
	{
		BOOL result;
		InvokeHelper(0x6, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL SelectVideoDevice()
	{
		BOOL result;
		InvokeHelper(0x7, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void SetLUT(long lutID)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x8, DISPATCH_METHOD, VT_EMPTY, NULL, parms, lutID);
	}
	long GetLUT()
	{
		long result;
		InvokeHelper(0x9, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString GetLUTName(long lutID)
	{
		CString result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xa, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, lutID);
		return result;
	}
	void SetContrastAuto()
	{
		InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void SetContrastNormal()
	{
		InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL SetImage(long imageNumber)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, imageNumber);
		return result;
	}
	BOOL SetImagePrevious()
	{
		BOOL result;
		InvokeHelper(0xe, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL SetImageNext()
	{
		BOOL result;
		InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long GetImageNumber()
	{
		long result;
		InvokeHelper(0x10, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetTotalImages()
	{
		long result;
		InvokeHelper(0x11, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL EditVideoProperties()
	{
		BOOL result;
		InvokeHelper(0x12, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL SaveImage(LPCTSTR fileName, long fileType, long fileQuality, long bDisplayInterface)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x13, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, fileName, fileType, fileQuality, bDisplayInterface);
		return result;
	}
	BOOL SaveImages(LPCTSTR fileName, long fileType, long fileQuality, long bDisplayInterface)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x14, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, fileName, fileType, fileQuality, bDisplayInterface);
		return result;
	}
	BOOL SetImageSizeMm(double xSize, double ySize)
	{
		BOOL result;
		static BYTE parms[] = VTS_R8 VTS_R8 ;
		InvokeHelper(0x15, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, xSize, ySize);
		return result;
	}
	BOOL SetImageSize(long xSize, long ySize)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x16, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, xSize, ySize);
		return result;
	}
	VARIANT GetTag(long tagId, long tagSubId)
	{
		VARIANT result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x17, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, tagId, tagSubId);
		return result;
	}
	BOOL CopyToClipboard()
	{
		BOOL result;
		InvokeHelper(0x18, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL PasteFromClipboard()
	{
		BOOL result;
		InvokeHelper(0x19, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL CanPaste()
	{
		BOOL result;
		InvokeHelper(0x1a, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL GrabVideo(long bAddImage)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x1b, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, bAddImage);
		return result;
	}
	BOOL Empty()
	{
		BOOL result;
		InvokeHelper(0x1c, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL SetTag(long tagId, long tagSubId, VARIANT tagContent, long bFireTagChanged)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_VARIANT VTS_I4 ;
		InvokeHelper(0x1d, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, tagId, tagSubId, &tagContent, bFireTagChanged);
		return result;
	}
	CString GetClientDispName()
	{
		CString result;
		InvokeHelper(0x1e, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	BOOL LoadImageFromMemory(VARIANT imageArray)
	{
		BOOL result;
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0x1f, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, &imageArray);
		return result;
	}
	VARIANT SaveImageToMemory(long fileType, long fileQuality)
	{
		VARIANT result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x20, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, fileType, fileQuality);
		return result;
	}
	BOOL SetCursorMode(long cursorMode)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x21, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, cursorMode);
		return result;
	}
	BOOL EditStreamProperties()
	{
		BOOL result;
		InvokeHelper(0x22, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	VARIANT GetTagValue(long tagId, long tagSubId, long position)
	{
		VARIANT result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x23, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, tagId, tagSubId, position);
		return result;
	}
	BOOL SetTagValue(long tagId, long tagSubId, long position, VARIANT value, long bFireTagChanged)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_VARIANT VTS_I4 ;
		InvokeHelper(0x24, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, tagId, tagSubId, position, &value, bFireTagChanged);
		return result;
	}
	long StartMeasureDef(double value, LPCTSTR units, long dimensions, LPCTSTR notes)
	{
		long result;
		static BYTE parms[] = VTS_R8 VTS_BSTR VTS_I4 VTS_BSTR ;
		InvokeHelper(0x25, DISPATCH_METHOD, VT_I4, (void*)&result, parms, value, units, dimensions, notes);
		return result;
	}
	long SelectMeasure(long pointX, long pointY, long bAdd)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x26, DISPATCH_METHOD, VT_I4, (void*)&result, parms, pointX, pointY, bAdd);
		return result;
	}
	void SelectAllMeasures(long bSelect)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x27, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bSelect);
	}
	void DeleteSelectedMeasures()
	{
		InvokeHelper(0x28, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	long GetFirstMeasureId()
	{
		long result;
		InvokeHelper(0x29, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetNextMeasureId(long currentId)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x2a, DISPATCH_METHOD, VT_I4, (void*)&result, parms, currentId);
		return result;
	}
	double GetMeasureValue(long measureId)
	{
		double result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x2b, DISPATCH_METHOD, VT_R8, (void*)&result, parms, measureId);
		return result;
	}
	double SetZoomRect(long startX, long startY, long endX, long endY, long bZoomIn)
	{
		double result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x2c, DISPATCH_METHOD, VT_R8, (void*)&result, parms, startX, startY, endX, endY, bZoomIn);
		return result;
	}
	CString GetMeasureString(long measureId, long floatPrecision)
	{
		CString result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x2d, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, measureId, floatPrecision);
		return result;
	}
	void DefMeasureLine(long measureId, long startX, long startY, long endX, long endY)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x2e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, measureId, startX, startY, endX, endY);
	}
	void EndMeasureDef(long measureId)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x2f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, measureId);
	}
	void DeleteMeasure(long measureId)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x30, DISPATCH_METHOD, VT_EMPTY, NULL, parms, measureId);
	}
	void SelectMeasureId(long measureId, long bSelect)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x31, DISPATCH_METHOD, VT_EMPTY, NULL, parms, measureId, bSelect);
	}
	long GetImageSizeX()
	{
		long result;
		InvokeHelper(0x32, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetImageSizeY()
	{
		long result;
		InvokeHelper(0x33, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	double GetImageSizeMmX()
	{
		double result;
		InvokeHelper(0x34, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
		return result;
	}
	double GetImageSizeMmY()
	{
		double result;
		InvokeHelper(0x35, DISPATCH_METHOD, VT_R8, (void*)&result, NULL);
		return result;
	}
	void SetContrastRect(long startX, long startY, long endX, long endY)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x36, DISPATCH_METHOD, VT_EMPTY, NULL, parms, startX, startY, endX, endY);
	}
	long GetMeasuresOverlay()
	{
		long result;
		InvokeHelper(0x37, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetContrastMin()
	{
		long result;
		InvokeHelper(0x39, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetContrastMinMax(long minLuminance, long maxLuminance)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x3a, DISPATCH_METHOD, VT_EMPTY, NULL, parms, minLuminance, maxLuminance);
	}
	long GetContrastMax()
	{
		long result;
		InvokeHelper(0x3b, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long SetWriteVisibleContrast(long bEnableVisibleContrast)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x3c, DISPATCH_METHOD, VT_I4, (void*)&result, parms, bEnableVisibleContrast);
		return result;
	}
	long GetWriteVisibleContrast()
	{
		long result;
		InvokeHelper(0x3d, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetCursorColor(long red, long green, long blue)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x3e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, red, green, blue);
	}
	long GetCursorRed()
	{
		long result;
		InvokeHelper(0x3f, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetCursorGreen()
	{
		long result;
		InvokeHelper(0x40, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetCursorBlue()
	{
		long result;
		InvokeHelper(0x41, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetContrastCenterWidth(long center, long width)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x42, DISPATCH_METHOD, VT_EMPTY, NULL, parms, center, width);
	}
	long GetContrastCenter()
	{
		long result;
		InvokeHelper(0x43, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetContrastWidth()
	{
		long result;
		InvokeHelper(0x44, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL SetContrastFromFile(long contrastId)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x45, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, contrastId);
		return result;
	}
	CString GetContrastNameFromFile(long contrastId)
	{
		CString result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x46, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, contrastId);
		return result;
	}
	void SetLuminanceSaturation(long luminance, long saturation)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x47, DISPATCH_METHOD, VT_EMPTY, NULL, parms, luminance, saturation);
	}
	long GetLuminance()
	{
		long result;
		InvokeHelper(0x48, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetSaturation()
	{
		long result;
		InvokeHelper(0x49, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long SetMeasuresOverlay(long bEnable)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x38, DISPATCH_METHOD, VT_I4, (void*)&result, parms, bEnable);
		return result;
	}
	void SetStatusWindow(long bEnableStatusWindow)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4a, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bEnableStatusWindow);
	}
	void SetTool(long toolMode)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4b, DISPATCH_METHOD, VT_EMPTY, NULL, parms, toolMode);
	}
	long GetTool()
	{
		long result;
		InvokeHelper(0x4c, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL EditCrossbarProperties()
	{
		BOOL result;
		InvokeHelper(0x4d, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long DefLutStep(long red, long green, long blue)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x4e, DISPATCH_METHOD, VT_I4, (void*)&result, parms, red, green, blue);
		return result;
	}
	long StartLutDef(long lutSize)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4f, DISPATCH_METHOD, VT_I4, (void*)&result, parms, lutSize);
		return result;
	}
	long EndLutDef()
	{
		long result;
		InvokeHelper(0x50, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL GrabVideoNoDisconnect(long bAddImage)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x51, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, bAddImage);
		return result;
	}
	BOOL Crop(long x0, long y0, long x1, long y1)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x52, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, x0, y0, x1, y1);
		return result;
	}
	void AboutBox()
	{
		InvokeHelper(DISPID_ABOUTBOX, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	CString GetVideoDevice(long videoDeviceId)
	{
		CString result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x53, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, videoDeviceId);
		return result;
	}
	BOOL SelectVideoDeviceById(long videoDeviceId)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x54, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, videoDeviceId);
		return result;
	}
	long GetVideoDeviceId()
	{
		long result;
		InvokeHelper(0x55, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long SetAddMode(long bAdd)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x56, DISPATCH_METHOD, VT_I4, (void*)&result, parms, bAdd);
		return result;
	}

// Properties
//



};
