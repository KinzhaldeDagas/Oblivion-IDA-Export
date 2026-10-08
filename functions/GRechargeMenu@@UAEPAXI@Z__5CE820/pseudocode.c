Menu *__userpurge RechargeMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        int a2@<edx>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        char a6)
{
  RechargeMenu::~RechargeMenu(this, a2, a3, a4, a5); /*0x5ce823*/
  if ( (a6 & 1) != 0 ) /*0x5ce82d*/
    FormHeapFree((unsigned int)this); /*0x5ce830*/
  return this; /*0x5ce83a*/
}
