// Returns the sound payload stored in ExtraSound, with null checks for both the extra and its payload.
BSExtraDataVtbl *__thiscall ExtraDataList_GetExtraSound(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax
  BSExtraDataVtbl *result; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_ExtraSound); /*0x41e962*/
  if ( !ExtraData ) /*0x41e969*/
    return 0; /*0x41e969*/
  result = ExtraData[1].vtbl; /*0x41e96b*/
  if ( !result ) /*0x41e970*/
    return 0; /*0x41e972*/
  return result; /*0x41e974*/
}
