// positive sp value has been detected, the output may be wrong!
int __userpurge TESLeveledList_AddForm_::InsertEntry@<eax>(
        _DWORD *a1@<ebx>,
        _DWORD *a2@<ebp>,
        _DWORD *a3@<esi>,
        __int16 a4,
        __int16 a5,
        int a6)
{
  int v6; // eax
  int v7; // edi
  _DWORD *v9; // ecx

  v6 = FormHeapAlloc(0xCu);
  v7 = v6;
  *(_DWORD *)(v6 + 4) = a6;
  *(_WORD *)v6 = a4;
  *(_WORD *)(v6 + 8) = a5;
  if ( a3 )
  {
    BSSimpleList_PushFront(a3, v6);
    return v7;
  }
  else
  {
    v9 = a1;
    if ( !a1 )
      v9 = a2;
    BSSimpleList_PushBack(v9, v6);
    return v7;
  }
}
