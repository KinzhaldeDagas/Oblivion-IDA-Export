// Verified wrapper lookup: follows linked-door references until it finds an ExtraLock wrapper, returning that wrapper or null when the chain ends without lock data.
ExtraLock *__fastcall TESObjectREFR_FindLockExtraOnLinkedDoorChain(TESObjectREFR *doorReference)
{
  ExtraDataList *p_baseExtraList; // esi
  ExtraLock *result; // eax
  TeleportData *Teleport; // eax
  TeleportData *v4; // esi

  while ( 1 ) /*0x4d77d2*/
  {
    p_baseExtraList = &doorReference->member.baseExtraList; /*0x4d77d2*/
    result = (ExtraLock *)BaseExtraList_GetExtraData(&doorReference->member.baseExtraList, kExtraData_Lock); /*0x4d77d9*/
    if ( result ) /*0x4d77e2*/
      break; /*0x4d77e2*/
    Teleport = ExtraDataList_GetTeleport(p_baseExtraList); /*0x4d77e6*/
    v4 = Teleport; /*0x4d77eb*/
    if ( !Teleport || !TeleportData_GetLinkedDoor(Teleport) ) /*0x4d77f3*/
      return 0; /*0x4d780c*/
    doorReference = TeleportData_GetLinkedDoor(v4); /*0x4d7804*/
  }
  return result; /*0x4d780e*/
}
