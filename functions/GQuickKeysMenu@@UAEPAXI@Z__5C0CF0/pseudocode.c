Menu *__userpurge QuickKeysMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  this->__vftable = (MenuVtbl *)&QuickKeysMenu::`vftable'; /*0x5c0cf3*/
  Menu::~Menu(this, a2, a3, a4); /*0x5c0cf9*/
  if ( (a5 & 1) != 0 ) /*0x5c0d03*/
    FormHeapFree((unsigned int)this); /*0x5c0d06*/
  return this; /*0x5c0d10*/
}
