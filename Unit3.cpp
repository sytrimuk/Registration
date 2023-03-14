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

char arr_ru[33] = {'а', 'б', 'в', 'г', 'д', 'е', 'ё', 'ж', 'з', 'и', 'й', 'к', 'л', 'м', 'н', 'о', 'п', 'р', 'с', 'т', 'у', 'ф', 'х', 'ц', 'ч', 'ш', 'щ', 'ь', 'ы', 'ъ', 'э', 'ю', 'я'};
char arr_RU[33] = {'А', 'Б', 'В', 'Г', 'Д', 'Е', 'Ё', 'Ж', 'З', 'И', 'Й', 'К', 'Л', 'М', 'Н', 'О', 'П', 'Р', 'С', 'Т', 'У', 'Ф', 'Х', 'Ц', 'Ч', 'Ш', 'Щ', 'Ь', 'Ы', 'Ъ', 'Э', 'Ю', 'Я'};

//---------------------------------------------------------------------------
void __fastcall Tregistration_menu::registration_buttonClick(TObject *Sender){
	//переменные
	bool check_txt = true;
	bool check_RU_in_l = false;
	bool check_RU_in_p = false;

	AnsiString login = this -> login -> Text;
	AnsiString password = this -> password -> Text;  login.Length();

	char* login_c = str_to_char(login);
	char* password_c = str_to_char(password);

	//поиск Кириллицы
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

	//проверка на корректность ввода
	if (this -> login -> Text == "" || this -> password -> Text == ""){
		ShowMessage("Введите данные");
	}

	else if (check_RU_in_l == true || check_RU_in_p == true){
		ShowMessage("Есть русские буквы");
	}

	else{
		txt_reg.open(path, ofstream::app);
		examination.open(path);

		AnsiString text = "Login: " + this -> login -> Text + " | " + "Password: " + this -> password -> Text;

//		AnsiString separate_login = "Login: " + this -> login -> Text + " | ";
//		char* separate_login_с = str_to_char(separate_login);

		char* text_с = str_to_char(text);

        AnsiString login_str;
		for (int i = 0; i < text.Length(); i++) {
			if (text_с[i] == '|'){
				break;
			}

			else if (text_с[i] == ':'){
				for (int j = 0; j < i - 7; j++) {

				}
			}

			else{
			}
		}





		while (!examination.eof()){
			getline(examination, line_txt);

			if (line_txt == text.c_str()){
				ShowMessage("Такой пользователь уже есть");
				check_txt = false;
				break;
			}
		}

		if(!examination.is_open()) {
			ShowMessage("Что-то с файлом");
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
