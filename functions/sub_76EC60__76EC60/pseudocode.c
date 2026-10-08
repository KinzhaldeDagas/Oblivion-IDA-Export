int __cdecl sub_76EC60(int a1)
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

  v2 = *(unsigned __int8 **)(a1 + 0x10); /*0x76ec6a*/
  v3 = *(_DWORD *)(a1 + 0x24); /*0x76ec6d*/
  v4 = 0; /*0x76ec70*/
  v14 = 0; /*0x76ec75*/
  if ( v2 ) /*0x76ec79*/
  {
    v17 = *(_WORD *)a1 + 1; /*0x76ecd3*/
    if ( (__int16)(*(_WORD *)(a1 + 4) - 0x14 - v17) <= 0 ) /*0x76ecd7*/
      v18 = *(_WORD *)(a1 + 4) - 0x14; /*0x76ece5*/
    else
      v18 = *(_WORD *)a1 + 1; /*0x76ecdc*/
    v15 = 0; /*0x76eced*/
    if ( *(_WORD *)(a1 + 8) ) /*0x76ece9*/
    {
      v8 = dbl_A46298; /*0x76ecf7*/
      do /*0x76ed71*/
      {
        v9 = v2; /*0x76ed06*/
        v10 = (float *)v3; /*0x76ed08*/
        v13 = 0; /*0x76ed0a*/
        if ( v18 ) /*0x76ed12*/
        {
          v11 = v18; /*0x76ed14*/
          v13 = v18; /*0x76ed1a*/
          do /*0x76ed39*/
          {
            v16 = *v9; /*0x76ed21*/
            ++v10; /*0x76ed25*/
            ++v9; /*0x76ed28*/
            --v11; /*0x76ed2b*/
            v10[0xFFFFFFFF] = (double)v16 / v8 - 1.0; /*0x76ed36*/
          }
          while ( v11 ); /*0x76ed39*/
          v4 = v14; /*0x76ed3b*/
        }
        if ( v13 < v17 ) /*0x76ed4a*/
          memset(v10, 0, 4 * (unsigned __int16)(v17 - v13)); /*0x76ed53*/
        v4 += *(_DWORD *)(a1 + 0x1C); /*0x76ed59*/
        v2 += *(_DWORD *)(a1 + 0x18); /*0x76ed5c*/
        v3 += *(_DWORD *)(a1 + 0x20); /*0x76ed5f*/
        v12 = (unsigned __int16)(v15 + 1) < *(_WORD *)(a1 + 8); /*0x76ed65*/
        v14 = v4; /*0x76ed69*/
        ++v15; /*0x76ed6d*/
      }
      while ( v12 ); /*0x76ed71*/
    }
    return v4; /*0x76ed71*/
  }
  v5 = 0; /*0x76ec7b*/
  if ( !*(_WORD *)(a1 + 8) ) /*0x76ec81*/
    return v4; /*0x76ed79*/
  v6 = *(_DWORD *)(a1 + 0x1C); /*0x76ec87*/
  do /*0x76ecab*/
  {
    _memset(v3, 0, v6); /*0x76ec94*/
    v6 = *(_DWORD *)(a1 + 0x1C); /*0x76ec99*/
    v3 += *(_DWORD *)(a1 + 0x20); /*0x76ec9c*/
    ++v5; /*0x76ec9f*/
    v4 += v6; /*0x76eca5*/
  }
  while ( (unsigned __int16)v5 < *(_WORD *)(a1 + 8) ); /*0x76ecab*/
  return v4; /*0x76ecad*/
}
