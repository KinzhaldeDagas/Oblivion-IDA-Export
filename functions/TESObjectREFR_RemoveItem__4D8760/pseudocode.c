// Removes an inventory item/count, optionally transferring it to destination or placing it at destinationPosition/destinationRotation. Native thiscall has ten stack arguments.
int __thiscall TESObjectREFR_RemoveItem(
        TESObjectREFR *this,
        TESForm *item,
        ExtraDataList *extraList,
        int count,
        int arg3,
        int arg4,
        TESObjectREFR *destination,
        NiPoint3 *destinationPosition,
        NiPoint3 *destinationRotation,
        char arg8,
        char arg9)
{
  double v11; // st5
  double v12; // st6
  int v13; // edi
  double v16; // st7
  int ***ContainerExtraDataForRef; // eax
  int v18; // eax

  v13 = 0; /*0x4d8767*/
  if ( !item ) /*0x4d876d*/
    return 0; /*0x4d8771*/
  if ( TESObjectREFR_GetContainer(this) ) /*0x4d8778*/
  {
    v16 = Script_AddEventToExtraScript(this, extraList, 4); /*0x4d878b*/
    ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(this); /*0x4d8792*/
    ContainerExtraData_RemoveForm( /*0x4d87c7*/
      ContainerExtraDataForRef,
      v11,
      v16,
      v12,
      this,
      (int)item,
      arg3,
      count,
      (unsigned __int8 *)extraList,
      arg4,
      (TESForm *)destination,
      &destinationPosition->x,
      destinationRotation,
      arg8,
      arg9);
    return v18; /*0x4d87cc*/
  }
  return v13; /*0x4d876f*/
}
