object main_menu: Tmain_menu
  Left = 0
  Top = 0
  BorderStyle = bsNone
  Caption = #1043#1076#1077'-'#1090#1086' '#1074' '#1076#1088#1091#1075#1086#1081' '#1074#1089#1077#1083#1077#1085#1085#1086#1081
  ClientHeight = 857
  ClientWidth = 1436
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  WindowState = wsMaximized
  PixelsPerInch = 96
  TextHeight = 13
  object login_button: TButton
    Left = 775
    Top = 536
    Width = 75
    Height = 25
    Caption = #1042#1093#1086#1076
    TabOrder = 0
    OnClick = login_buttonClick
  end
  object registration_button: TButton
    Left = 976
    Top = 536
    Width = 75
    Height = 25
    Caption = #1056#1077#1075#1080#1089#1090#1088#1072#1094#1080#1103
    TabOrder = 1
    OnClick = registration_buttonClick
  end
  object Button3: TButton
    Left = 856
    Top = 536
    Width = 114
    Height = 25
    Caption = #1063#1090#1086'-'#1090#1086' '#1076#1077#1083#1072#1077#1090
    TabOrder = 2
    Visible = False
    OnClick = Button3Click
  end
end
