BSExtraData *__thiscall sub_423C90(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  BSExtraData *v4; // esi
  _BYTE *v5; // eax
  BSExtraData *v6; // eax

  if ( !a2 ) /*0x423cbd*/
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, kExtraData_StartingWorldOrCell); /*0x423cbf*/
  result = BaseExtraList_GetExtraData(this, kExtraData_StartingWorldOrCell); /*0x423cd9*/
  v4 = result; /*0x423cde*/
  if ( !result ) /*0x423ce2*/
  {
    v5 = (_BYTE *)FormHeapAlloc(0x10u); /*0x423ce6*/
    if ( v5 ) /*0x423cf8*/
      v6 = (BSExtraData *)sub_429950(v5); /*0x423cfc*/
    else
      v6 = 0; /*0x423d03*/
    v4 = v6; /*0x423d10*/
    result = (BSExtraData *)BaseExtraList_AddExtra(this, v6); /*0x423d12*/
  }
  v4[1].vtbl = a2; /*0x423d17*/
  return result; /*0x423cc4*/
}
