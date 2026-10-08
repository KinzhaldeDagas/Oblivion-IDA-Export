double __thiscall ExtraDataList_GetHealthData(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Health); /*0x41e812*/
  if ( ExtraData ) /*0x41e819*/
    return *(float *)&ExtraData[1].vtbl; /*0x41e81b*/
  else
    return -1.0; /*0x41e81f*/
}
