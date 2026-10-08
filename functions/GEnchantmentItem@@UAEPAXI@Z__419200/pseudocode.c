TESForm *__thiscall EnchantmentItem::`scalar deleting destructor'(TESForm *this, char a2)
{
  EnchantmentItem::~EnchantmentItem(this); /*0x419203*/
  if ( (a2 & 1) != 0 ) /*0x41920d*/
    FormHeapFree((unsigned int)this); /*0x419210*/
  return this; /*0x41921a*/
}
