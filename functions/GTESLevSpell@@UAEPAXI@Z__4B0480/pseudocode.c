TESForm *__thiscall TESLevSpell::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESLevSpell::~TESLevSpell(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
