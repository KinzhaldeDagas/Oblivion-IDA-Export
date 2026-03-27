TESWorldSpace *__thiscall TESWorldSpace::`scalar deleting destructor'(TESWorldSpace *this, char a2)
{
  TESWorldSpace::~TESWorldSpace(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
