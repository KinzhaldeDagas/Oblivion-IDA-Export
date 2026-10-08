// ExtraUses singleton setter always creates/updates and narrows to u8; no removal sentinel. Repeated XUSE retains node position and replaces the byte.
BSExtraData *__thiscall ExtraDataList_SetUses(ExtraDataList *this, char a2)
{
  BSExtraData *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_Uses); /*0x41ed76*/
  if ( result ) /*0x41ed7d*/
  {
    LOBYTE(result[1].vtbl) = a2; /*0x41ed83*/
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u); /*0x41ed9b*/
    if ( v4 ) /*0x41edb1*/
      v5 = (BSExtraData *)ExtraUses_constr(v4, a2); /*0x41edba*/
    else
      v5 = 0; /*0x41edc1*/
    return (BSExtraData *)BaseExtraList_AddExtra(this, v5); /*0x41edce*/
  }
  return result; /*0x41ed86*/
}
