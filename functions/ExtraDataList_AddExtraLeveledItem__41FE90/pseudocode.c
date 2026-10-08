BSExtraData *__thiscall ExtraDataList_AddExtraLeveledItem(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // esi

  result = BaseExtraList_GetExtraData(this, kExtraData_LeveledItem); /*0x41feb7*/
  if ( result ) /*0x41febe*/
  {
    result[1].vtbl = a2; /*0x41ff18*/
    result[1].members.type = 0; /*0x41ff1b*/
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x14u); /*0x41fec2*/
    if ( v4 ) /*0x41fed8*/
      v5 = (BSExtraData *)ExtraLeveledItem_constr(v4, (int)a2); /*0x41fee6*/
    else
      v5 = 0; /*0x41feea*/
    result = (BSExtraData *)BaseExtraList_AddExtra(this, v5); /*0x41fef7*/
    v5[1].members.type = 0; /*0x41fefc*/
  }
  return result; /*0x41ff00*/
}
