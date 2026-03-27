BSExtraDataVtbl *__thiscall sub_41E650(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Light);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
