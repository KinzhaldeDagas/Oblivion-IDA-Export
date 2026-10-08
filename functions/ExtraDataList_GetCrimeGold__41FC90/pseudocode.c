double __thiscall ExtraDataList_GetCrimeGold(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_CrimeGold); /*0x41fc92*/
  if ( ExtraData ) /*0x41fc99*/
    return *(float *)&ExtraData[1].vtbl; /*0x41fc9b*/
  else
    return 0.0; /*0x41fc9f*/
}
