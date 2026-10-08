BSExtraDataVtbl *__thiscall ExtraDataList_GetPoison(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Poison); /*0x41e8e2*/
  if ( ExtraData ) /*0x41e8e9*/
    return ExtraData[1].vtbl; /*0x41e8eb*/
  else
    return 0; /*0x41e8ef*/
}
