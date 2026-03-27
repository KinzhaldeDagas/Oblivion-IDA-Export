BSExtraDataVtbl *__thiscall sub_41E960(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax
  BSExtraDataVtbl *result; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_ExtraSound);
  if ( !ExtraData )
    return 0;
  result = ExtraData[1].vtbl;
  if ( !result )
    return 0;
  return result;
}
