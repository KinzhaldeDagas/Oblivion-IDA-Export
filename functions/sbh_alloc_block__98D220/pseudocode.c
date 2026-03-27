_DWORD *__cdecl __sbh_alloc_block(int a1)
{
  char *v2; // eax
  int v3; // ecx
  unsigned int v4; // esi
  char *i; // ebx
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // edx
  _DWORD *j; // ecx
  int v11; // edi
  int v12; // ecx
  int *v13; // edx
  int v14; // ecx
  int v15; // esi
  unsigned int v16; // ebx
  _BYTE *v17; // edi
  bool v18; // zf
  unsigned int v19; // ebx
  _BYTE *v20; // edi
  int v21; // ebx
  _DWORD *v22; // ecx
  int v23; // edi
  _DWORD *v24; // edx
  int v25; // [esp+Ch] [ebp-14h]
  int v26; // [esp+Ch] [ebp-14h]
  signed int v27; // [esp+10h] [ebp-10h]
  _DWORD *v28; // [esp+14h] [ebp-Ch]
  unsigned int v29; // [esp+18h] [ebp-8h]
  int v30; // [esp+18h] [ebp-8h]
  int v31; // [esp+1Ch] [ebp-4h]
  char *v32; // [esp+28h] [ebp+8h]
  char v33; // [esp+2Bh] [ebp+Bh]

  v2 = (char *)lpMem + 0x14 * dword_BAABC4;
  v27 = (a1 + 0x17) & 0xFFFFFFF0;
  v3 = (v27 >> 4) - 1;
  if ( v3 >= 0x20 )
  {
    v4 = 0;
    v29 = 0xFFFFFFFF >> ((v27 >> 4) - 0x21);
  }
  else
  {
    v4 = 0xFFFFFFFF >> v3;
    v29 = 0xFFFFFFFF;
  }
  for ( i = (char *)dword_BAABD0; ; i += 0x14 )
  {
    v32 = i;
    if ( i >= v2 || v4 & *(_DWORD *)i | v29 & *((_DWORD *)i + 1) )
      break;
  }
  if ( i == v2 )
  {
    for ( i = (char *)lpMem; ; i += 0x14 )
    {
      v32 = i;
      if ( (unsigned int)i >= dword_BAABD0 || v4 & *(_DWORD *)i | v29 & *((_DWORD *)i + 1) )
        break;
    }
    if ( i == (char *)dword_BAABD0 )
    {
      while ( i < v2 && !*((_DWORD *)i + 2) )
      {
        i += 0x14;
        v32 = i;
      }
      if ( i == v2 )
      {
        for ( i = (char *)lpMem; ; i += 0x14 )
        {
          v32 = i;
          if ( (unsigned int)i >= dword_BAABD0 || *((_DWORD *)i + 2) )
            break;
        }
        if ( i == (char *)dword_BAABD0 )
        {
          i = __sbh_alloc_new_region();
          v32 = i;
          if ( !i )
            return 0;
        }
      }
      **((_DWORD **)i + 4) = __sbh_alloc_new_group(i);
      if ( **((_DWORD **)i + 4) == 0xFFFFFFFF )
        return 0;
    }
  }
  dword_BAABD0 = (int)i;
  v7 = *((_DWORD **)i + 4);
  v8 = *v7;
  v31 = *v7;
  if ( *v7 == 0xFFFFFFFF || !(v4 & v7[v8 + 0x11] | v29 & v7[v8 + 0x31]) )
  {
    v31 = 0;
    v9 = v7[0x31];
    for ( j = v7 + 0x11; !(v4 & *j | v29 & v9); ++j )
    {
      ++v31;
      v9 = j[0x21];
    }
    v8 = v31;
  }
  v28 = &v7[0x81 * v8 + 0x51];
  v11 = 0;
  v12 = v4 & v7[v8 + 0x11];
  if ( !v12 )
  {
    v12 = v29 & v7[v8 + 0x31];
    v11 = 0x20;
  }
  while ( v12 >= 0 )
  {
    v12 *= 2;
    ++v11;
  }
  v13 = (int *)v28[2 * v11 + 1];
  v14 = *v13 - v27;
  v15 = (v14 >> 4) - 1;
  v30 = v14;
  if ( v15 > 0x3F )
    v15 = 0x3F;
  if ( v15 == v11 )
    goto LABEL_57;
  if ( v13[1] == v13[2] )
  {
    if ( v11 >= 0x20 )
    {
      v19 = 0x80000000 >> (v11 - 0x20);
      v20 = (char *)v7 + v11 + 4;
      v21 = ~v19;
      v7[v31 + 0x31] &= v21;
      v18 = (*v20)-- == 1;
      v26 = v21;
      if ( v18 )
      {
        i = v32;
        *((_DWORD *)v32 + 1) &= v26;
        goto LABEL_47;
      }
    }
    else
    {
      v16 = 0x80000000 >> v11;
      v17 = (char *)v7 + v11 + 4;
      v25 = ~v16;
      v7[v31 + 0x11] &= ~v16;
      v18 = (*v17)-- == 1;
      if ( v18 )
      {
        i = v32;
        *(_DWORD *)v32 &= v25;
        goto LABEL_47;
      }
    }
    i = v32;
  }
LABEL_47:
  *(_DWORD *)(v13[2] + 4) = v13[1];
  *(_DWORD *)(v13[1] + 8) = v13[2];
  if ( v14 )
  {
    v22 = &v28[2 * v15];
    v23 = v22[1];
    v13[2] = (int)v22;
    v13[1] = v23;
    v22[1] = v13;
    *(_DWORD *)(v13[1] + 8) = v13;
    if ( v13[1] == v13[2] )
    {
      v33 = *((_BYTE *)v7 + v15 + 4);
      *((_BYTE *)v7 + v15 + 4) = v33 + 1;
      if ( v15 >= 0x20 )
      {
        if ( !v33 )
          *((_DWORD *)i + 1) |= 0x80000000 >> (v15 - 0x20);
        v7[v31 + 0x31] |= 0x80000000 >> (v15 - 0x20);
      }
      else
      {
        if ( !v33 )
          *(_DWORD *)i |= 0x80000000 >> v15;
        v7[v31 + 0x11] |= 0x80000000 >> v15;
      }
    }
    v14 = v30;
LABEL_57:
    if ( v14 )
    {
      *v13 = v14;
      *(int *)((char *)v13 + v14 - 4) = v14;
    }
    goto LABEL_60;
  }
  v14 = 0;
LABEL_60:
  v24 = (int *)((char *)v13 + v14);
  *v24 = v27 + 1;
  *(_DWORD *)((char *)v24 + v27 - 4) = v27 + 1;
  v18 = (*v28)++ == 0;
  if ( v18 && i == (char *)dword_BAA2A8 && v31 == dword_BAABD8 )
    dword_BAA2A8 = 0;
  *v7 = v31;
  return v24 + 1;
}
