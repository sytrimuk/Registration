//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"

#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tregistration_menu *registration_menu;
//---------------------------------------------------------------------------
__fastcall Tregistration_menu::Tregistration_menu(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

ofstream txt_reg;
ifstream examination;

string username = getenv("username");
string path = "C:\\Users\\" + username + "\\Documents\\All\\main.password";
string line_txt = "";

char arr_ru[33] = {'�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�'};
char arr_RU[33] = {'�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�'};

//---------------------------------------------------------------------------
void __fastcall Tregistration_menu::registration_buttonClick(TObject *Sender){
	//����������
	bool check_txt = true;
	bool check_RU_in_l = false;
	bool check_RU_in_p = false;

	AnsiString login = this -> login -> Text;
	AnsiString password = this -> password -> Text;  login.Length();

	char* login_c = str_to_char(login);
	char* password_c = str_to_char(password);

	//����� ���������
	for (int i = 0; i < this -> login -> Text.Length(); i++) {
		for (int j = 0; j < 33; j++) {
			if (login_c[i] == arr_ru[j] || login_c[i] == arr_RU[j]) {
				check_RU_in_l = true;
			}
		}
	}

	for (int i = 0; i < this -> password -> Text.Length(); i++) {
		for (int j = 0; j < 33; j++) {
			if (password_c[i] == arr_ru[j] || password_c[i] == arr_RU[j]) {
				check_RU_in_p = true;
			}
		}
	}

	//�������� �� ������������ �����
	if (this -> login -> Text == "" || this -> password -> Text == ""){
		ShowMessage("������� ������");
	}

	else if (check_RU_in_l == true || check_RU_in_p == true){
		ShowMessage("���� ������� �����");
	}

	else{
		txt_reg.open(path, ofstream::app);
		examination.open(path);

		AnsiString text = "Login: " + this -> login -> Text + " | " + "Password: " + this -> password -> Text;

//		AnsiString separate_login = "Login: " + this -> login -> Text + " | ";
//		char* separate_login_� = str_to_char(separate_login);

		char* text_� = str_to_char(text);

        AnsiString login_str;
		for (int i = 0; i < text.Length(); i++) {
			if (text_�[i] == '|'){
				break;
			}

			else if (text_�[i] == ':'){
				for (int j = 0; j < i - 7; j++) {

				}
			}

			else{
			}
		}





		while (!examination.eof()){
			getline(examination, line_txt);

			if (line_txt == text.c_str()){
				ShowMessage("����� ������������ ��� ����");
				check_txt = false;
				break;
			}
		}

		if(!examination.is_open()) {
			ShowMessage("���-�� � ������");
		}

		else if(check_txt == false){
		}

		else{
            txt_reg << text << "\n";
		}

		this -> login -> Text = "";
		this -> password -> Text = "";

		registration_menu -> Close();
		examination.close();
		txt_reg.close();
	}
}
//---------------------------------------------------------------------------

