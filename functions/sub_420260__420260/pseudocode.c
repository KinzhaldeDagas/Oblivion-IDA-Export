BSExtraDataVtbl *__thiscall sub_420260(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_EnableStateParent);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
