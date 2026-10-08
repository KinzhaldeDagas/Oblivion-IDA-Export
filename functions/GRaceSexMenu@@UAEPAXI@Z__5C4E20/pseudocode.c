Menu *__userpurge RaceSexMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  RaceSexMenu::~RaceSexMenu(this, a2, a3, a4); /*0x5c4e23*/
  if ( (a5 & 1) != 0 ) /*0x5c4e2d*/
    FormHeapFree((unsigned int)this); /*0x5c4e30*/
  return this; /*0x5c4e3a*/
}
