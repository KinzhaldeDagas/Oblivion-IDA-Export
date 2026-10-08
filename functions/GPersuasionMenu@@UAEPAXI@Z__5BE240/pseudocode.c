Menu *__userpurge PersuasionMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  this->__vftable = (MenuVtbl *)&PersuasionMenu::`vftable'; /*0x5be243*/
  Menu::~Menu(this, a2, a3, a4); /*0x5be249*/
  if ( (a5 & 1) != 0 ) /*0x5be253*/
    FormHeapFree((unsigned int)this); /*0x5be256*/
  return this; /*0x5be260*/
}
