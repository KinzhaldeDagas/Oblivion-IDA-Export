BSExtraDataVtbl *__thiscall sub_420760(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_LevCreaModifier);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
