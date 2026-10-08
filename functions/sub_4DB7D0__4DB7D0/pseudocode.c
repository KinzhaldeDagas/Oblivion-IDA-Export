// Verified effective ownership-condition global lookup: use this reference's XGLB first, then the linked door's XGLB, then the parent cell's XGLB. Fallout's TESObjectREFR::GetOwnershipGlobal has the same fallback sequence. This is distinct from TESObjectREFR_GetOwner's owner-form inheritance.
TESGlobal *__thiscall TESObjectREFR_GetOwnershipGlobal(TESObjectREFR *reference)
{
  ExtraDataList *p_baseExtraList; // edi
  TESGlobal *result; // eax
  TESGlobal *v4; // esi
  TeleportData *Teleport; // eax
  TeleportData *v6; // edi
  TESObjectREFR *LinkedDoor; // eax
  TESObjectCELL *parentCell; // ecx

  p_baseExtraList = &reference->member.baseExtraList; /*0x4db7d5*/
  result = ExtraDataList_GetGlobal(&reference->member.baseExtraList); /*0x4db7da*/
  v4 = result; /*0x4db7df*/
  if ( !result ) /*0x4db7e3*/
  {
    Teleport = ExtraDataList_GetTeleport(p_baseExtraList); /*0x4db7e7*/
    v6 = Teleport; /*0x4db7ec*/
    if ( !Teleport /*0x4db810*/
      || !TeleportData_GetLinkedDoor(Teleport)
      || (LinkedDoor = TeleportData_GetLinkedDoor(v6),
          result = ExtraDataList_GetGlobal(&LinkedDoor->member.baseExtraList),
          (v4 = result) == 0) )
    {
      parentCell = reference->member.parentCell; /*0x4db812*/
      if ( parentCell ) /*0x4db817*/
        return ExtraDataList_GetGlobal(&parentCell->members.extraData); /*0x4ca983*/
      else
        return v4; /*0x4db821*/
    }
  }
  return result; /*0x4db823*/
}
