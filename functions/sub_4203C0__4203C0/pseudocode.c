BSExtraDataVtbl *__thiscall sub_4203C0(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_ItemDropper);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
