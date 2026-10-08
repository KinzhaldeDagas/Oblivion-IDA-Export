// Creates or updates ExtraEnableStateParent; a null parent removes extra type 0x3F.
BSExtraData *__thiscall ExtraDataList_SetEnableStateParent(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  if ( !a2 ) /*0x4202ac*/
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, 0x3Fu); /*0x42031a*/
  result = BaseExtraList_GetExtraData(this, kExtraData_EnableStateParent); /*0x4202ae*/
  if ( result ) /*0x4202b5*/
  {
    result[1].vtbl = a2; /*0x4202b7*/
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x14u); /*0x4202d0*/
    if ( v4 ) /*0x4202e6*/
      v5 = (BSExtraData *)sub_42A5E0(v4); /*0x4202ea*/
    else
      v5 = 0; /*0x4202f1*/
    v5[1].vtbl = a2; /*0x4202fe*/
    return (BSExtraData *)BaseExtraList_AddExtra(this, v5); /*0x420301*/
  }
  return result; /*0x4202ba*/
}
