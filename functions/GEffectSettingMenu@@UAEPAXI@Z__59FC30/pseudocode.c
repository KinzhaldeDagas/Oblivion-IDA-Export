Menu *__userpurge EffectSettingMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  this->__vftable = (MenuVtbl *)&EffectSettingMenu::`vftable'; /*0x59fc33*/
  Menu::~Menu(this, a2, a3, a4); /*0x59fc39*/
  if ( (a5 & 1) != 0 ) /*0x59fc43*/
    FormHeapFree((unsigned int)this); /*0x59fc46*/
  return this; /*0x59fc50*/
}
