Menu *__userpurge CreditsMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  CreditsMenu::~CreditsMenu(this, a2, a3, a4); /*0x59c9d3*/
  if ( (a5 & 1) != 0 ) /*0x59c9dd*/
    FormHeapFree((unsigned int)this); /*0x59c9e0*/
  return this; /*0x59c9ea*/
}
