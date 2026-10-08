int __cdecl sub_745D90(int a1, int a2, unsigned int a3)
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

  v17 = a2; /*0x745d90*/
  if ( !a2 ) /*0x745d96*/
    return 0; /*0x745d98*/
  v3 = a3; /*0x745af1*/
  for ( i = ~a1; v3; --v3 ) /*0x745af7*/
  {
    if ( (v17 & 3) == 0 ) /*0x745b03*/
      break; /*0x745b03*/
    i = *(_DWORD *)(4 * (unsigned __int8)(i ^ *(_BYTE *)v17++) + 0xA82988) ^ (i >> 8); /*0x745b13*/
  }
  if ( v3 >= 0x20 ) /*0x745b27*/
  {
    v5 = v3 >> 5; /*0x745b2f*/
    do /*0x745d06*/
    {
      v6 = *(_DWORD *)v17 ^ i; /*0x745b32*/
      v7 = (_DWORD *)(v17 + 0xC); /*0x745b6e*/
      v8 = v7[0xFFFFFFFE] /*0x745b71*/
         ^ *(_DWORD *)(4 * (unsigned __int8)v6 + 0xA83588)
         ^ *(_DWORD *)(4 * HIBYTE(v6) + 0xA82988)
         ^ *(_DWORD *)(4 * BYTE1(v6) + 0xA83188)
         ^ *(_DWORD *)(4 * BYTE2(v6) + 0xA82D88);
      v7 += 3; /*0x745bae*/
      v9 = v7[0xFFFFFFFC] /*0x745bb1*/
         ^ *(_DWORD *)(4 * (unsigned __int8)v8 + 0xA83588)
         ^ *(_DWORD *)(4 * HIBYTE(v8) + 0xA82988)
         ^ *(_DWORD *)(4 * BYTE1(v8) + 0xA83188)
         ^ *(_DWORD *)(4 * BYTE2(v8) + 0xA82D88);
      v10 = v7[0xFFFFFFFD] /*0x745be8*/
          ^ *(_DWORD *)(4 * (unsigned __int8)v9 + 0xA83588)
          ^ *(_DWORD *)(4 * HIBYTE(v9) + 0xA82988)
          ^ *(_DWORD *)(4 * BYTE1(v9) + 0xA83188)
          ^ *(_DWORD *)(4 * BYTE2(v9) + 0xA82D88);
      v11 = v7[0xFFFFFFFE] /*0x745c1f*/
          ^ *(_DWORD *)(4 * (unsigned __int8)v10 + 0xA83588)
          ^ *(_DWORD *)(4 * HIBYTE(v10) + 0xA82988)
          ^ *(_DWORD *)(4 * BYTE1(v10) + 0xA83188)
          ^ *(_DWORD *)(4 * BYTE2(v10) + 0xA82D88);
      v12 = v7[0xFFFFFFFF] /*0x745c56*/
          ^ *(_DWORD *)(4 * (unsigned __int8)v11 + 0xA83588)
          ^ *(_DWORD *)(4 * HIBYTE(v11) + 0xA82988)
          ^ *(_DWORD *)(4 * BYTE1(v11) + 0xA83188)
          ^ *(_DWORD *)(4 * BYTE2(v11) + 0xA82D88);
      v13 = *v7 /*0x745c8d*/
          ^ *(_DWORD *)(4 * (unsigned __int8)v12 + 0xA83588)
          ^ *(_DWORD *)(4 * HIBYTE(v12) + 0xA82988)
          ^ *(_DWORD *)(4 * BYTE1(v12) + 0xA83188)
          ^ *(_DWORD *)(4 * BYTE2(v12) + 0xA82D88);
      v17 = (int)(v7 + 2); /*0x745cbf*/
      v3 -= 0x20; /*0x745cc9*/
      v14 = *(_DWORD *)(v17 - 4) /*0x745ccc*/
          ^ *(_DWORD *)(4 * (unsigned __int8)v13 + 0xA83588)
          ^ *(_DWORD *)(4 * HIBYTE(v13) + 0xA82988)
          ^ *(_DWORD *)(4 * BYTE1(v13) + 0xA83188)
          ^ *(_DWORD *)(4 * BYTE2(v13) + 0xA82D88);
      i = *(_DWORD *)(4 * (unsigned __int8)v14 + 0xA83588) /*0x745cfc*/
        ^ *(_DWORD *)(4 * HIBYTE(v14) + 0xA82988)
        ^ *(_DWORD *)(4 * BYTE1(v14) + 0xA83188)
        ^ *(_DWORD *)(4 * BYTE2(v14) + 0xA82D88);
      --v5; /*0x745d03*/
    }
    while ( v5 ); /*0x745d06*/
  }
  if ( v3 >= 4 ) /*0x745d0f*/
  {
    v15 = v3 >> 2; /*0x745d13*/
    do /*0x745d57*/
    {
      v16 = *(_DWORD *)v17 ^ i; /*0x745d16*/
      v17 += 4; /*0x745d18*/
      v3 -= 4; /*0x745d4f*/
      --v15; /*0x745d52*/
      i = *(_DWORD *)(4 * (unsigned __int8)v16 + 0xA83588) /*0x745d55*/
        ^ *(_DWORD *)(4 * HIBYTE(v16) + 0xA82988)
        ^ *(_DWORD *)(4 * BYTE1(v16) + 0xA83188)
        ^ *(_DWORD *)(4 * BYTE2(v16) + 0xA82D88);
    }
    while ( v15 ); /*0x745d57*/
  }
  for ( ; v3; --v3 ) /*0x745d5d*/
    i = *(_DWORD *)(4 * (unsigned __int8)(i ^ *(_BYTE *)v17++) + 0xA82988) ^ (i >> 8); /*0x745d6e*/
  return ~i; /*0x745d9a*/
}
