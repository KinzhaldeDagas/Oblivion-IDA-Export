TESFlora *__thiscall TESFlora::`scalar deleting destructor'(TESFlora *this, char a2)
{
  TESFlora::~TESFlora(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
