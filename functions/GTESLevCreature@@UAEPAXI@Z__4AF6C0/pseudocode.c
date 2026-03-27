TESForm *__thiscall TESLevCreature::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESLevCreature::~TESLevCreature(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
