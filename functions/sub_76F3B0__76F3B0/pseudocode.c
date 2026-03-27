int __cdecl sub_76F3B0(int a1)
{
  int v2; // ebp
  _BYTE *v3; // esi
  int v4; // ebx
  int v5; // ebp
  int v6; // eax
  __int16 v8; // ax
  int v9; // ecx
  unsigned __int16 v10; // dx
  _BYTE *v11; // eax
  int v12; // ebp
  bool v13; // cf
  int v14; // [esp+10h] [ebp-Ch]
  int v15; // [esp+14h] [ebp-8h]
  int v16; // [esp+18h] [ebp-4h]
  __int16 v17; // [esp+20h] [ebp+4h]

  v2 = *(_DWORD *)(a1 + 0x10);
  v3 = *(_BYTE **)(a1 + 0x24);
  v4 = 0;
  v15 = 0;
  v14 = v2;
  if ( v2 )
  {
    v8 = *(_WORD *)(a1 + 4) - 0x18;
    if ( (__int16)(*(_WORD *)(a1 + 4) - 0x1C) < 0 || v8 == 4 )
    {
      v17 = *(_WORD *)(a1 + 4) - 0x18;
      LOWORD(v9) = v8;
    }
    else
    {
      LOWORD(v9) = 4;
      v17 = 4;
    }
    v16 = 0;
    if ( *(_WORD *)(a1 + 8) )
    {
      while ( 1 )
      {
        v10 = 0;
        if ( !(_WORD)v9 )
          goto LABEL_16;
        v9 = (unsigned __int16)v9;
        v11 = v3;
        v12 = v2 - (_DWORD)v3;
        v10 = v9;
        do
        {
          *v11 = v11[v12];
          ++v11;
          --v9;
        }
        while ( v9 );
        v2 = v14;
        v4 = v15;
        if ( v10 < 4u )
LABEL_16:
          _memset(&v3[v10], 0, (unsigned __int16)(4 - v10));
        v2 += *(_DWORD *)(a1 + 0x18);
        v4 += *(_DWORD *)(a1 + 0x1C);
        v3 += *(_DWORD *)(a1 + 0x20);
        v13 = (unsigned __int16)(v16 + 1) < *(_WORD *)(a1 + 8);
        v14 = v2;
        v15 = v4;
        ++v16;
        if ( !v13 )
          break;
        LOWORD(v9) = v17;
      }
    }
    return v4;
  }
  v5 = 0;
  if ( !*(_WORD *)(a1 + 8) )
    return v4;
  v6 = *(_DWORD *)(a1 + 0x1C);
  do
  {
    _memset(v3, 0xFF, v6);
    v6 = *(_DWORD *)(a1 + 0x1C);
    v3 += *(_DWORD *)(a1 + 0x20);
    ++v5;
    v4 += v6;
  }
  while ( (unsigned __int16)v5 < *(_WORD *)(a1 + 8) );
  return v4;
}
