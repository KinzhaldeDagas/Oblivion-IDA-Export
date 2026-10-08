// Returns the secondary/spell-effect REFR_LIGHT payload from extra type 0x49; TESObjectREF_UpdateLights processes it separately from normal ExtraLight.
BSExtraDataVtbl *__thiscall ExtraDataList_GetSpellEffectLight(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Poison|0x1); /*0x41e672*/
  if ( ExtraData ) /*0x41e679*/
    return ExtraData[1].vtbl; /*0x41e67b*/
  else
    return 0; /*0x41e67f*/
}
