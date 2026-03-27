BSExtraDataVtbl *__thiscall ExtraDataList_MapMarker(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_MapMarker);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
