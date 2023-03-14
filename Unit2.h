//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class Tlogin_menu : public TForm
{
__published:	// IDE-managed Components
	TEdit *login;
	TEdit *password;
	TLabel *Label1;
	TLabel *Label2;
	TButton *login_button;
	TEdit *check_bool;
	void __fastcall login_buttonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tlogin_menu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tlogin_menu *login_menu;
//---------------------------------------------------------------------------
#endif
