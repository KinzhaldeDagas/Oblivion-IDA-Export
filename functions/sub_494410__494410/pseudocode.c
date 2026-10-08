int __thiscall sub_494410(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx

  result = this; /*0x494410*/
  if ( *a2 ) /*0x494416*/
  {
    if ( *a2 == 1 ) /*0x494420*/
    {
      v3 = *(_DWORD *)(this + 8) + this + 0xF; /*0x494429*/
      while ( *(_BYTE *)++v3 ) /*0x494438*/
        ; /*0x494430*/
      *(_WORD *)v3 = *(_WORD *)word_A3D9B0; /*0x494441*/
      *(_BYTE *)(v3 + 2) = byte_A3D9B2; /*0x49444a*/
      *(_DWORD *)(result + 8) = strlen((const char *)(result + 0x10)); /*0x49445f*/
    }
  }
  else
  {
    *(_BYTE *)(this + 0x10) = 0; /*0x494466*/
    *(_DWORD *)(this + 8) = 0; /*0x49446a*/
  }
  return result; /*0x494463*/
}
