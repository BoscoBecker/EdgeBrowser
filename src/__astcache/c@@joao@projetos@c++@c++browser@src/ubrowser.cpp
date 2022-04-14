//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <IdURI.hpp>
#include <System.StrUtils.hpp>
#include "UBrowser.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
THintWindow *HintWnd;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormShow(TObject *Sender)
{
	FAllowFullScreen = true;
	if (SearchPage->Text =="") {
		ChangeLabeLProtocol("https://github.com/BoscoBecker", true);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::imgThemeClick(TObject *Sender)
{
  ChangeTheme(SearchPage->Text);
}
//---------------------------------------------------------------------------
static PCWSTR NameOfPermissionType(COREWEBVIEW2_PERMISSION_KIND type)
{
	switch (type)
	{
	case COREWEBVIEW2_PERMISSION_KIND_MICROPHONE:
		return L"Microphone";
	case COREWEBVIEW2_PERMISSION_KIND_CAMERA:
		return L"Camera";
	case COREWEBVIEW2_PERMISSION_KIND_GEOLOCATION:
		return L"Geolocation";
	case COREWEBVIEW2_PERMISSION_KIND_NOTIFICATIONS:
		return L"Notifications";
	case COREWEBVIEW2_PERMISSION_KIND_OTHER_SENSORS:
		return L"Generic Sensors";
	case COREWEBVIEW2_PERMISSION_KIND_CLIPBOARD_READ:
		return L"Clipboard Read";
	default:
		return L"Unknown resources";
	}
}

//---------------------------------------------------------------------------
bool ShouldBlockURI(String Uri)
{
#ifdef __clang__
	std::unique_ptr<TIdURI> URI(new TIdURI(Uri));
#else
	std::auto_ptr<TIdURI> URI(new TIdURI(Uri));
#endif
	String Host = URI->Host.LowerCase();
	if (EndsStr(L"yahoo.com", Host) || EndsStr(L"yahoo.co.uk", Host))
		return true;
	return false;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ChangeTheme(System::UnicodeString URI)
{
	switch (this->imgTheme->Tag) {
	   case
		0:
		{
			this->imgTheme->Picture->LoadFromFile(ExtractFilePath(Application->ExeName) + L"blackmoon.png");
			this->imgTheme->Tag = 1;
			TStyleManager::TrySetStyle("Windows11 Modern Light");
			break;
		}

	   case
	   1:{
			this->imgTheme->Picture->LoadFromFile(ExtractFilePath (Application->ExeName) + L"whitemoon.png");
			this->imgTheme->Tag = 0;
			TStyleManager::TrySetStyle("Windows11 Modern Dark");
            break;
		  }

	default:
		;
	}

	ChangeLabeLProtocol(URI,true);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ChangeLabeLProtocol(System::UnicodeString URI, bool Send  )
{
	String URL = URI;

	// Ensure we have the protocol prefix
	if (!StartsText(L"http", URL))
		URL = L"https://" + URL;

	if (StartsText(L"http://", URL)){
		this->imgProtocol->Picture->LoadFromFile(ExtractFilePath(Application->ExeName) +L"unsafe.png" );
		InfoProtocol->Caption = "Not Safe";
	} else
	if (StartsText(L"https://", URL))
	{
		this->imgProtocol->Picture->LoadFromFile(ExtractFilePath(Application->ExeName) +L"safe.png" );
		InfoProtocol->Caption = "Safe";
	}
	if (Send) {
		EdgeBrowser->Navigate(URL);
	}
	SearchPage->Text = URL;
}

void __fastcall TForm2::imgBackClick(TObject *Sender)
{
	EdgeBrowser->GoBack();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ImgForwardClick(TObject *Sender)
{
	EdgeBrowser->GoForward();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::imgReloadClick(TObject *Sender)
{
	EdgeBrowser->Refresh();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::imgStopClick(TObject *Sender)
{
    EdgeBrowser->Stop();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::imgGoClick(TObject *Sender)
{
	ChangeLabeLProtocol(SearchPage->Text,true);
}
//---------------------------------------------------------------------------


void __fastcall TForm2::SearchPageKeyPress(TObject *Sender, System::WideChar &Key)
{
	if (Key == 13)
	{
		Key = 0;
		ChangeLabeLProtocol(SearchPage->Text,true);
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm2::EdgeBrowserNavigationStarting(TCustomEdgeBrowser *Sender,
          TNavigationStartingEventArgs *Args)
{
	WideChar *Uri;
	if (SUCCEEDED(Args->ArgsInterface->Get_uri(Uri)) && ShouldBlockURI(Uri))
	{
        Args->ArgsInterface->Set_Cancel(true);
        BOOL UserInitiated;
        if (SUCCEEDED(Args->ArgsInterface->Get_IsUserInitiated(UserInitiated)) && UserInitiated)
            Sender->NavigateToString(
                L"<h1>Domain Blocked</h1>"
				L"<p>You've attempted to navigate to a domain in the blocked "
                L"sites list. Press back to return to the previous page.</p>");
        else
			Sender->NavigateToString(
				L"<h1>Domain Blocked</h1>"
                L"<p>That domain is in the blocked sites list. "
                L"Press back to return to the previous page.</p>");
    }
    else
        Args->ArgsInterface->Set_Cancel(false);
    if (String(Uri) == L"about:blank")
		SearchPage->Text = L"";
	 else
		if (SearchPage->Text != "") {
			SearchPage->Text = Uri;
		}

	CoTaskMemFree(Uri);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::zoomInClick(TObject *Sender)
{
	EdgeBrowser->ZoomFactor = EdgeBrowser->ZoomFactor - 0.5;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::zoomOutClick(TObject *Sender)
{
	EdgeBrowser->ZoomFactor = EdgeBrowser->ZoomFactor + 0.5;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::imgScreenClick(TObject *Sender)
{
	if (dlgSaveScreenshot->Execute())
		EdgeBrowser->CapturePreview(dlgSaveScreenshot->FileName);
}
//---------------------------------------------------------------------------


void __fastcall TForm2::EdgeBrowserContainsFullScreenElementChanged(TCustomEdgeBrowser *Sender,
          bool ContainsFullScreenElement)
{
	if (FAllowFullScreen && ContainsFullScreenElement)
	{
		if (WindowState != wsMaximized) {
			BorderStyle = bsNone;
			WindowState = wsMaximized;
			PnlMain->Visible = false;
			pnlFullScreen->Visible = true;

		} else
		{
			WindowState = wsNormal;
			BorderStyle = bsSizeable;
			PnlMain->Visible = true;
			pnlFullScreen->Visible = false ;
		}

	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::EdgeBrowserContentLoading(TCustomEdgeBrowser *Sender, bool IsErrorPage,
          TUInt64 NavigationID)
{
    ActivateHintNOW(String().sprintf(L"Navigation ID: %lu", NavigationID),
        ClientToScreen(Point(Width / 2,
            -GetSystemMetrics(SM_CYCAPTION) -GetSystemMetrics(SM_CYCAPTION))));
}
//---------------------------------------------------------------------------

void __fastcall TForm2::EdgeBrowserDocumentTitleChanged(TCustomEdgeBrowser *Sender,
          const UnicodeString ADocumentTitle)
{
    Caption = ADocumentTitle;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::EdgeBrowserNewWindowRequested(TCustomEdgeBrowser *Sender,
          TNewWindowRequestedEventArgs *Args)
{
    if (MessageDlg("Allow new window", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) != mrYes)
        Args->ArgsInterface->Set_Handled(true);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::EdgeBrowserPermissionRequested(TCustomEdgeBrowser *Sender,
          TPermissionRequestedEventArgs *Args)
{
    WideChar *Uri;
    COREWEBVIEW2_PERMISSION_KIND Kind = COREWEBVIEW2_PERMISSION_KIND_UNKNOWN_PERMISSION;
    BOOL UserInitiated = FALSE;

    if (SUCCEEDED(Args->ArgsInterface->Get_uri(Uri)) &&
        SUCCEEDED(Args->ArgsInterface->Get_PermissionKind(Kind)) &&
        SUCCEEDED(Args->ArgsInterface->Get_IsUserInitiated(UserInitiated)))
    {
        String Msg = L"Do you want to grant permission for ";
		Msg += NameOfPermissionType(Kind);
        Msg += L" to the website at ";
        Msg += Uri;
        Msg += L"?\n\n";
        Msg += (UserInitiated
            ? L"This request came from a user gesture."
            : L"This request did not come from a user gesture.");
        int Response = Application->MessageBox(Msg.c_str(), L"Permission Request",
                                   MB_YESNO | MB_ICONWARNING);
        COREWEBVIEW2_PERMISSION_STATE State =
            Response == IDYES
              ? COREWEBVIEW2_PERMISSION_STATE_ALLOW
              : COREWEBVIEW2_PERMISSION_STATE_DENY;
        Args->ArgsInterface->Set_State(State);
        CoTaskMemFree(Uri);
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::EdgeBrowserProcessFailed(TCustomEdgeBrowser *Sender, TOleEnum ProcessFailedKind)

{
	if (ProcessFailedKind == COREWEBVIEW2_PROCESS_FAILED_KIND_BROWSER_PROCESS_EXITED)
    {
        int button = Application->MessageBox(
            L"Browser process exited unexpectedly. Recreate webview?",
            L"Browser process exited",
            MB_YESNO | MB_ICONQUESTION);
        if (button == IDYES)
            EdgeBrowser->ReinitializeWebView();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::EdgeBrowserSourceChanged(TCustomEdgeBrowser *Sender, bool IsNewDocument)

{
	SearchPage->Text = Sender->LocationURL;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::EdgeBrowserWebResourceRequested(TCustomEdgeBrowser *Sender,
          TWebResourceRequestedEventArgs *Args)
{
	if (FBlockImages)
	{
		COREWEBVIEW2_WEB_RESOURCE_CONTEXT ResourceContext;
		if (SUCCEEDED(
			Args->ArgsInterface->Get_ResourceContext(ResourceContext)))
		{
			if (ResourceContext != COREWEBVIEW2_WEB_RESOURCE_CONTEXT_IMAGE)
				return;
            _di_ICoreWebView2WebResourceResponse Response;
            if (SUCCEEDED(EdgeBrowser->EnvironmentInterface->CreateWebResourceResponse(
                NULL, 403 /*NoContent*/, (wchar_t *)L"Blocked", (wchar_t *)L"", Response)))
                Args->ArgsInterface->Set_Response(Response);
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::EdgeBrowserWindowCloseRequested(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::imgFullClick(TObject *Sender)
{
	EdgeBrowserContainsFullScreenElementChanged(EdgeBrowser,true);
}
//---------------------------------------------------------------------------
void TForm2::ActivateHintNOW(String Txt, TPoint Pt)
{
	try {
		if (Txt.Length())
		{
			TRect Rect = HintWnd->CalcHintRect(Screen->Width, Txt, NULL);
			Rect.Left = Rect.Left + Pt.X;
			Rect.Right = Rect.Right + Pt.X;
			Rect.Top = Rect.Top + Pt.Y;
			Rect.Bottom = Rect.Bottom + Pt.Y;
			HintWnd->ActivateHint(Rect, Txt);
		}
	} catch (...) {
	}
}

void __fastcall TForm2::Image2Click(TObject *Sender)
{
    EdgeBrowserContainsFullScreenElementChanged(EdgeBrowser,true);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormKeyPress(TObject *Sender, System::WideChar &Key)
{
  System::UnicodeString str;
  Application->MessageBox(str.c_str(), str.c_str(), MB_OK | MB_ICONINFORMATION);

}
//---------------------------------------------------------------------------


void __fastcall TForm2::pnlFullScreenClick(TObject *Sender)
{
	EdgeBrowserContainsFullScreenElementChanged(EdgeBrowser,true);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::imgSettingsClick(TObject *Sender)
{
	System::UnicodeString str = "No Implementead yet";
	System::UnicodeString strTitle = "Title";
    Application->MessageBox(str.c_str(), strTitle.c_str(), MB_OK | MB_ICONINFORMATION);
}
//---------------------------------------------------------------------------

