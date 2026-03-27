int __thiscall TESLevItem_destr(TESForm *this)
{
  TESForm *v2; // edi

  v2 = (TESForm *)((char *)this + 0x24);
  this->vtbl = (TESFormVtbl *)&TESLevItem::`vftable'{for `TESLevItem'};
  *((_DWORD *)this + 9) = &TESLevItem::`vftable'{for `TESLeveledList'};
  j_TESForm_ClearComponentReferences(this);
  TESLeveledList_destr(v2);
  return TESObject_destr(this);
}
