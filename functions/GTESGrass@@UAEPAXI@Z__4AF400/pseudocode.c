TESForm *__thiscall TESGrass::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESGrass::~TESGrass(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
