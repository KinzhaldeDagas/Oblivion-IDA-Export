TESForm *__thiscall TESLevSpell::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESLevSpell::~TESLevSpell(this); /*0x4b0483*/
  if ( (a2 & 1) != 0 ) /*0x4b048d*/
    FormHeapFree((unsigned int)this); /*0x4b0490*/
  return this; /*0x4b049a*/
}
