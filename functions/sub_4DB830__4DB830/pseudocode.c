// Verified effective ownership-rank lookup order: this reference's XRNK, then linked door XRNK, then parent cell's required rank; missing rank defaults to zero. Fallout's TESObjectREFR::GetOwnershipRank inserts EncounterZone owner-rank between linked-door and parent-cell checks; Oblivion has no encounter-zone branch here.
SInt32 __thiscall TESObjectREFR_GetOwnershipRank(TESObjectREFR *reference)
{
  ExtraDataList *p_baseExtraList; // esi
  SInt32 result; // eax
  TeleportData *Teleport; // eax
  TeleportData *v5; // esi
  TESObjectREFR *LinkedDoor; // eax
  TESObjectCELL *parentCell; // ecx

  p_baseExtraList = &reference->member.baseExtraList; /*0x4db834*/
  result = ExtraDataList_GetRank(&reference->member.baseExtraList); /*0x4db839*/
  if ( result == 0xFFFFFFFF ) /*0x4db841*/
  {
    Teleport = ExtraDataList_GetTeleport(p_baseExtraList); /*0x4db845*/
    v5 = Teleport; /*0x4db84a*/
    if ( !Teleport /*0x4db86d*/
      || !TeleportData_GetLinkedDoor(Teleport)
      || (LinkedDoor = TeleportData_GetLinkedDoor(v5),
          result = ExtraDataList_GetRank(&LinkedDoor->member.baseExtraList),
          result == 0xFFFFFFFF) )
    {
      parentCell = reference->member.parentCell; /*0x4db86f*/
      if ( !parentCell ) /*0x4db874*/
        return 0; /*0x4db874*/
      result = TESObjectCELL_GetRequiredOwnerFactionRank(parentCell); /*0x4db876*/
      if ( result == 0xFFFFFFFF ) /*0x4db87e*/
        return 0; /*0x4db880*/
    }
  }
  return result; /*0x4db882*/
}
