int __userpurge ContainerExtraData_HasItemFromLevItem_::ExtendedDataLoop_next@<eax>(
        int a1@<edi>,
        int esi0@<esi>,
        int a3)
{
  int v3; // esi

  v3 = *(_DWORD *)(esi0 + 4);
  if ( v3 )
    return ContainerExtraData_HasItemFromLevItem_::ExtendedDataLoop(a1, v3, a3);
  else
    return ContainerExtraData_HasItemFromLevItem_::ItemLoop_next(a1, a3);
}
