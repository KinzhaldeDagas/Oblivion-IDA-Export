Menu *__userpurge BreathMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  this->__vftable = (MenuVtbl *)&BreathMenu::`vftable'; /*0x596523*/
  Menu::~Menu(this, a2, a3, a4); /*0x596529*/
  if ( (a5 & 1) != 0 ) /*0x596533*/
    FormHeapFree((unsigned int)this); /*0x596536*/
  return this; /*0x596540*/
}
