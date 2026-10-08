EntryData *__thiscall GetInventoryEntryOfItem(TESObjectREFR *this, TESForm *a2, char a3)
{
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax

  if ( !TESObjectREFR_GetContainer(this) ) /*0x4d88f6*/
    return 0; /*0x4d893d*/
  if ( a3 ) /*0x4d8904*/
    return (EntryData *)ContainerExtraData_GetEntryForItem( /*0x4d8918*/
                          (ExtraContainerChanges_Data *)g_TESDataHandler->containerExtraData,
                          a2);
  ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(this); /*0x4d8924*/
  return (EntryData *)ContainerExtraData_GetEntryForItem(ContainerExtraDataForRef, a2); /*0x4d891d*/
}
