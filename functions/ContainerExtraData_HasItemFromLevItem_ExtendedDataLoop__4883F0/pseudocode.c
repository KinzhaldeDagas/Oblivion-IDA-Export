int __userpurge ContainerExtraData_HasItemFromLevItem_::ExtendedDataLoop@<eax>(int a1@<edi>, int esi0@<esi>, int a3)
{
  if ( !*(_DWORD *)esi0 )
    return ContainerExtraData_HasItemFromLevItem_::ItemLoop_next(a1, a3);
  ExtraDataList_GetExtraLeveledItem(*(ExtraDataList **)esi0);
  return ContainerExtraData_HasItemFromLevItem_::ExtendedDataLoop_next(a1, esi0, a3);
}
