//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class Tmain_menu : public TForm
{
__published:	// IDE-managed Components
	TButton *login_button;
	TButton *registration_button;
	TButton *Button3;
	void __fastcall login_buttonClick(TObject *Sender);
	void __fastcall registration_buttonClick(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tmain_menu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tmain_menu *main_menu;
//---------------------------------------------------------------------------
#endif
