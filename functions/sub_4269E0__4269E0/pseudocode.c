void __thiscall sub_4269E0(ExtraDataList *this, float a2)
{
  BSExtraData *ExtraData; // eax
  float *v4; // esi
  float *v5; // eax
  float *v6; // eax
  BSExtraData *v7; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_CrimeGold); /*0x426a07*/
  v4 = (float *)ExtraData; /*0x426a0c*/
  if ( ExtraData ) /*0x426a10*/
  {
    *(float *)&ExtraData[1].vtbl = *(float *)&ExtraData[1].vtbl + a2; /*0x426a56*/
  }
  else
  {
    v5 = (float *)FormHeapAlloc(0x10u); /*0x426a14*/
    if ( v5 ) /*0x426a26*/
      v6 = sub_42A290(v5, a2); /*0x426a32*/
    else
      v6 = 0; /*0x426a39*/
    v4 = v6; /*0x426a46*/
    BaseExtraList_AddExtra(this, (BSExtraData *)v6); /*0x426a48*/
  }
  if ( v4[3] <= 0.0 ) /*0x426a63*/
  {
    v7 = BaseExtraList_GetExtraData(this, kExtraData_CrimeGold); /*0x426a69*/
    if ( v7 ) /*0x426a70*/
      BaseExtraList_RemoveExtraByPtr(this, (int)v7, 1); /*0x426a77*/
  }
}
