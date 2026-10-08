void __cdecl sub_932D60(int a1, int *a2, int a3, int a4, int *a5)
{
  int v5; // ebp
  int v6; // ebx
  int v7; // esi
  float *v8; // edx
  unsigned int v9; // ecx
  float *v10; // edx
  int v11; // ecx
  int v12; // ebp
  bool v13; // al
  int v14; // edi
  _DWORD *v15; // ebx
  int v16; // ecx
  int v17; // edx
  bool v18; // cc
  int v19; // edi
  _DWORD *v20; // ebx
  int v21; // eax
  int v22; // ecx
  int v23; // esi
  _DWORD *ThreadLocalStoragePointer; // edi
  int *v25; // edx
  int v26; // ecx
  int v27; // esi
  int v28; // edi
  float v29; // [esp+10h] [ebp-844h] BYREF
  int v30; // [esp+14h] [ebp-840h] BYREF
  int *v31; // [esp+18h] [ebp-83Ch] BYREF
  int v32; // [esp+1Ch] [ebp-838h]
  unsigned int v33; // [esp+20h] [ebp-834h]
  _BYTE v34[12]; // [esp+24h] [ebp-830h] BYREF
  float v35; // [esp+30h] [ebp-824h] BYREF
  int v36; // [esp+34h] [ebp-820h] BYREF
  _DWORD *v37; // [esp+38h] [ebp-81Ch]
  int v38; // [esp+3Ch] [ebp-818h]
  int v39; // [esp+40h] [ebp-814h]
  int v40; // [esp+444h] [ebp-410h] BYREF
  _DWORD *v41; // [esp+448h] [ebp-40Ch] BYREF
  int v42; // [esp+44Ch] [ebp-408h]
  int v43; // [esp+450h] [ebp-404h]

  v5 = 0; /*0x932d70*/
  v6 = a4 + 1; /*0x932d72*/
  v7 = a3; /*0x932d82*/
  v30 = a4 + 1; /*0x932d84*/
  if ( a4 + 1 - a3 >= 4 ) /*0x932d88*/
  {
    v8 = (float *)(0x10 * a3 + *a2 + 0x1C); /*0x932d9c*/
    v9 = ((unsigned int)(v6 - a3 - 4) >> 2) + 1; /*0x932daa*/
    v7 = a3 + 4 * v9; /*0x932dab*/
    do /*0x932e27*/
    {
      v5 += (v8[8] == *(float *)&SrcStr) /*0x932e21*/
          + (v8[4] == *(float *)&SrcStr)
          + (*v8 == *(float *)&SrcStr)
          + (v8[0xFFFFFFFC] == *(float *)&SrcStr);
      v8 += 0x10; /*0x932e23*/
      --v9; /*0x932e26*/
    }
    while ( v9 ); /*0x932e27*/
  }
  if ( v7 < v6 ) /*0x932e2b*/
  {
    v10 = (float *)(0x10 * v7 + *a2 + 0xC); /*0x932e3b*/
    v11 = v6 - v7; /*0x932e41*/
    do /*0x932e63*/
    {
      v5 += *v10 == *(float *)&SrcStr; /*0x932e5d*/
      v10 += 4; /*0x932e5f*/
      --v11; /*0x932e62*/
    }
    while ( v11 ); /*0x932e63*/
  }
  if ( v5 <= 3 ) /*0x932e68*/
  {
    v18 = a3 < v30; /*0x933137*/
    *a5 = *a2; /*0x93313b*/
    v25 = (int *)v34; /*0x93313d*/
    v26 = 0x80000003; /*0x933141*/
    v31 = (int *)v34; /*0x933146*/
    v32 = 0; /*0x93314a*/
    v33 = 0x80000003; /*0x933152*/
    v27 = a3; /*0x933156*/
    if ( v18 ) /*0x933158*/
    {
      v28 = 0x10 * a3; /*0x93315e*/
      do /*0x9331c0*/
      {
        if ( *(float *)(v28 + *a2 + 0xC) == *(float *)&SrcStr ) /*0x93317b*/
        {
          if ( v32 == (v26 & 0x3FFFFFFF) ) /*0x933189*/
          {
            sub_8A6EE0((const void **)&v31, 4); /*0x933192*/
            v25 = v31; /*0x933197*/
          }
          v25[v32] = v27; /*0x9331a2*/
          v26 = v33; /*0x9331a9*/
          v25 = v31; /*0x9331ad*/
          ++v32; /*0x9331b2*/
        }
        ++v27; /*0x9331ba*/
        v28 += 0x10; /*0x9331bb*/
      }
      while ( v27 < v30 ); /*0x9331c0*/
    }
    if ( v5 ) /*0x9331c7*/
    {
      if ( v5 == 1 ) /*0x9331ca*/
      {
        sub_933810(a5, *v25); /*0x9331f5*/
      }
      else if ( v5 == 2 ) /*0x9331d0*/
      {
        sub_933870(a5, *v25, v25[1]); /*0x9331e9*/
      }
      else
      {
        sub_933920(a5, *v25, v25[1], v25[2]); /*0x9331dc*/
      }
      v26 = v33; /*0x9331fa*/
      v25 = v31; /*0x9331fe*/
    }
    if ( v26 >= 0 ) /*0x933204*/
      sub_8A75D0( /*0x933228*/
        *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
        v25,
        4 * v26,
        0x14);
  }
  else
  {
    v12 = (a3 + a4) / 2; /*0x932e84*/
    sub_933D80(&v40); /*0x932e86*/
    v40 = *a2; /*0x932e98*/
    sub_933D80(&v36); /*0x932e9f*/
    v36 = *a2; /*0x932ead*/
    LOBYTE(v29) = 1; /*0x932eb5*/
    do /*0x932fb6*/
    {
      do /*0x932f01*/
      {
        v42 = 0; /*0x932ed3*/
        sub_932D60(a1, a2, a3, v12, &v40); /*0x932ede*/
        sub_92DE30(&v40, (float *)a3, v12, a1, &v29); /*0x932ef3*/
      }
      while ( LOBYTE(v29) ); /*0x932f01*/
      LOBYTE(v29) = 1; /*0x932f03*/
      do /*0x932f56*/
      {
        v38 = 0; /*0x932f27*/
        sub_932D60(a1, a2, v12 + 1, a4, &v36); /*0x932f2f*/
        sub_92DE30(&v36, (float *)(v12 + 1), a4, a1, &v29); /*0x932f48*/
      }
      while ( LOBYTE(v29) ); /*0x932f56*/
      LOBYTE(v35) = 1; /*0x932f6f*/
      sub_92DE30(&v40, (float *)a3, a4, a1, &v35); /*0x932f74*/
      LOBYTE(v30) = 1; /*0x932f8d*/
      sub_92DE30(&v36, (float *)a3, a4, a1, (float *)&v30); /*0x932f92*/
      v13 = LOBYTE(v35) || (_BYTE)v30; /*0x932fae*/
      LOBYTE(v29) = v13; /*0x932fb2*/
    }
    while ( v13 ); /*0x932fb6*/
    if ( v42 ) /*0x932fcc*/
    {
      if ( v38 ) /*0x93302d*/
      {
        sub_932250(a1, &v40, &v36, a5); /*0x93309a*/
      }
      else
      {
        v19 = 0; /*0x93302f*/
        if ( v42 > 0 ) /*0x933033*/
        {
          do /*0x933087*/
          {
            v20 = &v41[2 * v19]; /*0x933055*/
            if ( a5[2] == (a5[3] & 0x3FFFFFFF) ) /*0x933058*/
              sub_8A6EE0((const void **)a5 + 1, 8); /*0x93305d*/
            v21 = a5[2]; /*0x933067*/
            v22 = a5[1]; /*0x93306a*/
            *(_DWORD *)(v22 + 8 * v21) = *v20; /*0x93306c*/
            *(_DWORD *)(v22 + 8 * v21 + 4) = v20[1]; /*0x933072*/
            v18 = ++v19 < v42; /*0x933082*/
            ++a5[2]; /*0x933084*/
          }
          while ( v18 ); /*0x933087*/
        }
      }
    }
    else
    {
      v14 = 0; /*0x932fd2*/
      if ( v38 > 0 ) /*0x932fd6*/
      {
        do /*0x933020*/
        {
          v15 = &v37[2 * v14]; /*0x932ff1*/
          if ( a5[2] == (a5[3] & 0x3FFFFFFF) ) /*0x932ff4*/
            sub_8A6EE0((const void **)a5 + 1, 8); /*0x932ff9*/
          v16 = a5[2]; /*0x933003*/
          v17 = a5[1]; /*0x933006*/
          *(_DWORD *)(v17 + 8 * v16) = *v15; /*0x933008*/
          *(_DWORD *)(v17 + 8 * v16 + 4) = v15[1]; /*0x93300e*/
          v18 = ++v14 < v38; /*0x93301b*/
          ++a5[2]; /*0x93301d*/
        }
        while ( v18 ); /*0x933020*/
      }
    }
    if ( !a5[2] ) /*0x9330a2*/
      sub_92F1D0(a5 + 1, &v41); /*0x9330b4*/
    v23 = MEMORY[0xBA9DE4]; /*0x9330bf*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9330c5*/
    if ( v39 >= 0 ) /*0x9330cc*/
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v23] + 0x19C), v37, 8 * v39, 0x14); /*0x9330e7*/
    if ( v43 >= 0 ) /*0x9330f5*/
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v23] + 0x19C), v41, 8 * v43, 0x14); /*0x933117*/
  }
}
