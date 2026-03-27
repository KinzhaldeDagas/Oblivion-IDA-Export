int __cdecl sub_7E2370(int a1, int a2, __int16 a3, char a4, unsigned __int8 a5, int a6)
{
  int v6; // eax

  *(_DWORD *)a1 = a2;
  *(_WORD *)(a1 + 4) = a3;
  *(_BYTE *)(a1 + 8) = a5;
  *(_BYTE *)(a1 + 6) = a4;
  *(_BYTE *)(a1 + 7) = 0;
  *(_DWORD *)(a1 + 0xC) = 0;
  if ( a5 )
  {
    *(_DWORD *)(a1 + 0xC) = FormHeapAlloc((unsigned __int64)a5 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a5);
    v6 = 0;
    do
    {
      *(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 4 * v6) = *(&a6 + v6);
      ++v6;
    }
    while ( v6 < a5 );
    *(_BYTE *)(a1 + 9) = 0;
    return a1;
  }
  else
  {
    *(_BYTE *)(a1 + 9) = 0;
    return a1;
  }
}
