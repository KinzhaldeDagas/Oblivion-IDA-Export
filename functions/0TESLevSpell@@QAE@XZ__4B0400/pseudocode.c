TESLevSpell *__thiscall TESLevSpell::TESLevSpell(TESLevSpell *this)
{
  TESBoundObject_constr((TESForm *)this);
  TESLeveledList_constr((_DWORD *)this + 9);
  *(_DWORD *)this = &TESLevSpell::`vftable'{for `TESLevSpell'};
  *((_DWORD *)this + 9) = &TESLevSpell::`vftable'{for `TESLeveledList'};
  *((_BYTE *)this + 4) = 0x40;
  TESForm_SetIsLinked((TESForm *)this, 1);
  return this;
}
