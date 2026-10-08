Menu *__userpurge LoadgameMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  LoadgameMenu::~LoadgameMenu(this, a2, a3, a4); /*0x5ae6b3*/
  if ( (a5 & 1) != 0 ) /*0x5ae6bd*/
    FormHeapFree((unsigned int)this); /*0x5ae6c0*/
  return this; /*0x5ae6ca*/
}
