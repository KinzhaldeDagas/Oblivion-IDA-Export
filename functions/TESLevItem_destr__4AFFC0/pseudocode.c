int __thiscall TESLevItem_destr(TESForm *this)
{
  TESForm *v2; // edi

  v2 = (TESForm *)((char *)this + 0x24); /*0x4affeb*/
  this->vtbl = (TESFormVtbl *)&TESLevItem::`vftable'{for `TESLevItem'}; /*0x4affee*/
  *((_DWORD *)this + 9) = &TESLevItem::`vftable'{for `TESLeveledList'}; /*0x4afff4*/
  j_TESForm_ClearComponentReferences(this); /*0x4b0002*/
  TESLeveledList_destr(v2); /*0x4b000e*/
  return TESObject_destr(this); /*0x4b0022*/
}
