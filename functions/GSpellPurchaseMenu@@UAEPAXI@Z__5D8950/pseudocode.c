Menu *__userpurge SpellPurchaseMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  this->__vftable = (MenuVtbl *)&SpellPurchaseMenu::`vftable'; /*0x5d8953*/
  Menu::~Menu(this, a2, a3, a4); /*0x5d8959*/
  if ( (a5 & 1) != 0 ) /*0x5d8963*/
    FormHeapFree((unsigned int)this); /*0x5d8966*/
  return this; /*0x5d8970*/
}
