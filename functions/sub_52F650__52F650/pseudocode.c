_DWORD *__thiscall sub_52F650(char *this, int a2)
{
  _DWORD *result; // eax
  unsigned int v3; // esi
  unsigned int i; // ecx
  int v5; // edx

  result = sub_52EFA0(this, a2); /*0x52f655*/
  if ( result ) /*0x52f65c*/
  {
    v3 = result[3]; /*0x52f65f*/
    for ( i = 0; i < v3; ++i ) /*0x52f666*/
    {
      v5 = *(_DWORD *)(result[1] + 4 * i); /*0x52f66b*/
      if ( v5 ) /*0x52f670*/
        *(_WORD *)(v5 + 0x20) = i; /*0x52f672*/
    }
  }
  return result; /*0x52f67e*/
}
