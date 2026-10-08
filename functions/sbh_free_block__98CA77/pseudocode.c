_DWORD *__usercall __sbh_free_block@<eax>(DWORD a1@<ebx>, _DWORD *a2, int a3)
{
  _DWORD *result; // eax
  int *v4; // esi
  unsigned int v5; // edi
  int v6; // ecx
  char *v7; // ebx
  unsigned int v8; // edx
  _BYTE *v9; // ecx
  unsigned int v10; // ebx
  bool v11; // zf
  _BYTE *v12; // ecx
  unsigned int v13; // ebx
  unsigned int v14; // edx
  unsigned int v15; // ebx
  int v16; // ecx
  unsigned int v17; // esi
  unsigned int v18; // esi
  _DWORD *v19; // ecx
  int v20; // ebx
  int v21; // eax
  DWORD v23; // [esp-4h] [ebp-1Ch]
  _DWORD *v24; // [esp+8h] [ebp-10h]
  int v25; // [esp+Ch] [ebp-Ch]
  int v26; // [esp+10h] [ebp-8h]
  int v27; // [esp+14h] [ebp-4h]
  char *v28; // [esp+24h] [ebp+Ch]
  int *v29; // [esp+24h] [ebp+Ch]
  char v30; // [esp+27h] [ebp+Fh]

  result = (_DWORD *)a2[4]; /*0x98ca80*/
  v4 = (int *)(a3 - 4); /*0x98ca8d*/
  v5 = (unsigned int)(a3 - a2[3]) >> 0xF; /*0x98ca90*/
  v24 = &result[0x81 * v5 + 0x51]; /*0x98caa2*/
  v6 = *(_DWORD *)(a3 - 4) - 1; /*0x98caa7*/
  v27 = v6; /*0x98caab*/
  if ( (v6 & 1) == 0 ) /*0x98caae*/
  {
    v7 = (char *)v4 + v6; /*0x98cab5*/
    v25 = *(int *)((char *)v4 + v6); /*0x98caba*/
    v26 = *(_DWORD *)(a3 - 8); /*0x98cac0*/
    v28 = (char *)v4 + v6; /*0x98cac9*/
    if ( (v25 & 1) == 0 ) /*0x98cacc*/
    {
      v8 = (v25 >> 4) - 1; /*0x98cad1*/
      if ( v8 > 0x3F ) /*0x98cad5*/
        v8 = 0x3F; /*0x98cad9*/
      if ( *((_DWORD *)v7 + 1) == *((_DWORD *)v7 + 2) ) /*0x98cae0*/
      {
        if ( v8 >= 0x20 ) /*0x98caea*/
        {
          v12 = (char *)result + v8 + 4; /*0x98cb0a*/
          v13 = ~(0x80000000 >> (v8 - 0x20)); /*0x98cb0e*/
          result[v5 + 0x31] &= v13; /*0x98cb10*/
          v11 = (*v12)-- == 1; /*0x98cb17*/
          if ( v11 ) /*0x98cb19*/
            a2[1] &= v13; /*0x98cb1e*/
        }
        else
        {
          v9 = (char *)result + v8 + 4; /*0x98caf0*/
          v10 = ~(0x80000000 >> v8); /*0x98caf4*/
          result[v5 + 0x11] &= v10; /*0x98caf6*/
          v11 = (*v9)-- == 1; /*0x98cafa*/
          if ( v11 ) /*0x98cafc*/
            *a2 &= v10; /*0x98cb01*/
        }
        v7 = v28; /*0x98cb21*/
      }
      v6 = v25 + v27; /*0x98cb2d*/
      *(_DWORD *)(*((_DWORD *)v7 + 2) + 4) = *((_DWORD *)v7 + 1); /*0x98cb30*/
      *(_DWORD *)(*((_DWORD *)v28 + 1) + 8) = *((_DWORD *)v28 + 2); /*0x98cb3c*/
      v27 += v25; /*0x98cb3f*/
    }
    v14 = (v6 >> 4) - 1; /*0x98cb47*/
    if ( v14 > 0x3F ) /*0x98cb4b*/
      v14 = 0x3F; /*0x98cb4f*/
    if ( (v26 & 1) != 0 ) /*0x98cb59*/
    {
      v15 = (unsigned int)a2; /*0x98cbee*/
    }
    else
    {
      v29 = (int *)((char *)v4 - v26); /*0x98cb6a*/
      v15 = (v26 >> 4) - 1; /*0x98cb6d*/
      if ( v15 > 0x3F ) /*0x98cb71*/
        v15 = 0x3F; /*0x98cb73*/
      v16 = v26 + v6; /*0x98cb75*/
      v14 = (v16 >> 4) - 1; /*0x98cb7d*/
      v27 = v16; /*0x98cb80*/
      if ( v14 > 0x3F ) /*0x98cb83*/
        v14 = 0x3F; /*0x98cb85*/
      if ( v15 != v14 ) /*0x98cb89*/
      {
        if ( v29[1] == v29[2] ) /*0x98cb94*/
        {
          if ( v15 >= 0x20 ) /*0x98cb9e*/
          {
            v18 = ~(0x80000000 >> (v15 - 0x20)); /*0x98cbbc*/
            result[v5 + 0x31] &= v18; /*0x98cbbe*/
            v11 = (*((_BYTE *)result + v15 + 4))-- == 1; /*0x98cbc5*/
            if ( v11 ) /*0x98cbc9*/
              a2[1] &= v18; /*0x98cbce*/
          }
          else
          {
            v17 = ~(0x80000000 >> v15); /*0x98cba4*/
            result[v5 + 0x11] &= v17; /*0x98cba6*/
            v11 = (*((_BYTE *)result + v15 + 4))-- == 1; /*0x98cbaa*/
            if ( v11 ) /*0x98cbae*/
              *a2 &= v17; /*0x98cbb3*/
          }
        }
        *(_DWORD *)(v29[2] + 4) = v29[1]; /*0x98cbda*/
        *(_DWORD *)(v29[1] + 8) = v29[2]; /*0x98cbe6*/
      }
      v4 = v29; /*0x98cbe9*/
    }
    if ( (v26 & 1) != 0 || v15 != v14 ) /*0x98cbf9*/
    {
      v19 = &v24[2 * v14]; /*0x98cc02*/
      v20 = v19[1]; /*0x98cc05*/
      v4[2] = (int)v19; /*0x98cc08*/
      v4[1] = v20; /*0x98cc0b*/
      v19[1] = v4; /*0x98cc0e*/
      *(_DWORD *)(v4[1] + 8) = v4; /*0x98cc14*/
      if ( v4[1] == v4[2] ) /*0x98cc1d*/
      {
        v30 = *((_BYTE *)result + v14 + 4); /*0x98cc23*/
        *((_BYTE *)result + v14 + 4) = v30 + 1; /*0x98cc2b*/
        if ( v14 >= 0x20 ) /*0x98cc2f*/
        {
          if ( !v30 ) /*0x98cc5a*/
            a2[1] |= 0x80000000 >> (v14 - 0x20); /*0x98cc69*/
          result[v5 + 0x31] |= 0x80000000 >> (v14 - 0x20); /*0x98cc7d*/
        }
        else
        {
          if ( !v30 ) /*0x98cc35*/
            *a2 |= 0x80000000 >> v14; /*0x98cc43*/
          result[v5 + 0x11] |= 0x80000000 >> v14; /*0x98cc52*/
        }
      }
    }
    *v4 = v27; /*0x98cc82*/
    *(int *)((char *)v4 + v27 - 4) = v27; /*0x98cc84*/
    result += 0x81 * v5 + 0x51; /*0x98cc88*/
    v11 = (*v24)-- == 1; /*0x98cc8b*/
    if ( v11 ) /*0x98cc8d*/
    {
      if ( dword_BA9E10[0x126] ) /*0x98cc9a*/
      {
        VirtualFree((LPVOID)(*(_DWORD *)(dword_BA9E10[0x126] + 0xC) + (unk_BAABD8 << 0xF)), 0x400000008000uLL, a1); /*0x98ccbe*/
        *(_DWORD *)(dword_BA9E10[0x126] + 8) |= 0x80000000 >> unk_BAABD8; /*0x98ccd2*/
        *(_DWORD *)(*(_DWORD *)(dword_BA9E10[0x126] + 0x10) + 4 * unk_BAABD8 + 0xC4) = 0; /*0x98cce3*/
        --*(_BYTE *)(*(_DWORD *)(dword_BA9E10[0x126] + 0x10) + 0x43); /*0x98ccf3*/
        v21 = dword_BA9E10[0x126]; /*0x98ccf6*/
        if ( !*(_BYTE *)(*(_DWORD *)(dword_BA9E10[0x126] + 0x10) + 0x43) ) /*0x98ccfe*/
        {
          *(_DWORD *)(dword_BA9E10[0x126] + 4) &= ~1u; /*0x98cd04*/
          v21 = dword_BA9E10[0x126]; /*0x98cd08*/
        }
        if ( *(_DWORD *)(v21 + 8) == 0xFFFFFFFF ) /*0x98cd11*/
        {
          VirtualFree(*(LPVOID *)(v21 + 0xC), 0x800000000000uLL, v23); /*0x98cd19*/
          HeapFree((HANDLE)dword_BA9E10[0x127], 0, *(LPVOID *)(dword_BA9E10[0x126] + 0x10)); /*0x98cd2b*/
          unknown_libname_16( /*0x98cd51*/
            dword_BA9E10[0x126],
            dword_BA9E10[0x126] + 0x14,
            (unsigned int)MEMORY[0xBAABC8] + 0x14 * unk_BAABC4 - dword_BA9E10[0x126] - 0x14);
          --unk_BAABC4; /*0x98cd5c*/
          if ( (unsigned int)a2 > dword_BA9E10[0x126] ) /*0x98cd68*/
            a2 += 0xFFFFFFFB; /*0x98cd6a*/
          unk_BAABD0 = (int)MEMORY[0xBAABC8]; /*0x98cd73*/
        }
      }
      dword_BA9E10[0x126] = a2; /*0x98cd7b*/
      unk_BAABD8 = v5; /*0x98cd80*/
      return a2; /*0x98cd78*/
    }
  }
  return result; /*0x98cd87*/
}
