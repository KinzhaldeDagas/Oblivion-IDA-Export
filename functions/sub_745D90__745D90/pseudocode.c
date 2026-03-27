unsigned int __cdecl sub_745D90(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // esi
  unsigned int i; // eax
  unsigned int v5; // edi
  unsigned int v6; // eax
  _DWORD *v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // eax
  int v17; // ecx

  v17 = a2;
  if ( !a2 )
    return 0;
  v3 = a3;
  for ( i = ~a1; v3; --v3 )
  {
    if ( (v17 & 3) == 0 )
      break;
    i = *(_DWORD *)(4 * (unsigned __int8)(i ^ *(_BYTE *)v17++) + 0xA82988) ^ (i >> 8);
  }
  if ( v3 >= 0x20 )
  {
    v5 = v3 >> 5;
    do
    {
      v6 = *(_DWORD *)v17 ^ i;
      v7 = (_DWORD *)(v17 + 0xC);
      v8 = v7[0xFFFFFFFE]
         ^ *(_DWORD *)(4 * (unsigned __int8)v6 + 0xA83588)
         ^ *(_DWORD *)(4 * HIBYTE(v6) + 0xA82988)
         ^ *(_DWORD *)(4 * BYTE1(v6) + 0xA83188)
         ^ *(_DWORD *)(4 * BYTE2(v6) + 0xA82D88);
      v7 += 3;
      v9 = v7[0xFFFFFFFC]
         ^ *(_DWORD *)(4 * (unsigned __int8)v8 + 0xA83588)
         ^ *(_DWORD *)(4 * HIBYTE(v8) + 0xA82988)
         ^ *(_DWORD *)(4 * BYTE1(v8) + 0xA83188)
         ^ *(_DWORD *)(4 * BYTE2(v8) + 0xA82D88);
      v10 = v7[0xFFFFFFFD]
          ^ *(_DWORD *)(4 * (unsigned __int8)v9 + 0xA83588)
          ^ *(_DWORD *)(4 * HIBYTE(v9) + 0xA82988)
          ^ *(_DWORD *)(4 * BYTE1(v9) + 0xA83188)
          ^ *(_DWORD *)(4 * BYTE2(v9) + 0xA82D88);
      v11 = v7[0xFFFFFFFE]
          ^ *(_DWORD *)(4 * (unsigned __int8)v10 + 0xA83588)
          ^ *(_DWORD *)(4 * HIBYTE(v10) + 0xA82988)
          ^ *(_DWORD *)(4 * BYTE1(v10) + 0xA83188)
          ^ *(_DWORD *)(4 * BYTE2(v10) + 0xA82D88);
      v12 = v7[0xFFFFFFFF]
          ^ *(_DWORD *)(4 * (unsigned __int8)v11 + 0xA83588)
          ^ *(_DWORD *)(4 * HIBYTE(v11) + 0xA82988)
          ^ *(_DWORD *)(4 * BYTE1(v11) + 0xA83188)
          ^ *(_DWORD *)(4 * BYTE2(v11) + 0xA82D88);
      v13 = *v7
          ^ *(_DWORD *)(4 * (unsigned __int8)v12 + 0xA83588)
          ^ *(_DWORD *)(4 * HIBYTE(v12) + 0xA82988)
          ^ *(_DWORD *)(4 * BYTE1(v12) + 0xA83188)
          ^ *(_DWORD *)(4 * BYTE2(v12) + 0xA82D88);
      v17 = (int)(v7 + 2);
      v3 -= 0x20;
      v14 = *(_DWORD *)(v17 - 4)
          ^ *(_DWORD *)(4 * (unsigned __int8)v13 + 0xA83588)
          ^ *(_DWORD *)(4 * HIBYTE(v13) + 0xA82988)
          ^ *(_DWORD *)(4 * BYTE1(v13) + 0xA83188)
          ^ *(_DWORD *)(4 * BYTE2(v13) + 0xA82D88);
      i = *(_DWORD *)(4 * (unsigned __int8)v14 + 0xA83588)
        ^ *(_DWORD *)(4 * HIBYTE(v14) + 0xA82988)
        ^ *(_DWORD *)(4 * BYTE1(v14) + 0xA83188)
        ^ *(_DWORD *)(4 * BYTE2(v14) + 0xA82D88);
      --v5;
    }
    while ( v5 );
  }
  if ( v3 >= 4 )
  {
    v15 = v3 >> 2;
    do
    {
      v16 = *(_DWORD *)v17 ^ i;
      v17 += 4;
      v3 -= 4;
      --v15;
      i = *(_DWORD *)(4 * (unsigned __int8)v16 + 0xA83588)
        ^ *(_DWORD *)(4 * HIBYTE(v16) + 0xA82988)
        ^ *(_DWORD *)(4 * BYTE1(v16) + 0xA83188)
        ^ *(_DWORD *)(4 * BYTE2(v16) + 0xA82D88);
    }
    while ( v15 );
  }
  for ( ; v3; --v3 )
    i = *(_DWORD *)(4 * (unsigned __int8)(i ^ *(_BYTE *)v17++) + 0xA82988) ^ (i >> 8);
  return ~i;
}
