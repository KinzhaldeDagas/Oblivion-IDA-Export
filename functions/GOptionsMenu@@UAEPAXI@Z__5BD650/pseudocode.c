Menu *__userpurge OptionsMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  this->__vftable = (MenuVtbl *)&OptionsMenu::`vftable'; /*0x5bd653*/
  Menu::~Menu(this, a2, a3, a4); /*0x5bd659*/
  if ( (a5 & 1) != 0 ) /*0x5bd663*/
    FormHeapFree((unsigned int)this); /*0x5bd666*/
  return this; /*0x5bd670*/
}
