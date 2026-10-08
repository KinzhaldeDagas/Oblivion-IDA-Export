int __cdecl __sbh_resize_block(_DWORD *a1, int a2, int a3)
{
  int v3; // eax
  unsigned int v4; // edx
  signed int v5; // esi
  int v6; // ecx
  int *v7; // edi
  int v8; // ebx
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  _BYTE *v11; // ecx
  int v12; // ebx
  bool v13; // zf
  unsigned int v14; // ebx
  _BYTE *v15; // ecx
  int v16; // ebx
  unsigned int v17; // edi
  int v18; // ecx
  _DWORD *v19; // eax
  char v20; // cl
  int v21; // edx
  int *v22; // eax
  int v24; // ecx
  int *v25; // ebx
  unsigned int v26; // esi
  unsigned int v27; // esi
  unsigned int v28; // ebx
  _BYTE *v29; // esi
  int v30; // ebx
  _BYTE *v31; // ecx
  unsigned int v32; // ebx
  unsigned int v33; // ecx
  int v34; // edi
  _DWORD *v35; // eax
  char v36; // cl
  int v37; // [esp+Ch] [ebp-Ch]
  int v38; // [esp+10h] [ebp-8h]
  int v39; // [esp+14h] [ebp-4h]
  int v40; // [esp+14h] [ebp-4h]
  int *v41; // [esp+24h] [ebp+Ch]
  char v42; // [esp+27h] [ebp+Fh]
  int v43; // [esp+28h] [ebp+10h]
  unsigned int v44; // [esp+28h] [ebp+10h]
  int v45; // [esp+28h] [ebp+10h]
  char v46; // [esp+2Bh] [ebp+13h]

  v3 = a1[4]; /*0x98cf4a*/
  v4 = (unsigned int)(a2 - a1[3]) >> 0xF; /*0x98cf5e*/
  v37 = 0x204 * v4 + v3 + 0x144; /*0x98cf70*/
  v5 = (a3 + 0x17) & 0xFFFFFFF0; /*0x98cf76*/
  v6 = *(_DWORD *)(a2 - 4) - 1; /*0x98cf79*/
  v7 = (int *)(v6 + a2 - 4); /*0x98cf7c*/
  v8 = *v7; /*0x98cf80*/
  v43 = v6; /*0x98cf82*/
  v39 = *v7; /*0x98cf85*/
  if ( v5 <= v6 ) /*0x98cf88*/
  {
    if ( v5 < v6 ) /*0x98d0e3*/
    {
      v45 = v6 - v5; /*0x98d0ec*/
      v24 = v5 + 1; /*0x98d0ef*/
      *(_DWORD *)(a2 - 4) = v5 + 1; /*0x98d0f2*/
      v25 = (int *)(a2 + v5 - 4); /*0x98d0f5*/
      v26 = (v45 >> 4) - 1; /*0x98d0ff*/
      v41 = v25; /*0x98d103*/
      v25[0xFFFFFFFF] = v24; /*0x98d106*/
      if ( v26 > 0x3F ) /*0x98d109*/
        v26 = 0x3F; /*0x98d10d*/
      if ( (v39 & 1) == 0 ) /*0x98d112*/
      {
        v27 = (v39 >> 4) - 1; /*0x98d11e*/
        if ( v27 > 0x3F ) /*0x98d122*/
          v27 = 0x3F; /*0x98d126*/
        if ( v7[1] == v7[2] ) /*0x98d12d*/
        {
          if ( v27 >= 0x20 ) /*0x98d137*/
          {
            v31 = (_BYTE *)(v27 + v3 + 4); /*0x98d157*/
            v32 = ~(0x80000000 >> (v27 - 0x20)); /*0x98d15b*/
            *(_DWORD *)(v3 + 4 * v4 + 0xC4) &= v32; /*0x98d15d*/
            v13 = (*v31)-- == 1; /*0x98d164*/
            if ( v13 ) /*0x98d166*/
              a1[1] &= v32; /*0x98d16b*/
          }
          else
          {
            v28 = 0x80000000 >> v27; /*0x98d13b*/
            v29 = (_BYTE *)(v27 + v3 + 4); /*0x98d13d*/
            v30 = ~v28; /*0x98d141*/
            *(_DWORD *)(v3 + 4 * v4 + 0x44) &= v30; /*0x98d143*/
            v13 = (*v29)-- == 1; /*0x98d147*/
            if ( v13 ) /*0x98d149*/
              *a1 &= v30; /*0x98d14e*/
          }
          v25 = v41; /*0x98d16e*/
        }
        *(_DWORD *)(v7[2] + 4) = v7[1]; /*0x98d177*/
        *(_DWORD *)(v7[1] + 8) = v7[2]; /*0x98d180*/
        v45 += v39; /*0x98d189*/
        v26 = (v45 >> 4) - 1; /*0x98d18f*/
        if ( v26 > 0x3F ) /*0x98d193*/
          v26 = 0x3F; /*0x98d197*/
      }
      v33 = v37 + 8 * v26; /*0x98d19b*/
      v34 = *(_DWORD *)(v33 + 4); /*0x98d19e*/
      v25[2] = v33; /*0x98d1a1*/
      v25[1] = v34; /*0x98d1a4*/
      *(_DWORD *)(v33 + 4) = v25; /*0x98d1a7*/
      *(_DWORD *)(v25[1] + 8) = v25; /*0x98d1ad*/
      if ( v25[1] == v25[2] ) /*0x98d1b6*/
      {
        v42 = *(_BYTE *)(v26 + v3 + 4); /*0x98d1bc*/
        *(_BYTE *)(v26 + v3 + 4) = v42 + 1; /*0x98d1c4*/
        if ( v26 >= 0x20 ) /*0x98d1c8*/
        {
          if ( !v42 ) /*0x98d1ea*/
            a1[1] |= 0x80000000 >> (v26 - 0x20); /*0x98d1f9*/
          v35 = (_DWORD *)(v3 + 4 * v4 + 0xC4); /*0x98d1fc*/
          v36 = v26 - 0x20; /*0x98d203*/
        }
        else
        {
          if ( !v42 ) /*0x98d1ce*/
            *a1 |= 0x80000000 >> v26; /*0x98d1dc*/
          v35 = (_DWORD *)(v3 + 4 * v4 + 0x44); /*0x98d1de*/
          v36 = v26; /*0x98d1e2*/
        }
        *v35 |= 0x80000000 >> v36; /*0x98d20d*/
      }
      *v25 = v45; /*0x98d212*/
      *(int *)((char *)v25 + v45 - 4) = v45; /*0x98d214*/
    }
  }
  else
  {
    if ( (v8 & 1) != 0 || v5 > v6 + v8 ) /*0x98cf9b*/
      return 0; /*0x98d0de*/
    v9 = (v39 >> 4) - 1; /*0x98cfa7*/
    v38 = v9; /*0x98cfab*/
    if ( v9 > 0x3F ) /*0x98cfae*/
    {
      v9 = 0x3F; /*0x98cfb2*/
      v38 = 0x3F; /*0x98cfb3*/
    }
    if ( v7[1] == v7[2] ) /*0x98cfbc*/
    {
      if ( v9 >= 0x20 ) /*0x98cfc6*/
      {
        v14 = 0x80000000 >> (v9 - 0x20); /*0x98cfe5*/
        v15 = (_BYTE *)(v38 + v3 + 4); /*0x98cfea*/
        v16 = ~v14; /*0x98cfee*/
        *(_DWORD *)(v3 + 4 * v4 + 0xC4) &= v16; /*0x98cff0*/
        v13 = (*v15)-- == 1; /*0x98cff7*/
        if ( v13 ) /*0x98cff9*/
          a1[1] &= v16; /*0x98cffe*/
      }
      else
      {
        v10 = 0x80000000 >> v9; /*0x98cfc8*/
        v11 = (_BYTE *)(v38 + v3 + 4); /*0x98cfcd*/
        v12 = ~v10; /*0x98cfd1*/
        *(_DWORD *)(v3 + 4 * v4 + 0x44) &= v12; /*0x98cfd3*/
        v13 = (*v11)-- == 1; /*0x98cfd7*/
        if ( v13 ) /*0x98cfd9*/
          *a1 &= v12; /*0x98cfde*/
      }
    }
    *(_DWORD *)(v7[2] + 4) = v7[1]; /*0x98d007*/
    *(_DWORD *)(v7[1] + 8) = v7[2]; /*0x98d010*/
    v40 = v43 - v5 + v39; /*0x98d018*/
    if ( v40 <= 0 ) /*0x98d01f*/
    {
      v21 = a2; /*0x98d0ca*/
    }
    else
    {
      v17 = (v40 >> 4) - 1; /*0x98d02e*/
      v18 = a2 + v5 - 4; /*0x98d032*/
      if ( v17 > 0x3F ) /*0x98d036*/
        v17 = 0x3F; /*0x98d03a*/
      v44 = v37 + 8 * v17; /*0x98d041*/
      *(_DWORD *)(a2 + v5) = *(_DWORD *)(v44 + 4); /*0x98d047*/
      *(_DWORD *)(v18 + 8) = v44; /*0x98d04d*/
      *(_DWORD *)(v44 + 4) = v18; /*0x98d050*/
      *(_DWORD *)(*(_DWORD *)(a2 + v5) + 8) = a2 + v5 - 4; /*0x98d056*/
      if ( *(_DWORD *)(a2 + v5) == *(_DWORD *)(a2 + v5 - 4 + 8) ) /*0x98d05f*/
      {
        v46 = *(_BYTE *)(v17 + v3 + 4); /*0x98d065*/
        *(_BYTE *)(v17 + v3 + 4) = v46 + 1; /*0x98d06d*/
        if ( v17 >= 0x20 ) /*0x98d071*/
        {
          if ( !v46 ) /*0x98d093*/
            a1[1] |= 0x80000000 >> (v17 - 0x20); /*0x98d0a2*/
          v19 = (_DWORD *)(v3 + 4 * v4 + 0xC4); /*0x98d0a5*/
          v20 = v17 - 0x20; /*0x98d0ac*/
        }
        else
        {
          if ( !v46 ) /*0x98d077*/
            *a1 |= 0x80000000 >> v17; /*0x98d085*/
          v19 = (_DWORD *)(v3 + 4 * v4 + 0x44); /*0x98d087*/
          v20 = v17; /*0x98d08b*/
        }
        *v19 |= 0x80000000 >> v20; /*0x98d0b6*/
      }
      v21 = a2; /*0x98d0b8*/
      v22 = (int *)(a2 + v5 - 4); /*0x98d0be*/
      *v22 = v40; /*0x98d0c2*/
      *(int *)((char *)v22 + v40 - 4) = v40; /*0x98d0c4*/
    }
    *(_DWORD *)(v21 - 4) = v5 + 1; /*0x98d0d0*/
    *(_DWORD *)(v21 + v5 - 8) = v5 + 1; /*0x98d0d3*/
  }
  return 1; /*0x98d21b*/
}
