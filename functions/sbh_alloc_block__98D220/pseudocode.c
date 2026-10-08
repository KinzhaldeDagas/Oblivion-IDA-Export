_DWORD *__cdecl __sbh_alloc_block(int a1)
{
  char *v1; // eax
  int v2; // ecx
  unsigned int v3; // esi
  char *i; // ebx
  _DWORD *v6; // eax
  int v7; // edx
  int v8; // edx
  _DWORD *j; // ecx
  int v10; // edi
  int v11; // ecx
  int *v12; // edx
  int v13; // ecx
  int v14; // esi
  unsigned int v15; // ebx
  _BYTE *v16; // edi
  bool v17; // zf
  unsigned int v18; // ebx
  _BYTE *v19; // edi
  int v20; // ebx
  _DWORD *v21; // ecx
  int v22; // edi
  _DWORD *v23; // edx
  int v24; // [esp+Ch] [ebp-14h]
  int v25; // [esp+Ch] [ebp-14h]
  signed int v26; // [esp+10h] [ebp-10h]
  _DWORD *v27; // [esp+14h] [ebp-Ch]
  unsigned int v28; // [esp+18h] [ebp-8h]
  int v29; // [esp+18h] [ebp-8h]
  int v30; // [esp+1Ch] [ebp-4h]
  char *v31; // [esp+28h] [ebp+8h]
  char v32; // [esp+2Bh] [ebp+Bh]

  v1 = (char *)MEMORY[0xBAABC8] + 0x14 * unk_BAABC4; /*0x98d231*/
  v26 = (a1 + 0x17) & 0xFFFFFFF0; /*0x98d23d*/
  v2 = (v26 >> 4) - 1; /*0x98d244*/
  if ( v2 >= 0x20 ) /*0x98d24a*/
  {
    v3 = 0; /*0x98d25d*/
    v28 = 0xFFFFFFFF >> ((v26 >> 4) - 0x21); /*0x98d261*/
  }
  else
  {
    v3 = 0xFFFFFFFF >> v2; /*0x98d24f*/
    v28 = 0xFFFFFFFF; /*0x98d251*/
  }
  for ( i = (char *)unk_BAABD0; ; i += 0x14 ) /*0x98d26a*/
  {
    v31 = i; /*0x98d281*/
    if ( i >= v1 || v3 & *(_DWORD *)i | v28 & *((_DWORD *)i + 1) ) /*0x98d278*/
      break; /*0x98d278*/
  }
  if ( i == v1 ) /*0x98d288*/
  {
    for ( i = (char *)MEMORY[0xBAABC8]; ; i += 0x14 ) /*0x98d28a*/
    {
      v31 = i; /*0x98d2a5*/
      if ( (unsigned int)i >= unk_BAABD0 || v3 & *(_DWORD *)i | v28 & *((_DWORD *)i + 1) ) /*0x98d29c*/
        break; /*0x98d29c*/
    }
    if ( i == (char *)unk_BAABD0 ) /*0x98d2ac*/
    {
      while ( i < v1 && !*((_DWORD *)i + 2) ) /*0x98d2b4*/
      {
        i += 0x14; /*0x98d2b6*/
        v31 = i; /*0x98d2b9*/
      }
      if ( i == v1 ) /*0x98d2c2*/
      {
        for ( i = (char *)MEMORY[0xBAABC8]; ; i += 0x14 ) /*0x98d2c4*/
        {
          v31 = i; /*0x98d2d7*/
          if ( (unsigned int)i >= unk_BAABD0 || *((_DWORD *)i + 2) ) /*0x98d2cc*/
            break; /*0x98d2cc*/
        }
        if ( i == (char *)unk_BAABD0 ) /*0x98d2de*/
        {
          i = __sbh_alloc_new_region(); /*0x98d2e5*/
          v31 = i; /*0x98d2e9*/
          if ( !i ) /*0x98d2ec*/
            return 0; /*0x98d2ec*/
        }
      }
      **((_DWORD **)i + 4) = __sbh_alloc_new_group(i); /*0x98d2ff*/
      if ( **((_DWORD **)i + 4) == 0xFFFFFFFF ) /*0x98d307*/
        return 0; /*0x98d2f0*/
    }
  }
  unk_BAABD0 = (int)i; /*0x98d309*/
  v6 = *((_DWORD **)i + 4); /*0x98d30f*/
  v7 = *v6; /*0x98d312*/
  v30 = *v6; /*0x98d317*/
  if ( *v6 == 0xFFFFFFFF || !(v3 & v6[v7 + 0x11] | v28 & v6[v7 + 0x31]) ) /*0x98d32c*/
  {
    v30 = 0; /*0x98d330*/
    v8 = v6[0x31]; /*0x98d334*/
    for ( j = v6 + 0x11; !(v3 & *j | v28 & v8); ++j ) /*0x98d33a*/
    {
      ++v30; /*0x98d348*/
      v8 = j[0x21]; /*0x98d34b*/
    }
    v7 = v30; /*0x98d356*/
  }
  v27 = &v6[0x81 * v7 + 0x51]; /*0x98d368*/
  v10 = 0; /*0x98d36f*/
  v11 = v3 & v6[v7 + 0x11]; /*0x98d371*/
  if ( !v11 ) /*0x98d373*/
  {
    v11 = v28 & v6[v7 + 0x31]; /*0x98d37c*/
    v10 = 0x20; /*0x98d381*/
  }
  while ( v11 >= 0 ) /*0x98d389*/
  {
    v11 *= 2; /*0x98d384*/
    ++v10; /*0x98d386*/
  }
  v12 = (int *)v27[2 * v10 + 1]; /*0x98d38e*/
  v13 = *v12 - v26; /*0x98d394*/
  v14 = (v13 >> 4) - 1; /*0x98d39c*/
  v29 = v13; /*0x98d3a0*/
  if ( v14 > 0x3F ) /*0x98d3a3*/
    v14 = 0x3F; /*0x98d3a7*/
  if ( v14 == v10 ) /*0x98d3aa*/
    goto LABEL_57; /*0x98d3aa*/
  if ( v12[1] == v12[2] ) /*0x98d3b6*/
  {
    if ( v10 >= 0x20 ) /*0x98d3c0*/
    {
      v18 = 0x80000000 >> (v10 - 0x20); /*0x98d3eb*/
      v19 = (char *)v6 + v10 + 4; /*0x98d3f7*/
      v20 = ~v18; /*0x98d3fb*/
      v6[v30 + 0x31] &= v20; /*0x98d3fd*/
      v17 = (*v19)-- == 1; /*0x98d3ff*/
      v25 = v20; /*0x98d401*/
      if ( v17 ) /*0x98d404*/
      {
        i = v31; /*0x98d406*/
        *((_DWORD *)v31 + 1) &= v25; /*0x98d40c*/
        goto LABEL_47; /*0x98d40f*/
      }
    }
    else
    {
      v15 = 0x80000000 >> v10; /*0x98d3c4*/
      v16 = (char *)v6 + v10 + 4; /*0x98d3c9*/
      v24 = ~v15; /*0x98d3cf*/
      v6[v30 + 0x11] &= ~v15; /*0x98d3d6*/
      v17 = (*v16)-- == 1; /*0x98d3da*/
      if ( v17 ) /*0x98d3dc*/
      {
        i = v31; /*0x98d3e1*/
        *(_DWORD *)v31 &= v24; /*0x98d3e4*/
        goto LABEL_47; /*0x98d3e6*/
      }
    }
    i = v31; /*0x98d411*/
  }
LABEL_47:
  *(_DWORD *)(v12[2] + 4) = v12[1]; /*0x98d414*/
  *(_DWORD *)(v12[1] + 8) = v12[2]; /*0x98d427*/
  if ( v13 ) /*0x98d42a*/
  {
    v21 = &v27[2 * v14]; /*0x98d433*/
    v22 = v21[1]; /*0x98d436*/
    v12[2] = (int)v21; /*0x98d439*/
    v12[1] = v22; /*0x98d43c*/
    v21[1] = v12; /*0x98d43f*/
    *(_DWORD *)(v12[1] + 8) = v12; /*0x98d445*/
    if ( v12[1] == v12[2] ) /*0x98d44e*/
    {
      v32 = *((_BYTE *)v6 + v14 + 4); /*0x98d454*/
      *((_BYTE *)v6 + v14 + 4) = v32 + 1; /*0x98d45c*/
      if ( v14 >= 0x20 ) /*0x98d460*/
      {
        if ( !v32 ) /*0x98d489*/
          *((_DWORD *)i + 1) |= 0x80000000 >> (v14 - 0x20); /*0x98d495*/
        v6[v30 + 0x31] |= 0x80000000 >> (v14 - 0x20); /*0x98d4ac*/
      }
      else
      {
        if ( !v32 ) /*0x98d466*/
          *(_DWORD *)i |= 0x80000000 >> v14; /*0x98d471*/
        v6[v30 + 0x11] |= 0x80000000 >> v14; /*0x98d47f*/
      }
    }
    v13 = v29; /*0x98d4ae*/
LABEL_57:
    if ( v13 ) /*0x98d4b3*/
    {
      *v12 = v13; /*0x98d4b5*/
      *(int *)((char *)v12 + v13 - 4) = v13; /*0x98d4b7*/
    }
    goto LABEL_60; /*0x98d4bb*/
  }
  v13 = 0; /*0x98d4bd*/
LABEL_60:
  v23 = (int *)((char *)v12 + v13); /*0x98d4c0*/
  *v23 = v26 + 1; /*0x98d4c8*/
  *(_DWORD *)((char *)v23 + v26 - 4) = v26 + 1; /*0x98d4ca*/
  v17 = (*v27)++ == 0; /*0x98d4d3*/
  if ( v17 && i == (char *)dword_BA9E10[0x126] && v30 == unk_BAABD8 ) /*0x98d4ed*/
    dword_BA9E10[0x126] = 0; /*0x98d4ef*/
  *v6 = v30; /*0x98d4f9*/
  return v23 + 1; /*0x98d4fe*/
}
