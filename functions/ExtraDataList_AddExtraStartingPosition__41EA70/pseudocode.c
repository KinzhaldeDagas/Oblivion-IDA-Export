BSExtraData *__thiscall ExtraDataList_AddExtraStartingPosition(ExtraDataList *this, _DWORD *a2)
{
  BSExtraData *result; // eax
  BSExtraData *v4; // esi
  _DWORD *v5; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_StartingPosition); /*0x41ea97*/
  v4 = 0; /*0x41ea9c*/
  if ( !result ) /*0x41eaa0*/
  {
    v5 = (_DWORD *)FormHeapAlloc(0x24u); /*0x41eaa4*/
    if ( v5 ) /*0x41eab6*/
      v4 = (BSExtraData *)ExtraStartingPosition_constr(v5, a2); /*0x41eac4*/
    BaseExtraList_AddExtra(this, v4); /*0x41ead1*/
    return v4; /*0x41ead6*/
  }
  return result; /*0x41ead8*/
}
