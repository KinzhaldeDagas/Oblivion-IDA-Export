BSExtraDataVtbl *__thiscall sub_4212C0(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_SavedMovementData);
  if ( ExtraData )
    return ExtraData[2].vtbl;
  else
    return 0;
}
