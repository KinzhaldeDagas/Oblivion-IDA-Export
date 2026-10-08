int __cdecl sub_76E800(int a1)
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
  double v12; // st5
  int v13; // [esp+10h] [ebp-Ch]
  unsigned __int16 v14; // [esp+14h] [ebp-8h]
  int v15; // [esp+18h] [ebp-4h]
  unsigned __int16 v16; // [esp+20h] [ebp+4h]

  v2 = *(_DWORD *)(a1 + 0x10); /*0x76e80a*/
  v3 = *(_DWORD *)(a1 + 0x24); /*0x76e80d*/
  v4 = 0; /*0x76e811*/
  v13 = 0; /*0x76e815*/
  if ( v2 ) /*0x76e819*/
  {
    v7 = *(_WORD *)a1 + 1; /*0x76e865*/
    v14 = v7; /*0x76e86f*/
    if ( (__int16)(*(_WORD *)(a1 + 4) - 4 - v7) <= 0 ) /*0x76e873*/
      v16 = *(_WORD *)(a1 + 4) - 4; /*0x76e881*/
    else
      v16 = *(_WORD *)a1 + 1; /*0x76e878*/
    v15 = 0; /*0x76e889*/
    if ( *(_WORD *)(a1 + 8) ) /*0x76e885*/
    {
      v8 = dbl_A89C50; /*0x76e88f*/
      do /*0x76e8f2*/
      {
        v9 = 0; /*0x76e897*/
        v10 = (float *)v3; /*0x76e89e*/
        if ( v16 ) /*0x76e8a0*/
        {
          v11 = v16; /*0x76e8a2*/
          v9 = v16; /*0x76e8ab*/
          do /*0x76e8be*/
          {
            v12 = (double)*(int *)((char *)v10++ + v2 - v3); /*0x76e8ae*/
            --v11; /*0x76e8b4*/
            v10[0xFFFFFFFF] = v12 * v8 - 1.0; /*0x76e8bb*/
          }
          while ( v11 ); /*0x76e8be*/
          v7 = v14; /*0x76e8c0*/
        }
        if ( v9 < v7 ) /*0x76e8c7*/
        {
          memset(v10, 0, 4 * (unsigned __int16)(v7 - v9)); /*0x76e8d0*/
          v7 = v14; /*0x76e8d2*/
        }
        v13 += *(_DWORD *)(a1 + 0x1C); /*0x76e8d9*/
        v2 += *(_DWORD *)(a1 + 0x18); /*0x76e8e1*/
        v3 += *(_DWORD *)(a1 + 0x20); /*0x76e8e4*/
        ++v15; /*0x76e8ee*/
      }
      while ( (unsigned __int16)v15 < *(_WORD *)(a1 + 8) ); /*0x76e8f2*/
    }
    return v13; /*0x76e8f2*/
  }
  if ( !*(_WORD *)(a1 + 8) ) /*0x76e81f*/
    return v13; /*0x76e8f8*/
  v5 = *(_DWORD *)(a1 + 0x1C); /*0x76e825*/
  do /*0x76e845*/
  {
    _memset(v3, 0, v5); /*0x76e82c*/
    v5 = *(_DWORD *)(a1 + 0x1C); /*0x76e831*/
    v3 += *(_DWORD *)(a1 + 0x20); /*0x76e834*/
    v13 += v5; /*0x76e837*/
    ++v4; /*0x76e83b*/
  }
  while ( (unsigned __int16)v4 < *(_WORD *)(a1 + 8) ); /*0x76e845*/
  return v13; /*0x76e84b*/
}
