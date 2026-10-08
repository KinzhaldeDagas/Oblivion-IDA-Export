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

  v6 = FormHeapAlloc(0xCu); /*0x46cc1b*/
  v7 = v6; /*0x46cc29*/
  *(_DWORD *)(v6 + 4) = a6; /*0x46cc35*/
  *(_WORD *)v6 = a4; /*0x46cc38*/
  *(_WORD *)(v6 + 8) = a5; /*0x46cc3b*/
  if ( a3 ) /*0x46cc40*/
  {
    BSSimpleList_PushFront(a3, v6); /*0x46cc44*/
    return v7; /*0x46cc49*/
  }
  else
  {
    v9 = a1; /*0x46cc54*/
    if ( !a1 ) /*0x46cc56*/
      v9 = a2; /*0x46cc58*/
    BSSimpleList_PushBack(v9, v6); /*0x46cc5a*/
    return v7; /*0x46cc5f*/
  }
}
