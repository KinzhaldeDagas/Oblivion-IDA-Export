// Verified linked-door marker resolver: read this door's TeleportData, follow its linkedDoor pointer, fetch the linked door's TeleportData, then return a pointer to that record's xyz fields at +4. Return g_zeroNiPoint3 when the source data or linked-door target is missing.
NiPoint3 *__thiscall TESObjectREFR_GetLinkedTeleportMarkerPosition(TESObjectREFR *this)
{
  TeleportData *Teleport; // eax
  TESObjectREFR *LinkedDoor; // eax
  char *v3; // eax

  Teleport = ExtraDataList_GetTeleport(&this->member.baseExtraList); /*0x4d76f3*/
  if ( Teleport ) /*0x4d76fa*/
  {
    LinkedDoor = TeleportData_GetLinkedDoor(Teleport); /*0x4d76fe*/
    if ( LinkedDoor ) /*0x4d7705*/
    {
      v3 = (char *)ExtraDataList_GetTeleport(&LinkedDoor->member.baseExtraList); /*0x4d770a*/
      if ( v3 ) /*0x4d7711*/
        return (NiPoint3 *)EmbeddedList_GetHead(v3); /*0x4d7715*/
    }
  }
  else
  {
    EmbeddedList_GetHead(0); /*0x4d771c*/
  }
  return &g_zeroNiPoint3; /*0x4d7726*/
}
