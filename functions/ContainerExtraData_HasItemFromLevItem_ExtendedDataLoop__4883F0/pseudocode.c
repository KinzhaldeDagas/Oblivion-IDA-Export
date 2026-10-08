int __userpurge ContainerExtraData_HasItemFromLevItem_::ExtendedDataLoop@<eax>(
        int a1@<edi>,
        int esi0@<esi>,
        char a3@<bl>,
        int a4@<ebp>,
        int a5)
{
  if ( !*(_DWORD *)esi0 ) /*0x4883f0*/
    return ContainerExtraData_HasItemFromLevItem_::ItemLoop_next(a1, a3, a4, a5); /*0x4883f4*/
  ExtraDataList_GetExtraLeveledItem(*(ExtraDataList **)esi0); /*0x4883f6*/
  return ContainerExtraData_HasItemFromLevItem_::ExtendedDataLoop_next(a1, esi0, a5);
}
