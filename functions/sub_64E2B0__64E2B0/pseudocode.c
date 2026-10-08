// RadiantAI: sorts accepted acquire candidates by entry+0x14 distance ascending after response-code sort.
void __thiscall sub_64E2B0(_DWORD *this)
{
  _DWORD *v1; // ecx
  int v2; // edx
  _DWORD *v3; // eax
  int v4; // edi
  char i; // bl
  _DWORD *j; // eax
  int v7; // edx

  v1 = this + 0xF; /*0x64e2b0*/
  if ( v1 ) /*0x64e2b3*/
  {
    v2 = 0; /*0x64e2b5*/
    v3 = v1; /*0x64e2b7*/
    do /*0x64e2cd*/
    {
      if ( *v3 ) /*0x64e2c0*/
        ++v2; /*0x64e2c5*/
      v3 = (_DWORD *)v3[1]; /*0x64e2c8*/
    }
    while ( v3 ); /*0x64e2cd*/
    v4 = v2; /*0x64e2d3*/
    for ( i = 1; v4; v1 = (_DWORD *)v1[1] ) /*0x64e2d7*/
    {
      if ( !i ) /*0x64e2e2*/
        break; /*0x64e2e2*/
      i = 0; /*0x64e2e4*/
      for ( j = v1; j; j = (_DWORD *)j[1] ) /*0x64e2ea*/
      {
        v7 = *v1; /*0x64e2f0*/
        if ( *(_DWORD *)(*v1 + 0x14) > *(_DWORD *)(*j + 0x14) ) /*0x64e2fa*/
        {
          *v1 = *j; /*0x64e2fc*/
          *j = v7; /*0x64e2fe*/
          i = 1; /*0x64e300*/
        }
      }
      --v4; /*0x64e309*/
    }
  }
}
