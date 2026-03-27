int __cdecl sub_76F2A0(int a1)
{
  _BYTE *v2; // edx
  _BYTE *v3; // esi
  int v4; // ebx
  int v5; // ebp
  int v6; // eax
  unsigned __int16 v8; // bp
  _BYTE *v9; // eax
  int v10; // ecx
  bool v11; // cf
  int v12; // [esp+10h] [ebp-Ch]
  _BYTE *v13; // [esp+14h] [ebp-8h]
  int v14; // [esp+18h] [ebp-4h]
  unsigned __int16 v15; // [esp+20h] [ebp+4h]

  v2 = *(_BYTE **)(a1 + 0x10);
  v3 = *(_BYTE **)(a1 + 0x24);
  v4 = 0;
  v5 = 0;
  v12 = 0;
  v13 = v2;
  if ( v2 )
  {
    if ( (__int16)(*(_WORD *)(a1 + 4) - 0x18) < 0 || *(_WORD *)(a1 + 4) == 0x18 )
      v15 = *(_WORD *)(a1 + 4) - 0x14;
    else
      v15 = 4;
    v14 = 0;
    if ( *(_WORD *)(a1 + 8) )
    {
      do
      {
        v8 = 0;
        v9 = v2;
        if ( !v15 )
          goto LABEL_14;
        v10 = v15;
        v8 = v15;
        do
        {
          *v3++ = *v9++;
          --v10;
        }
        while ( v10 );
        if ( v15 < 4u )
        {
LABEL_14:
          _memset(v3, 0, (unsigned __int16)(4 - v8));
          v2 = v13;
          v3 += (unsigned __int16)(4 - v8);
        }
        v12 += *(_DWORD *)(a1 + 0x1C);
        v2 += *(_DWORD *)(a1 + 0x18);
        v3 += *(_DWORD *)(a1 + 0x20);
        v11 = (unsigned __int16)(v14 + 1) < *(_WORD *)(a1 + 8);
        v13 = v2;
        ++v14;
      }
      while ( v11 );
      return v12;
    }
    return v5;
  }
  if ( !*(_WORD *)(a1 + 8) )
    return v5;
  v6 = *(_DWORD *)(a1 + 0x1C);
  do
  {
    _memset(v3, 0xFF, v6);
    v6 = *(_DWORD *)(a1 + 0x1C);
    v3 += *(_DWORD *)(a1 + 0x20);
    ++v4;
    v5 += v6;
  }
  while ( (unsigned __int16)v4 < *(_WORD *)(a1 + 8) );
  return v5;
}
