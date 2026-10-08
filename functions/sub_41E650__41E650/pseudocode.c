// Returns the REFR_LIGHT payload from ExtraLight type 0x30; heavily used by TESObjectREF lighting and equipped-light paths.
BSExtraDataVtbl *__thiscall sub_41E650(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Light); /*0x41e652*/
  if ( ExtraData ) /*0x41e659*/
    return ExtraData[1].vtbl; /*0x41e65b*/
  else
    return 0; /*0x41e65f*/
}
