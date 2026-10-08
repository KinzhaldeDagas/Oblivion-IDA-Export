TESForm *__thiscall TESLevItem_constr(TESForm *this)
{
  TESBoundObject_constr(this); /*0x4b00d9*/
  TESLeveledList_constr((_DWORD *)this + 9); /*0x4b00eb*/
  this->vtbl = (TESFormVtbl *)&TESLevItem::`vftable'{for `TESLevItem'}; /*0x4b00f7*/
  *((_DWORD *)this + 9) = &TESLevItem::`vftable'{for `TESLeveledList'}; /*0x4b00fd*/
  this->member.type = kFormType_LeveledItem; /*0x4b0103*/
  j_TESForm_InitializeComponents(this); /*0x4b0107*/
  return this; /*0x4b010e*/
}
