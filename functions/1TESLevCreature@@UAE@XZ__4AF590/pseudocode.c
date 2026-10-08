void __thiscall TESLevCreature::~TESLevCreature(TESForm *this)
{
  TESForm *v2; // edi

  v2 = (TESForm *)((char *)this + 0x24); /*0x4af5bb*/
  this->vtbl = (TESFormVtbl *)&TESLevCreature::`vftable'{for `TESLevCreature'}; /*0x4af5be*/
  *((_DWORD *)this + 9) = &TESLevCreature::`vftable'{for `TESLeveledList'}; /*0x4af5c4*/
  *((_DWORD *)this + 0xD) = &TESLevCreature::`vftable'{for `TESScriptableForm'}; /*0x4af5ca*/
  j_TESForm_ClearComponentReferences(this); /*0x4af5d9*/
  TESLeveledList_destr(v2); /*0x4af5e5*/
  TESObject_destr(this); /*0x4af5f4*/
}
