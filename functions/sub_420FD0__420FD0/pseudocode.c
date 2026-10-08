// Returns the pointer payload of ExtraLastFinishedSequence (type 0x4A), or null.
BSExtraDataVtbl *__thiscall ExtraDataList_GetLastFinishedSequence(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_LastFinishedSequence); /*0x420fd2*/
  if ( ExtraData ) /*0x420fd9*/
    return ExtraData[1].vtbl; /*0x420fdb*/
  else
    return 0; /*0x420fdf*/
}
