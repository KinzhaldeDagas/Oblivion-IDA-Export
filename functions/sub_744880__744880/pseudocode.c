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
  size_t v49; // [esp-4h] [ebp-18h]
  unsigned int v50; // [esp+10h] [ebp-4h]

  v50 = 0;
  while ( 1 )
  {
    v2 = a1[0x1B];
    if ( v2 < 0x106 )
    {
      sub_7441E0(a1);
      v2 = a1[0x1B];
      if ( v2 < 0x106 && !a2 )
        return 0;
      if ( !v2 )
        break;
    }
    if ( v2 >= 3 )
    {
      v3 = a1[0x19];
      v4 = a1[0xB];
      v5 = a1[0x13] & (*(unsigned __int8 *)(a1[0xC] + v3 + 2) ^ (a1[0x10] << a1[0x14]));
      v6 = a1[0xF];
      a1[0x10] = v5;
      *(_WORD *)(a1[0xE] + 2 * (v3 & v4)) = *(_WORD *)(v6 + 2 * v5);
      v50 = *(unsigned __int16 *)(a1[0xE] + 2 * (a1[0xB] & a1[0x19]));
      *(_WORD *)(a1[0xF] + 2 * a1[0x10]) = *((_WORD *)a1 + 0x32);
    }
    v7 = a1[0x16];
    a1[0x17] = a1[0x1A];
    a1[0x1C] = v7;
    a1[0x16] = 2;
    if ( !v50 )
      goto LABEL_22;
    if ( v7 >= a1[0x1E] )
      goto LABEL_22;
    v8 = a1[0x19] - v50;
    if ( v8 > a1[9] - 0x106 )
      goto LABEL_22;
    v9 = a1[0x20];
    if ( v9 >= 2 )
    {
      if ( v9 != 3 || v8 != 1 )
        goto LABEL_17;
      v10 = sub_744110(a1, v50);
    }
    else
    {
      v10 = sub_743F90(v50, a1);
    }
    a1[0x16] = v10;
LABEL_17:
    v11 = a1[0x16];
    if ( v11 <= 5 && (a1[0x20] == 1 || v11 == 3 && (unsigned int)(a1[0x19] - a1[0x1A]) > 0x1000) )
      a1[0x16] = 2;
LABEL_22:
    v12 = a1[0x1C];
    if ( v12 < 3 || a1[0x16] > v12 )
    {
      if ( a1[0x18] )
      {
        v36 = *(_BYTE *)(a1[0x19] + a1[0xC] - 1);
        *(_WORD *)(a1[0x5A7] + 2 * a1[0x5A6]) = 0;
        *(_BYTE *)(a1[0x5A4] + a1[0x5A6]++) = v36;
        ++LOWORD(a1[v36 + 0x23]);
        if ( a1[0x5A6] == a1[0x5A5] - 1 )
        {
          v37 = a1[0x15];
          if ( v37 < 0 )
            v38 = 0;
          else
            v38 = (_BYTE *)(v37 + a1[0xC]);
          sub_747610((int)a1, v38, a1[0x19] - v37, 0);
          v39 = *a1;
          a1[0x15] = a1[0x19];
          v40 = *(_DWORD *)(v39 + 0x1C);
          v41 = *(_DWORD *)(v40 + 0x14);
          if ( v41 > *(_DWORD *)(v39 + 0x10) )
            v41 = *(_DWORD *)(v39 + 0x10);
          if ( v41 )
          {
            LODWORD(v49) = v41;
            memcpy(*(void **)(v39 + 0xC), *(const void **)(v40 + 0x10), v49);
            v42 = *(_DWORD *)(v39 + 0x1C);
            *(_DWORD *)(v39 + 0xC) += v41;
            *(_DWORD *)(v42 + 0x10) += v41;
            *(_DWORD *)(v39 + 0x14) += v41;
            *(_DWORD *)(v39 + 0x10) -= v41;
            *(_DWORD *)(*(_DWORD *)(v39 + 0x1C) + 0x14) -= v41;
            v43 = *(_DWORD **)(v39 + 0x1C);
            if ( !v43[5] )
              v43[4] = v43[2];
          }
        }
        v44 = *a1;
        ++a1[0x19];
        --a1[0x1B];
        v34 = *(_DWORD *)(v44 + 0x10) == 0;
        goto LABEL_41;
      }
      ++a1[0x19];
      --a1[0x1B];
      a1[0x18] = 1;
    }
    else
    {
      v13 = a1[0x19] + a1[0x1B] - 3;
      v14 = *((_BYTE *)a1 + 0x70);
      v15 = *((_WORD *)a1 + 0x32) - *((_WORD *)a1 + 0x2E) - 1;
      *(_WORD *)(a1[0x5A7] + 2 * a1[0x5A6]) = v15;
      v14 -= 3;
      *(_BYTE *)(a1[0x5A4] + a1[0x5A6]++) = v14;
      ++LOWORD(a1[(unsigned __int8)byte_A851D0[v14] + 0x124]);
      v16 = v15 - 1;
      if ( v16 >= 0x100u )
        v17 = (unsigned __int8)byte_A850D0[v16 >> 7];
      else
        v17 = (unsigned __int8)byte_A84FD0[v16];
      ++LOWORD(a1[v17 + 0x260]);
      v18 = a1[0x1C];
      v19 = a1[0x5A6] == a1[0x5A5] - 1;
      a1[0x1B] += 1 - v18;
      a1[0x1C] = v18 - 2;
      do
      {
        v20 = ++a1[0x19];
        if ( v20 <= v13 )
        {
          v21 = a1[0xE];
          v22 = *(unsigned __int8 *)(a1[0xC] + v20 + 2);
          v23 = a1[0xB] & v20;
          v24 = a1[0x13] & (v22 ^ (a1[0x10] << a1[0x14]));
          v25 = a1[0xF];
          a1[0x10] = v24;
          *(_WORD *)(v21 + 2 * v23) = *(_WORD *)(v25 + 2 * v24);
          v50 = *(unsigned __int16 *)(a1[0xE] + 2 * (a1[0xB] & a1[0x19]));
          *(_WORD *)(a1[0xF] + 2 * a1[0x10]) = *((_WORD *)a1 + 0x32);
        }
        v34 = a1[0x1C]-- == 1;
      }
      while ( !v34 );
      v26 = ++a1[0x19];
      a1[0x18] = 0;
      a1[0x16] = 2;
      if ( v19 )
      {
        v27 = a1[0x15];
        if ( v27 < 0 )
          v28 = 0;
        else
          v28 = (_BYTE *)(v27 + a1[0xC]);
        sub_747610((int)a1, v28, v26 - v27, 0);
        v29 = *a1;
        a1[0x15] = a1[0x19];
        v30 = *(_DWORD *)(v29 + 0x1C);
        v31 = *(_DWORD *)(v30 + 0x14);
        if ( v31 > *(_DWORD *)(v29 + 0x10) )
          v31 = *(_DWORD *)(v29 + 0x10);
        if ( v31 )
        {
          LODWORD(v49) = v31;
          memcpy(*(void **)(v29 + 0xC), *(const void **)(v30 + 0x10), v49);
          v32 = *(_DWORD *)(v29 + 0x1C);
          *(_DWORD *)(v29 + 0xC) += v31;
          *(_DWORD *)(v32 + 0x10) += v31;
          *(_DWORD *)(v29 + 0x14) += v31;
          *(_DWORD *)(v29 + 0x10) -= v31;
          *(_DWORD *)(*(_DWORD *)(v29 + 0x1C) + 0x14) -= v31;
          v33 = *(_DWORD **)(v29 + 0x1C);
          if ( !v33[5] )
            v33[4] = v33[2];
        }
        v34 = *(_DWORD *)(*a1 + 0x10) == 0;
LABEL_41:
        if ( v34 )
          return 0;
      }
    }
  }
  if ( a1[0x18] )
  {
    v45 = *(_BYTE *)(a1[0x19] + a1[0xC] - 1);
    *(_WORD *)(a1[0x5A7] + 2 * a1[0x5A6]) = 0;
    *(_BYTE *)(a1[0x5A4] + a1[0x5A6]++) = v45;
    ++LOWORD(a1[v45 + 0x23]);
    a1[0x18] = 0;
  }
  v46 = a1[0x15];
  if ( v46 < 0 )
    v47 = 0;
  else
    v47 = (_BYTE *)(v46 + a1[0xC]);
  sub_747610((int)a1, v47, a1[0x19] - v46, a2 == 4);
  a1[0x15] = a1[0x19];
  sub_7439F0(*a1);
  v48 = 0;
  if ( !*(_DWORD *)(*a1 + 0x10) )
    return a2 != 4 ? 0 : 2;
  LOBYTE(v48) = a2 == 4;
  return 2 * v48 + 1;
}
