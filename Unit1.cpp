//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"

#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <Lmcons.h>
#include <string>

using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tmain_menu *main_menu;
//---------------------------------------------------------------------------
__fastcall Tmain_menu::Tmain_menu(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall Tmain_menu::login_buttonClick(TObject *Sender){
	login_menu -> ShowModal();

	AnsiString check_account_str = login_menu -> check_bool -> Text;

	if (check_account_str == "1") {
        this -> Button3 -> Visible = true;
	}
}
//---------------------------------------------------------------------------
void __fastcall Tmain_menu::registration_buttonClick(TObject *Sender){
	registration_menu -> ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall Tmain_menu::Button3Click(TObject *Sender){
	ShowMessage(getenv("username"));
}
//---------------------------------------------------------------------------