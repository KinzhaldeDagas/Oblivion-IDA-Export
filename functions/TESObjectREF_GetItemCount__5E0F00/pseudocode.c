// TESObjectREFR inventory count accessor: returns 0 when the reference has no container or no ContainerChanges; otherwise asks ContainerExtraData_GetItemCount(this, item), which combines base TESContainer count with EntryData.countDelta. Exact ABI is thiscall (TESObjectREFR *this, TESForm *item).
int __thiscall TESObjectREFR_GetItemCount(TESObjectREFR *this, TESForm *item)
{
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax

  if ( TESObjectREFR_GetContainer(this) /*0x5e0f1b*/
    && (ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(this)) != 0 )
  {
    return ContainerExtraData_GetItemCount(ContainerExtraDataForRef, item); /*0x5e0f21*/
  }
  else
  {
    return 0; /*0x5e0f26*/
  }
}
