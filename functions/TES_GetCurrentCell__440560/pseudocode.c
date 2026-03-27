TESForm *__thiscall TES_GetCurrentCell(void *this)
{
  TESForm *result; // eax
  signed int v2; // edx

  result = *((TESForm **)this + 0xD);
  if ( !result )
  {
    v2 = *((_DWORD *)this + 8);
    if ( v2 == 0x7FFFFFFF || *((_DWORD *)this + 9) == 0x7FFFFFFF )
      return 0;
    else
      return TES_GetCellFromCoords((TES *)this, v2, *((_DWORD *)this + 9));
  }
  return result;
}
