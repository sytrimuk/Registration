object registration_menu: Tregistration_menu
  Left = 0
  Top = 0
  Caption = #1052#1077#1085#1102' '#1088#1077#1075#1080#1089#1090#1088#1072#1094#1080#1080
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
    Left = 128
    Top = 8
    Width = 25
    Height = 13
    Caption = 'Login'
  end
  object Label2: TLabel
    Left = 120
    Top = 54
    Width = 46
    Height = 13
    Caption = 'Password'
  end
  object login: TEdit
    Left = 64
    Top = 27
    Width = 161
    Height = 21
    TabOrder = 0
  end
  object password: TEdit
    Left = 64
    Top = 73
    Width = 161
    Height = 21
    Color = clBtnFace
    TabOrder = 1
  end
  object registration_button: TButton
    Left = 96
    Top = 116
    Width = 97
    Height = 25
    Caption = #1056#1077#1075#1080#1089#1090#1088#1072#1094#1080#1103
    TabOrder = 2
    OnClick = registration_buttonClick
  end
end
