Menu *__userpurge MagicMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  MagicMenu::~MagicMenu(this, a2, a3, a4); /*0x5b28b3*/
  if ( (a5 & 1) != 0 ) /*0x5b28bd*/
    FormHeapFree((unsigned int)this); /*0x5b28c0*/
  return this; /*0x5b28ca*/
}
