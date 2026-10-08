Menu *__userpurge TrainingMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  this->__vftable = (MenuVtbl *)&TrainingMenu::`vftable'; /*0x5dd313*/
  Menu::~Menu(this, a2, a3, a4); /*0x5dd319*/
  if ( (a5 & 1) != 0 ) /*0x5dd323*/
    FormHeapFree((unsigned int)this); /*0x5dd326*/
  return this; /*0x5dd330*/
}
