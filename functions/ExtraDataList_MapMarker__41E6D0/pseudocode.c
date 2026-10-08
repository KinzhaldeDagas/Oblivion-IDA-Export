BSExtraDataVtbl *__thiscall ExtraDataList_MapMarker(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_MapMarker); /*0x41e6d2*/
  if ( ExtraData ) /*0x41e6d9*/
    return ExtraData[1].vtbl; /*0x41e6db*/
  else
    return 0; /*0x41e6df*/
}
