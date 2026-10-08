LoadingMenu *__userpurge LoadingMenu::`scalar deleting destructor'@<eax>(
        LoadingMenu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  LoadingMenu::~LoadingMenu(this, a2, a3, a4); /*0x5ae063*/
  if ( (a5 & 1) != 0 ) /*0x5ae06d*/
    FormHeapFree((unsigned int)this); /*0x5ae070*/
  return this; /*0x5ae07a*/
}
