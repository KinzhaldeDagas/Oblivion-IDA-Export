FILE *__thiscall sub_8BB320(int this)
{
  FILE *result; // eax

  result = *(FILE **)(this + 8); /*0x8bb323*/
  if ( result ) /*0x8bb328*/
  {
    if ( *(_BYTE *)(this + 0xC) ) /*0x8bb32a*/
      result = (FILE *)fclose(result); /*0x8bb332*/
  }
  *(_DWORD *)(this + 8) = 0; /*0x8bb33a*/
  return result; /*0x8bb341*/
}
