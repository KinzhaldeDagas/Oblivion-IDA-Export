void __thiscall sub_424870(ExtraDataList *this, int a2)
{
  BSExtraData *ExtraData; // eax
  BSExtraData *v4; // esi
  ExtraRagDollData *v5; // eax
  _DWORD *v6; // eax
  unsigned __int8 *v7; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_RagDollData); /*0x424897*/
  v4 = 0; /*0x42489c*/
  if ( ExtraData ) /*0x4248a0*/
  {
    if ( a2 ) /*0x4248a8*/
      sub_497950((unsigned __int8 *)ExtraData[1].vtbl, a2); /*0x4248cd*/
    else
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x4248af*/
  }
  else if ( a2 ) /*0x4248ed*/
  {
    v5 = (ExtraRagDollData *)FormHeapAlloc(0x10u); /*0x4248f1*/
    if ( v5 ) /*0x424903*/
      v4 = (BSExtraData *)ExtraRagDollData::ExtraRagDollData(v5); /*0x42490c*/
    v6 = (_DWORD *)FormHeapAlloc(8u); /*0x424918*/
    if ( v6 ) /*0x42492e*/
      v7 = (unsigned __int8 *)sub_497210(v6); /*0x424932*/
    else
      v7 = 0; /*0x424939*/
    v4[1].vtbl = (BSExtraDataVtbl *)v7; /*0x424946*/
    sub_497950(v7, a2); /*0x424949*/
    BaseExtraList_AddExtra(this, v4); /*0x424951*/
  }
}
