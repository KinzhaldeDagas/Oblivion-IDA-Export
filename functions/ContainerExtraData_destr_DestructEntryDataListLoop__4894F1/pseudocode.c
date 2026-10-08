int __usercall ContainerExtraData_destr_::DestructEntryDataListLoop@<eax>(
        unsigned int *a1@<ebx>,
        unsigned int **a2@<ebp>,
        int a3@<edi>,
        int a4,
        int a5,
        int a6)
{
  ExtraDataList *v6; // esi
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v10; // esi
  int v11; // edi

  do /*0x489513*/
  {
    v6 = *(ExtraDataList **)a3; /*0x4894f1*/
    if ( !*(_DWORD *)a3 ) /*0x4894f1*/
      break; /*0x4894f5*/
    a3 = *(_DWORD *)(a3 + 4); /*0x4894f7*/
    BaseExtraList_Clear(v6, 1); /*0x4894fe*/
    (*(void (__thiscall **)(ExtraDataList *, int))v6->vtbl)(v6, 1); /*0x48950f*/
  }
  while ( a3 ); /*0x489513*/
  v7 = (_DWORD *)*a1; /*0x489515*/
  if ( *a1 ) /*0x489515*/
  {
    if ( v7[1] ) /*0x48951b*/
    {
      do /*0x489535*/
      {
        v8 = *(_DWORD *)(v7[1] + 4); /*0x489524*/
        FormHeapFree(v7[1]); /*0x489528*/
        v7[1] = v8; /*0x489532*/
      }
      while ( v8 ); /*0x489535*/
    }
    *v7 = 0; /*0x489537*/
  }
  FormHeapFree(*a1); /*0x489540*/
  *a1 = 0; /*0x489546*/
  FormHeapFree((unsigned int)a1); /*0x48954c*/
  if ( a2 ) /*0x48955a*/
    return ContainerExtraData_destr_::DestructEntryLoop(a2, a4, a5, a6); /*0x48955a*/
  v10 = *(_DWORD **)a6; /*0x48955d*/
  if ( *(_DWORD *)(*(_DWORD *)a6 + 4) ) /*0x48955f*/
  {
    do /*0x489579*/
    {
      v11 = *(_DWORD *)(v10[1] + 4); /*0x489568*/
      FormHeapFree(v10[1]); /*0x48956c*/
      v10[1] = v11; /*0x489576*/
    }
    while ( v11 ); /*0x489579*/
  }
  return ContainerExtraData_destr_::MarkOwnerAsModified(a6, v10);
}
