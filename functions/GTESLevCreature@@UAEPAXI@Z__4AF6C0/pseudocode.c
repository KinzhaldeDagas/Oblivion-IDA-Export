TESForm *__thiscall TESLevCreature::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESLevCreature::~TESLevCreature(this); /*0x4af6c3*/
  if ( (a2 & 1) != 0 ) /*0x4af6cd*/
    FormHeapFree((unsigned int)this); /*0x4af6d0*/
  return this; /*0x4af6da*/
}
