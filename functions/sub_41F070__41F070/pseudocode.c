// Returns the reference stored in ExtraHeadingTarget, or null.
BSExtraDataVtbl *__thiscall ExtraDataList_GetHeadingTarget(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_HeadingTarget); /*0x41f072*/
  if ( ExtraData ) /*0x41f079*/
    return ExtraData[1].vtbl; /*0x41f07b*/
  else
    return 0; /*0x41f07f*/
}
