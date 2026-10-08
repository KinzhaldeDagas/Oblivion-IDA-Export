signed int __cdecl sub_744880(int *a1, int a2)
{
  unsigned int v2; // eax
  int v3; // edx
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edi
  unsigned __int8 v14; // al
  __int16 v15; // cx
  unsigned __int16 v16; // cx
  int v17; // eax
  int v18; // eax
  BOOL v19; // ebx
  unsigned int v20; // edx
  int v21; // ebp
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // edx
  _BYTE *v28; // ecx
  int v29; // edi
  int v30; // eax
  unsigned int v31; // ebx
  int v32; // eax
  _DWORD *v33; // edi
  bool v34; // zf
  unsigned __int8 v36; // al
  int v37; // ecx
  _BYTE *v38; // eax
  int v39; // edi
  int v40; // eax
  unsigned int v41; // ebx
  int v42; // eax
  _DWORD *v43; // edi
  int v44; // ecx
  unsigned __int8 v45; // al
  int v46; // ecx
  _BYTE *v47; // eax
  int v48; // eax
  unsigned int v49; // [esp+10h] [ebp-4h]

  v49 = 0; /*0x744889*/
  while ( 1 ) /*0x744896*/
  {
    v2 = a1[0x1B]; /*0x744896*/
    if ( v2 < 0x106 ) /*0x74489e*/
    {
      sub_7441E0(a1); /*0x7448a0*/
      v2 = a1[0x1B]; /*0x7448a5*/
      if ( v2 < 0x106 && !a2 ) /*0x7448b5*/
        return 0; /*0x744b5c*/
      if ( !v2 ) /*0x7448bd*/
        break; /*0x7448bd*/
    }
    if ( v2 >= 3 ) /*0x7448c6*/
    {
      v3 = a1[0x19]; /*0x7448ce*/
      v4 = a1[0xB]; /*0x7448d1*/
      v5 = a1[0x13] & (*(unsigned __int8 *)(a1[0xC] + v3 + 2) ^ (a1[0x10] << a1[0x14])); /*0x7448e0*/
      v6 = a1[0xF]; /*0x7448e3*/
      a1[0x10] = v5; /*0x7448e6*/
      *(_WORD *)(a1[0xE] + 2 * (v3 & v4)) = *(_WORD *)(v6 + 2 * v5); /*0x7448f2*/
      v49 = *(unsigned __int16 *)(a1[0xE] + 2 * (a1[0xB] & a1[0x19])); /*0x744909*/
      *(_WORD *)(a1[0xF] + 2 * a1[0x10]) = *((_WORD *)a1 + 0x32); /*0x744911*/
    }
    v7 = a1[0x16]; /*0x744918*/
    a1[0x17] = a1[0x1A]; /*0x74491b*/
    a1[0x1C] = v7; /*0x744929*/
    a1[0x16] = 2; /*0x74492c*/
    if ( !v49 ) /*0x74492f*/
      goto LABEL_22; /*0x74492f*/
    if ( v7 >= a1[0x1E] ) /*0x744936*/
      goto LABEL_22; /*0x744936*/
    v8 = a1[0x19] - v49; /*0x74493e*/
    if ( v8 > a1[9] - 0x106 ) /*0x744948*/
      goto LABEL_22; /*0x744948*/
    v9 = a1[0x20]; /*0x74494a*/
    if ( v9 >= 2 ) /*0x744952*/
    {
      if ( v9 != 3 || v8 != 1 ) /*0x744966*/
        goto LABEL_17; /*0x744966*/
      v10 = sub_744110(a1, v49); /*0x744969*/
    }
    else
    {
      v10 = sub_743F90(v49, a1); /*0x744958*/
    }
    a1[0x16] = v10; /*0x744971*/
LABEL_17:
    v11 = a1[0x16]; /*0x744974*/
    if ( v11 <= 5 && (a1[0x20] == 1 || v11 == 3 && (unsigned int)(a1[0x19] - a1[0x1A]) > 0x1000) ) /*0x744995*/
      a1[0x16] = 2; /*0x744997*/
LABEL_22:
    v12 = a1[0x1C]; /*0x74499a*/
    if ( v12 < 3 || a1[0x16] > v12 ) /*0x7449a9*/
    {
      if ( a1[0x18] ) /*0x744b5d*/
      {
        v36 = *(_BYTE *)(a1[0x19] + a1[0xC] - 1); /*0x744b6d*/
        *(_WORD *)(a1[0x5A7] + 2 * a1[0x5A6]) = 0; /*0x744b7d*/
        *(_BYTE *)(a1[0x5A4] + a1[0x5A6]++) = v36; /*0x744b8f*/
        ++LOWORD(a1[v36 + 0x23]); /*0x744b9b*/
        if ( a1[0x5A6] == a1[0x5A5] - 1 ) /*0x744bb8*/
        {
          v37 = a1[0x15]; /*0x744bba*/
          if ( v37 < 0 ) /*0x744bbf*/
            v38 = 0; /*0x744bc8*/
          else
            v38 = (_BYTE *)(v37 + a1[0xC]); /*0x744bc4*/
          sub_747610((int)a1, v38, a1[0x19] - v37, 0); /*0x744bd4*/
          v39 = *a1; /*0x744bdc*/
          a1[0x15] = a1[0x19]; /*0x744bde*/
          v40 = *(_DWORD *)(v39 + 0x1C); /*0x744be1*/
          v41 = *(_DWORD *)(v40 + 0x14); /*0x744be4*/
          if ( v41 > *(_DWORD *)(v39 + 0x10) ) /*0x744bef*/
            v41 = *(_DWORD *)(v39 + 0x10); /*0x744bf1*/
          if ( v41 ) /*0x744bf5*/
          {
            memcpy(*(void **)(v39 + 0xC), *(const void **)(v40 + 0x10), v41); /*0x744c00*/
            v42 = *(_DWORD *)(v39 + 0x1C); /*0x744c05*/
            *(_DWORD *)(v39 + 0xC) += v41; /*0x744c08*/
            *(_DWORD *)(v42 + 0x10) += v41; /*0x744c0b*/
            *(_DWORD *)(v39 + 0x14) += v41; /*0x744c0e*/
            *(_DWORD *)(v39 + 0x10) -= v41; /*0x744c11*/
            *(_DWORD *)(*(_DWORD *)(v39 + 0x1C) + 0x14) -= v41; /*0x744c17*/
            v43 = *(_DWORD **)(v39 + 0x1C); /*0x744c1a*/
            if ( !v43[5] ) /*0x744c20*/
              v43[4] = v43[2]; /*0x744c29*/
          }
        }
        v44 = *a1; /*0x744c2c*/
        ++a1[0x19]; /*0x744c2e*/
        --a1[0x1B]; /*0x744c31*/
        v34 = *(_DWORD *)(v44 + 0x10) == 0; /*0x744c35*/
        goto LABEL_41; /*0x744c39*/
      }
      ++a1[0x19]; /*0x744c3e*/
      --a1[0x1B]; /*0x744c41*/
      a1[0x18] = 1; /*0x744c45*/
    }
    else
    {
      v13 = a1[0x19] + a1[0x1B] - 3; /*0x7449c3*/
      v14 = *((_BYTE *)a1 + 0x70); /*0x7449c7*/
      v15 = *((_WORD *)a1 + 0x32) - *((_WORD *)a1 + 0x2E) - 1; /*0x7449cd*/
      *(_WORD *)(a1[0x5A7] + 2 * a1[0x5A6]) = v15; /*0x7449d6*/
      v14 -= 3; /*0x7449e6*/
      *(_BYTE *)(a1[0x5A4] + a1[0x5A6]++) = v14; /*0x7449e8*/
      ++LOWORD(a1[(unsigned __int8)byte_A851D0[v14] + 0x124]); /*0x7449fb*/
      v16 = v15 - 1; /*0x744a0a*/
      if ( v16 >= 0x100u ) /*0x744a15*/
        v17 = (unsigned __int8)byte_A850D0[v16 >> 7]; /*0x744a29*/
      else
        v17 = (unsigned __int8)byte_A84FD0[v16]; /*0x744a1a*/
      ++LOWORD(a1[v17 + 0x260]); /*0x744a30*/
      v18 = a1[0x1C]; /*0x744a3e*/
      v19 = a1[0x5A6] == a1[0x5A5] - 1; /*0x744a4d*/
      a1[0x1B] += 1 - v18; /*0x744a52*/
      a1[0x1C] = v18 - 2; /*0x744a58*/
      do /*0x744abc*/
      {
        v20 = ++a1[0x19]; /*0x744a63*/
        if ( v20 <= v13 ) /*0x744a68*/
        {
          v21 = a1[0xE]; /*0x744a70*/
          v22 = *(unsigned __int8 *)(a1[0xC] + v20 + 2); /*0x744a78*/
          v23 = a1[0xB] & v20; /*0x744a7d*/
          v24 = a1[0x13] & (v22 ^ (a1[0x10] << a1[0x14])); /*0x744a82*/
          v25 = a1[0xF]; /*0x744a85*/
          a1[0x10] = v24; /*0x744a88*/
          *(_WORD *)(v21 + 2 * v23) = *(_WORD *)(v25 + 2 * v24); /*0x744a8f*/
          v49 = *(unsigned __int16 *)(a1[0xE] + 2 * (a1[0xB] & a1[0x19])); /*0x744aa7*/
          *(_WORD *)(a1[0xF] + 2 * a1[0x10]) = *((_WORD *)a1 + 0x32); /*0x744aaf*/
        }
        v34 = a1[0x1C]-- == 1; /*0x744ab8*/
      }
      while ( !v34 ); /*0x744abc*/
      v26 = ++a1[0x19]; /*0x744ac3*/
      a1[0x18] = 0; /*0x744ac6*/
      a1[0x16] = 2; /*0x744acd*/
      if ( v19 ) /*0x744ad4*/
      {
        v27 = a1[0x15]; /*0x744ada*/
        if ( v27 < 0 ) /*0x744adf*/
          v28 = 0; /*0x744ae8*/
        else
          v28 = (_BYTE *)(v27 + a1[0xC]); /*0x744ae4*/
        sub_747610((int)a1, v28, v26 - v27, 0); /*0x744af1*/
        v29 = *a1; /*0x744af9*/
        a1[0x15] = a1[0x19]; /*0x744afb*/
        v30 = *(_DWORD *)(v29 + 0x1C); /*0x744afe*/
        v31 = *(_DWORD *)(v30 + 0x14); /*0x744b01*/
        if ( v31 > *(_DWORD *)(v29 + 0x10) ) /*0x744b0c*/
          v31 = *(_DWORD *)(v29 + 0x10); /*0x744b0e*/
        if ( v31 ) /*0x744b12*/
        {
          memcpy(*(void **)(v29 + 0xC), *(const void **)(v30 + 0x10), v31); /*0x744b1d*/
          v32 = *(_DWORD *)(v29 + 0x1C); /*0x744b22*/
          *(_DWORD *)(v29 + 0xC) += v31; /*0x744b25*/
          *(_DWORD *)(v32 + 0x10) += v31; /*0x744b28*/
          *(_DWORD *)(v29 + 0x14) += v31; /*0x744b2b*/
          *(_DWORD *)(v29 + 0x10) -= v31; /*0x744b2e*/
          *(_DWORD *)(*(_DWORD *)(v29 + 0x1C) + 0x14) -= v31; /*0x744b34*/
          v33 = *(_DWORD **)(v29 + 0x1C); /*0x744b37*/
          if ( !v33[5] ) /*0x744b3d*/
            v33[4] = v33[2]; /*0x744b46*/
        }
        v34 = *(_DWORD *)(*a1 + 0x10) == 0; /*0x744b4b*/
LABEL_41:
        if ( v34 ) /*0x744b4f*/
          return 0; /*0x744b4f*/
      }
    }
  }
  if ( a1[0x18] ) /*0x744c4d*/
  {
    v45 = *(_BYTE *)(a1[0x19] + a1[0xC] - 1); /*0x744c59*/
    *(_WORD *)(a1[0x5A7] + 2 * a1[0x5A6]) = 0; /*0x744c69*/
    *(_BYTE *)(a1[0x5A4] + a1[0x5A6]++) = v45; /*0x744c7b*/
    ++LOWORD(a1[v45 + 0x23]); /*0x744c87*/
    a1[0x18] = 0; /*0x744c96*/
  }
  v46 = a1[0x15]; /*0x744c9d*/
  if ( v46 < 0 ) /*0x744ca2*/
    v47 = 0; /*0x744cab*/
  else
    v47 = (_BYTE *)(v46 + a1[0xC]); /*0x744ca7*/
  sub_747610((int)a1, v47, a1[0x19] - v46, a2 == 4); /*0x744cbe*/
  a1[0x15] = a1[0x19]; /*0x744cc6*/
  sub_7439F0(*a1); /*0x744cce*/
  v48 = 0; /*0x744cd5*/
  if ( !*(_DWORD *)(*a1 + 0x10) )
    return a2 != 4 ? 0 : 2;
  LOBYTE(v48) = a2 == 4; /*0x744cf1*/
  return 2 * v48 + 1; /*0x744b55*/
}
