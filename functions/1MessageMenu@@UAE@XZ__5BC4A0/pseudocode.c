void __thiscall MessageMenu::~MessageMenu(MessageMenu *this)
{
  double v1; // st5
  double v2; // st6
  double v3; // st7

  this->__vftable = (MenuVtbl *)&MessageMenu::`vftable'; /*0x5bc4c8*/
  InterfaceManager_GetSingleton(0, 1)->pendingMessageCallback = this->resultCallback; /*0x5bc4e2*/
  Menu::~Menu(this, v1, v2, v3); /*0x5bc4f5*/
}
