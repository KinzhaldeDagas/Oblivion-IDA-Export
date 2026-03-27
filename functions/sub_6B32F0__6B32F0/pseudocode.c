signed int __cdecl sub_6B32F0(int a1, int *a2, int *a3, int *a4, int *a5, unsigned int *a6)
{
  int v6; // eax
  unsigned int v7; // esi
  bool v9; // zf
  unsigned __int8 j; // cl
  int v11; // edx
  unsigned __int8 i; // cl
  char v13; // al
  unsigned int *v14; // esi
  unsigned int v15; // [esp+8h] [ebp-8h]
  int v16; // [esp+Ch] [ebp-4h]

  v15 = dword_B163F8;
  v6 = *(_DWORD *)(a1 + 0x20);
  v7 = 0;
  v16 = 1;
  if ( !v6 )
    return 2;
  if ( !*(_DWORD *)(a1 + 0x24) )
  {
    *a3 = 0;
    *a2 = 0;
    return 0;
  }
  while ( *(_BYTE *)(v6 + 2 * v7) )
  {
    v9 = sub_6AF750(a6) == 0;
    v6 = *(_DWORD *)(a1 + 0x20);
    if ( v9 )
    {
      for ( i = *(_BYTE *)(v6 + 2 * v7); i >= 0xFAu; i = *(_BYTE *)(v6 + 2 * v7) )
        v7 += i;
      v11 = *(unsigned __int8 *)(v6 + 2 * v7);
    }
    else
    {
      for ( j = *(_BYTE *)(v6 + 2 * v7 + 1); j >= 0xFAu; j = *(_BYTE *)(v6 + 2 * v7 + 1) )
        v7 += j;
      v11 = *(unsigned __int8 *)(v6 + 2 * v7 + 1);
    }
    v7 += v11;
    v15 >>= 1;
    if ( !v15 && v7 >= dword_B17A2C )
      goto LABEL_17;
  }
  *a2 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 0x20) + 2 * v7 + 1) >> 4;
  *a3 = *(_BYTE *)(*(_DWORD *)(a1 + 0x20) + 2 * v7 + 1) & 0xF;
  v16 = 0;
LABEL_17:
  if ( *(_BYTE *)a1 == 0x33 && ((v13 = *(_BYTE *)(a1 + 1), v13 == 0x32) || v13 == 0x33) )
  {
    *a4 = (*a3 >> 3) & 1;
    *a5 = (*a3 >> 2) & 1;
    *a2 = (*a3 >> 1) & 1;
    *a3 &= 1u;
    if ( *a4 )
    {
      if ( sub_6AF750(a6) )
        *a4 = -*a4;
    }
    if ( *a5 )
    {
      if ( sub_6AF750(a6) )
        *a5 = -*a5;
    }
    if ( *a2 )
    {
      if ( sub_6AF750(a6) )
        *a2 = -*a2;
    }
    if ( *a3 && sub_6AF750(a6) )
    {
      *a3 = -*a3;
      return v16;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 0xC) && *(_DWORD *)(a1 + 4) - 1 == *a2 )
    {
      v14 = a6;
      *a2 += sub_6AF6F0(a6, *(_DWORD *)(a1 + 0xC));
    }
    else
    {
      v14 = a6;
    }
    if ( *a2 )
    {
      if ( sub_6AF750(v14) )
        *a2 = -*a2;
    }
    if ( *(_DWORD *)(a1 + 0xC) )
    {
      if ( *(_DWORD *)(a1 + 8) - 1 == *a3 )
        *a3 += sub_6AF6F0(v14, *(_DWORD *)(a1 + 0xC));
    }
    if ( *a3 )
    {
      if ( sub_6AF750(v14) )
        *a3 = -*a3;
    }
  }
  return v16;
}
