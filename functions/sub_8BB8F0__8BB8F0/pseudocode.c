int __stdcall sub_8BB8F0(LPCSTR lpOutputString, int a2)
{
  int v3; // ebx
  int v4; // eax
  _DWORD *v5; // eax
  CHAR *v6; // esi
  const CHAR *v7; // ebp
  int v8; // ecx
  int v9; // eax

  if ( !a2 )
    return 0;
  if ( lpOutputString[a2 - 1] )
  {
    v3 = a2 + 1;
    v4 = sub_4BFC80();
    v5 = sub_8A7560(v4, a2 + 1, 0x14);
    v6 = (CHAR *)v5;
    if ( a2 > 0 )
    {
      v7 = (const CHAR *)(lpOutputString - (LPCSTR)v5);
      v8 = a2;
      do
      {
        *(_BYTE *)v5 = v7[(_DWORD)v5];
        v5 = (_DWORD *)((char *)v5 + 1);
        --v8;
      }
      while ( v8 );
    }
    v6[a2] = 0;
    OutputDebugStringA(v6);
    printf("%s", v6);
    if ( v3 >= 0 )
    {
      v9 = sub_4BFC80();
      sub_8A75D0(v9, v6, v3 & 0x3FFFFFFF, 0x14);
    }
    return a2;
  }
  else
  {
    OutputDebugStringA(lpOutputString);
    printf("%s", lpOutputString);
    return a2;
  }
}
