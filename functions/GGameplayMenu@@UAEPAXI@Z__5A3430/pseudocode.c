Menu *__userpurge GameplayMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  this->__vftable = (MenuVtbl *)&GameplayMenu::`vftable'; /*0x5a3433*/
  Menu::~Menu(this, a2, a3, a4); /*0x5a3439*/
  if ( (a5 & 1) != 0 ) /*0x5a3443*/
    FormHeapFree((unsigned int)this); /*0x5a3446*/
  return this; /*0x5a3450*/
}
