DialogMenu *__userpurge DialogMenu::`scalar deleting destructor'@<eax>(
        DialogMenu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  DialogMenu::~DialogMenu(this, a2, a3, a4); /*0x59e663*/
  if ( (a5 & 1) != 0 ) /*0x59e66d*/
    FormHeapFree((unsigned int)this); /*0x59e670*/
  return this; /*0x59e67a*/
}
