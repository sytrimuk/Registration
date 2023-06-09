//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"

#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tlogin_menu *login_menu;
//---------------------------------------------------------------------------
__fastcall Tlogin_menu::Tlogin_menu(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

ifstream examination;
string line_txt = "";

string username = getenv("username");
string path = "C:\\Users\\" + username + "\\Documents\\All\\main.password";

//---------------------------------------------------------------------------
void __fastcall Tlogin_menu::login_buttonClick(TObject *Sender){
    bool check_account = false;

	examination.open(path);

	if (!examination.is_open()) ShowMessage("Что-то с файлом");

	else{
		AnsiString text = "Login: " + this -> login -> Text + " | Password: " + this -> password -> Text;

		while (!examination.eof()){
			getline(examination, line_txt);

			if (line_txt == text.c_str()){
				check_account = true;
				break;
			}
		}

		if (check_account == true){
			this -> check_bool -> Text = True;
			main_menu -> login_button -> Visible = false;
			main_menu -> login_button -> Enabled = false;

			main_menu -> registration_button -> Visible = false;
			main_menu -> registration_button ->Enabled = false;

			this -> Close();
		}

		else{
			ShowMessage("Такого пользователя нет или неправильный пароль");
		}

	}   examination.close();
}
//---------------------------------------------------------------------------
