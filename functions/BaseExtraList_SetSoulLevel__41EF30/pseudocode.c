ExtraSoul *__thiscall BaseExtraList_SetSoulLevel(ExtraDataList *this, char a2)
{
  ExtraSoul *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  result = (ExtraSoul *)BaseExtraList_GetExtraData(this, kExtraData_Soul);
  if ( result )
  {
    result->soul = a2;
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u);
    if ( v4 )
      v5 = (BSExtraData *)sub_429F00(v4, a2);
    else
      v5 = 0;
    return (ExtraSoul *)BaseExtraList_AddExtra(this, v5);
  }
  return result;
}
