// Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
TESObjectREFR *__thiscall TeleportData_GetLinkedDoor(TeleportData *this)
{
  return this->linkedDoor; /*0x42b412*/
}
