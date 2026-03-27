Menu *__userpurge SigilStoneMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        int a2@<edx>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        char a6)
{
  SigilStoneMenu::~SigilStoneMenu(this, a2, a3, a4, a5);
  if ( (a6 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
