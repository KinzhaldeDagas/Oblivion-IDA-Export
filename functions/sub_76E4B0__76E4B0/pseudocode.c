int __cdecl sub_76E4B0(int a1)
{
  unsigned __int16 v2; // dx
  char *v3; // ebp
  int v4; // ecx
  char *v5; // ebx
  unsigned __int16 v6; // di
  int v7; // edi
  unsigned int v8; // eax
  int v10; // eax
  bool v11; // zf
  int v12; // edx
  int v13; // [esp+10h] [ebp-14h]
  unsigned __int16 v14; // [esp+14h] [ebp-10h]
  int v15; // [esp+18h] [ebp-Ch]
  int v16; // [esp+1Ch] [ebp-8h]
  int v17; // [esp+20h] [ebp-4h]
  __int16 v18; // [esp+28h] [ebp+4h]
  unsigned __int16 v19; // [esp+28h] [ebp+4h]

  v2 = *(_WORD *)(a1 + 4); /*0x76e4ba*/
  v3 = *(char **)(a1 + 0x10); /*0x76e4be*/
  v4 = *(_DWORD *)(a1 + 0xC); /*0x76e4c1*/
  v5 = *(char **)(a1 + 0x24); /*0x76e4c4*/
  v6 = *(_WORD *)a1 - v2 + 1; /*0x76e4d6*/
  v13 = 0; /*0x76e4d9*/
  v15 = v4; /*0x76e4dd*/
  v14 = v6; /*0x76e4e1*/
  if ( !v3 ) /*0x76e4e5*/
  {
    v7 = 0; /*0x76e4e7*/
    if ( *(_WORD *)(a1 + 8) ) /*0x76e4e9*/
    {
      v8 = *(_DWORD *)(a1 + 0x1C); /*0x76e4f3*/
      do /*0x76e513*/
      {
        _memset((int)v5, 0, v8); /*0x76e4fa*/
        v8 = *(_DWORD *)(a1 + 0x1C); /*0x76e4ff*/
        v5 += *(_DWORD *)(a1 + 0x20); /*0x76e502*/
        v13 += v8; /*0x76e505*/
        ++v7; /*0x76e509*/
      }
      while ( (unsigned __int16)v7 < *(_WORD *)(a1 + 8) ); /*0x76e513*/
      return v13; /*0x76e520*/
    }
    return v13; /*0x76e4ed*/
  }
  if ( !v4 ) /*0x76e523*/
  {
    v11 = *(_WORD *)(a1 + 8) == 0; /*0x76e5b0*/
    v19 = 0; /*0x76e5b4*/
    if ( !v11 ) /*0x76e5b8*/
    {
      do /*0x76e601*/
      {
        memcpy(v5, v3, *(_DWORD *)(a1 + 0x14)); /*0x76e5c6*/
        if ( v6 ) /*0x76e5d6*/
        {
          memset(&v5[*(_DWORD *)(a1 + 0x14)], 0, 4 * v6); /*0x76e5df*/
          v6 = v14; /*0x76e5e1*/
        }
        v13 += *(_DWORD *)(a1 + 0x1C); /*0x76e5e8*/
        v3 += *(_DWORD *)(a1 + 0x18); /*0x76e5f0*/
        v5 += *(_DWORD *)(a1 + 0x20); /*0x76e5f3*/
        ++v19; /*0x76e5fd*/
      }
      while ( v19 < *(_WORD *)(a1 + 8) ); /*0x76e601*/
    }
    return v13; /*0x76e601*/
  }
  v10 = 0; /*0x76e529*/
  v11 = *(_WORD *)(a1 + 8) == 0; /*0x76e52b*/
  v18 = 0; /*0x76e52f*/
  if ( v11 ) /*0x76e533*/
    return v13; /*0x76e603*/
  v16 = v2; /*0x76e53c*/
  while ( 1 ) /*0x76e563*/
  {
    v17 = v10 + 1; /*0x76e563*/
    memcpy(v5, &v3[4 * v16 * *(unsigned __int16 *)(v4 + 2 * (unsigned __int16)v10)], *(_DWORD *)(a1 + 0x14)); /*0x76e567*/
    v5 += 4 * *(_DWORD *)(a1 + 0x18); /*0x76e575*/
    if ( v6 ) /*0x76e578*/
    {
      v12 = v6; /*0x76e57a*/
      memset(v5, 0, 4 * v6); /*0x76e583*/
      v6 = v14; /*0x76e585*/
      v5 += 4 * v12; /*0x76e589*/
    }
    v13 += *(_DWORD *)(a1 + 0x1C); /*0x76e593*/
    if ( (unsigned __int16)++v18 >= *(_WORD *)(a1 + 8) ) /*0x76e5a2*/
      break; /*0x76e5a2*/
    v4 = v15; /*0x76e542*/
    v10 = v17; /*0x76e546*/
  }
  return v13; /*0x76e519*/
}
