TESForm *__thiscall TESSkill::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESSkill::~TESSkill(this); /*0x52e823*/
  if ( (a2 & 1) != 0 ) /*0x52e82d*/
    FormHeapFree((unsigned int)this); /*0x52e830*/
  return this; /*0x52e83a*/
}
