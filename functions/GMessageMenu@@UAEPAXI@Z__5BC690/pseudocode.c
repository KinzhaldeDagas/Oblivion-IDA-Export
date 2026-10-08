Menu *__userpurge MessageMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  MessageMenu::~MessageMenu(this, a2, a3, a4); /*0x5bc693*/
  if ( (a5 & 1) != 0 ) /*0x5bc69d*/
    FormHeapFree((unsigned int)this); /*0x5bc6a0*/
  return this; /*0x5bc6aa*/
}
