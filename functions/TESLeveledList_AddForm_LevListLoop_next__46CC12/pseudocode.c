int __userpurge TESLeveledList_AddForm_::LevListLoop_next@<eax>(
        int a1@<esi>,
        _DWORD *a2@<ebx>,
        _DWORD *a3@<ebp>,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned __int16 a8)
{
  _DWORD *v8; // esi

  v8 = *(_DWORD **)(a1 + 4); /*0x46cc12*/
  if ( v8 ) /*0x46cc17*/
    return TESLeveledList_AddForm_::LevListLoop(v8, a2, a3, a4, a5, a6, a7, a8); /*0x46cc17*/
  else
    return TESLeveledList_AddForm_::InsertEntry(a2, a3, 0, a4, a5, a6); /*0x46cc18*/
}
