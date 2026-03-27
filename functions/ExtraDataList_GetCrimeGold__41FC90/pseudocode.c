double __thiscall ExtraDataList_GetCrimeGold(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_CrimeGold);
  if ( ExtraData )
    return *(float *)&ExtraData[1].vtbl;
  else
    return 0.0;
}
