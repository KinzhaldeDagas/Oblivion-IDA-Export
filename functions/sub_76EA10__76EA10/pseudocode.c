int __cdecl sub_76EA10(int a1)
{
  __int16 *v2; // edx
  int v3; // ebx
  int v4; // ebp
  int v5; // edi
  unsigned int v6; // eax
  double v8; // st7
  __int16 *v9; // eax
  float *v10; // edi
  int v11; // ecx
  bool v12; // cf
  unsigned __int16 v13; // [esp+10h] [ebp-14h]
  int v14; // [esp+14h] [ebp-10h]
  int v15; // [esp+18h] [ebp-Ch]
  int v16; // [esp+1Ch] [ebp-8h]
  unsigned __int16 v17; // [esp+20h] [ebp-4h]
  unsigned __int16 v18; // [esp+28h] [ebp+4h]

  v2 = *(__int16 **)(a1 + 0x10); /*0x76ea1a*/
  v3 = *(_DWORD *)(a1 + 0x24); /*0x76ea1d*/
  v4 = 0; /*0x76ea20*/
  v14 = 0; /*0x76ea25*/
  if ( v2 ) /*0x76ea29*/
  {
    v17 = *(_WORD *)a1 + 1; /*0x76ea83*/
    if ( (__int16)(*(_WORD *)(a1 + 4) - 0xC - v17) <= 0 ) /*0x76ea87*/
      v18 = *(_WORD *)(a1 + 4) - 0xC; /*0x76ea95*/
    else
      v18 = *(_WORD *)a1 + 1; /*0x76ea8c*/
    v15 = 0; /*0x76ea9d*/
    if ( *(_WORD *)(a1 + 8) ) /*0x76ea99*/
    {
      v8 = dbl_A3D5A8; /*0x76eaa7*/
      do /*0x76eb21*/
      {
        v9 = v2; /*0x76eab6*/
        v10 = (float *)v3; /*0x76eab8*/
        v13 = 0; /*0x76eaba*/
        if ( v18 ) /*0x76eac2*/
        {
          v11 = v18; /*0x76eac4*/
          v13 = v18; /*0x76eaca*/
          do /*0x76eae9*/
          {
            v16 = *v9; /*0x76ead1*/
            ++v10; /*0x76ead5*/
            ++v9; /*0x76ead8*/
            --v11; /*0x76eadb*/
            v10[0xFFFFFFFF] = (double)v16 / v8 - 1.0; /*0x76eae6*/
          }
          while ( v11 ); /*0x76eae9*/
          v4 = v14; /*0x76eaeb*/
        }
        if ( v13 < v17 ) /*0x76eafa*/
          memset(v10, 0, 4 * (unsigned __int16)(v17 - v13)); /*0x76eb03*/
        v4 += *(_DWORD *)(a1 + 0x1C); /*0x76eb09*/
        v2 = (__int16 *)((char *)v2 + *(_DWORD *)(a1 + 0x18)); /*0x76eb0c*/
        v3 += *(_DWORD *)(a1 + 0x20); /*0x76eb0f*/
        v12 = (unsigned __int16)(v15 + 1) < *(_WORD *)(a1 + 8); /*0x76eb15*/
        v14 = v4; /*0x76eb19*/
        ++v15; /*0x76eb1d*/
      }
      while ( v12 ); /*0x76eb21*/
    }
    return v4; /*0x76eb21*/
  }
  v5 = 0; /*0x76ea2b*/
  if ( !*(_WORD *)(a1 + 8) ) /*0x76ea31*/
    return v4; /*0x76eb29*/
  v6 = *(_DWORD *)(a1 + 0x1C); /*0x76ea37*/
  do /*0x76ea5b*/
  {
    _memset(v3, 0, v6); /*0x76ea44*/
    v6 = *(_DWORD *)(a1 + 0x1C); /*0x76ea49*/
    v3 += *(_DWORD *)(a1 + 0x20); /*0x76ea4c*/
    ++v5; /*0x76ea4f*/
    v4 += v6; /*0x76ea55*/
  }
  while ( (unsigned __int16)v5 < *(_WORD *)(a1 + 8) ); /*0x76ea5b*/
  return v4; /*0x76ea5d*/
}
