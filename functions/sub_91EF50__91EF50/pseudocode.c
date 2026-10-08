int __usercall sub_91EF50@<eax>(int a1@<ebp>, int a2@<edi>, int a3, int a4, int a5, int a6)
{
  int v6; // ebx
  int v7; // eax
  char v8; // cl
  int v9; // esi
  int v10; // ebp
  char v11; // cl
  int v12; // eax
  int v13; // esi
  bool v14; // al
  _DWORD *v15; // edi
  int v16; // eax
  const void **v17; // edi
  int v18; // ebp
  _BYTE *v19; // esi
  BOOL v20; // edx
  int v21; // esi
  int v22; // ecx
  int v23; // esi
  int v24; // esi
  int v25; // eax
  bool v26; // zf
  int v27; // esi
  int v28; // edx
  const void **v29; // ebx
  const void *v30; // esi
  _DWORD *v31; // eax
  _BYTE *v32; // esi
  int v33; // edx
  int v34; // eax
  int v35; // ecx
  int v36; // esi
  int v37; // ecx
  int v38; // edx
  _DWORD *v39; // ecx
  int v40; // ebx
  const void *v41; // ecx
  int v42; // ebx
  int v43; // esi
  int v44; // edx
  int v45; // edx
  int v46; // eax
  int v47; // ecx
  int v48; // esi
  int result; // eax
  int v52; // [esp+1Ch] [ebp-34h]
  int v53; // [esp+20h] [ebp-30h]
  _DWORD *v54; // [esp+24h] [ebp-2Ch] BYREF
  int v55; // [esp+28h] [ebp-28h]
  _DWORD v56[2]; // [esp+2Ch] [ebp-24h] BYREF
  unsigned int v57; // [esp+34h] [ebp-1Ch]
  int v58; // [esp+38h] [ebp-18h]
  int v59; // [esp+3Ch] [ebp-14h] BYREF
  int v60; // [esp+40h] [ebp-10h]
  _BYTE v61[12]; // [esp+44h] [ebp-Ch]

  v6 = a4; /*0x91ef54*/
  if ( *(_WORD *)(a4 + 4) ) /*0x91ef58*/
    ++*(_WORD *)(a4 + 6); /*0x91ef60*/
  v7 = *(_DWORD *)(a4 + 0x10); /*0x91ef64*/
  v8 = *(_BYTE *)(a4 + 0x18); /*0x91ef67*/
  v9 = *(_DWORD *)(a4 + 0x14); /*0x91ef6a*/
  v10 = *(_DWORD *)(a4 + 0xC); /*0x91ef6e*/
  v57 = a4; /*0x91ef71*/
  v58 = v7; /*0x91ef75*/
  v59 = v9; /*0x91ef79*/
  v60 = v10; /*0x91ef7d*/
  v61[0] = v8; /*0x91ef81*/
  if ( !*(_BYTE *)(v7 + 0x91) && !*(_BYTE *)(v9 + 0x91) && *(_DWORD *)(v7 + 0x54) != *(_DWORD *)(v9 + 0x54) ) /*0x91efa0*/
  {
    sub_8CD320(*(int **)(v7 + 8), v7, v9); /*0x91efa8*/
    v10 = v60; /*0x91efad*/
    v9 = v59; /*0x91efb1*/
    v7 = v58; /*0x91efb5*/
  }
  v11 = *(_BYTE *)(v7 + 0x91); /*0x91efc2*/
  if ( v11 == (*(_BYTE *)(v9 + 0x91) != 0) ) /*0x91efd5*/
  {
    v12 = *(_DWORD *)(v7 + 0x6C); /*0x91efd7*/
    v13 = *(_DWORD *)(v9 + 0x6C); /*0x91efda*/
    if ( v13 + v12 >= 8 ) /*0x91efe3*/
      v14 = v12 <= v13; /*0x91efee*/
    else
      v14 = v12 >= v13; /*0x91efe7*/
  }
  else
  {
    v14 = v11 != 0; /*0x91eff5*/
  }
  v61[1] = v14; /*0x91effb*/
  v15 = (_DWORD *)*(&v58 + v14); /*0x91efff*/
  *(_DWORD *)(a4 + 8) = v15[0x15]; /*0x91f006*/
  (*(void (__thiscall **)(int, _DWORD **, int, int))(*(_DWORD *)v10 + 0x20))(v10, &v54, a2, a1); /*0x91f017*/
  (*(void (__thiscall **)(_DWORD, int, _DWORD *))(**(_DWORD **)(a4 + 8) + 0xC))(*(_DWORD *)(a4 + 8), a4, v56); /*0x91f025*/
  v16 = v15[0x1B]; /*0x91f028*/
  v17 = (const void **)(v15 + 0x1A); /*0x91f02b*/
  v18 = 0; /*0x91f02e*/
  if ( v16 > 0 ) /*0x91f032*/
  {
    v19 = (char *)*v17 + 0x10; /*0x91f03a*/
    do /*0x91f04a*/
    {
      if ( *v19 > v61[8] ) /*0x91f042*/
        break; /*0x91f042*/
      ++v18; /*0x91f044*/
      v19 += 0x1C; /*0x91f045*/
    }
    while ( v18 < v16 ); /*0x91f04a*/
  }
  v20 = v16 >= (int)((unsigned int)v17[2] & 0x3FFFFFFF); /*0x91f059*/
  v56[0] = &v59; /*0x91f068*/
  v21 = v20 ? 0 : v18;
  v56[1] = 1; /*0x91f071*/
  v57 = 0x80000001; /*0x91f079*/
  sub_91EE60(v17, v18, (char *)v56); /*0x91f081*/
  v22 = v21; /*0x91f089*/
  if ( v21 < (int)v17[1] ) /*0x91f08b*/
  {
    v23 = 0x1C * v21; /*0x91f08d*/
    do /*0x91f0a3*/
    {
      *(_DWORD *)(*(_DWORD *)((char *)*v17 + v23) + 0x24) = (char *)*v17 + v23; /*0x91f097*/
      ++v22; /*0x91f09d*/
      v23 += 0x1C; /*0x91f09e*/
    }
    while ( v22 < (int)v17[1] ); /*0x91f0a3*/
  }
  v24 = *(_DWORD *)(a4 + 0x24); /*0x91f0a5*/
  v53 = v24; /*0x91f0b7*/
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD *))(**(_DWORD **)(v24 + 0xC) + 0x10))( /*0x91f0bc*/
    *(_DWORD *)(v24 + 0xC),
    *(unsigned __int8 *)(a4 + 0x19),
    v56);
  v25 = v56[0]; /*0x91f0bf*/
  v26 = v56[0] == 0; /*0x91f0c3*/
  *(_WORD *)(v24 + 0x14) = v56[0]; /*0x91f0c5*/
  if ( v26 ) /*0x91f0c9*/
  {
    *(_DWORD *)(v24 + 0x18) = 0; /*0x91f217*/
  }
  else
  {
    v27 = v54[0x21]; /*0x91f0d9*/
    v28 = v54[0x22]; /*0x91f0df*/
    v29 = (const void **)(v54 + 0x20); /*0x91f0e5*/
    v54 = (_DWORD *)v54[0x20]; /*0x91f0eb*/
    if ( (v28 & 0x3FFFFFFF) < v27 + v25 ) /*0x91f0fa*/
    {
      sub_8A6E40(v29, v27 + v25, 1); /*0x91f100*/
      v25 = v56[0]; /*0x91f105*/
    }
    v30 = (const void *)(v25 + v27); /*0x91f10c*/
    v31 = v54; /*0x91f10e*/
    v29[1] = v30; /*0x91f112*/
    v32 = *v29; /*0x91f115*/
    v33 = (_BYTE *)*v29 - (_BYTE *)v31; /*0x91f119*/
    v55 = v33; /*0x91f11f*/
    v54 = 0; /*0x91f123*/
    if ( v18 > 0 ) /*0x91f127*/
    {
      v52 = 0; /*0x91f129*/
      v54 = (_DWORD *)v18; /*0x91f12d*/
      do /*0x91f157*/
      {
        v34 = (int)*v17 + v52; /*0x91f137*/
        v35 = *(_DWORD *)(v34 + 0x18); /*0x91f139*/
        if ( v35 ) /*0x91f13e*/
        {
          v36 = *(unsigned __int16 *)(v34 + 0x14); /*0x91f140*/
          v37 = v33 + v35; /*0x91f144*/
          *(_DWORD *)(v34 + 0x18) = v37; /*0x91f146*/
          v32 = (_BYTE *)(v37 + v36); /*0x91f149*/
        }
        --v18; /*0x91f152*/
        v52 += 0x1C; /*0x91f153*/
      }
      while ( v18 ); /*0x91f157*/
    }
    j_unknown_libname_16( /*0x91f171*/
      (unsigned int)&v32[*(unsigned __int16 *)(v53 + 0x14)],
      (unsigned int)v32,
      (int)*v29 + (char *)v29[1] - *(unsigned __int16 *)(v53 + 0x14) - v32);
    v38 = *(unsigned __int16 *)(v53 + 0x14); /*0x91f176*/
    v39 = v54; /*0x91f17a*/
    v40 = v55; /*0x91f17e*/
    *(_DWORD *)(v53 + 0x18) = v32; /*0x91f185*/
    v41 = (char *)v39 + 1; /*0x91f18b*/
    v42 = v38 + v40; /*0x91f18c*/
    if ( (int)v41 < (int)v17[1] ) /*0x91f190*/
    {
      v43 = 0x1C * (_DWORD)v41; /*0x91f194*/
      do /*0x91f1b5*/
      {
        v44 = *(_DWORD *)((char *)*v17 + v43 + 0x18); /*0x91f199*/
        if ( v44 ) /*0x91f1a1*/
          v45 = v42 + v44; /*0x91f1a3*/
        else
          v45 = 0; /*0x91f1a7*/
        *(_DWORD *)((char *)*v17 + v43 + 0x18) = v45; /*0x91f1a9*/
        v41 = (char *)v41 + 1; /*0x91f1af*/
        v43 += 0x1C; /*0x91f1b0*/
      }
      while ( (int)v41 < (int)v17[1] ); /*0x91f1b5*/
    }
    v6 = a6; /*0x91f1b7*/
    v24 = v53; /*0x91f1bb*/
  }
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v24 + 0xC) + 0x18))(*(_DWORD *)(v24 + 0xC), v6); /*0x91f1ce*/
  v46 = *(_DWORD *)(v24 + 4 * (2 - *(unsigned __int8 *)(v24 + 0x11))); /*0x91f1dc*/
  *(_WORD *)(v24 + 0x12) = *(_WORD *)(v46 + 0x78); /*0x91f1e3*/
  v47 = *(_DWORD *)(v46 + 0x78); /*0x91f1e7*/
  v48 = v46 + 0x74; /*0x91f1ea*/
  result = *(_DWORD *)(v46 + 0x7C) & 0x3FFFFFFF; /*0x91f1f0*/
  if ( v47 == result ) /*0x91f1f9*/
    result = sub_8A6EE0((const void **)v48, 4); /*0x91f1fe*/
  *(_DWORD *)(*(_DWORD *)v48 + 4 * (*(_DWORD *)(v48 + 4))++) = v6; /*0x91f20b*/
  return result; /*0x91f211*/
}
