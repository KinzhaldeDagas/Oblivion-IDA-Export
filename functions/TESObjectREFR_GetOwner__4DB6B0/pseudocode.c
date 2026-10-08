// Verified owner-resolution order: return this reference's direct XOWN; for non-actors only, try a linked door's XOWN; if still absent, inherit the parent cell's direct owner except for furniture, doors, and activators. Actors never inherit linked-door/cell ownership. Fallout's analogous GetOwner includes an encounter-zone-owner fallback before parent-cell handling; Oblivion's body has no such branch.
TESForm *__thiscall TESObjectREFR_GetOwner(TESObjectREFR *reference)
{
  ExtraDataList *p_baseExtraList; // edi
  TESForm *Owner; // ebx
  TeleportData *Teleport; // eax
  TeleportData *v5; // edi
  TESObjectREFR *LinkedDoor; // eax
  TESObjectCELL *parentCell; // ecx

  p_baseExtraList = &reference->member.baseExtraList; /*0x4db6b5*/
  Owner = ExtraDataList_GetOwner(&reference->member.baseExtraList); /*0x4db6bf*/
  if ( !reference->vtbl->IsActor(reference) && !Owner ) /*0x4db6d3*/
  {
    Teleport = ExtraDataList_GetTeleport(p_baseExtraList); /*0x4db6d7*/
    v5 = Teleport; /*0x4db6dc*/
    if ( !Teleport /*0x4db700*/
      || !TeleportData_GetLinkedDoor(Teleport)
      || (LinkedDoor = TeleportData_GetLinkedDoor(v5),
          (Owner = ExtraDataList_GetOwner(&LinkedDoor->member.baseExtraList)) == 0) )
    {
      if ( (!reference->member.baseForm || reference->vtbl->GetBaseForm(reference)->member.type != kFormType_Furniture) /*0x4db73c*/
        && reference->vtbl->GetBaseForm(reference)->member.type != kFormType_Door
        && reference->vtbl->GetBaseForm(reference)->member.type != kFormType_Activator )
      {
        parentCell = reference->member.parentCell; /*0x4db73e*/
        if ( parentCell ) /*0x4db743*/
          return TESObjectCELL_GetOwner(parentCell); /*0x4db74a*/
      }
    }
  }
  return Owner; /*0x4db74c*/
}
