double __thiscall ExtraDataList_GetTimeLeft(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_TimeLeft);
  if ( ExtraData )
    return *(float *)&ExtraData[1].vtbl;
  else
    return -1.0;
}
