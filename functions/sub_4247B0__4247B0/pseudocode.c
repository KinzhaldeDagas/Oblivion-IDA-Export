void __thiscall sub_4247B0(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *ExtraData; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_PersistentCell); /*0x4247d6*/
  if ( ExtraData ) /*0x4247dd*/
  {
    if ( a2 ) /*0x4247e5*/
      ExtraData[1].vtbl = a2; /*0x424805*/
    else
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x4247ec*/
  }
  else if ( a2 ) /*0x424822*/
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u); /*0x424826*/
    if ( v4 ) /*0x42483c*/
      v5 = (BSExtraData *)sub_42A2E0(v4, (int)a2); /*0x424841*/
    else
      v5 = 0; /*0x424848*/
    BaseExtraList_AddExtra(this, v5); /*0x424855*/
  }
}
