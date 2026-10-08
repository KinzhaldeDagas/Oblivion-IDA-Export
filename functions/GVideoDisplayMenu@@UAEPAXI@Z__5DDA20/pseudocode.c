Menu *__userpurge VideoDisplayMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  this->__vftable = (MenuVtbl *)&VideoDisplayMenu::`vftable'; /*0x5dda23*/
  Menu::~Menu(this, a2, a3, a4); /*0x5dda29*/
  if ( (a5 & 1) != 0 ) /*0x5dda33*/
    FormHeapFree((unsigned int)this); /*0x5dda36*/
  return this; /*0x5dda40*/
}
