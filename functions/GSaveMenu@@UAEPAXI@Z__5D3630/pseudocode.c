SaveMenu *__userpurge SaveMenu::`scalar deleting destructor'@<eax>(
        SaveMenu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  SaveMenu::~SaveMenu(this, a2, a3, a4); /*0x5d3633*/
  if ( (a5 & 1) != 0 ) /*0x5d363d*/
    FormHeapFree((unsigned int)this); /*0x5d3640*/
  return this; /*0x5d364a*/
}
