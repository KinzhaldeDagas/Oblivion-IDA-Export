// Creates/updates ExtraItemDropper; a null dropper removes extra type 0x41.
BSExtraData *__thiscall ExtraDataList_SetItemDropper(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  BSExtraData *v4; // esi
  _BYTE *v5; // eax
  BSExtraData *v6; // eax

  if ( !a2 ) /*0x42040d*/
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, 0x41u); /*0x420465*/
  result = BaseExtraList_GetExtraData(this, kExtraData_ItemDropper); /*0x42040f*/
  v4 = result; /*0x420414*/
  if ( !result ) /*0x420418*/
  {
    v5 = (_BYTE *)FormHeapAlloc(0x10u); /*0x42041c*/
    if ( v5 ) /*0x42042e*/
      v6 = (BSExtraData *)sub_42A840(v5); /*0x420432*/
    else
      v6 = 0; /*0x420439*/
    v4 = v6; /*0x420446*/
    result = (BSExtraData *)BaseExtraList_AddExtra(this, v6); /*0x420448*/
  }
  v4[1].vtbl = a2; /*0x42044d*/
  return result; /*0x420450*/
}
