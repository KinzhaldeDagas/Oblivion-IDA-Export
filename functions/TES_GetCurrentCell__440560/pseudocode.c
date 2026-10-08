TESForm *__thiscall TES_GetCurrentCell(void *this)
{
  TESForm *result; // eax
  signed int v2; // edx

  result = *((TESForm **)this + 0xD); /*0x440560*/
  if ( !result ) /*0x440565*/
  {
    v2 = *((_DWORD *)this + 8); /*0x440567*/
    if ( v2 == 0x7FFFFFFF || *((_DWORD *)this + 9) == 0x7FFFFFFF ) /*0x44057a*/
      return 0; /*0x440584*/
    else
      return TES_GetCellFromCoords((TES *)this, v2, *((_DWORD *)this + 9)); /*0x44057e*/
  }
  return result; /*0x440583*/
}
