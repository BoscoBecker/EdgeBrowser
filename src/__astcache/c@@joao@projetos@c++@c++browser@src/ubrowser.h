//---------------------------------------------------------------------------

#ifndef UBrowserH
#define UBrowserH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Edge.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Winapi.ActiveX.hpp>
#include <Winapi.WebView2.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.WinXCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TEdgeBrowser *EdgeBrowser;
	TPanel *PnlMain;
	TImage *imgBack;
	TImage *ImgForward;
	TImage *Image7;
	TImage *imgReload;
	TImage *imgStop;
	TImage *imgSettings;
	TPanel *Panel2;
	TSearchBox *SearchPage;
	TImage *imgGo;
	TImage *imgTheme;
	TImage *Image9;
	TImage *zoomIn;
	TImage *zoomOut;
	TImage *imgFull;
	TImage *imgProtocol;
	TLabel *InfoProtocol;
	TImage *Image3;
	TSaveDialog *dlgSaveScreenshot;
	TImage *Image4;
	TImage *imgScreen;
	TImage *Image2;
	TPanel *pnlFullScreen;
	TImage *Image8;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall imgThemeClick(TObject *Sender);
	void __fastcall imgBackClick(TObject *Sender);
	void __fastcall ImgForwardClick(TObject *Sender);
	void __fastcall imgReloadClick(TObject *Sender);
	void __fastcall imgStopClick(TObject *Sender);
	void __fastcall imgGoClick(TObject *Sender);
	void __fastcall SearchPageKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall EdgeBrowserNavigationStarting(TCustomEdgeBrowser *Sender, TNavigationStartingEventArgs *Args);
	void __fastcall zoomInClick(TObject *Sender);
	void __fastcall zoomOutClick(TObject *Sender);
	void __fastcall imgScreenClick(TObject *Sender);
	void __fastcall EdgeBrowserContainsFullScreenElementChanged(TCustomEdgeBrowser *Sender,
          bool ContainsFullScreenElement);
	void __fastcall EdgeBrowserContentLoading(TCustomEdgeBrowser *Sender, bool IsErrorPage,
          TUInt64 NavigationID);
	void __fastcall EdgeBrowserDocumentTitleChanged(TCustomEdgeBrowser *Sender, const UnicodeString ADocumentTitle);
	void __fastcall EdgeBrowserNewWindowRequested(TCustomEdgeBrowser *Sender, TNewWindowRequestedEventArgs *Args);
	void __fastcall EdgeBrowserPermissionRequested(TCustomEdgeBrowser *Sender, TPermissionRequestedEventArgs *Args);
	void __fastcall EdgeBrowserProcessFailed(TCustomEdgeBrowser *Sender, TOleEnum ProcessFailedKind);
	void __fastcall EdgeBrowserSourceChanged(TCustomEdgeBrowser *Sender, bool IsNewDocument);
	void __fastcall EdgeBrowserWebResourceRequested(TCustomEdgeBrowser *Sender, TWebResourceRequestedEventArgs *Args);
	void __fastcall EdgeBrowserWindowCloseRequested(TObject *Sender);
	void __fastcall imgFullClick(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall FormKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall pnlFullScreenClick(TObject *Sender);
	void __fastcall imgSettingsClick(TObject *Sender);
private:	// User declarations
	bool FAllowFullScreen;
    bool FBlockImages;
	void ActivateHintNOW(String Txt, TPoint Pt);
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
	void __fastcall ChangeTheme(System::UnicodeString URI);
	void __fastcall ChangeLabeLProtocol(System::UnicodeString URI, bool Send );
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
