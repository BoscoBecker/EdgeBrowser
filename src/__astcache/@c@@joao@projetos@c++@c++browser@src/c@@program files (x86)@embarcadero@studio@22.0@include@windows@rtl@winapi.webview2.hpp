// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Winapi.WebView2.pas' rev: 35.00 (Windows)

#ifndef Winapi_Webview2HPP
#define Winapi_Webview2HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <System.Variants.hpp>
#include <System.Win.StdVCL.hpp>
#include <Winapi.ActiveX.hpp>

//-- user supplied -----------------------------------------------------------

namespace Winapi
{
namespace Webview2
{
//-- forward type declarations -----------------------------------------------
struct __MIDL___MIDL_itf_webview2_0005_0001_0001;
struct COREWEBVIEW2_PHYSICAL_KEY_STATUS;
struct EventRegistrationToken;
struct __MIDL_IWinTypes_0009;
struct _RemotableHandle;
struct _LARGE_INTEGER;
struct _ULARGE_INTEGER;
__interface DELPHIINTERFACE ICoreWebView2AcceleratorKeyPressedEventArgs;
typedef System::DelphiInterface<ICoreWebView2AcceleratorKeyPressedEventArgs> _di_ICoreWebView2AcceleratorKeyPressedEventArgs;
__interface DELPHIINTERFACE ICoreWebView2AcceleratorKeyPressedEventHandler;
typedef System::DelphiInterface<ICoreWebView2AcceleratorKeyPressedEventHandler> _di_ICoreWebView2AcceleratorKeyPressedEventHandler;
__interface DELPHIINTERFACE ICoreWebView2Controller;
typedef System::DelphiInterface<ICoreWebView2Controller> _di_ICoreWebView2Controller;
__interface DELPHIINTERFACE ICoreWebView2ZoomFactorChangedEventHandler;
typedef System::DelphiInterface<ICoreWebView2ZoomFactorChangedEventHandler> _di_ICoreWebView2ZoomFactorChangedEventHandler;
__interface DELPHIINTERFACE ICoreWebView2MoveFocusRequestedEventHandler;
typedef System::DelphiInterface<ICoreWebView2MoveFocusRequestedEventHandler> _di_ICoreWebView2MoveFocusRequestedEventHandler;
__interface DELPHIINTERFACE ICoreWebView2MoveFocusRequestedEventArgs;
typedef System::DelphiInterface<ICoreWebView2MoveFocusRequestedEventArgs> _di_ICoreWebView2MoveFocusRequestedEventArgs;
__interface DELPHIINTERFACE ICoreWebView2FocusChangedEventHandler;
typedef System::DelphiInterface<ICoreWebView2FocusChangedEventHandler> _di_ICoreWebView2FocusChangedEventHandler;
__interface DELPHIINTERFACE ICoreWebView2;
typedef System::DelphiInterface<ICoreWebView2> _di_ICoreWebView2;
__interface DELPHIINTERFACE ICoreWebView2Settings;
typedef System::DelphiInterface<ICoreWebView2Settings> _di_ICoreWebView2Settings;
__interface DELPHIINTERFACE ICoreWebView2NavigationStartingEventHandler;
typedef System::DelphiInterface<ICoreWebView2NavigationStartingEventHandler> _di_ICoreWebView2NavigationStartingEventHandler;
__interface DELPHIINTERFACE ICoreWebView2NavigationStartingEventArgs;
typedef System::DelphiInterface<ICoreWebView2NavigationStartingEventArgs> _di_ICoreWebView2NavigationStartingEventArgs;
__interface DELPHIINTERFACE ICoreWebView2HttpRequestHeaders;
typedef System::DelphiInterface<ICoreWebView2HttpRequestHeaders> _di_ICoreWebView2HttpRequestHeaders;
__interface DELPHIINTERFACE ICoreWebView2HttpHeadersCollectionIterator;
typedef System::DelphiInterface<ICoreWebView2HttpHeadersCollectionIterator> _di_ICoreWebView2HttpHeadersCollectionIterator;
__interface DELPHIINTERFACE ICoreWebView2ContentLoadingEventHandler;
typedef System::DelphiInterface<ICoreWebView2ContentLoadingEventHandler> _di_ICoreWebView2ContentLoadingEventHandler;
__interface DELPHIINTERFACE ICoreWebView2ContentLoadingEventArgs;
typedef System::DelphiInterface<ICoreWebView2ContentLoadingEventArgs> _di_ICoreWebView2ContentLoadingEventArgs;
__interface DELPHIINTERFACE ICoreWebView2SourceChangedEventHandler;
typedef System::DelphiInterface<ICoreWebView2SourceChangedEventHandler> _di_ICoreWebView2SourceChangedEventHandler;
__interface DELPHIINTERFACE ICoreWebView2SourceChangedEventArgs;
typedef System::DelphiInterface<ICoreWebView2SourceChangedEventArgs> _di_ICoreWebView2SourceChangedEventArgs;
__interface DELPHIINTERFACE ICoreWebView2HistoryChangedEventHandler;
typedef System::DelphiInterface<ICoreWebView2HistoryChangedEventHandler> _di_ICoreWebView2HistoryChangedEventHandler;
__interface DELPHIINTERFACE ICoreWebView2NavigationCompletedEventHandler;
typedef System::DelphiInterface<ICoreWebView2NavigationCompletedEventHandler> _di_ICoreWebView2NavigationCompletedEventHandler;
__interface DELPHIINTERFACE ICoreWebView2NavigationCompletedEventArgs;
typedef System::DelphiInterface<ICoreWebView2NavigationCompletedEventArgs> _di_ICoreWebView2NavigationCompletedEventArgs;
__interface DELPHIINTERFACE ICoreWebView2ScriptDialogOpeningEventHandler;
typedef System::DelphiInterface<ICoreWebView2ScriptDialogOpeningEventHandler> _di_ICoreWebView2ScriptDialogOpeningEventHandler;
__interface DELPHIINTERFACE ICoreWebView2ScriptDialogOpeningEventArgs;
typedef System::DelphiInterface<ICoreWebView2ScriptDialogOpeningEventArgs> _di_ICoreWebView2ScriptDialogOpeningEventArgs;
__interface DELPHIINTERFACE ICoreWebView2Deferral;
typedef System::DelphiInterface<ICoreWebView2Deferral> _di_ICoreWebView2Deferral;
__interface DELPHIINTERFACE ICoreWebView2PermissionRequestedEventHandler;
typedef System::DelphiInterface<ICoreWebView2PermissionRequestedEventHandler> _di_ICoreWebView2PermissionRequestedEventHandler;
__interface DELPHIINTERFACE ICoreWebView2PermissionRequestedEventArgs;
typedef System::DelphiInterface<ICoreWebView2PermissionRequestedEventArgs> _di_ICoreWebView2PermissionRequestedEventArgs;
__interface DELPHIINTERFACE ICoreWebView2ProcessFailedEventHandler;
typedef System::DelphiInterface<ICoreWebView2ProcessFailedEventHandler> _di_ICoreWebView2ProcessFailedEventHandler;
__interface DELPHIINTERFACE ICoreWebView2ProcessFailedEventArgs;
typedef System::DelphiInterface<ICoreWebView2ProcessFailedEventArgs> _di_ICoreWebView2ProcessFailedEventArgs;
__interface DELPHIINTERFACE ICoreWebView2AddScriptToExecuteOnDocumentCreatedCompletedHandler;
typedef System::DelphiInterface<ICoreWebView2AddScriptToExecuteOnDocumentCreatedCompletedHandler> _di_ICoreWebView2AddScriptToExecuteOnDocumentCreatedCompletedHandler;
__interface DELPHIINTERFACE ICoreWebView2ExecuteScriptCompletedHandler;
typedef System::DelphiInterface<ICoreWebView2ExecuteScriptCompletedHandler> _di_ICoreWebView2ExecuteScriptCompletedHandler;
__interface DELPHIINTERFACE ICoreWebView2CapturePreviewCompletedHandler;
typedef System::DelphiInterface<ICoreWebView2CapturePreviewCompletedHandler> _di_ICoreWebView2CapturePreviewCompletedHandler;
__interface DELPHIINTERFACE ICoreWebView2WebMessageReceivedEventHandler;
typedef System::DelphiInterface<ICoreWebView2WebMessageReceivedEventHandler> _di_ICoreWebView2WebMessageReceivedEventHandler;
__interface DELPHIINTERFACE ICoreWebView2WebMessageReceivedEventArgs;
typedef System::DelphiInterface<ICoreWebView2WebMessageReceivedEventArgs> _di_ICoreWebView2WebMessageReceivedEventArgs;
__interface DELPHIINTERFACE ICoreWebView2CallDevToolsProtocolMethodCompletedHandler;
typedef System::DelphiInterface<ICoreWebView2CallDevToolsProtocolMethodCompletedHandler> _di_ICoreWebView2CallDevToolsProtocolMethodCompletedHandler;
__interface DELPHIINTERFACE ICoreWebView2DevToolsProtocolEventReceiver;
typedef System::DelphiInterface<ICoreWebView2DevToolsProtocolEventReceiver> _di_ICoreWebView2DevToolsProtocolEventReceiver;
__interface DELPHIINTERFACE ICoreWebView2DevToolsProtocolEventReceivedEventHandler;
typedef System::DelphiInterface<ICoreWebView2DevToolsProtocolEventReceivedEventHandler> _di_ICoreWebView2DevToolsProtocolEventReceivedEventHandler;
__interface DELPHIINTERFACE ICoreWebView2DevToolsProtocolEventReceivedEventArgs;
typedef System::DelphiInterface<ICoreWebView2DevToolsProtocolEventReceivedEventArgs> _di_ICoreWebView2DevToolsProtocolEventReceivedEventArgs;
__interface DELPHIINTERFACE ICoreWebView2NewWindowRequestedEventHandler;
typedef System::DelphiInterface<ICoreWebView2NewWindowRequestedEventHandler> _di_ICoreWebView2NewWindowRequestedEventHandler;
__interface DELPHIINTERFACE ICoreWebView2NewWindowRequestedEventArgs;
typedef System::DelphiInterface<ICoreWebView2NewWindowRequestedEventArgs> _di_ICoreWebView2NewWindowRequestedEventArgs;
__interface DELPHIINTERFACE ICoreWebView2DocumentTitleChangedEventHandler;
typedef System::DelphiInterface<ICoreWebView2DocumentTitleChangedEventHandler> _di_ICoreWebView2DocumentTitleChangedEventHandler;
__interface DELPHIINTERFACE ICoreWebView2ContainsFullScreenElementChangedEventHandler;
typedef System::DelphiInterface<ICoreWebView2ContainsFullScreenElementChangedEventHandler> _di_ICoreWebView2ContainsFullScreenElementChangedEventHandler;
__interface DELPHIINTERFACE ICoreWebView2WebResourceRequestedEventHandler;
typedef System::DelphiInterface<ICoreWebView2WebResourceRequestedEventHandler> _di_ICoreWebView2WebResourceRequestedEventHandler;
__interface DELPHIINTERFACE ICoreWebView2WebResourceRequestedEventArgs;
typedef System::DelphiInterface<ICoreWebView2WebResourceRequestedEventArgs> _di_ICoreWebView2WebResourceRequestedEventArgs;
__interface DELPHIINTERFACE ICoreWebView2WebResourceRequest;
typedef System::DelphiInterface<ICoreWebView2WebResourceRequest> _di_ICoreWebView2WebResourceRequest;
__interface DELPHIINTERFACE ICoreWebView2WebResourceResponse;
typedef System::DelphiInterface<ICoreWebView2WebResourceResponse> _di_ICoreWebView2WebResourceResponse;
__interface DELPHIINTERFACE ICoreWebView2HttpResponseHeaders;
typedef System::DelphiInterface<ICoreWebView2HttpResponseHeaders> _di_ICoreWebView2HttpResponseHeaders;
__interface DELPHIINTERFACE ICoreWebView2WindowCloseRequestedEventHandler;
typedef System::DelphiInterface<ICoreWebView2WindowCloseRequestedEventHandler> _di_ICoreWebView2WindowCloseRequestedEventHandler;
__interface DELPHIINTERFACE ICoreWebView2CreateCoreWebView2ControllerCompletedHandler;
typedef System::DelphiInterface<ICoreWebView2CreateCoreWebView2ControllerCompletedHandler> _di_ICoreWebView2CreateCoreWebView2ControllerCompletedHandler;
__interface DELPHIINTERFACE ICoreWebView2CreateCoreWebView2EnvironmentCompletedHandler;
typedef System::DelphiInterface<ICoreWebView2CreateCoreWebView2EnvironmentCompletedHandler> _di_ICoreWebView2CreateCoreWebView2EnvironmentCompletedHandler;
__interface DELPHIINTERFACE ICoreWebView2Environment;
typedef System::DelphiInterface<ICoreWebView2Environment> _di_ICoreWebView2Environment;
__interface DELPHIINTERFACE ICoreWebView2NewBrowserVersionAvailableEventHandler;
typedef System::DelphiInterface<ICoreWebView2NewBrowserVersionAvailableEventHandler> _di_ICoreWebView2NewBrowserVersionAvailableEventHandler;
__interface DELPHIINTERFACE ICoreWebView2EnvironmentOptions;
typedef System::DelphiInterface<ICoreWebView2EnvironmentOptions> _di_ICoreWebView2EnvironmentOptions;
//-- type declarations -------------------------------------------------------
typedef Winapi::Activex::TOleEnum COREWEBVIEW2_KEY_EVENT_KIND;

typedef Winapi::Activex::TOleEnum COREWEBVIEW2_MOVE_FOCUS_REASON;

typedef Winapi::Activex::TOleEnum COREWEBVIEW2_WEB_ERROR_STATUS;

typedef Winapi::Activex::TOleEnum COREWEBVIEW2_SCRIPT_DIALOG_KIND;

typedef Winapi::Activex::TOleEnum COREWEBVIEW2_PERMISSION_KIND;

typedef Winapi::Activex::TOleEnum COREWEBVIEW2_PERMISSION_STATE;

typedef Winapi::Activex::TOleEnum COREWEBVIEW2_PROCESS_FAILED_KIND;

typedef Winapi::Activex::TOleEnum COREWEBVIEW2_CAPTURE_PREVIEW_IMAGE_FORMAT;

typedef Winapi::Activex::TOleEnum COREWEBVIEW2_WEB_RESOURCE_CONTEXT;

typedef _RemotableHandle *wireHWND;

typedef __MIDL___MIDL_itf_webview2_0005_0001_0001 *PUserType1;

typedef System::OleVariant *POleVariant1;

typedef System::Byte *PByte1;

#pragma pack(push,4)
struct DECLSPEC_DRECORD __MIDL___MIDL_itf_webview2_0005_0001_0001
{
public:
	unsigned Data1;
	System::Word Data2;
	System::Word Data3;
	System::StaticArray<System::Byte, 8> Data4;
};
#pragma pack(pop)


#pragma pack(push,4)
struct DECLSPEC_DRECORD COREWEBVIEW2_PHYSICAL_KEY_STATUS
{
public:
	unsigned RepeatCount;
	unsigned ScanCode;
	int IsExtendedKey;
	int IsMenuKeyDown;
	int WasKeyDown;
	int IsKeyReleased;
};
#pragma pack(pop)


struct DECLSPEC_DRECORD EventRegistrationToken
{
public:
	__int64 value;
};


#pragma pack(push,4)
struct DECLSPEC_DRECORD __MIDL_IWinTypes_0009
{
	
public:
	union
	{
		struct 
		{
			int hRemote;
		};
		struct 
		{
			int hInproc;
		};
		
	};
};
#pragma pack(pop)


#pragma pack(push,4)
struct DECLSPEC_DRECORD _RemotableHandle
{
public:
	int fContext;
	__MIDL_IWinTypes_0009 u;
};
#pragma pack(pop)


struct DECLSPEC_DRECORD _LARGE_INTEGER
{
public:
	__int64 QuadPart;
};


struct DECLSPEC_DRECORD _ULARGE_INTEGER
{
public:
	unsigned __int64 QuadPart;
};


__interface  INTERFACE_UUID("{9224476E-D8C3-4EB7-BB65-2FD7792B27CE}") ICoreWebView2AcceleratorKeyPressedEventArgs  : public System::IInterface 
{
	virtual HRESULT __stdcall Get_KeyEventKind(/* out */ Winapi::Activex::TOleEnum &KeyEventKind) = 0 ;
	virtual HRESULT __stdcall Get_VirtualKey(/* out */ unsigned &VirtualKey) = 0 ;
	virtual HRESULT __stdcall Get_KeyEventLParam(/* out */ int &lParam) = 0 ;
	virtual HRESULT __stdcall Get_PhysicalKeyStatus(/* out */ COREWEBVIEW2_PHYSICAL_KEY_STATUS &PhysicalKeyStatus) = 0 ;
	virtual HRESULT __stdcall Get_Handled(/* out */ int &Handled) = 0 ;
	virtual HRESULT __stdcall Set_Handled(int Handled) = 0 ;
};

__interface  INTERFACE_UUID("{A7D303F9-503C-4B7E-BC40-5C7CE6CABAAA}") ICoreWebView2AcceleratorKeyPressedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(const _di_ICoreWebView2Controller sender, const _di_ICoreWebView2AcceleratorKeyPressedEventArgs args) = 0 ;
};

__interface  INTERFACE_UUID("{7CCC5C7F-8351-4572-9077-9C1C80913835}") ICoreWebView2Controller  : public System::IInterface 
{
	virtual HRESULT __stdcall Get_IsVisible(/* out */ int &IsVisible) = 0 ;
	virtual HRESULT __stdcall Set_IsVisible(int IsVisible) = 0 ;
	virtual HRESULT __stdcall Get_Bounds(/* out */ tagRECT &Bounds) = 0 ;
#ifndef _WIN64
	virtual HRESULT __stdcall Set_Bounds(tagRECT Bounds) = 0 ;
#else /* _WIN64 */
	virtual HRESULT __stdcall Set_Bounds(const tagRECT &Bounds) = 0 ;
#endif /* _WIN64 */
	virtual HRESULT __stdcall Get_ZoomFactor(/* out */ double &ZoomFactor) = 0 ;
	virtual HRESULT __stdcall Set_ZoomFactor(double ZoomFactor) = 0 ;
	virtual HRESULT __stdcall add_ZoomFactorChanged(const _di_ICoreWebView2ZoomFactorChangedEventHandler eventHandler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_ZoomFactorChanged(EventRegistrationToken token) = 0 ;
#ifndef _WIN64
	virtual HRESULT __stdcall SetBoundsAndZoomFactor(tagRECT Bounds, double ZoomFactor) = 0 ;
#else /* _WIN64 */
	virtual HRESULT __stdcall SetBoundsAndZoomFactor(const tagRECT &Bounds, double ZoomFactor) = 0 ;
#endif /* _WIN64 */
	virtual HRESULT __stdcall MoveFocus(Winapi::Activex::TOleEnum reason) = 0 ;
	virtual HRESULT __stdcall add_MoveFocusRequested(const _di_ICoreWebView2MoveFocusRequestedEventHandler eventHandler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_MoveFocusRequested(EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall add_GotFocus(const _di_ICoreWebView2FocusChangedEventHandler eventHandler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_GotFocus(EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall add_LostFocus(const _di_ICoreWebView2FocusChangedEventHandler eventHandler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_LostFocus(EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall add_AcceleratorKeyPressed(const _di_ICoreWebView2AcceleratorKeyPressedEventHandler eventHandler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_AcceleratorKeyPressed(EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall Get_ParentWindow(/* out */ wireHWND &topLevelWindow) = 0 ;
	virtual HRESULT __stdcall Set_ParentWindow(wireHWND topLevelWindow) = 0 ;
	virtual HRESULT __stdcall NotifyParentWindowPositionChanged() = 0 ;
	virtual HRESULT __stdcall Close() = 0 ;
	virtual HRESULT __stdcall Get_CoreWebView2(/* out */ _di_ICoreWebView2 &CoreWebView2) = 0 ;
};

__interface  INTERFACE_UUID("{F1828246-8B98-4274-B708-ECDB6BF3843A}") ICoreWebView2ZoomFactorChangedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(const _di_ICoreWebView2Controller sender, const System::_di_IInterface args) = 0 ;
};

__interface  INTERFACE_UUID("{4B21D6DD-3DE7-47B0-8019-7D3ACE6E3631}") ICoreWebView2MoveFocusRequestedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(const _di_ICoreWebView2Controller sender, const _di_ICoreWebView2MoveFocusRequestedEventArgs args) = 0 ;
};

__interface  INTERFACE_UUID("{71922903-B180-49D0-AED2-C9F9D10064B1}") ICoreWebView2MoveFocusRequestedEventArgs  : public System::IInterface 
{
	virtual HRESULT __stdcall Get_reason(/* out */ Winapi::Activex::TOleEnum &value) = 0 ;
	virtual HRESULT __stdcall Get_Handled(/* out */ int &value) = 0 ;
	virtual HRESULT __stdcall Set_Handled(int value) = 0 ;
};

__interface  INTERFACE_UUID("{76E67C71-663F-4C17-B71A-9381CCF3B94B}") ICoreWebView2FocusChangedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(const _di_ICoreWebView2Controller sender, const System::_di_IInterface args) = 0 ;
};

__interface  INTERFACE_UUID("{189B8AAF-0426-4748-B9AD-243F537EB46B}") ICoreWebView2  : public System::IInterface 
{
	virtual HRESULT __stdcall Get_Settings(/* out */ _di_ICoreWebView2Settings &Settings) = 0 ;
	virtual HRESULT __stdcall Get_Source(/* out */ System::WideChar * &uri) = 0 ;
	virtual HRESULT __stdcall Navigate(System::WideChar * uri) = 0 ;
	virtual HRESULT __stdcall NavigateToString(System::WideChar * htmlContent) = 0 ;
	virtual HRESULT __stdcall add_NavigationStarting(const _di_ICoreWebView2NavigationStartingEventHandler eventHandler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_NavigationStarting(EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall add_ContentLoading(const _di_ICoreWebView2ContentLoadingEventHandler eventHandler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_ContentLoading(EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall add_SourceChanged(const _di_ICoreWebView2SourceChangedEventHandler eventHandler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_SourceChanged(EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall add_HistoryChanged(const _di_ICoreWebView2HistoryChangedEventHandler eventHandler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_HistoryChanged(EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall add_NavigationCompleted(const _di_ICoreWebView2NavigationCompletedEventHandler eventHandler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_NavigationCompleted(EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall add_FrameNavigationStarting(const _di_ICoreWebView2NavigationStartingEventHandler eventHandler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_FrameNavigationStarting(EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall add_FrameNavigationCompleted(const _di_ICoreWebView2NavigationCompletedEventHandler eventHandler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_FrameNavigationCompleted(EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall add_ScriptDialogOpening(const _di_ICoreWebView2ScriptDialogOpeningEventHandler eventHandler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_ScriptDialogOpening(EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall add_PermissionRequested(const _di_ICoreWebView2PermissionRequestedEventHandler eventHandler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_PermissionRequested(EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall add_ProcessFailed(const _di_ICoreWebView2ProcessFailedEventHandler eventHandler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_ProcessFailed(EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall AddScriptToExecuteOnDocumentCreated(System::WideChar * javaScript, const _di_ICoreWebView2AddScriptToExecuteOnDocumentCreatedCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall RemoveScriptToExecuteOnDocumentCreated(System::WideChar * id) = 0 ;
	virtual HRESULT __stdcall ExecuteScript(System::WideChar * javaScript, const _di_ICoreWebView2ExecuteScriptCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall CapturePreview(Winapi::Activex::TOleEnum imageFormat, const _di_IStream imageStream, const _di_ICoreWebView2CapturePreviewCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall Reload() = 0 ;
	virtual HRESULT __stdcall PostWebMessageAsJson(System::WideChar * webMessageAsJson) = 0 ;
	virtual HRESULT __stdcall PostWebMessageAsString(System::WideChar * webMessageAsString) = 0 ;
	virtual HRESULT __stdcall add_WebMessageReceived(const _di_ICoreWebView2WebMessageReceivedEventHandler handler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_WebMessageReceived(EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall CallDevToolsProtocolMethod(System::WideChar * methodName, System::WideChar * parametersAsJson, const _di_ICoreWebView2CallDevToolsProtocolMethodCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall Get_BrowserProcessId(/* out */ unsigned &value) = 0 ;
	virtual HRESULT __stdcall Get_CanGoBack(/* out */ int &CanGoBack) = 0 ;
	virtual HRESULT __stdcall Get_CanGoForward(/* out */ int &CanGoForward) = 0 ;
	virtual HRESULT __stdcall GoBack() = 0 ;
	virtual HRESULT __stdcall GoForward() = 0 ;
	virtual HRESULT __stdcall GetDevToolsProtocolEventReceiver(System::WideChar * eventName, /* out */ _di_ICoreWebView2DevToolsProtocolEventReceiver &receiver) = 0 ;
	virtual HRESULT __stdcall Stop() = 0 ;
	virtual HRESULT __stdcall add_NewWindowRequested(const _di_ICoreWebView2NewWindowRequestedEventHandler eventHandler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_NewWindowRequested(EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall add_DocumentTitleChanged(const _di_ICoreWebView2DocumentTitleChangedEventHandler eventHandler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_DocumentTitleChanged(EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall Get_DocumentTitle(/* out */ System::WideChar * &title) = 0 ;
	virtual HRESULT __stdcall AddHostObjectToScript(System::WideChar * name, const System::OleVariant &object_) = 0 ;
	virtual HRESULT __stdcall RemoveHostObjectFromScript(System::WideChar * name) = 0 ;
	virtual HRESULT __stdcall OpenDevToolsWindow() = 0 ;
	virtual HRESULT __stdcall add_ContainsFullScreenElementChanged(const _di_ICoreWebView2ContainsFullScreenElementChangedEventHandler eventHandler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_ContainsFullScreenElementChanged(EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall Get_ContainsFullScreenElement(/* out */ int &ContainsFullScreenElement) = 0 ;
	virtual HRESULT __stdcall add_WebResourceRequested(const _di_ICoreWebView2WebResourceRequestedEventHandler eventHandler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_WebResourceRequested(EventRegistrationToken token) = 0 ;
	virtual HRESULT __stdcall AddWebResourceRequestedFilter(System::WideChar * uri, Winapi::Activex::TOleEnum ResourceContext) = 0 ;
	virtual HRESULT __stdcall RemoveWebResourceRequestedFilter(System::WideChar * uri, Winapi::Activex::TOleEnum ResourceContext) = 0 ;
	virtual HRESULT __stdcall add_WindowCloseRequested(const _di_ICoreWebView2WindowCloseRequestedEventHandler eventHandler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_WindowCloseRequested(EventRegistrationToken token) = 0 ;
};

__interface  INTERFACE_UUID("{203FBA37-6850-4DCC-A25A-58A351AC625D}") ICoreWebView2Settings  : public System::IInterface 
{
	virtual HRESULT __stdcall Get_IsScriptEnabled(/* out */ int &IsScriptEnabled) = 0 ;
	virtual HRESULT __stdcall Set_IsScriptEnabled(int IsScriptEnabled) = 0 ;
	virtual HRESULT __stdcall Get_IsWebMessageEnabled(/* out */ int &IsWebMessageEnabled) = 0 ;
	virtual HRESULT __stdcall Set_IsWebMessageEnabled(int IsWebMessageEnabled) = 0 ;
	virtual HRESULT __stdcall Get_AreDefaultScriptDialogsEnabled(/* out */ int &AreDefaultScriptDialogsEnabled) = 0 ;
	virtual HRESULT __stdcall Set_AreDefaultScriptDialogsEnabled(int AreDefaultScriptDialogsEnabled) = 0 ;
	virtual HRESULT __stdcall Get_IsStatusBarEnabled(/* out */ int &IsStatusBarEnabled) = 0 ;
	virtual HRESULT __stdcall Set_IsStatusBarEnabled(int IsStatusBarEnabled) = 0 ;
	virtual HRESULT __stdcall Get_AreDevToolsEnabled(/* out */ int &AreDevToolsEnabled) = 0 ;
	virtual HRESULT __stdcall Set_AreDevToolsEnabled(int AreDevToolsEnabled) = 0 ;
	virtual HRESULT __stdcall Get_AreDefaultContextMenusEnabled(/* out */ int &enabled) = 0 ;
	virtual HRESULT __stdcall Set_AreDefaultContextMenusEnabled(int enabled) = 0 ;
	virtual HRESULT __stdcall Get_AreRemoteObjectsAllowed(/* out */ int &allowed) = 0 ;
	virtual HRESULT __stdcall Set_AreRemoteObjectsAllowed(int allowed) = 0 ;
	virtual HRESULT __stdcall Get_IsZoomControlEnabled(/* out */ int &enabled) = 0 ;
	virtual HRESULT __stdcall Set_IsZoomControlEnabled(int enabled) = 0 ;
	virtual HRESULT __stdcall Get_IsBuiltInErrorPageEnabled(/* out */ int &enabled) = 0 ;
	virtual HRESULT __stdcall Set_IsBuiltInErrorPageEnabled(int enabled) = 0 ;
};

__interface  INTERFACE_UUID("{073337A4-64D2-4C7E-AC9F-987F0F613497}") ICoreWebView2NavigationStartingEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(const _di_ICoreWebView2 sender, const _di_ICoreWebView2NavigationStartingEventArgs args) = 0 ;
};

__interface  INTERFACE_UUID("{EE1938CE-D385-4CB0-854B-F498F78C3D88}") ICoreWebView2NavigationStartingEventArgs  : public System::IInterface 
{
	virtual HRESULT __stdcall Get_uri(/* out */ System::WideChar * &uri) = 0 ;
	virtual HRESULT __stdcall Get_IsUserInitiated(/* out */ int &IsUserInitiated) = 0 ;
	virtual HRESULT __stdcall Get_IsRedirected(/* out */ int &IsRedirected) = 0 ;
	virtual HRESULT __stdcall Get_RequestHeaders(/* out */ _di_ICoreWebView2HttpRequestHeaders &RequestHeaders) = 0 ;
	virtual HRESULT __stdcall Get_Cancel(/* out */ int &Cancel) = 0 ;
	virtual HRESULT __stdcall Set_Cancel(int Cancel) = 0 ;
	virtual HRESULT __stdcall Get_NavigationId(/* out */ unsigned __int64 &navigation_id) = 0 ;
};

__interface  INTERFACE_UUID("{2C1F04DF-C90E-49E4-BD25-4A659300337B}") ICoreWebView2HttpRequestHeaders  : public System::IInterface 
{
	virtual HRESULT __stdcall GetHeader(System::WideChar * name, /* out */ System::WideChar * &value) = 0 ;
	virtual HRESULT __stdcall GetHeaders(System::WideChar * name, /* out */ _di_ICoreWebView2HttpHeadersCollectionIterator &iterator) = 0 ;
	virtual HRESULT __stdcall Contains(System::WideChar * name, /* out */ int &Contains) = 0 ;
	virtual HRESULT __stdcall SetHeader(System::WideChar * name, System::WideChar * value) = 0 ;
	virtual HRESULT __stdcall RemoveHeader(System::WideChar * name) = 0 ;
	virtual HRESULT __stdcall GetIterator(/* out */ _di_ICoreWebView2HttpHeadersCollectionIterator &iterator) = 0 ;
};

__interface  INTERFACE_UUID("{4212F3A7-0FBC-4C9C-8118-17ED6370C1B3}") ICoreWebView2HttpHeadersCollectionIterator  : public System::IInterface 
{
	virtual HRESULT __stdcall GetCurrentHeader(/* out */ System::WideChar * &name, /* out */ System::WideChar * &value) = 0 ;
	virtual HRESULT __stdcall Get_HasCurrentHeader(/* out */ int &hasCurrent) = 0 ;
	virtual HRESULT __stdcall MoveNext(/* out */ int &hasNext) = 0 ;
};

__interface  INTERFACE_UUID("{7AF5CC82-AE19-4964-BD71-B9BC5F03E85D}") ICoreWebView2ContentLoadingEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(const _di_ICoreWebView2 webview, const _di_ICoreWebView2ContentLoadingEventArgs args) = 0 ;
};

__interface  INTERFACE_UUID("{2A800835-2179-45D6-A745-6657E9A546B9}") ICoreWebView2ContentLoadingEventArgs  : public System::IInterface 
{
	virtual HRESULT __stdcall Get_IsErrorPage(/* out */ int &IsErrorPage) = 0 ;
	virtual HRESULT __stdcall Get_NavigationId(/* out */ unsigned __int64 &navigation_id) = 0 ;
};

__interface  INTERFACE_UUID("{8FEDD1A7-3A33-416F-AF81-881EEB001433}") ICoreWebView2SourceChangedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(const _di_ICoreWebView2 webview, const _di_ICoreWebView2SourceChangedEventArgs args) = 0 ;
};

__interface  INTERFACE_UUID("{BD9A4BFB-BE19-40BD-968B-EBCF0D727EF3}") ICoreWebView2SourceChangedEventArgs  : public System::IInterface 
{
	virtual HRESULT __stdcall Get_IsNewDocument(/* out */ int &IsNewDocument) = 0 ;
};

__interface  INTERFACE_UUID("{54C9B7D7-D9E9-4158-861F-F97E1C3C6631}") ICoreWebView2HistoryChangedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(const _di_ICoreWebView2 webview, const System::_di_IInterface args) = 0 ;
};

__interface  INTERFACE_UUID("{9F921239-20C4-455F-9E3F-6047A50E248B}") ICoreWebView2NavigationCompletedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(const _di_ICoreWebView2 sender, const _di_ICoreWebView2NavigationCompletedEventArgs args) = 0 ;
};

__interface  INTERFACE_UUID("{361F5621-EA7F-4C55-95EC-3C5E6992EA4A}") ICoreWebView2NavigationCompletedEventArgs  : public System::IInterface 
{
	virtual HRESULT __stdcall Get_IsSuccess(/* out */ int &IsSuccess) = 0 ;
	virtual HRESULT __stdcall Get_WebErrorStatus(/* out */ Winapi::Activex::TOleEnum &COREWEBVIEW2_WEB_ERROR_STATUS) = 0 ;
	virtual HRESULT __stdcall Get_NavigationId(/* out */ unsigned __int64 &navigation_id) = 0 ;
};

__interface  INTERFACE_UUID("{72D93789-2727-4A9B-A4FC-1B2609CBCBE3}") ICoreWebView2ScriptDialogOpeningEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(const _di_ICoreWebView2 sender, const _di_ICoreWebView2ScriptDialogOpeningEventArgs args) = 0 ;
};

__interface  INTERFACE_UUID("{B8F6356E-24DC-4D74-90FE-AD071E11CB91}") ICoreWebView2ScriptDialogOpeningEventArgs  : public System::IInterface 
{
	virtual HRESULT __stdcall Get_uri(/* out */ System::WideChar * &uri) = 0 ;
	virtual HRESULT __stdcall Get_Kind(/* out */ Winapi::Activex::TOleEnum &Kind) = 0 ;
	virtual HRESULT __stdcall Get_Message(/* out */ System::WideChar * &Message) = 0 ;
	virtual HRESULT __stdcall Accept() = 0 ;
	virtual HRESULT __stdcall Get_DefaultText(/* out */ System::WideChar * &DefaultText) = 0 ;
	virtual HRESULT __stdcall Get_ResultText(/* out */ System::WideChar * &ResultText) = 0 ;
	virtual HRESULT __stdcall Set_ResultText(System::WideChar * ResultText) = 0 ;
	virtual HRESULT __stdcall GetDeferral(/* out */ _di_ICoreWebView2Deferral &deferral) = 0 ;
};

__interface  INTERFACE_UUID("{A7ED8BF0-3EC9-4E39-8427-3D6F157BD285}") ICoreWebView2Deferral  : public System::IInterface 
{
	virtual HRESULT __stdcall Complete() = 0 ;
};

__interface  INTERFACE_UUID("{543B4ADE-9B0B-4748-9AB7-D76481B223AA}") ICoreWebView2PermissionRequestedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(const _di_ICoreWebView2 sender, const _di_ICoreWebView2PermissionRequestedEventArgs args) = 0 ;
};

__interface  INTERFACE_UUID("{774B5EA1-3FAD-435C-B1FC-A77D1ACD5EAF}") ICoreWebView2PermissionRequestedEventArgs  : public System::IInterface 
{
	virtual HRESULT __stdcall Get_uri(/* out */ System::WideChar * &uri) = 0 ;
	virtual HRESULT __stdcall Get_PermissionKind(/* out */ Winapi::Activex::TOleEnum &value) = 0 ;
	virtual HRESULT __stdcall Get_IsUserInitiated(/* out */ int &IsUserInitiated) = 0 ;
	virtual HRESULT __stdcall Get_State(/* out */ Winapi::Activex::TOleEnum &value) = 0 ;
	virtual HRESULT __stdcall Set_State(Winapi::Activex::TOleEnum value) = 0 ;
	virtual HRESULT __stdcall GetDeferral(/* out */ _di_ICoreWebView2Deferral &deferral) = 0 ;
};

__interface  INTERFACE_UUID("{7D2183F9-CCA8-40F2-91A9-EAFAD32C8A9B}") ICoreWebView2ProcessFailedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(const _di_ICoreWebView2 sender, const _di_ICoreWebView2ProcessFailedEventArgs args) = 0 ;
};

__interface  INTERFACE_UUID("{EA45D1F4-75C0-471F-A6E9-803FBFF8FEF2}") ICoreWebView2ProcessFailedEventArgs  : public System::IInterface 
{
	virtual HRESULT __stdcall Get_ProcessFailedKind(/* out */ Winapi::Activex::TOleEnum &ProcessFailedKind) = 0 ;
};

__interface  INTERFACE_UUID("{7082ABED-0591-428F-A722-60C2F814546B}") ICoreWebView2AddScriptToExecuteOnDocumentCreatedCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(HRESULT errorCode, System::WideChar * id) = 0 ;
};

__interface  INTERFACE_UUID("{3B717C93-3ED5-4450-9B13-7F56AA367AC7}") ICoreWebView2ExecuteScriptCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(HRESULT errorCode, System::WideChar * resultObjectAsJson) = 0 ;
};

__interface  INTERFACE_UUID("{DCED64F8-D9C7-4A3C-B9FD-FBBCA0B43496}") ICoreWebView2CapturePreviewCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(HRESULT result) = 0 ;
};

__interface  INTERFACE_UUID("{199328C8-9964-4F5F-84E6-E875B1B763D6}") ICoreWebView2WebMessageReceivedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(const _di_ICoreWebView2 sender, const _di_ICoreWebView2WebMessageReceivedEventArgs args) = 0 ;
};

__interface  INTERFACE_UUID("{B263B5AE-9C54-4B75-B632-40AE1A0B6912}") ICoreWebView2WebMessageReceivedEventArgs  : public System::IInterface 
{
	virtual HRESULT __stdcall Get_Source(/* out */ System::WideChar * &Source) = 0 ;
	virtual HRESULT __stdcall Get_webMessageAsJson(/* out */ System::WideChar * &webMessageAsJson) = 0 ;
	virtual HRESULT __stdcall TryGetWebMessageAsString(/* out */ System::WideChar * &webMessageAsString) = 0 ;
};

__interface  INTERFACE_UUID("{C20CF895-BA7C-493B-AB2E-8A6E3A3602A2}") ICoreWebView2CallDevToolsProtocolMethodCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(HRESULT errorCode, System::WideChar * returnObjectAsJson) = 0 ;
};

__interface  INTERFACE_UUID("{FE59C48C-540C-4A3C-8898-8E1602E0055D}") ICoreWebView2DevToolsProtocolEventReceiver  : public System::IInterface 
{
	virtual HRESULT __stdcall add_DevToolsProtocolEventReceived(const _di_ICoreWebView2DevToolsProtocolEventReceivedEventHandler handler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_DevToolsProtocolEventReceived(EventRegistrationToken token) = 0 ;
};

__interface  INTERFACE_UUID("{8E1DED79-A40B-4271-8BE6-57640C167F4A}") ICoreWebView2DevToolsProtocolEventReceivedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(const _di_ICoreWebView2 sender, const _di_ICoreWebView2DevToolsProtocolEventReceivedEventArgs args) = 0 ;
};

__interface  INTERFACE_UUID("{F661B1C2-5FF5-4700-B723-C439034539B4}") ICoreWebView2DevToolsProtocolEventReceivedEventArgs  : public System::IInterface 
{
	virtual HRESULT __stdcall Get_ParameterObjectAsJson(/* out */ System::WideChar * &ParameterObjectAsJson) = 0 ;
};

__interface  INTERFACE_UUID("{ACAA30EF-A40C-47BD-9CB9-D9C2AADC9FCB}") ICoreWebView2NewWindowRequestedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(const _di_ICoreWebView2 sender, const _di_ICoreWebView2NewWindowRequestedEventArgs args) = 0 ;
};

__interface  INTERFACE_UUID("{9EDC7F5F-C6EA-4F3C-827B-A8880794C0A9}") ICoreWebView2NewWindowRequestedEventArgs  : public System::IInterface 
{
	virtual HRESULT __stdcall Get_uri(/* out */ System::WideChar * &uri) = 0 ;
	virtual HRESULT __stdcall Set_NewWindow(const _di_ICoreWebView2 NewWindow) = 0 ;
	virtual HRESULT __stdcall Get_NewWindow(/* out */ _di_ICoreWebView2 &NewWindow) = 0 ;
	virtual HRESULT __stdcall Set_Handled(int Handled) = 0 ;
	virtual HRESULT __stdcall Get_Handled(/* out */ int &Handled) = 0 ;
	virtual HRESULT __stdcall Get_IsUserInitiated(/* out */ int &IsUserInitiated) = 0 ;
	virtual HRESULT __stdcall GetDeferral(/* out */ _di_ICoreWebView2Deferral &deferral) = 0 ;
};

__interface  INTERFACE_UUID("{6423D6B1-5A57-46C5-BA46-DBB3735EE7C9}") ICoreWebView2DocumentTitleChangedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(const _di_ICoreWebView2 sender, const System::_di_IInterface args) = 0 ;
};

__interface  INTERFACE_UUID("{120888E3-4CAD-4EC2-B627-B2016D05612D}") ICoreWebView2ContainsFullScreenElementChangedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(const _di_ICoreWebView2 sender, const System::_di_IInterface args) = 0 ;
};

__interface  INTERFACE_UUID("{F6DC79F2-E1FA-4534-8968-4AFF10BBAA32}") ICoreWebView2WebResourceRequestedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(const _di_ICoreWebView2 sender, const _di_ICoreWebView2WebResourceRequestedEventArgs args) = 0 ;
};

__interface  INTERFACE_UUID("{2D7B3282-83B1-41CA-8BBF-FF18F6BFE320}") ICoreWebView2WebResourceRequestedEventArgs  : public System::IInterface 
{
	virtual HRESULT __stdcall Get_Request(/* out */ _di_ICoreWebView2WebResourceRequest &Request) = 0 ;
	virtual HRESULT __stdcall Get_Response(/* out */ _di_ICoreWebView2WebResourceResponse &Response) = 0 ;
	virtual HRESULT __stdcall Set_Response(const _di_ICoreWebView2WebResourceResponse Response) = 0 ;
	virtual HRESULT __stdcall GetDeferral(/* out */ _di_ICoreWebView2Deferral &deferral) = 0 ;
	virtual HRESULT __stdcall Get_ResourceContext(/* out */ Winapi::Activex::TOleEnum &context) = 0 ;
};

__interface  INTERFACE_UUID("{11B02254-B827-49F6-8974-30F6E6C55AF6}") ICoreWebView2WebResourceRequest  : public System::IInterface 
{
	virtual HRESULT __stdcall Get_uri(/* out */ System::WideChar * &uri) = 0 ;
	virtual HRESULT __stdcall Set_uri(System::WideChar * uri) = 0 ;
	virtual HRESULT __stdcall Get_Method(/* out */ System::WideChar * &Method) = 0 ;
	virtual HRESULT __stdcall Set_Method(System::WideChar * Method) = 0 ;
	virtual HRESULT __stdcall Get_Content(/* out */ _di_IStream &Content) = 0 ;
	virtual HRESULT __stdcall Set_Content(const _di_IStream Content) = 0 ;
	virtual HRESULT __stdcall Get_Headers(/* out */ _di_ICoreWebView2HttpRequestHeaders &Headers) = 0 ;
};

__interface  INTERFACE_UUID("{5953D1FC-B08F-46DD-AFD3-66B172419CD0}") ICoreWebView2WebResourceResponse  : public System::IInterface 
{
	virtual HRESULT __stdcall Get_Content(/* out */ _di_IStream &Content) = 0 ;
	virtual HRESULT __stdcall Set_Content(const _di_IStream Content) = 0 ;
	virtual HRESULT __stdcall Get_Headers(/* out */ _di_ICoreWebView2HttpResponseHeaders &Headers) = 0 ;
	virtual HRESULT __stdcall Get_StatusCode(/* out */ int &StatusCode) = 0 ;
	virtual HRESULT __stdcall Set_StatusCode(int StatusCode) = 0 ;
	virtual HRESULT __stdcall Get_ReasonPhrase(/* out */ System::WideChar * &ReasonPhrase) = 0 ;
	virtual HRESULT __stdcall Set_ReasonPhrase(System::WideChar * ReasonPhrase) = 0 ;
};

__interface  INTERFACE_UUID("{B5F6D4D5-1BFF-4869-85B8-158153017B04}") ICoreWebView2HttpResponseHeaders  : public System::IInterface 
{
	virtual HRESULT __stdcall AppendHeader(System::WideChar * name, System::WideChar * value) = 0 ;
	virtual HRESULT __stdcall Contains(System::WideChar * name, /* out */ int &Contains) = 0 ;
	virtual HRESULT __stdcall GetHeader(System::WideChar * name, /* out */ System::WideChar * &value) = 0 ;
	virtual HRESULT __stdcall GetHeaders(System::WideChar * name, /* out */ _di_ICoreWebView2HttpHeadersCollectionIterator &iterator) = 0 ;
	virtual HRESULT __stdcall GetIterator(/* out */ _di_ICoreWebView2HttpHeadersCollectionIterator &iterator) = 0 ;
};

__interface  INTERFACE_UUID("{63C89928-AD32-4421-A0E4-EC99B34AA97E}") ICoreWebView2WindowCloseRequestedEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(const _di_ICoreWebView2 sender, const System::_di_IInterface args) = 0 ;
};

__interface  INTERFACE_UUID("{86EF6808-3C3F-4C6F-975E-8CE0B98F70BA}") ICoreWebView2CreateCoreWebView2ControllerCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(HRESULT result, const _di_ICoreWebView2Controller createdController) = 0 ;
};

__interface  INTERFACE_UUID("{8B4F98CE-DB0D-4E71-85FD-C4C4EF1F2630}") ICoreWebView2CreateCoreWebView2EnvironmentCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(HRESULT result, const _di_ICoreWebView2Environment created_environment) = 0 ;
};

__interface  INTERFACE_UUID("{DA66D884-6DA8-410E-9630-8C48F8B3A40E}") ICoreWebView2Environment  : public System::IInterface 
{
	virtual HRESULT __stdcall CreateCoreWebView2Controller(HWND ParentWindow, const _di_ICoreWebView2CreateCoreWebView2ControllerCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall CreateWebResourceResponse(const _di_IStream Content, int StatusCode, System::WideChar * ReasonPhrase, System::WideChar * Headers, /* out */ _di_ICoreWebView2WebResourceResponse &Response) = 0 ;
	virtual HRESULT __stdcall Get_BrowserVersionString(/* out */ System::WideChar * &versionInfo) = 0 ;
	virtual HRESULT __stdcall add_NewBrowserVersionAvailable(const _di_ICoreWebView2NewBrowserVersionAvailableEventHandler eventHandler, /* out */ EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_NewBrowserVersionAvailable(EventRegistrationToken token) = 0 ;
};

__interface  INTERFACE_UUID("{E82E8242-EE39-4A57-A065-E13256D60342}") ICoreWebView2NewBrowserVersionAvailableEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(const _di_ICoreWebView2Environment webviewEnvironment, const System::_di_IInterface args) = 0 ;
};

__interface  INTERFACE_UUID("{97E9FBD9-646A-4B75-8682-149B71DACE59}") ICoreWebView2EnvironmentOptions  : public System::IInterface 
{
	virtual HRESULT __stdcall Get_AdditionalBrowserArguments(/* out */ System::WideChar * &value) = 0 ;
	virtual HRESULT __stdcall Set_AdditionalBrowserArguments(System::WideChar * value) = 0 ;
	virtual HRESULT __stdcall Get_Language(/* out */ System::WideChar * &value) = 0 ;
	virtual HRESULT __stdcall Set_Language(System::WideChar * value) = 0 ;
	virtual HRESULT __stdcall Get_TargetCompatibleBrowserVersion(/* out */ System::WideChar * &value) = 0 ;
	virtual HRESULT __stdcall Set_TargetCompatibleBrowserVersion(System::WideChar * value) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 WebView2MajorVersion = System::Int8(0x1);
static const System::Int8 WebView2MinorVersion = System::Int8(0x0);
extern DELPHI_PACKAGE GUID LIBID_WebView2;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2AcceleratorKeyPressedEventArgs;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2AcceleratorKeyPressedEventHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2Controller;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2ZoomFactorChangedEventHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2MoveFocusRequestedEventHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2MoveFocusRequestedEventArgs;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2FocusChangedEventHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2Settings;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2NavigationStartingEventHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2NavigationStartingEventArgs;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2HttpRequestHeaders;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2HttpHeadersCollectionIterator;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2ContentLoadingEventHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2ContentLoadingEventArgs;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2SourceChangedEventHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2SourceChangedEventArgs;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2HistoryChangedEventHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2NavigationCompletedEventHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2NavigationCompletedEventArgs;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2ScriptDialogOpeningEventHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2ScriptDialogOpeningEventArgs;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2Deferral;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2PermissionRequestedEventHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2PermissionRequestedEventArgs;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2ProcessFailedEventHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2ProcessFailedEventArgs;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2AddScriptToExecuteOnDocumentCreatedCompletedHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2ExecuteScriptCompletedHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2CapturePreviewCompletedHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2WebMessageReceivedEventHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2WebMessageReceivedEventArgs;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2CallDevToolsProtocolMethodCompletedHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2DevToolsProtocolEventReceiver;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2DevToolsProtocolEventReceivedEventHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2DevToolsProtocolEventReceivedEventArgs;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2NewWindowRequestedEventHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2NewWindowRequestedEventArgs;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2DocumentTitleChangedEventHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2ContainsFullScreenElementChangedEventHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2WebResourceRequestedEventHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2WebResourceRequestedEventArgs;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2WebResourceRequest;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2WebResourceResponse;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2HttpResponseHeaders;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2WindowCloseRequestedEventHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2CreateCoreWebView2ControllerCompletedHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2CreateCoreWebView2EnvironmentCompletedHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2Environment;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2NewBrowserVersionAvailableEventHandler;
extern DELPHI_PACKAGE GUID IID_ICoreWebView2EnvironmentOptions;
static const System::Int8 COREWEBVIEW2_KEY_EVENT_KIND_KEY_DOWN = System::Int8(0x0);
static const System::Int8 COREWEBVIEW2_KEY_EVENT_KIND_KEY_UP = System::Int8(0x1);
static const System::Int8 COREWEBVIEW2_KEY_EVENT_KIND_SYSTEM_KEY_DOWN = System::Int8(0x2);
static const System::Int8 COREWEBVIEW2_KEY_EVENT_KIND_SYSTEM_KEY_UP = System::Int8(0x3);
static const System::Int8 COREWEBVIEW2_MOVE_FOCUS_REASON_PROGRAMMATIC = System::Int8(0x0);
static const System::Int8 COREWEBVIEW2_MOVE_FOCUS_REASON_NEXT = System::Int8(0x1);
static const System::Int8 COREWEBVIEW2_MOVE_FOCUS_REASON_PREVIOUS = System::Int8(0x2);
static const System::Int8 COREWEBVIEW2_WEB_ERROR_STATUS_UNKNOWN = System::Int8(0x0);
static const System::Int8 COREWEBVIEW2_WEB_ERROR_STATUS_CERTIFICATE_COMMON_NAME_IS_INCORRECT = System::Int8(0x1);
static const System::Int8 COREWEBVIEW2_WEB_ERROR_STATUS_CERTIFICATE_EXPIRED = System::Int8(0x2);
static const System::Int8 COREWEBVIEW2_WEB_ERROR_STATUS_CLIENT_CERTIFICATE_CONTAINS_ERRORS = System::Int8(0x3);
static const System::Int8 COREWEBVIEW2_WEB_ERROR_STATUS_CERTIFICATE_REVOKED = System::Int8(0x4);
static const System::Int8 COREWEBVIEW2_WEB_ERROR_STATUS_CERTIFICATE_IS_INVALID = System::Int8(0x5);
static const System::Int8 COREWEBVIEW2_WEB_ERROR_STATUS_SERVER_UNREACHABLE = System::Int8(0x6);
static const System::Int8 COREWEBVIEW2_WEB_ERROR_STATUS_TIMEOUT = System::Int8(0x7);
static const System::Int8 COREWEBVIEW2_WEB_ERROR_STATUS_ERROR_HTTP_INVALID_SERVER_RESPONSE = System::Int8(0x8);
static const System::Int8 COREWEBVIEW2_WEB_ERROR_STATUS_CONNECTION_ABORTED = System::Int8(0x9);
static const System::Int8 COREWEBVIEW2_WEB_ERROR_STATUS_CONNECTION_RESET = System::Int8(0xa);
static const System::Int8 COREWEBVIEW2_WEB_ERROR_STATUS_DISCONNECTED = System::Int8(0xb);
static const System::Int8 COREWEBVIEW2_WEB_ERROR_STATUS_CANNOT_CONNECT = System::Int8(0xc);
static const System::Int8 COREWEBVIEW2_WEB_ERROR_STATUS_HOST_NAME_NOT_RESOLVED = System::Int8(0xd);
static const System::Int8 COREWEBVIEW2_WEB_ERROR_STATUS_OPERATION_CANCELED = System::Int8(0xe);
static const System::Int8 COREWEBVIEW2_WEB_ERROR_STATUS_REDIRECT_FAILED = System::Int8(0xf);
static const System::Int8 COREWEBVIEW2_WEB_ERROR_STATUS_UNEXPECTED_ERROR = System::Int8(0x10);
static const System::Int8 COREWEBVIEW2_SCRIPT_DIALOG_KIND_ALERT = System::Int8(0x0);
static const System::Int8 COREWEBVIEW2_SCRIPT_DIALOG_KIND_CONFIRM = System::Int8(0x1);
static const System::Int8 COREWEBVIEW2_SCRIPT_DIALOG_KIND_PROMPT = System::Int8(0x2);
static const System::Int8 COREWEBVIEW2_SCRIPT_DIALOG_KIND_BEFOREUNLOAD = System::Int8(0x3);
static const System::Int8 COREWEBVIEW2_PERMISSION_KIND_UNKNOWN_PERMISSION = System::Int8(0x0);
static const System::Int8 COREWEBVIEW2_PERMISSION_KIND_MICROPHONE = System::Int8(0x1);
static const System::Int8 COREWEBVIEW2_PERMISSION_KIND_CAMERA = System::Int8(0x2);
static const System::Int8 COREWEBVIEW2_PERMISSION_KIND_GEOLOCATION = System::Int8(0x3);
static const System::Int8 COREWEBVIEW2_PERMISSION_KIND_NOTIFICATIONS = System::Int8(0x4);
static const System::Int8 COREWEBVIEW2_PERMISSION_KIND_OTHER_SENSORS = System::Int8(0x5);
static const System::Int8 COREWEBVIEW2_PERMISSION_KIND_CLIPBOARD_READ = System::Int8(0x6);
static const System::Int8 COREWEBVIEW2_PERMISSION_STATE_DEFAULT = System::Int8(0x0);
static const System::Int8 COREWEBVIEW2_PERMISSION_STATE_ALLOW = System::Int8(0x1);
static const System::Int8 COREWEBVIEW2_PERMISSION_STATE_DENY = System::Int8(0x2);
static const System::Int8 COREWEBVIEW2_PROCESS_FAILED_KIND_BROWSER_PROCESS_EXITED = System::Int8(0x0);
static const System::Int8 COREWEBVIEW2_PROCESS_FAILED_KIND_RENDER_PROCESS_EXITED = System::Int8(0x1);
static const System::Int8 COREWEBVIEW2_PROCESS_FAILED_KIND_RENDER_PROCESS_UNRESPONSIVE = System::Int8(0x2);
static const System::Int8 COREWEBVIEW2_CAPTURE_PREVIEW_IMAGE_FORMAT_PNG = System::Int8(0x0);
static const System::Int8 COREWEBVIEW2_CAPTURE_PREVIEW_IMAGE_FORMAT_JPEG = System::Int8(0x1);
static const System::Int8 COREWEBVIEW2_WEB_RESOURCE_CONTEXT_ALL = System::Int8(0x0);
static const System::Int8 COREWEBVIEW2_WEB_RESOURCE_CONTEXT_DOCUMENT = System::Int8(0x1);
static const System::Int8 COREWEBVIEW2_WEB_RESOURCE_CONTEXT_STYLESHEET = System::Int8(0x2);
static const System::Int8 COREWEBVIEW2_WEB_RESOURCE_CONTEXT_IMAGE = System::Int8(0x3);
static const System::Int8 COREWEBVIEW2_WEB_RESOURCE_CONTEXT_MEDIA = System::Int8(0x4);
static const System::Int8 COREWEBVIEW2_WEB_RESOURCE_CONTEXT_FONT = System::Int8(0x5);
static const System::Int8 COREWEBVIEW2_WEB_RESOURCE_CONTEXT_SCRIPT = System::Int8(0x6);
static const System::Int8 COREWEBVIEW2_WEB_RESOURCE_CONTEXT_XML_HTTP_REQUEST = System::Int8(0x7);
static const System::Int8 COREWEBVIEW2_WEB_RESOURCE_CONTEXT_FETCH = System::Int8(0x8);
static const System::Int8 COREWEBVIEW2_WEB_RESOURCE_CONTEXT_TEXT_TRACK = System::Int8(0x9);
static const System::Int8 COREWEBVIEW2_WEB_RESOURCE_CONTEXT_EVENT_SOURCE = System::Int8(0xa);
static const System::Int8 COREWEBVIEW2_WEB_RESOURCE_CONTEXT_WEBSOCKET = System::Int8(0xb);
static const System::Int8 COREWEBVIEW2_WEB_RESOURCE_CONTEXT_MANIFEST = System::Int8(0xc);
static const System::Int8 COREWEBVIEW2_WEB_RESOURCE_CONTEXT_SIGNED_EXCHANGE = System::Int8(0xd);
static const System::Int8 COREWEBVIEW2_WEB_RESOURCE_CONTEXT_PING = System::Int8(0xe);
static const System::Int8 COREWEBVIEW2_WEB_RESOURCE_CONTEXT_CSP_VIOLATION_REPORT = System::Int8(0xf);
static const System::Int8 COREWEBVIEW2_WEB_RESOURCE_CONTEXT_OTHER = System::Int8(0x10);
}	/* namespace Webview2 */
}	/* namespace Winapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI_WEBVIEW2)
using namespace Winapi::Webview2;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI)
using namespace Winapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Winapi_Webview2HPP
