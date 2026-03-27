TESForm *__thiscall TESSkill::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESSkill::~TESSkill(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
