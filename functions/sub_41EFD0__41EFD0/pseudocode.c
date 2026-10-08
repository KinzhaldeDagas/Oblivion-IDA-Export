// ExtraPoison setter always creates/updates raw serialized FormID, including zero. Post-load resolution removes zero/unresolved/non-AlchemyItem targets.
BSExtraData *__thiscall ExtraDataList_SetPoison(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_Poison); /*0x41eff6*/
  if ( result ) /*0x41effd*/
  {
    result[1].vtbl = a2; /*0x41f003*/
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u); /*0x41f01b*/
    if ( v4 ) /*0x41f031*/
      v5 = (BSExtraData *)ExtraPoison_ctor(v4, (int)a2); /*0x41f03a*/
    else
      v5 = 0; /*0x41f041*/
    return (BSExtraData *)BaseExtraList_AddExtra(this, v5); /*0x41f04e*/
  }
  return result; /*0x41f006*/
}
