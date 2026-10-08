int __cdecl sub_76EB40(int a1)
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

  v2 = *(__int16 **)(a1 + 0x10); /*0x76eb4a*/
  v3 = *(_DWORD *)(a1 + 0x24); /*0x76eb4d*/
  v4 = 0; /*0x76eb50*/
  v14 = 0; /*0x76eb55*/
  if ( v2 ) /*0x76eb59*/
  {
    v17 = *(_WORD *)a1 + 1; /*0x76ebb3*/
    if ( (__int16)(*(_WORD *)(a1 + 4) - 0x10 - v17) <= 0 ) /*0x76ebb7*/
      v18 = *(_WORD *)(a1 + 4) - 0x10; /*0x76ebc5*/
    else
      v18 = *(_WORD *)a1 + 1; /*0x76ebbc*/
    v15 = 0; /*0x76ebcd*/
    if ( *(_WORD *)(a1 + 8) ) /*0x76ebc9*/
    {
      v8 = dbl_A3DDD0; /*0x76ebd3*/
      do /*0x76ec49*/
      {
        v9 = v2; /*0x76ebe0*/
        v10 = (float *)v3; /*0x76ebe2*/
        v13 = 0; /*0x76ebe4*/
        if ( v18 ) /*0x76ebec*/
        {
          v11 = v18; /*0x76ebee*/
          v13 = v18; /*0x76ebf4*/
          do /*0x76ec11*/
          {
            v16 = *v9; /*0x76ebfb*/
            ++v10; /*0x76ebff*/
            ++v9; /*0x76ec02*/
            --v11; /*0x76ec05*/
            v10[0xFFFFFFFF] = (double)v16 / v8; /*0x76ec0e*/
          }
          while ( v11 ); /*0x76ec11*/
          v4 = v14; /*0x76ec13*/
        }
        if ( v13 < v17 ) /*0x76ec22*/
          memset(v10, 0, 4 * (unsigned __int16)(v17 - v13)); /*0x76ec2b*/
        v4 += *(_DWORD *)(a1 + 0x1C); /*0x76ec31*/
        v2 = (__int16 *)((char *)v2 + *(_DWORD *)(a1 + 0x18)); /*0x76ec34*/
        v3 += *(_DWORD *)(a1 + 0x20); /*0x76ec37*/
        v12 = (unsigned __int16)(v15 + 1) < *(_WORD *)(a1 + 8); /*0x76ec3d*/
        v14 = v4; /*0x76ec41*/
        ++v15; /*0x76ec45*/
      }
      while ( v12 ); /*0x76ec49*/
    }
    return v4; /*0x76ec49*/
  }
  v5 = 0; /*0x76eb5b*/
  if ( !*(_WORD *)(a1 + 8) ) /*0x76eb61*/
    return v4; /*0x76ec4f*/
  v6 = *(_DWORD *)(a1 + 0x1C); /*0x76eb67*/
  do /*0x76eb8b*/
  {
    _memset(v3, 0, v6); /*0x76eb74*/
    v6 = *(_DWORD *)(a1 + 0x1C); /*0x76eb79*/
    v3 += *(_DWORD *)(a1 + 0x20); /*0x76eb7c*/
    ++v5; /*0x76eb7f*/
    v4 += v6; /*0x76eb85*/
  }
  while ( (unsigned __int16)v5 < *(_WORD *)(a1 + 8) ); /*0x76eb8b*/
  return v4; /*0x76eb8d*/
}
