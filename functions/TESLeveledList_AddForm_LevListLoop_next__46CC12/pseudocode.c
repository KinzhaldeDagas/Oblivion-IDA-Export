int __userpurge TESLeveledList_AddForm_::LevListLoop_next@<eax>(
        int a1@<esi>,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned __int16 a6)
{
  _DWORD *v6; // esi

  v6 = *(_DWORD **)(a1 + 4);
  if ( v6 )
    return TESLeveledList_AddForm_::LevListLoop(v6, a2, a3, a4, a5, a6);
  else
    return TESLeveledList_AddForm_::InsertEntry(a2, a3, a4);
}
