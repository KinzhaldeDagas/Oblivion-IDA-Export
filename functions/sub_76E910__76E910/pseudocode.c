int __cdecl sub_76E910(int a1)
{
  int v2; // ebp
  int v3; // ebx
  int v4; // edi
  unsigned int v5; // eax
  unsigned __int16 v7; // ax
  double v8; // st7
  unsigned __int16 v9; // dx
  float *v10; // edi
  int v11; // eax
  double v12; // st6
  int v13; // [esp+10h] [ebp-Ch]
  unsigned __int16 v14; // [esp+14h] [ebp-8h]
  int v15; // [esp+18h] [ebp-4h]
  unsigned __int16 v16; // [esp+20h] [ebp+4h]

  v2 = *(_DWORD *)(a1 + 0x10); /*0x76e91a*/
  v3 = *(_DWORD *)(a1 + 0x24); /*0x76e91d*/
  v4 = 0; /*0x76e921*/
  v13 = 0; /*0x76e925*/
  if ( v2 ) /*0x76e929*/
  {
    v7 = *(_WORD *)a1 + 1; /*0x76e975*/
    v14 = v7; /*0x76e97f*/
    if ( (__int16)(*(_WORD *)(a1 + 4) - 8 - v7) <= 0 ) /*0x76e983*/
      v16 = *(_WORD *)(a1 + 4) - 8; /*0x76e991*/
    else
      v16 = *(_WORD *)a1 + 1; /*0x76e988*/
    v15 = 0; /*0x76e999*/
    if ( *(_WORD *)(a1 + 8) ) /*0x76e995*/
    {
      v8 = dbl_A89C58; /*0x76e99f*/
      do /*0x76e9fe*/
      {
        v9 = 0; /*0x76e9a5*/
        v10 = (float *)v3; /*0x76e9ac*/
        if ( v16 ) /*0x76e9ae*/
        {
          v11 = v16; /*0x76e9b0*/
          v9 = v16; /*0x76e9b9*/
          do /*0x76e9ca*/
          {
            v12 = (double)*(int *)((char *)v10++ + v2 - v3); /*0x76e9bc*/
            --v11; /*0x76e9c2*/
            v10[0xFFFFFFFF] = v12 * v8; /*0x76e9c7*/
          }
          while ( v11 ); /*0x76e9ca*/
          v7 = v14; /*0x76e9cc*/
        }
        if ( v9 < v7 ) /*0x76e9d3*/
        {
          memset(v10, 0, 4 * (unsigned __int16)(v7 - v9)); /*0x76e9dc*/
          v7 = v14; /*0x76e9de*/
        }
        v13 += *(_DWORD *)(a1 + 0x1C); /*0x76e9e5*/
        v2 += *(_DWORD *)(a1 + 0x18); /*0x76e9ed*/
        v3 += *(_DWORD *)(a1 + 0x20); /*0x76e9f0*/
        ++v15; /*0x76e9fa*/
      }
      while ( (unsigned __int16)v15 < *(_WORD *)(a1 + 8) ); /*0x76e9fe*/
    }
    return v13; /*0x76e9fe*/
  }
  if ( !*(_WORD *)(a1 + 8) ) /*0x76e92f*/
    return v13; /*0x76ea02*/
  v5 = *(_DWORD *)(a1 + 0x1C); /*0x76e935*/
  do /*0x76e955*/
  {
    _memset(v3, 0, v5); /*0x76e93c*/
    v5 = *(_DWORD *)(a1 + 0x1C); /*0x76e941*/
    v3 += *(_DWORD *)(a1 + 0x20); /*0x76e944*/
    v13 += v5; /*0x76e947*/
    ++v4; /*0x76e94b*/
  }
  while ( (unsigned __int16)v4 < *(_WORD *)(a1 + 8) ); /*0x76e955*/
  return v13; /*0x76e95b*/
}
