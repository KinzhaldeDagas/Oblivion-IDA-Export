Menu *__userpurge SkillsMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  this->__vftable = (MenuVtbl *)&SkillsMenu::`vftable'; /*0x5d56f3*/
  Menu::~Menu(this, a2, a3, a4); /*0x5d56f9*/
  if ( (a5 & 1) != 0 ) /*0x5d5703*/
    FormHeapFree((unsigned int)this); /*0x5d5706*/
  return this; /*0x5d5710*/
}
