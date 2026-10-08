// Verified conflict-cleanup helper: clears XOWN, XGLB, and XRNK from the supplied reference and marks mask 0x380; if it has a linked door, clears the same three extras there and marks that reference modified too. TESObjectREFR_CopyFrom calls it when both the copied reference and linked door carry ownership, then logs that conflicting shared data was removed.
void __thiscall TESObjectREFR_ClearOwnershipOnSelfAndLinkedDoor(TESObjectREFR *reference)
{
  ExtraDataList *p_baseExtraList; // esi
  TeleportData *Teleport; // eax
  TeleportData *v4; // esi
  TESObjectREFR *LinkedDoor; // eax
  TESObjectREFR *v6; // eax
  TESObjectREFR *v7; // eax
  TESObjectREFR *v8; // eax

  p_baseExtraList = &reference->member.baseExtraList; /*0x4db904*/
  ExtraDataList::SetOrRemoveExtraOwnership(&reference->member.baseExtraList, 0); /*0x4db90b*/
  ExtraDataList_SetGlobal(p_baseExtraList, 0); /*0x4db914*/
  ExtraDataList_SetRank(p_baseExtraList, 0xFFFFFFFF); /*0x4db91d*/
  reference->vtbl->super.MarkAsModified((TESForm *)reference, 0x380); /*0x4db92e*/
  Teleport = ExtraDataList_GetTeleport(p_baseExtraList); /*0x4db932*/
  v4 = Teleport; /*0x4db937*/
  if ( Teleport ) /*0x4db93b*/
  {
    if ( TeleportData_GetLinkedDoor(Teleport) ) /*0x4db93f*/
    {
      LinkedDoor = TeleportData_GetLinkedDoor(v4); /*0x4db94a*/
      ExtraDataList::SetOrRemoveExtraOwnership(&LinkedDoor->member.baseExtraList, 0); /*0x4db954*/
      v6 = TeleportData_GetLinkedDoor(v4); /*0x4db95b*/
      ExtraDataList_SetGlobal(&v6->member.baseExtraList, 0); /*0x4db965*/
      v7 = TeleportData_GetLinkedDoor(v4); /*0x4db96c*/
      ExtraDataList_SetRank(&v7->member.baseExtraList, 0xFFFFFFFF); /*0x4db976*/
      v8 = TeleportData_GetLinkedDoor(v4); /*0x4db97d*/
      v8->vtbl->super.MarkAsModified((TESForm *)v8, 0x380); /*0x4db98e*/
    }
  }
}
