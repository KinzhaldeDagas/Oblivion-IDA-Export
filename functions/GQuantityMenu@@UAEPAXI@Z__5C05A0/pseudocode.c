Menu *__userpurge QuantityMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  this->__vftable = (MenuVtbl *)&QuantityMenu::`vftable'; /*0x5c05a3*/
  Menu::~Menu(this, a2, a3, a4); /*0x5c05a9*/
  if ( (a5 & 1) != 0 ) /*0x5c05b3*/
    FormHeapFree((unsigned int)this); /*0x5c05b6*/
  return this; /*0x5c05c0*/
}
