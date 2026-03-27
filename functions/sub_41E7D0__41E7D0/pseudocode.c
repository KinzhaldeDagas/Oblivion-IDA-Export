BSExtraDataVtbl *__thiscall sub_41E7D0(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Global);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
