BSExtraDataVtbl *__thiscall sub_41E670(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Poison|0x1);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
