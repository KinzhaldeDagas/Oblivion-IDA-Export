UInt32 __thiscall Actor_GetGold(TESObjectREFR *this)
{
  UInt32 ItemCount; // ebx
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // esi
  TESForm *v5; // eax
  tListEntryData *objList; // esi

  ItemCount = 0;
  if ( TESObjectREFR_GetContainer(this) )
  {
    ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(this);
    v5 = TESDataHandler_LookupFormByID((TESForm *)0xF);
    if ( v5 )
      ItemCount = ContainerExtraData_GetItemCount(ContainerExtraDataForRef, v5);
    objList = ContainerExtraDataForRef->objList;
    if ( !objList->node.next && !objList->node.data )
      ExtraDataList_RemoveContainerExtraData(&this->member.baseExtraList.vtbl);
  }
  return ItemCount;
}
