FILE *__thiscall sub_8BB320(int this)
{
  FILE *result; // eax

  result = *(FILE **)(this + 8);
  if ( result )
  {
    if ( *(_BYTE *)(this + 0xC) )
      result = (FILE *)fclose(result);
  }
  *(_DWORD *)(this + 8) = 0;
  return result;
}
