BSExtraData *__thiscall sub_422BA0(ExtraDataList *this, char a2)
{
  BSExtraData *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_QuickKey);
  if ( result )
  {
    LOBYTE(result[1].vtbl) = a2;
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u);
    if ( v4 )
      v5 = (BSExtraData *)sub_42A090(v4, a2);
    else
      v5 = 0;
    return (BSExtraData *)BaseExtraList_AddExtra(this, v5);
  }
  return result;
}
