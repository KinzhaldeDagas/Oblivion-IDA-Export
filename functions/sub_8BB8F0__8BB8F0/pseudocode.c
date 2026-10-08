int __stdcall sub_8BB8F0(LPCSTR lpOutputString, int a2)
{
  int v3; // ebx
  int v4; // eax
  _DWORD *v5; // eax
  CHAR *v6; // esi
  const CHAR *v7; // ebp
  int v8; // ecx
  int v9; // eax

  if ( !a2 ) /*0x8bb8f7*/
    return 0; /*0x8bb989*/
  if ( lpOutputString[a2 - 1] ) /*0x8bb902*/
  {
    v3 = a2 + 1; /*0x8bb928*/
    v4 = sub_4BFC80(); /*0x8bb92e*/
    v5 = sub_8A7560(v4, a2 + 1, 0x14); /*0x8bb935*/
    v6 = (CHAR *)v5; /*0x8bb93c*/
    if ( a2 > 0 ) /*0x8bb93e*/
    {
      v7 = (const CHAR *)(lpOutputString - (LPCSTR)v5); /*0x8bb940*/
      v8 = a2; /*0x8bb942*/
      do /*0x8bb94b*/
      {
        *(_BYTE *)v5 = v7[(_DWORD)v5]; /*0x8bb947*/
        v5 = (_DWORD *)((char *)v5 + 1); /*0x8bb949*/
        --v8; /*0x8bb94a*/
      }
      while ( v8 ); /*0x8bb94b*/
    }
    v6[a2] = 0; /*0x8bb94e*/
    OutputDebugStringA(v6); /*0x8bb952*/
    printf("%s", v6); /*0x8bb95e*/
    if ( v3 >= 0 ) /*0x8bb968*/
    {
      v9 = sub_4BFC80(); /*0x8bb974*/
      sub_8A75D0(v9, v6, v3 & 0x3FFFFFFF, 0x14); /*0x8bb97b*/
    }
    return a2; /*0x8bb983*/
  }
  else
  {
    OutputDebugStringA(lpOutputString); /*0x8bb90b*/
    printf("%s", lpOutputString); /*0x8bb917*/
    return a2; /*0x8bb920*/
  }
}
