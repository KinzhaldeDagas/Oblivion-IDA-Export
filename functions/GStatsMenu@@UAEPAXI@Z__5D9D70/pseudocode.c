Menu *__userpurge StatsMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  this->__vftable = (MenuVtbl *)&StatsMenu::`vftable'; /*0x5d9d73*/
  Menu::~Menu(this, a2, a3, a4); /*0x5d9d79*/
  if ( (a5 & 1) != 0 ) /*0x5d9d83*/
    FormHeapFree((unsigned int)this); /*0x5d9d86*/
  return this; /*0x5d9d90*/
}
