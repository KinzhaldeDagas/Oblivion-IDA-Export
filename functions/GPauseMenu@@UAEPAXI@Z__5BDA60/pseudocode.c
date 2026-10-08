Menu *__userpurge PauseMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  this->__vftable = (MenuVtbl *)&PauseMenu::`vftable'; /*0x5bda63*/
  Menu::~Menu(this, a2, a3, a4); /*0x5bda69*/
  if ( (a5 & 1) != 0 ) /*0x5bda73*/
    FormHeapFree((unsigned int)this); /*0x5bda76*/
  return this; /*0x5bda80*/
}
