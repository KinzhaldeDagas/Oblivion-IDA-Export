BSExtraDataVtbl *__thiscall ExtraDataList_GetExtraScript(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Script); /*0x41e902*/
  if ( ExtraData ) /*0x41e909*/
    return ExtraData[1].vtbl; /*0x41e90b*/
  else
    return 0; /*0x41e90f*/
}
