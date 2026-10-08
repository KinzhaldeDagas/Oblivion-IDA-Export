Menu *__userpurge SigilStoneMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        int a2@<edx>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        char a6)
{
  SigilStoneMenu::~SigilStoneMenu(this, a2, a3, a4, a5); /*0x5d4883*/
  if ( (a6 & 1) != 0 ) /*0x5d488d*/
    FormHeapFree((unsigned int)this); /*0x5d4890*/
  return this; /*0x5d489a*/
}
