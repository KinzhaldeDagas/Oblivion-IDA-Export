Menu *__userpurge SpellMakingMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  SpellMakingMenu::~SpellMakingMenu(this, a2, a3, a4); /*0x5d7c83*/
  if ( (a5 & 1) != 0 ) /*0x5d7c8d*/
    FormHeapFree((unsigned int)this); /*0x5d7c90*/
  return this; /*0x5d7c9a*/
}
