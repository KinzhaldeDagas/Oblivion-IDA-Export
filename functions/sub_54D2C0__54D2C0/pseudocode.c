BSFaceGenAnimationData *__usercall sub_54D2C0@<eax>(_DWORD *a1@<ecx>, double a2@<st0>)
{
  BSFaceGenAnimationData *v3; // eax
  BSFaceGenAnimationData *v4; // ebp
  float *v5; // eax
  _DWORD *i; // ebx
  int v7; // edi
  int v8; // edi
  float *v9; // eax
  float *v10; // edi
  _DWORD *v11; // eax
  _DWORD *v12; // ecx
  _DWORD *j; // ebx
  int v14; // edi
  int v15; // edi
  float *v16; // eax
  float *v17; // edi
  _DWORD *v18; // eax
  _DWORD *v19; // ecx
  _DWORD *k; // ebx
  int v21; // edi
  int v22; // edi
  float *v23; // eax
  float *v24; // edi
  _DWORD *v25; // eax
  _DWORD *v26; // ecx
  _DWORD *m; // ebx
  int v28; // edi
  int v29; // edi
  float *v30; // eax
  float *v31; // edi
  _DWORD *v32; // eax
  _DWORD *v33; // ecx
  _DWORD *n; // ebx
  int v35; // edi
  int v36; // edi
  float *v37; // eax
  float *v38; // edi
  _DWORD *v39; // eax
  _DWORD *v40; // ecx
  _DWORD *ii; // ebx
  int v42; // edi
  int v43; // edi
  float *v44; // eax
  float *v45; // edi
  _DWORD *v46; // eax
  _DWORD *v47; // ecx
  _DWORD *jj; // ebx
  int v49; // edi
  int v50; // edi
  float *v51; // eax
  float *v52; // edi
  _DWORD *v53; // eax
  _DWORD *v54; // ecx
  BSFaceGenAnimationData *v57; // [esp+18h] [ebp-14h]

  v3 = (BSFaceGenAnimationData *)FormHeapAlloc(0x1E0u); /*0x54d2f2*/
  if ( v3 ) /*0x54d306*/
  {
    v4 = BSFaceGenAnimationData::BSFaceGenAnimationData(v3); /*0x54d30f*/
    v57 = v4; /*0x54d311*/
  }
  else
  {
    v4 = 0; /*0x54d317*/
    v57 = 0; /*0x54d319*/
  }
  sub_54E8E0((_DWORD *)v4 + 4, a2, (int)(a1 + 4)); /*0x54d32b*/
  sub_54E8E0((_DWORD *)v4 + 0xD, a2, (int)(a1 + 0xD)); /*0x54d337*/
  sub_54E8E0((_DWORD *)v4 + 0x12, a2, (int)(a1 + 0x12)); /*0x54d343*/
  sub_54E8E0((_DWORD *)v4 + 0x1B, a2, (int)(a1 + 0x1B)); /*0x54d34f*/
  sub_54E8E0((_DWORD *)v4 + 0x24, a2, (int)(a1 + 0x24)); /*0x54d361*/
  sub_54E8E0((_DWORD *)v4 + 0x29, a2, (int)(a1 + 0x29)); /*0x54d373*/
  sub_54E8E0((_DWORD *)v4 + 0x32, a2, (int)(a1 + 0x32)); /*0x54d385*/
  sub_54E8E0((_DWORD *)v4 + 0x3B, a2, (int)(a1 + 0x3B)); /*0x54d397*/
  sub_54E8E0((_DWORD *)v4 + 0x40, a2, (int)(a1 + 0x40)); /*0x54d3a9*/
  sub_54E8E0((_DWORD *)v4 + 0x49, a2, (int)(a1 + 0x49)); /*0x54d3bb*/
  sub_54E8E0((_DWORD *)v4 + 0x52, a2, (int)(a1 + 0x52)); /*0x54d3cd*/
  sub_54E8E0((_DWORD *)v4 + 0x57, a2, (int)(a1 + 0x57)); /*0x54d3df*/
  *((_DWORD *)v4 + 0x5C) = a1[0x5C]; /*0x54d3ea*/
  *((_DWORD *)v4 + 0x5D) = a1[0x5D]; /*0x54d3f6*/
  *((_DWORD *)v4 + 0x5E) = a1[0x5E]; /*0x54d402*/
  *((_BYTE *)v4 + 0x1D7) = *((_BYTE *)a1 + 0x1D7); /*0x54d40e*/
  *((_BYTE *)v4 + 0x1D4) = *((_BYTE *)a1 + 0x1D4); /*0x54d41a*/
  *((_BYTE *)v4 + 0x1D8) = *((_BYTE *)a1 + 0x1D8); /*0x54d426*/
  if ( a1[3] ) /*0x54d42c*/
  {
    v5 = (float *)FormHeapAlloc(0x14u); /*0x54d433*/
    if ( v5 ) /*0x54d449*/
      *((_DWORD *)v4 + 3) = sub_54EAA0(v5, a1[3]); /*0x54d45a*/
    else
      *((_DWORD *)v4 + 3) = 0; /*0x54d465*/
  }
  else
  {
    *((_DWORD *)v4 + 3) = 0; /*0x54d46a*/
  }
  for ( i = (_DWORD *)a1[0xA]; i; i = (_DWORD *)*i )
  {
    v7 = i[2]; /*0x54d480*/
    v8 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 0x40))(v7) != 0 ? v7 : 0;
    if ( v8 ) /*0x54d494*/
    {
      v9 = (float *)FormHeapAlloc(0x14u); /*0x54d498*/
      if ( v9 ) /*0x54d4ae*/
        v10 = sub_54EAA0(v9, v8); /*0x54d4c0*/
      else
        v10 = 0; /*0x54d4ce*/
    }
    else
    {
      v10 = 0; /*0x54d4d2*/
    }
    v11 = (_DWORD *)(*(int (__thiscall **)(int))(*((_DWORD *)v4 + 9) + 4))((int)v4 + 0x24); /*0x54d4db*/
    v11[2] = v10; /*0x54d4dd*/
    *v11 = 0; /*0x54d4e0*/
    v11[1] = *((_DWORD *)v4 + 0xB); /*0x54d4e9*/
    v12 = *((_DWORD **)v4 + 0xB); /*0x54d4ec*/
    if ( v12 ) /*0x54d4f1*/
      *v12 = v11; /*0x54d4f3*/
    else
      *((_DWORD *)v4 + 0xA) = v11; /*0x54d4f7*/
    ++*((_DWORD *)v4 + 0xC); /*0x54d4fa*/
    *((_DWORD *)v4 + 0xB) = v11; /*0x54d4fe*/
  }
  for ( j = (_DWORD *)a1[0x18]; j; j = (_DWORD *)*j )
  {
    v14 = j[2]; /*0x54d520*/
    v15 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 0x40))(v14) != 0 ? v14 : 0;
    if ( v15 ) /*0x54d534*/
    {
      v16 = (float *)FormHeapAlloc(0x14u); /*0x54d538*/
      if ( v16 ) /*0x54d54e*/
        v17 = sub_54EAA0(v16, v15); /*0x54d560*/
      else
        v17 = 0; /*0x54d56e*/
    }
    else
    {
      v17 = 0; /*0x54d572*/
    }
    v18 = (_DWORD *)(*(int (__thiscall **)(int))(*((_DWORD *)v4 + 0x17) + 4))((int)v4 + 0x5C); /*0x54d57b*/
    v18[2] = v17; /*0x54d57d*/
    *v18 = 0; /*0x54d580*/
    v18[1] = *((_DWORD *)v4 + 0x19); /*0x54d589*/
    v19 = *((_DWORD **)v4 + 0x19); /*0x54d58c*/
    if ( v19 ) /*0x54d591*/
      *v19 = v18; /*0x54d593*/
    else
      *((_DWORD *)v4 + 0x18) = v18; /*0x54d597*/
    ++*((_DWORD *)v4 + 0x1A); /*0x54d59a*/
    *((_DWORD *)v4 + 0x19) = v18; /*0x54d59e*/
  }
  for ( k = (_DWORD *)a1[0x21]; k; k = (_DWORD *)*k )
  {
    v21 = k[2]; /*0x54d5c3*/
    v22 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v21 + 0x40))(v21) != 0 ? v21 : 0;
    if ( v22 ) /*0x54d5d7*/
    {
      v23 = (float *)FormHeapAlloc(0x14u); /*0x54d5db*/
      if ( v23 ) /*0x54d5f1*/
        v24 = sub_54EAA0(v23, v22); /*0x54d603*/
      else
        v24 = 0; /*0x54d611*/
    }
    else
    {
      v24 = 0; /*0x54d615*/
    }
    v25 = (_DWORD *)(*(int (__thiscall **)(int))(*((_DWORD *)v4 + 0x20) + 4))((int)v4 + 0x80); /*0x54d61e*/
    v25[2] = v24; /*0x54d620*/
    *v25 = 0; /*0x54d623*/
    v25[1] = *((_DWORD *)v4 + 0x22); /*0x54d62c*/
    v26 = *((_DWORD **)v4 + 0x22); /*0x54d62f*/
    if ( v26 ) /*0x54d634*/
      *v26 = v25; /*0x54d636*/
    else
      *((_DWORD *)v4 + 0x21) = v25; /*0x54d63a*/
    ++*((_DWORD *)v4 + 0x23); /*0x54d63d*/
    *((_DWORD *)v4 + 0x22) = v25; /*0x54d641*/
  }
  for ( m = (_DWORD *)a1[0x2F]; m; m = (_DWORD *)*m )
  {
    v28 = m[2]; /*0x54d666*/
    v29 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v28 + 0x40))(v28) != 0 ? v28 : 0;
    if ( v29 ) /*0x54d67a*/
    {
      v30 = (float *)FormHeapAlloc(0x14u); /*0x54d67e*/
      if ( v30 ) /*0x54d694*/
        v31 = sub_54EAA0(v30, v29); /*0x54d6a6*/
      else
        v31 = 0; /*0x54d6b4*/
    }
    else
    {
      v31 = 0; /*0x54d6b8*/
    }
    v32 = (_DWORD *)(*(int (__thiscall **)(int))(*((_DWORD *)v4 + 0x2E) + 4))((int)v4 + 0xB8); /*0x54d6c1*/
    v32[2] = v31; /*0x54d6c3*/
    *v32 = 0; /*0x54d6c6*/
    v32[1] = *((_DWORD *)v4 + 0x30); /*0x54d6cf*/
    v33 = *((_DWORD **)v4 + 0x30); /*0x54d6d2*/
    if ( v33 ) /*0x54d6d7*/
      *v33 = v32; /*0x54d6d9*/
    else
      *((_DWORD *)v4 + 0x2F) = v32; /*0x54d6dd*/
    ++*((_DWORD *)v4 + 0x31); /*0x54d6e0*/
    *((_DWORD *)v4 + 0x30) = v32; /*0x54d6e4*/
  }
  for ( n = (_DWORD *)a1[0x38]; n; n = (_DWORD *)*n )
  {
    v35 = n[2]; /*0x54d710*/
    v36 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v35 + 0x40))(v35) != 0 ? v35 : 0;
    if ( v36 ) /*0x54d724*/
    {
      v37 = (float *)FormHeapAlloc(0x14u); /*0x54d728*/
      if ( v37 ) /*0x54d73e*/
        v38 = sub_54EAA0(v37, v36); /*0x54d750*/
      else
        v38 = 0; /*0x54d75e*/
    }
    else
    {
      v38 = 0; /*0x54d762*/
    }
    v39 = (_DWORD *)(*(int (__thiscall **)(int))(*((_DWORD *)v4 + 0x37) + 4))((int)v4 + 0xDC); /*0x54d76b*/
    v39[2] = v38; /*0x54d76d*/
    *v39 = 0; /*0x54d770*/
    v39[1] = *((_DWORD *)v4 + 0x39); /*0x54d779*/
    v40 = *((_DWORD **)v4 + 0x39); /*0x54d77c*/
    if ( v40 ) /*0x54d781*/
      *v40 = v39; /*0x54d783*/
    else
      *((_DWORD *)v4 + 0x38) = v39; /*0x54d787*/
    ++*((_DWORD *)v4 + 0x3A); /*0x54d78a*/
    *((_DWORD *)v4 + 0x39) = v39; /*0x54d78d*/
  }
  for ( ii = (_DWORD *)a1[0x46]; ii; ii = (_DWORD *)*ii )
  {
    v42 = ii[2]; /*0x54d7c0*/
    v43 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v42 + 0x40))(v42) != 0 ? v42 : 0;
    if ( v43 ) /*0x54d7d4*/
    {
      v44 = (float *)FormHeapAlloc(0x14u); /*0x54d7d8*/
      if ( v44 ) /*0x54d7ea*/
        v45 = sub_54EAA0(v44, v43); /*0x54d7fc*/
      else
        v45 = 0; /*0x54d80a*/
    }
    else
    {
      v45 = 0; /*0x54d80e*/
    }
    v46 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*((_DWORD *)v57 + 0x45) + 4))((_DWORD *)v57 + 0x45); /*0x54d817*/
    v46[2] = v45; /*0x54d819*/
    *v46 = 0; /*0x54d81c*/
    v46[1] = *((_DWORD *)v57 + 0x47); /*0x54d825*/
    v47 = *((_DWORD **)v57 + 0x47); /*0x54d828*/
    if ( v47 ) /*0x54d82d*/
      *v47 = v46; /*0x54d82f*/
    else
      *((_DWORD *)v57 + 0x46) = v46; /*0x54d833*/
    ++*((_DWORD *)v57 + 0x48); /*0x54d836*/
    *((_DWORD *)v57 + 0x47) = v46; /*0x54d83a*/
  }
  for ( jj = (_DWORD *)a1[0x4F]; jj; jj = (_DWORD *)*jj )
  {
    v49 = jj[2]; /*0x54d868*/
    v50 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v49 + 0x40))(v49) != 0 ? v49 : 0;
    if ( v50 ) /*0x54d87c*/
    {
      v51 = (float *)FormHeapAlloc(0x14u); /*0x54d880*/
      if ( v51 ) /*0x54d892*/
        v52 = sub_54EAA0(v51, v50); /*0x54d8a4*/
      else
        v52 = 0; /*0x54d8b2*/
    }
    else
    {
      v52 = 0; /*0x54d8b6*/
    }
    v53 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*((_DWORD *)v57 + 0x4E) + 4))((_DWORD *)v57 + 0x4E); /*0x54d8bf*/
    v53[2] = v52; /*0x54d8c1*/
    *v53 = 0; /*0x54d8c4*/
    v53[1] = *((_DWORD *)v57 + 0x50); /*0x54d8cd*/
    v54 = *((_DWORD **)v57 + 0x50); /*0x54d8d0*/
    if ( v54 ) /*0x54d8d5*/
      *v54 = v53; /*0x54d8d7*/
    else
      *((_DWORD *)v57 + 0x4F) = v53; /*0x54d8db*/
    ++*((_DWORD *)v57 + 0x51); /*0x54d8de*/
    *((_DWORD *)v57 + 0x50) = v53; /*0x54d8e2*/
  }
  return v57; /*0x54d8f3*/
}
