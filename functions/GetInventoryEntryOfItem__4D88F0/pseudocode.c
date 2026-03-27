EntryData *__thiscall GetInventoryEntryOfItem(TESObjectREFR *this, TESForm *a2, char a3)
{
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax

  if ( !TESObjectREFR_GetContainer(this) )
    return 0;
  if ( a3 )
    return (EntryData *)ContainerExtraData_GetEntryForItem(*(ExtraContainerChanges_Data **)(TESDataHandler + 0xCDC), a2);
  ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(this);
  return (EntryData *)ContainerExtraData_GetEntryForItem(ContainerExtraDataForRef, a2);
}
