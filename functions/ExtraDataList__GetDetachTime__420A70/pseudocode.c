BSExtraDataVtbl *__thiscall ExtraDataList__GetDetachTime(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_DetachTime);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
