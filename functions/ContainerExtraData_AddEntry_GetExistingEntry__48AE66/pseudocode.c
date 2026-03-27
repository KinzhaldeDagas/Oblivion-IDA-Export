int __usercall ContainerExtraData_AddEntry_::GetExistingEntry@<eax>(
        int *a1@<ebx>,
        int a2@<ebp>,
        _DWORD **edi0@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  _DWORD *v12; // eax
  int v14; // [esp+0h] [ebp-8h]
  int v15; // [esp+18h] [ebp+10h]

  ContainerExtraData_GetEntryForForm(edi0, a1[2], 1, v14);
  v11 = v10;
  v15 = a1[2];
  v12 = (_DWORD *)*a1;
  if ( *a1 != a2 && v12[1] == a2 && *v12 == a2 )
  {
    FormHeapFree((unsigned int)v12);
    *a1 = a2;
  }
  return ContainerExtraData_AddEntry_::MergeEntryToExistingEntry(a1, a2, v11, a4, a5, (int)v11, v15, a8, a9, a10);
}
