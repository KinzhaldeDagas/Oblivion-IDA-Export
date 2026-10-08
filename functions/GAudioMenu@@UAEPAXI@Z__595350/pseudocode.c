Menu *__userpurge AudioMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  this->__vftable = (MenuVtbl *)&AudioMenu::`vftable'; /*0x595353*/
  Menu::~Menu(this, a2, a3, a4); /*0x595359*/
  if ( (a5 & 1) != 0 ) /*0x595363*/
    FormHeapFree((unsigned int)this); /*0x595366*/
  return this; /*0x595370*/
}
