MessageMenu *__thiscall MessageMenu::MessageMenu(MessageMenu *this)
{
  Menu::Menu(this); /*0x5bc453*/
  this->messageText = 0; /*0x5bc45a*/
  this->focusBox = 0; /*0x5bc45d*/
  this->background = 0; /*0x5bc460*/
  this->buttons[0] = 0; /*0x5bc463*/
  this->buttons[1] = 0; /*0x5bc466*/
  this->buttons[2] = 0; /*0x5bc469*/
  this->buttons[3] = 0; /*0x5bc46c*/
  this->buttons[4] = 0; /*0x5bc46f*/
  this->buttons[5] = 0; /*0x5bc472*/
  this->buttons[6] = 0; /*0x5bc475*/
  this->buttons[7] = 0; /*0x5bc478*/
  this->buttons[8] = 0; /*0x5bc47b*/
  this->buttons[9] = 0; /*0x5bc47e*/
  this->resultCallback = 0; /*0x5bc481*/
  this->__vftable = (MenuVtbl *)&MessageMenu::`vftable'; /*0x5bc484*/
  this->baseButtonIndex = 1; /*0x5bc48a*/
  return this; /*0x5bc490*/
}
