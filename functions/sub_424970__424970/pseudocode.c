void __thiscall sub_424970(ExtraDataList *this, const void **a2)
{
  BSExtraData *ExtraData; // eax
  BSExtraData *v4; // esi
  ExtraRagDollData *v5; // eax
  _DWORD *v6; // eax
  unsigned int *v7; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_RagDollData);
  v4 = 0;
  if ( ExtraData )
  {
    if ( a2 )
      sub_497370((unsigned int *)ExtraData[1].vtbl, a2);
    else
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
  }
  else if ( a2 )
  {
    v5 = (ExtraRagDollData *)FormHeapAlloc(0x10u);
    if ( v5 )
      v4 = (BSExtraData *)ExtraRagDollData::ExtraRagDollData(v5);
    v6 = (_DWORD *)FormHeapAlloc(8u);
    if ( v6 )
      v7 = sub_497210(v6);
    else
      v7 = 0;
    v4[1].vtbl = (BSExtraDataVtbl *)v7;
    sub_497370(v7, a2);
    BaseExtraList_AddExtra(this, v4);
  }
}
