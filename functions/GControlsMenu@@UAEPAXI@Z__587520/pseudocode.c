Menu *__userpurge ControlsMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  this->__vftable = (MenuVtbl *)&ControlsMenu::`vftable'; /*0x587523*/
  Menu::~Menu(this, a2, a3, a4); /*0x587529*/
  if ( (a5 & 1) != 0 ) /*0x587533*/
    FormHeapFree((unsigned int)this); /*0x587536*/
  return this; /*0x587540*/
}
