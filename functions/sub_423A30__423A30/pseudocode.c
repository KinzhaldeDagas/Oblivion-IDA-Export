void __thiscall sub_423A30(ExtraDataList *this, float a2)
{
  BSExtraData *ExtraData; // eax
  float *v4; // eax
  float *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Scale); /*0x423a56*/
  if ( ExtraData ) /*0x423a61*/
  {
    if ( a2 == 1.0 ) /*0x423a70*/
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x423a79*/
    else
      *(float *)&ExtraData[1].vtbl = a2; /*0x423a91*/
  }
  else if ( 1.0 != a2 ) /*0x423ab0*/
  {
    v4 = (float *)FormHeapAlloc(0x10u); /*0x423ab4*/
    if ( v4 ) /*0x423aca*/
      v5 = sub_429FB0(v4, a2); /*0x423ad6*/
    else
      v5 = 0; /*0x423add*/
    BaseExtraList_AddExtra(this, (BSExtraData *)v5); /*0x423aea*/
  }
}
