void __thiscall TESLevCreature::~TESLevCreature(TESForm *this)
{
  TESForm *v2; // edi

  v2 = (TESForm *)((char *)this + 0x24);
  this->vtbl = (TESFormVtbl *)&TESLevCreature::`vftable'{for `TESLevCreature'};
  *((_DWORD *)this + 9) = &TESLevCreature::`vftable'{for `TESLeveledList'};
  *((_DWORD *)this + 0xD) = &TESLevCreature::`vftable'{for `TESScriptableForm'};
  j_TESForm_ClearComponentReferences(this);
  TESLeveledList_destr(v2);
  TESObject_destr(this);
}
