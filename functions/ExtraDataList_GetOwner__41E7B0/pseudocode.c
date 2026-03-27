BSExtraDataVtbl *__thiscall ExtraDataList_GetOwner(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Ownership);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
