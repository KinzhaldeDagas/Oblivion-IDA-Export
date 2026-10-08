ExtraSoul *__thiscall BaseExtraList_SetSoulLevel(ExtraDataList *this, char a2)
{
  ExtraSoul *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  result = (ExtraSoul *)BaseExtraList_GetExtraData(this, kExtraData_Soul); /*0x41ef56*/
  if ( result ) /*0x41ef5d*/
  {
    result->soul = a2; /*0x41ef63*/
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u); /*0x41ef7b*/
    if ( v4 ) /*0x41ef91*/
      v5 = (BSExtraData *)sub_429F00(v4, a2); /*0x41ef9a*/
    else
      v5 = 0; /*0x41efa1*/
    return (ExtraSoul *)BaseExtraList_AddExtra(this, v5); /*0x41efae*/
  }
  return result; /*0x41ef66*/
}
