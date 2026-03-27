int __userpurge ContainerExtraData_AddEntry_::MergeEntryToExistingEntry@<eax>(
        _DWORD *a1@<ebx>,
        _DWORD *a2@<ebp>,
        _DWORD *a3@<esi>,
        int *a4@<edi>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  _DWORD *v11; // eax

  if ( a3 == a2 )
    return ContainerExtraData_AddEntry_::AddArgumentEntryToEntryList(a4, a5, a6);
  a3[1] += a1[1];
  v11 = (_DWORD *)*a1;
  if ( (_DWORD *)*a1 != a2 && (_DWORD *)v11[1] == a2 && (_DWORD *)*v11 == a2 )
    JUMPOUT(0x48AFED);
  if ( v11 == a2 )
    return ContainerExtraData_AddEntry_::DestroyArgEntry(a5, a6);
  else
    return ContainerExtraData_AddEntry_::MergeEntryDataTableLoop_(a5, a6, a7, *a3, a9, v11, a11);
}
