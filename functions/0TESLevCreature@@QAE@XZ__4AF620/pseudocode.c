TESLevCreature *__thiscall TESLevCreature::TESLevCreature(TESLevCreature *this)
{
  TESBoundAnimObject_constr((TESForm *)this); /*0x4af64a*/
  TESLeveledList_constr((_DWORD *)this + 9); /*0x4af65c*/
  TESScriptableForm_constr((_DWORD *)this + 0xD); /*0x4af66b*/
  *(_DWORD *)this = &TESLevCreature::`vftable'{for `TESLevCreature'}; /*0x4af672*/
  *((_DWORD *)this + 9) = &TESLevCreature::`vftable'{for `TESLeveledList'}; /*0x4af678*/
  *((_DWORD *)this + 0xD) = &TESLevCreature::`vftable'{for `TESScriptableForm'}; /*0x4af67e*/
  *((_BYTE *)this + 4) = 0x25; /*0x4af684*/
  *((_DWORD *)this + 0x10) = 0; /*0x4af688*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4af68f*/
  TESForm_SetIsLinked((TESForm *)this, 1); /*0x4af698*/
  return this; /*0x4af69f*/
}
