TESForm *__thiscall TESLevItem_constr(TESForm *this)
{
  TESBoundObject_constr(this);
  TESLeveledList_constr((_DWORD *)this + 9);
  this->vtbl = (TESFormVtbl *)&TESLevItem::`vftable'{for `TESLevItem'};
  *((_DWORD *)this + 9) = &TESLevItem::`vftable'{for `TESLeveledList'};
  this->member.type = kFormType_LeveledItem;
  j_TESForm_InitializeComponents(this);
  return this;
}
