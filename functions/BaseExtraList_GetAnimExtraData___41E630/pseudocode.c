BSExtraDataVtbl *__thiscall BaseExtraList_GetAnimExtraData_(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Anim); /*0x41e632*/
  if ( ExtraData ) /*0x41e639*/
    return ExtraData[1].vtbl; /*0x41e63b*/
  else
    return 0; /*0x41e63f*/
}
