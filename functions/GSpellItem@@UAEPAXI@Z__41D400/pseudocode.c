void *__thiscall SpellItem::`scalar deleting destructor'(TESForm *this, unsigned int a2)
{
  SpellItem::~SpellItem(this);
  if ( (a2 & 1) == 0 )
    return (void *)SpellItem::`scalar deleting destructor'(a2);
  FormHeapFree((unsigned int)this);
  return (void *)SpellItem::`scalar deleting destructor'(a2);
}
