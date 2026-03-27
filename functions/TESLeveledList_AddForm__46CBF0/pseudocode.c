int __thiscall TESLeveledList_AddForm(void *this, int a2, int a3, int a4, int a5, __int16 a6)
{
  if ( this == (void *)0xFFFFFFFC )
    return TESLeveledList_AddForm_::InsertEntry(a2, a3, a4);
  else
    return TESLeveledList_AddForm_::LevListLoop((int)this + 4, a2, a3, a4, a5, a6);
}
