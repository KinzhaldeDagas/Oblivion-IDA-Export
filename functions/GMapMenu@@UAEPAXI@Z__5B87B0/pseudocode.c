MapMenu *__userpurge MapMenu::`scalar deleting destructor'@<eax>(
        MapMenu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  MapMenu::~MapMenu(this, a2, a3, a4); /*0x5b87b3*/
  if ( (a5 & 1) != 0 ) /*0x5b87bd*/
    FormHeapFree((unsigned int)this); /*0x5b87c0*/
  return this; /*0x5b87ca*/
}
