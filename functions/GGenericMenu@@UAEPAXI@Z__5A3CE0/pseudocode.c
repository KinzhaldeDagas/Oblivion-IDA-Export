Menu *__userpurge GenericMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  GenericMenu::~GenericMenu(this, a2, a3, a4); /*0x5a3ce3*/
  if ( (a5 & 1) != 0 ) /*0x5a3ced*/
    FormHeapFree((unsigned int)this); /*0x5a3cf0*/
  return this; /*0x5a3cfa*/
}
