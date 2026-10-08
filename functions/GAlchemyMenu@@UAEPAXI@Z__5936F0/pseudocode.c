Menu *__userpurge AlchemyMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        int a2@<edx>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        char a6)
{
  AlchemyMenu::~AlchemyMenu(this, a2, a3, a4, a5); /*0x5936f3*/
  if ( (a6 & 1) != 0 ) /*0x5936fd*/
    FormHeapFree((unsigned int)this); /*0x593700*/
  return this; /*0x59370a*/
}
