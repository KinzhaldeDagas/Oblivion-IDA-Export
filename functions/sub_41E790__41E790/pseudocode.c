// Return the TESObjectREFR payload stored in ExtraOriginalReference type 0x26. It cannot redirect an AMMO-keyed inventory entry to a WEAP form.
TESObjectREFR *__thiscall ExtraDataList_GetOriginalReference(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_OriginalReference); /*0x41e792*/
  if ( ExtraData ) /*0x41e799*/
    return (TESObjectREFR *)ExtraData[1].vtbl; /*0x41e79b*/
  else
    return 0; /*0x41e79f*/
}
