int __usercall ContainerExtraData_destr_::DestructEntryDataListLoop@<eax>(
        unsigned int *a1@<ebx>,
        int **a2@<ebp>,
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

  do
  {
    v6 = *(ExtraDataList **)a3;
    if ( !*(_DWORD *)a3 )
      break;
    a3 = *(_DWORD *)(a3 + 4);
    BaseExtraList_Clear(v6, 1);
    (*(void (__thiscall **)(ExtraDataList *, int))v6->vtbl)(v6, 1);
  }
  while ( a3 );
  v7 = (_DWORD *)*a1;
  if ( *a1 )
  {
    if ( v7[1] )
    {
      do
      {
        v8 = *(_DWORD *)(v7[1] + 4);
        FormHeapFree(v7[1]);
        v7[1] = v8;
      }
      while ( v8 );
    }
    *v7 = 0;
  }
  FormHeapFree(*a1);
  *a1 = 0;
  FormHeapFree((unsigned int)a1);
  if ( a2 )
    return ContainerExtraData_destr_::DestructEntryLoop(a2, a4, a5, a6);
  v10 = *(_DWORD **)a6;
  if ( *(_DWORD *)(*(_DWORD *)a6 + 4) )
  {
    do
    {
      v11 = *(_DWORD *)(v10[1] + 4);
      FormHeapFree(v10[1]);
      v10[1] = v11;
    }
    while ( v11 );
  }
  return ContainerExtraData_destr_::MarkOwnerAsModified(a6, v10);
}
