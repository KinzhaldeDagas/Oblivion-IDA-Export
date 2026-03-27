BSExtraDataVtbl *__thiscall ExtraDataList_GetPoison(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Poison);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
