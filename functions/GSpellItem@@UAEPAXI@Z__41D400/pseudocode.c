int __thiscall SpellItem::`scalar deleting destructor'(TESForm *this, unsigned int a2)
{
  SpellItem::~SpellItem(this); /*0x41d403*/
  if ( (a2 & 1) == 0 ) /*0x41d40d*/
    return SpellItem::`scalar deleting destructor'((int)this, a2); /*0x41d40d*/
  FormHeapFree((unsigned int)this); /*0x41d410*/
  return SpellItem::`scalar deleting destructor'((int)this, a2);
}
