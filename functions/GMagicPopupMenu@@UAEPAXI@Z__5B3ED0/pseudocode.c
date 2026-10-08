Menu *__userpurge MagicPopupMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  this->__vftable = (MenuVtbl *)&MagicPopupMenu::`vftable'; /*0x5b3ed3*/
  Menu::~Menu(this, a2, a3, a4); /*0x5b3ed9*/
  if ( (a5 & 1) != 0 ) /*0x5b3ee3*/
    FormHeapFree((unsigned int)this); /*0x5b3ee6*/
  return this; /*0x5b3ef0*/
}
