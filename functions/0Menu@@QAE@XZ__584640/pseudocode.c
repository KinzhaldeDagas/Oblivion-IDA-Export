// Verified constructor sets ownsTemplates byte+0x1C=1, template list+8/+0xC empty, templateContextTile+0x10=NULL, fadeState+0x24=4. Other fields retain prior names when semantics not established.
Menu *__thiscall Menu::Menu(Menu *this)
{
  this->__vftable = (MenuVtbl *)&Menu::`vftable'; /*0x584644*/
  this->members.templateHead = 0; /*0x58464a*/
  this->members.templateNext = 0; /*0x58464d*/
  this->members.tile = 0; /*0x584650*/
  this->members.templateContextTile = 0; /*0x584653*/
  this->members.unk14 = 0; /*0x584656*/
  this->members.fadeState = 4; /*0x584659*/
  LOBYTE(this->members.ownsTemplates) = 1; /*0x584660*/
  this->members.unk18 = 0; /*0x584664*/
  return this; /*0x584667*/
}
