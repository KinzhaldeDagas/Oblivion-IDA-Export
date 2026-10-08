Menu *__userpurge BookMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  this->__vftable = (MenuVtbl *)&BookMenu::`vftable'; /*0x595c43*/
  Menu::~Menu(this, a2, a3, a4); /*0x595c49*/
  if ( (a5 & 1) != 0 ) /*0x595c53*/
    FormHeapFree((unsigned int)this); /*0x595c56*/
  return this; /*0x595c60*/
}
