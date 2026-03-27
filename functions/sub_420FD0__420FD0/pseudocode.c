BSExtraDataVtbl *__thiscall sub_420FD0(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_LastFinishedSequence);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
