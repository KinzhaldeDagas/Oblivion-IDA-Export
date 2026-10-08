BSExtraData *__thiscall sub_422BA0(ExtraDataList *this, char a2)
{
  BSExtraData *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_QuickKey); /*0x422bc6*/
  if ( result ) /*0x422bcd*/
  {
    LOBYTE(result[1].vtbl) = a2; /*0x422c20*/
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u); /*0x422bd1*/
    if ( v4 ) /*0x422be7*/
      v5 = (BSExtraData *)sub_42A090(v4, a2); /*0x422bf0*/
    else
      v5 = 0; /*0x422bf7*/
    return (BSExtraData *)BaseExtraList_AddExtra(this, v5); /*0x422c04*/
  }
  return result; /*0x422c09*/
}
