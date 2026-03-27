double __thiscall ExtraDataList_GetHealthData(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Health);
  if ( ExtraData )
    return *(float *)&ExtraData[1].vtbl;
  else
    return -1.0;
}
