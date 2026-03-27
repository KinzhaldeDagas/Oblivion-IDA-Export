TESForm *__thiscall MagicItemObject::`scalar deleting destructor'(TESForm *this, char a2)
{
  MagicItemObject::~MagicItemObject(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
