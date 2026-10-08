int __cdecl sub_8D84F0(const void **a1, int *k)
{
  int v3; // ecx
  int *v4; // edi
  int result; // eax
  int *v6; // esi
  int v7; // edx
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  const void *v10; // ecx
  int *v11; // esi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // ebp
  unsigned int v16; // eax
  unsigned int v17; // ecx
  int v18; // esi
  __int64 v19; // rax
  int v20; // esi
  unsigned int v21; // eax
  unsigned int v22; // ecx
  int v23; // ebp
  __int64 v24; // rax
  int v25; // esi
  int v26; // eax
  int v27; // ecx
  int v28; // esi
  int j; // ecx
  _DWORD *v30; // eax
  int v31; // edx
  signed int v32; // eax
  int v33; // eax
  int *v34; // [esp+10h] [ebp-14h]
  unsigned int v35; // [esp+14h] [ebp-10h]
  char *v36[3]; // [esp+18h] [ebp-Ch] BYREF
  int v37; // [esp+28h] [ebp+4h]
  int v38; // [esp+28h] [ebp+4h]
  int i; // [esp+28h] [ebp+4h]

  v3 = (int)a1[1]; /*0x8d84f8*/
  v4 = k; /*0x8d84fe*/
  result = k[1]; /*0x8d8502*/
  if ( v3 >= result ) /*0x8d8507*/
    v3 = k[1]; /*0x8d8509*/
  if ( v3 >= 0x20 ) /*0x8d850e*/
  {
    sub_8B1100(v36, (int)a1); /*0x8d85c9*/
    sub_8B15E0(v36, (int)a1[1]); /*0x8d85d6*/
    v14 = 0; /*0x8d85de*/
    v38 = 0; /*0x8d85e2*/
    if ( (int)a1[1] > 0 ) /*0x8d85e6*/
    {
      while ( 1 ) /*0x8d85f4*/
      {
        v15 = *((_DWORD *)*a1 + 2 * v14); /*0x8d85f4*/
        v16 = *((_DWORD *)*a1 + 2 * v14 + 1); /*0x8d85f7*/
        v35 = v16; /*0x8d85fd*/
        if ( v15 > v16 ) /*0x8d8601*/
        {
          v17 = v15; /*0x8d8603*/
          v15 = v16; /*0x8d8605*/
          v35 = v17; /*0x8d8607*/
          v16 = v17; /*0x8d860b*/
        }
        v18 = sub_8B1250((int *)v36, __PAIR64__(v16, v15)); /*0x8d8618*/
        if ( *sub_8B0D80(v36, (bool *)&k, v18) ) /*0x8d8629*/
        {
          v19 = sub_8B0DD0(v36, v18); /*0x8d8633*/
          sub_8B0DF0((int *)v36, v18, v19 + 1, (unsigned __int64)(v19 + 1) >> 0x20); /*0x8d8645*/
          *((_DWORD *)*a1 + 2 * v38) = 0; /*0x8d8650*/
        }
        else
        {
          sub_8B1170(v36, __PAIR64__(v35, v15), (v38 << 0x10) | 1, ((v38 << 0x10) | 1) >> 0x1F); /*0x8d866c*/
        }
        if ( ++v38 >= (int)a1[1] ) /*0x8d867f*/
          break; /*0x8d867f*/
        v14 = v38; /*0x8d85ee*/
      }
    }
    v20 = 0; /*0x8d8688*/
    for ( i = 0; v20 < v4[1]; i = v20 ) /*0x8d8690*/
    {
      v21 = *(_DWORD *)(*v4 + 8 * v20); /*0x8d8698*/
      v22 = *(_DWORD *)(*v4 + 8 * v20 + 4); /*0x8d869b*/
      if ( v21 > v22 ) /*0x8d86a1*/
      {
        v21 = *(_DWORD *)(*v4 + 8 * v20 + 4); /*0x8d86a5*/
        v22 = *(_DWORD *)(*v4 + 8 * v20); /*0x8d86a7*/
      }
      v23 = sub_8B1250((int *)v36, __PAIR64__(v22, v21)); /*0x8d86b4*/
      if ( *sub_8B0D80(v36, (bool *)&k, v23) ) /*0x8d86c5*/
      {
        v24 = sub_8B0DD0(v36, v23); /*0x8d86cf*/
        v25 = v24; /*0x8d86d4*/
        if ( (unsigned __int16)v24 <= 1u ) /*0x8d86e2*/
        {
          sub_8B12E0((int *)v36, v23); /*0x8d86f5*/
          *((_DWORD *)*a1 + 2 * (v25 >> 0x10)) = 0; /*0x8d86ff*/
        }
        else
        {
          sub_8B0DF0((int *)v36, v23, v24 - 1, (unsigned __int64)(v24 - 1) >> 0x20); /*0x8d86ed*/
        }
        v26 = *v4; /*0x8d8709*/
        v27 = v4[1] - 1; /*0x8d870b*/
        v4[1] = v27; /*0x8d870c*/
        *(_DWORD *)(v26 + 8 * i) = *(_DWORD *)(v26 + 8 * v27); /*0x8d8718*/
        *(_DWORD *)(v26 + 8 * i + 4) = *(_DWORD *)(v26 + 8 * v27 + 4); /*0x8d871f*/
        v20 = i - 1; /*0x8d8728*/
      }
      ++v20; /*0x8d872d*/
    }
    v28 = 0; /*0x8d873d*/
    for ( j = 0; j < (int)a1[1]; ++j ) /*0x8d8743*/
    {
      v30 = *a1; /*0x8d8745*/
      v31 = *((_DWORD *)*a1 + 2 * j); /*0x8d8747*/
      if ( v31 ) /*0x8d874c*/
      {
        v30[2 * v28] = v31; /*0x8d874e*/
        v30[2 * v28++ + 1] = v30[2 * j + 1]; /*0x8d8755*/
      }
    }
    v32 = (unsigned int)a1[2] & 0x3FFFFFFF; /*0x8d8765*/
    if ( v32 < v28 ) /*0x8d876c*/
    {
      v33 = 2 * v32; /*0x8d876e*/
      if ( v28 >= v33 ) /*0x8d8772*/
        v33 = v28; /*0x8d8774*/
      sub_8A6E40(a1, v33, 8); /*0x8d877a*/
    }
    a1[1] = (const void *)v28; /*0x8d8786*/
    return sub_8B1150(v36); /*0x8d8789*/
  }
  else
  {
    v6 = 0; /*0x8d8514*/
    for ( k = 0; (int)v6 < result; k = v6 ) /*0x8d851c*/
    {
      v7 = 0; /*0x8d8525*/
      if ( (int)a1[1] > 0 ) /*0x8d8529*/
      {
        v34 = (int *)(*v4 + 8 * (_DWORD)v6); /*0x8d8537*/
        v8 = *a1; /*0x8d853b*/
        v37 = *v34; /*0x8d853d*/
        v9 = *a1; /*0x8d8541*/
        while ( (*v9 != v37 || v9[1] != v34[1]) && (v9[1] != v37 || *v9 != v34[1]) ) /*0x8d8569*/
        {
          ++v7; /*0x8d856e*/
          v9 += 2; /*0x8d856f*/
          if ( v7 >= (int)a1[1] ) /*0x8d8574*/
          {
            v6 = k; /*0x8d8576*/
            goto LABEL_14; /*0x8d857a*/
          }
        }
        v10 = (char *)a1[1] + 0xFFFFFFFF; /*0x8d857f*/
        a1[1] = v10; /*0x8d8580*/
        v8[2 * v7] = v8[2 * (_DWORD)v10]; /*0x8d8586*/
        v11 = k; /*0x8d858d*/
        v8[2 * v7 + 1] = v8[2 * (_DWORD)v10 + 1]; /*0x8d8591*/
        v12 = *v4; /*0x8d8598*/
        v13 = v4[1] - 1; /*0x8d859a*/
        v4[1] = v13; /*0x8d859b*/
        *(_DWORD *)(v12 + 8 * (_DWORD)v11) = *(_DWORD *)(v12 + 8 * v13); /*0x8d85a1*/
        *(_DWORD *)(v12 + 8 * (_DWORD)v11 + 4) = *(_DWORD *)(v12 + 8 * v13 + 4); /*0x8d85a8*/
        v6 = (int *)((char *)v11 + 0xFFFFFFFF); /*0x8d85ac*/
      }
LABEL_14:
      result = v4[1]; /*0x8d85ad*/
      v6 = (int *)((char *)v6 + 1); /*0x8d85b0*/
    }
  }
  return result; /*0x8d85bd*/
}
