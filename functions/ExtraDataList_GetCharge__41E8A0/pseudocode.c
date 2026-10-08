double __thiscall ExtraDataList_GetCharge(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Charge); /*0x41e8a2*/
  if ( ExtraData ) /*0x41e8a9*/
    return *(float *)&ExtraData[1].vtbl; /*0x41e8ab*/
  else
    return -1.0; /*0x41e8af*/
}
