void __thiscall MessageMenu_HandleButtonClick(MessageMenu *this, int buttonID, Tile *clickedButton)
{
  double v3; // st0
  double v4; // st1
  double v5; // st2
  double v6; // st3
  double v7; // st5
  double v8; // st7
  InterfaceManager *Singleton; // eax

  if ( buttonID == 2 ) /*0x5bcddb*/
  {
    sub_5BCCB0(this); /*0x5bcddd*/
  }
  else if ( buttonID >= 4 ) /*0x5bcdea*/
  {
    sub_57DE50(1); /*0x5bcdef*/
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5bcdf9*/
    Singleton->activeTile = 0; /*0x5bcdfe*/
    Singleton->activeMenu = 0; /*0x5bce04*/
    Singleton->unk0A0 = 0; /*0x5bce0a*/
    Singleton->unk0A4 = 0; /*0x5bce10*/
    Singleton->msgBoxButtonPressed = buttonID + this->baseButtonIndex - 4; /*0x5bce21*/
    sub_5BC6B0(v7, v3, v4, v5, v6, v8); /*0x5bce27*/
  }
}
