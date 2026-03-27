TESForm *__thiscall TESSigilStone::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESSigilStone::~TESSigilStone(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
