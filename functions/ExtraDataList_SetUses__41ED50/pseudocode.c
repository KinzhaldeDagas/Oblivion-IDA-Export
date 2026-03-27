BSExtraData *__thiscall ExtraDataList_SetUses(ExtraDataList *this, char a2)
{
  BSExtraData *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_Uses);
  if ( result )
  {
    LOBYTE(result[1].vtbl) = a2;
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u);
    if ( v4 )
      v5 = (BSExtraData *)ExtraUses_constr(v4, a2);
    else
      v5 = 0;
    return (BSExtraData *)BaseExtraList_AddExtra(this, v5);
  }
  return result;
}
