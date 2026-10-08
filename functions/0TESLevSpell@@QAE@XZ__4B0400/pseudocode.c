TESLevSpell *__thiscall TESLevSpell::TESLevSpell(TESLevSpell *this)
{
  TESBoundObject_constr((TESForm *)this); /*0x4b0429*/
  TESLeveledList_constr((_DWORD *)this + 9); /*0x4b043b*/
  *(_DWORD *)this = &TESLevSpell::`vftable'{for `TESLevSpell'}; /*0x4b0449*/
  *((_DWORD *)this + 9) = &TESLevSpell::`vftable'{for `TESLeveledList'}; /*0x4b044f*/
  *((_BYTE *)this + 4) = 0x40; /*0x4b0455*/
  TESForm_SetIsLinked((TESForm *)this, 1); /*0x4b0459*/
  return this; /*0x4b0460*/
}
