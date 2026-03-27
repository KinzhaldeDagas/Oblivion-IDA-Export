void __thiscall sub_4269E0(ExtraDataList *this, float a2)
{
  BSExtraData *ExtraData; // eax
  float *v4; // esi
  float *v5; // eax
  float *v6; // eax
  BSExtraData *v7; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_CrimeGold);
  v4 = (float *)ExtraData;
  if ( ExtraData )
  {
    *(float *)&ExtraData[1].vtbl = *(float *)&ExtraData[1].vtbl + a2;
  }
  else
  {
    v5 = (float *)FormHeapAlloc(0x10u);
    if ( v5 )
      v6 = sub_42A290(v5, a2);
    else
      v6 = 0;
    v4 = v6;
    BaseExtraList_AddExtra(this, (BSExtraData *)v6);
  }
  if ( v4[3] <= 0.0 )
  {
    v7 = BaseExtraList_GetExtraData(this, kExtraData_CrimeGold);
    if ( v7 )
      BaseExtraList_RemoveExtraByPtr(this, (int)v7, 1);
  }
}
