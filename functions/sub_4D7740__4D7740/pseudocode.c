// Verified: returns this reference's ExtraLockData* payload when present; otherwise, if its ExtraTeleport has a linked door, returns that linked reference's ExtraLockData* payload; null when neither exists. Directly supported by ExtraDataList_GetLock, ExtraDataList_GetTeleport, and TeleportData_GetLinkedDoor.
ExtraLockData *__thiscall TESObjectREFR_GetEffectiveDoorLock(TESObjectREFR *this)
{
  ExtraDataList *p_baseExtraList; // esi
  ExtraLockData *result; // eax
  TeleportData *Teleport; // eax
  TeleportData *v4; // esi
  TESObjectREFR *LinkedDoor; // eax

  p_baseExtraList = &this->member.baseExtraList; /*0x4d7741*/
  result = ExtraDataList_GetLock(&this->member.baseExtraList); /*0x4d7747*/
  if ( !result ) /*0x4d7750*/
  {
    Teleport = ExtraDataList_GetTeleport(p_baseExtraList); /*0x4d7754*/
    v4 = Teleport; /*0x4d7759*/
    if ( Teleport && TeleportData_GetLinkedDoor(Teleport) ) /*0x4d7761*/
    {
      LinkedDoor = TeleportData_GetLinkedDoor(v4); /*0x4d776c*/
      return ExtraDataList_GetLock(&LinkedDoor->member.baseExtraList); /*0x4d7776*/
    }
    else
    {
      return 0; /*0x4d777b*/
    }
  }
  return result; /*0x4d7771*/
}
