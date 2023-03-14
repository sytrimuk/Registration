//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>

#include <stdio.h>
#include <iostream>
#include <string>
//---------------------------------------------------------------------------
class Tregistration_menu : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TEdit *login;
	TEdit *password;
	TButton *registration_button;
	void __fastcall registration_buttonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tregistration_menu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tregistration_menu *registration_menu;
//---------------------------------------------------------------------------
#endif

char* str_to_char(AnsiString str){

	char* chars = new char[str.Length() + 1];
	strcpy(chars, str.c_str());

	return chars;
}

