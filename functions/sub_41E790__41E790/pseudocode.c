BSExtraDataVtbl *__thiscall sub_41E790(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_OriginalReference);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
