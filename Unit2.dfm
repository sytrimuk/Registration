object login_menu: Tlogin_menu
  Left = 0
  Top = 0
  Caption = #1052#1077#1085#1102' '#1074#1093#1086#1076#1072
  ClientHeight = 161
  ClientWidth = 284
  Color = clBtnFace
  Constraints.MaxHeight = 200
  Constraints.MaxWidth = 300
  Constraints.MinHeight = 200
  Constraints.MinWidth = 300
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 120
    Top = 8
    Width = 25
    Height = 13
    Caption = 'Login'
  end
  object Label2: TLabel
    Left = 112
    Top = 54
    Width = 46
    Height = 13
    Caption = 'Password'
  end
  object login: TEdit
    Left = 56
    Top = 27
    Width = 161
    Height = 21
    TabOrder = 0
  end
  object password: TEdit
    Left = 56
    Top = 73
    Width = 161
    Height = 21
    TabOrder = 1
  end
  object login_button: TButton
    Left = 88
    Top = 112
    Width = 97
    Height = 25
    Caption = #1042#1093#1086#1076
    TabOrder = 2
    OnClick = login_buttonClick
  end
  object check_bool: TEdit
    Left = 247
    Top = 137
    Width = 35
    Height = 21
    TabOrder = 3
    Text = 'false'
    Visible = False
  end
end
