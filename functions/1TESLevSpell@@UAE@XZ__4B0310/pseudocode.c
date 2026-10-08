void __thiscall TESLevSpell::~TESLevSpell(TESForm *this)
{
  TESForm *v2; // edi

  v2 = (TESForm *)((char *)this + 0x24); /*0x4b033b*/
  this->vtbl = (TESFormVtbl *)&TESLevSpell::`vftable'{for `TESLevSpell'}; /*0x4b033e*/
  *((_DWORD *)this + 9) = &TESLevSpell::`vftable'{for `TESLeveledList'}; /*0x4b0344*/
  j_TESForm_ClearComponentReferences(this); /*0x4b0352*/
  TESLeveledList_destr(v2); /*0x4b035e*/
  TESObject_destr(this); /*0x4b036d*/
}
