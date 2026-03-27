BSExtraDataVtbl *__thiscall sub_41F070(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_HeadingTarget);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
