UInt32 __thiscall Actor_GetGold(TESObjectREFR *this)
{
  UInt32 ItemCount; // ebx
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // esi
  TESForm *v4; // eax
  tListEntryData *objList; // esi

  ItemCount = 0; /*0x4de164*/
  if ( TESObjectREFR_GetContainer(this) ) /*0x4de166*/
  {
    ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(this); /*0x4de182*/
    v4 = TESDataHandler_LookupFormByID((TESForm *)0xF); /*0x4de184*/
    if ( v4 ) /*0x4de18b*/
      ItemCount = ContainerExtraData_GetItemCount(ContainerExtraDataForRef, v4); /*0x4de195*/
    objList = ContainerExtraDataForRef->objList; /*0x4de197*/
    if ( !objList->node.next && !objList->node.data ) /*0x4de19f*/
      ExtraDataList_RemoveContainerExtraData(&this->member.baseExtraList.vtbl); /*0x4de1a7*/
  }
  return ItemCount; /*0x4de1ad*/
}
