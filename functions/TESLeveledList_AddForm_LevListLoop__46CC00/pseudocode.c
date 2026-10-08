int __userpurge TESLeveledList_AddForm_::LevListLoop@<eax>(
        _DWORD *a1@<esi>,
        _DWORD *a2@<ebx>,
        _DWORD *a3@<ebp>,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned __int16 a8)
{
  if ( *a1 && *(_WORD *)*a1 > a8 ) /*0x46cc0e*/
    return TESLeveledList_AddForm_::InsertEntry(a2, a3, a1, a4, a5, a6); /*0x46cc0e*/
  else
    return TESLeveledList_AddForm_::LevListLoop_next((int)a1, a4, a5, a6, a7, a8); /*0x46cc11*/
}
