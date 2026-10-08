int __userpurge ContainerExtraData_HasItemFromLevItem_::ExtendedDataLoop_next@<eax>(
        int a1@<edi>,
        int esi0@<esi>,
        char a3@<bl>,
        int a4@<ebp>,
        int a5)
{
  int v5; // esi

  v5 = *(_DWORD *)(esi0 + 4); /*0x488401*/
  if ( v5 ) /*0x488406*/
    return ContainerExtraData_HasItemFromLevItem_::ExtendedDataLoop(a1, v5, a3, a4, a5); /*0x488406*/
  else
    return ContainerExtraData_HasItemFromLevItem_::ItemLoop_next(a1, a3, a4, a5); /*0x488407*/
}
