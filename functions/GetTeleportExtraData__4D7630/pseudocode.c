// Verified TESObjectREFR_GetTeleportData returns ExtraDataList_GetTeleport from this reference's baseExtraList: the TeleportData* payload stored in ExtraTeleport+0x0C.
TeleportData *__thiscall TESObjectREFR_GetTeleportData(TESObjectREFR *this)
{
  return ExtraDataList_GetTeleport(&this->member.baseExtraList);
}
