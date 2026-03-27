BSExtraDataVtbl *__thiscall sub_41FC70(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_TresPassPackage);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
