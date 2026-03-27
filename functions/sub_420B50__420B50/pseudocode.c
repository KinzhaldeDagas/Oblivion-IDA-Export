BSExtraDataVtbl *__thiscall sub_420B50(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_SeenData);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
