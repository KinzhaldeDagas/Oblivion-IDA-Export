int __userpurge ContainerExtraData_AddEntry_::MergeEntryDataTableLoop_Next@<eax>(
        int a1@<ebp>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v9; // [esp+18h] [ebp+18h]

  v9 = *(_DWORD *)(a7 + 4);
  if ( v9 == a1 )
    return ContainerExtraData_AddEntry_::DestroyArgEntry(a2, a3);
  else
    return ContainerExtraData_AddEntry_::MergeEntryDataTableLoop(a2, a3, a4, a5, a6, v9, a8);
}
