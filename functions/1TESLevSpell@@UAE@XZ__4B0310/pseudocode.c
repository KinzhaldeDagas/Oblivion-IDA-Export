void __thiscall TESLevSpell::~TESLevSpell(TESForm *this)
{
  TESForm *v2; // edi

  v2 = (TESForm *)((char *)this + 0x24);
  this->vtbl = (TESFormVtbl *)&TESLevSpell::`vftable'{for `TESLevSpell'};
  *((_DWORD *)this + 9) = &TESLevSpell::`vftable'{for `TESLeveledList'};
  j_TESForm_ClearComponentReferences(this);
  TESLeveledList_destr(v2);
  TESObject_destr(this);
}
