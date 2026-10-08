double __thiscall ExtraDataList_Scale(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Scale); /*0x41e942*/
  if ( ExtraData ) /*0x41e949*/
    return *(float *)&ExtraData[1].vtbl; /*0x41e94b*/
  else
    return 1.0; /*0x41e94f*/
}
