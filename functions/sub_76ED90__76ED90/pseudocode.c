int __cdecl sub_76ED90(int a1)
{
  unsigned __int8 *v2; // edx
  int v3; // ebx
  int v4; // ebp
  int v5; // edi
  unsigned int v6; // eax
  double v8; // st7
  unsigned __int8 *v9; // eax
  float *v10; // edi
  int v11; // ecx
  bool v12; // cf
  unsigned __int16 v13; // [esp+10h] [ebp-14h]
  int v14; // [esp+14h] [ebp-10h]
  int v15; // [esp+18h] [ebp-Ch]
  int v16; // [esp+1Ch] [ebp-8h]
  unsigned __int16 v17; // [esp+20h] [ebp-4h]
  unsigned __int16 v18; // [esp+28h] [ebp+4h]

  v2 = *(unsigned __int8 **)(a1 + 0x10); /*0x76ed9a*/
  v3 = *(_DWORD *)(a1 + 0x24); /*0x76ed9d*/
  v4 = 0; /*0x76eda0*/
  v14 = 0; /*0x76eda5*/
  if ( v2 ) /*0x76eda9*/
  {
    v17 = *(_WORD *)a1 + 1; /*0x76ee03*/
    if ( (__int16)(*(_WORD *)(a1 + 4) - 0x18 - v17) <= 0 ) /*0x76ee07*/
      v18 = *(_WORD *)(a1 + 4) - 0x18; /*0x76ee15*/
    else
      v18 = *(_WORD *)a1 + 1; /*0x76ee0c*/
    v15 = 0; /*0x76ee1d*/
    if ( *(_WORD *)(a1 + 8) ) /*0x76ee19*/
    {
      v8 = dbl_A3DDD8; /*0x76ee23*/
      do /*0x76ee99*/
      {
        v9 = v2; /*0x76ee30*/
        v10 = (float *)v3; /*0x76ee32*/
        v13 = 0; /*0x76ee34*/
        if ( v18 ) /*0x76ee3c*/
        {
          v11 = v18; /*0x76ee3e*/
          v13 = v18; /*0x76ee44*/
          do /*0x76ee61*/
          {
            v16 = *v9; /*0x76ee4b*/
            ++v10; /*0x76ee4f*/
            ++v9; /*0x76ee52*/
            --v11; /*0x76ee55*/
            v10[0xFFFFFFFF] = (double)v16 / v8; /*0x76ee5e*/
          }
          while ( v11 ); /*0x76ee61*/
          v4 = v14; /*0x76ee63*/
        }
        if ( v13 < v17 ) /*0x76ee72*/
          memset(v10, 0, 4 * (unsigned __int16)(v17 - v13)); /*0x76ee7b*/
        v4 += *(_DWORD *)(a1 + 0x1C); /*0x76ee81*/
        v2 += *(_DWORD *)(a1 + 0x18); /*0x76ee84*/
        v3 += *(_DWORD *)(a1 + 0x20); /*0x76ee87*/
        v12 = (unsigned __int16)(v15 + 1) < *(_WORD *)(a1 + 8); /*0x76ee8d*/
        v14 = v4; /*0x76ee91*/
        ++v15; /*0x76ee95*/
      }
      while ( v12 ); /*0x76ee99*/
    }
    return v4; /*0x76ee99*/
  }
  v5 = 0; /*0x76edab*/
  if ( !*(_WORD *)(a1 + 8) ) /*0x76edb1*/
    return v4; /*0x76ee9f*/
  v6 = *(_DWORD *)(a1 + 0x1C); /*0x76edb7*/
  do /*0x76eddb*/
  {
    _memset(v3, 0, v6); /*0x76edc4*/
    v6 = *(_DWORD *)(a1 + 0x1C); /*0x76edc9*/
    v3 += *(_DWORD *)(a1 + 0x20); /*0x76edcc*/
    ++v5; /*0x76edcf*/
    v4 += v6; /*0x76edd5*/
  }
  while ( (unsigned __int16)v5 < *(_WORD *)(a1 + 8) ); /*0x76eddb*/
  return v4; /*0x76eddd*/
}
