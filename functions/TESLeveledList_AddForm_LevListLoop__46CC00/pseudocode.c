int __userpurge TESLeveledList_AddForm_::LevListLoop@<eax>(
        _DWORD *a1@<esi>,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned __int16 a6)
{
  if ( *a1 && *(_WORD *)*a1 > a6 )
    return TESLeveledList_AddForm_::InsertEntry(a2, a3, a4);
  else
    return TESLeveledList_AddForm_::LevListLoop_next((int)a1, a2, a3, a4);
}
