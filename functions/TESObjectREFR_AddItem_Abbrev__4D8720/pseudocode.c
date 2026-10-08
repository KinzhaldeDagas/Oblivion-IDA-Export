// Short TESObjectREFR AddItem wrapper: emits the inventory event and delegates item, ExtraDataList, and count to ContainerExtraData_AddItem.
void __thiscall TESObjectREFR_AddItem_Abbrev(TESObjectREFR *this, TESForm *item, ExtraDataList *extraList, int count)
{
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax

  if ( TESObjectREFR_GetContainer(this) ) /*0x4d8724*/
  {
    Script_AddEventToExtraScript(this, extraList, 1); /*0x4d8738*/
    ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(this); /*0x4d873f*/
    ContainerExtraData_AddItem(ContainerExtraDataForRef, item, extraList, count); /*0x4d8754*/
  }
}
