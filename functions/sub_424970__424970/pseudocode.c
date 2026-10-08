void __thiscall sub_424970(ExtraDataList *this, const void **a2)
{
  BSExtraData *ExtraData; // eax
  BSExtraData *v4; // esi
  ExtraRagDollData *v5; // eax
  _DWORD *v6; // eax
  unsigned int *v7; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_RagDollData); /*0x424997*/
  v4 = 0; /*0x42499c*/
  if ( ExtraData ) /*0x4249a0*/
  {
    if ( a2 ) /*0x4249a8*/
      sub_497370((unsigned int *)ExtraData[1].vtbl, a2); /*0x4249cd*/
    else
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x4249af*/
  }
  else if ( a2 ) /*0x4249ed*/
  {
    v5 = (ExtraRagDollData *)FormHeapAlloc(0x10u); /*0x4249f1*/
    if ( v5 ) /*0x424a03*/
      v4 = (BSExtraData *)ExtraRagDollData::ExtraRagDollData(v5); /*0x424a0c*/
    v6 = (_DWORD *)FormHeapAlloc(8u); /*0x424a18*/
    if ( v6 ) /*0x424a2e*/
      v7 = sub_497210(v6); /*0x424a32*/
    else
      v7 = 0; /*0x424a39*/
    v4[1].vtbl = (BSExtraDataVtbl *)v7; /*0x424a46*/
    sub_497370(v7, a2); /*0x424a49*/
    BaseExtraList_AddExtra(this, v4); /*0x424a51*/
  }
}
