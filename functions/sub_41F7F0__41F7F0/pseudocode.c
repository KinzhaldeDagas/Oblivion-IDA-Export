BSExtraDataVtbl *__thiscall sub_41F7F0(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_StartingWorldOrCell); /*0x41f7f2*/
  if ( ExtraData ) /*0x41f7f9*/
    return ExtraData[1].vtbl; /*0x41f7fb*/
  else
    return 0; /*0x41f7ff*/
}
