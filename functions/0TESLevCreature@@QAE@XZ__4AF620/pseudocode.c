TESLevCreature *__thiscall TESLevCreature::TESLevCreature(TESLevCreature *this)
{
  TESBoundAnimObject_constr((TESForm *)this);
  TESLeveledList_constr((_DWORD *)this + 9);
  TESScriptableForm_constr((_DWORD *)this + 0xD);
  *(_DWORD *)this = &TESLevCreature::`vftable'{for `TESLevCreature'};
  *((_DWORD *)this + 9) = &TESLevCreature::`vftable'{for `TESLeveledList'};
  *((_DWORD *)this + 0xD) = &TESLevCreature::`vftable'{for `TESScriptableForm'};
  *((_BYTE *)this + 4) = 0x25;
  *((_DWORD *)this + 0x10) = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  TESForm_SetIsLinked((TESForm *)this, 1);
  return this;
}
