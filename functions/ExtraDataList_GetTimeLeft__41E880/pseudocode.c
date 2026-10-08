double __thiscall ExtraDataList_GetTimeLeft(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_TimeLeft); /*0x41e882*/
  if ( ExtraData ) /*0x41e889*/
    return *(float *)&ExtraData[1].vtbl; /*0x41e88b*/
  else
    return -1.0; /*0x41e88f*/
}
