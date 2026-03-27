TESForm *__thiscall EnchantmentItem::`scalar deleting destructor'(TESForm *this, char a2)
{
  EnchantmentItem::~EnchantmentItem(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
