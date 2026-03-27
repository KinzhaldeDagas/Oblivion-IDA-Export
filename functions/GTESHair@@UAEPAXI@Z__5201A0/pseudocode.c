TESHair *__thiscall TESHair::`scalar deleting destructor'(TESHair *this, char a2)
{
  TESHair::~TESHair(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
