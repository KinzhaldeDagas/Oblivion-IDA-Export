// Returns the form stored in ExtraLevCreaModifier type 0x24.
BSExtraDataVtbl *__thiscall ExtraDataList_GetLevCreaModifier(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_LevCreaModifier); /*0x420762*/
  if ( ExtraData ) /*0x420769*/
    return ExtraData[1].vtbl; /*0x42076b*/
  else
    return 0; /*0x42076f*/
}
