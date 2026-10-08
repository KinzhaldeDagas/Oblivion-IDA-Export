// CustomAnimSupport decode: TESLeveledList support evidence; leveled lists are not deterministic form-list animation targets and are not expanded for mappings.
int __thiscall TESLeveledList_AddForm(char *this, int a2, int a3, int a4, int a5, unsigned __int16 a6)
{
  _DWORD *v6; // esi

  v6 = this + 4; /*0x46cbf6*/
  if ( this == (char *)0xFFFFFFFC ) /*0x46cbfd*/
    return TESLeveledList_AddForm_::InsertEntry(0, 0, v6, a2, a3, a4); /*0x46cbfd*/
  else
    return TESLeveledList_AddForm_::LevListLoop(v6, a2, a3, a4, a5, a6); /*0x46cbff*/
}
