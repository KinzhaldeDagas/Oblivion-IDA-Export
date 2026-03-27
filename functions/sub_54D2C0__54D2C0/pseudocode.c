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

  v3 = (BSFaceGenAnimationData *)FormHeapAlloc(0x1E0u);
  if ( v3 )
  {
    v4 = BSFaceGenAnimationData::BSFaceGenAnimationData(v3);
    v57 = v4;
  }
  else
  {
    v4 = 0;
    v57 = 0;
  }
  sub_54E8E0((_DWORD *)v4 + 4, a2, (int)(a1 + 4));
  sub_54E8E0((_DWORD *)v4 + 0xD, a2, (int)(a1 + 0xD));
  sub_54E8E0((_DWORD *)v4 + 0x12, a2, (int)(a1 + 0x12));
  sub_54E8E0((_DWORD *)v4 + 0x1B, a2, (int)(a1 + 0x1B));
  sub_54E8E0((_DWORD *)v4 + 0x24, a2, (int)(a1 + 0x24));
  sub_54E8E0((_DWORD *)v4 + 0x29, a2, (int)(a1 + 0x29));
  sub_54E8E0((_DWORD *)v4 + 0x32, a2, (int)(a1 + 0x32));
  sub_54E8E0((_DWORD *)v4 + 0x3B, a2, (int)(a1 + 0x3B));
  sub_54E8E0((_DWORD *)v4 + 0x40, a2, (int)(a1 + 0x40));
  sub_54E8E0((_DWORD *)v4 + 0x49, a2, (int)(a1 + 0x49));
  sub_54E8E0((_DWORD *)v4 + 0x52, a2, (int)(a1 + 0x52));
  sub_54E8E0((_DWORD *)v4 + 0x57, a2, (int)(a1 + 0x57));
  *((_DWORD *)v4 + 0x5C) = a1[0x5C];
  *((_DWORD *)v4 + 0x5D) = a1[0x5D];
  *((_DWORD *)v4 + 0x5E) = a1[0x5E];
  *((_BYTE *)v4 + 0x1D7) = *((_BYTE *)a1 + 0x1D7);
  *((_BYTE *)v4 + 0x1D4) = *((_BYTE *)a1 + 0x1D4);
  *((_BYTE *)v4 + 0x1D8) = *((_BYTE *)a1 + 0x1D8);
  if ( a1[3] )
  {
    v5 = (float *)FormHeapAlloc(0x14u);
    if ( v5 )
      *((_DWORD *)v4 + 3) = sub_54EAA0(v5, a1[3]);
    else
      *((_DWORD *)v4 + 3) = 0;
  }
  else
  {
    *((_DWORD *)v4 + 3) = 0;
  }
  for ( i = (_DWORD *)a1[0xA]; i; i = (_DWORD *)*i )
  {
    v7 = i[2];
    v8 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 0x40))(v7) != 0 ? v7 : 0;
    if ( v8 )
    {
      v9 = (float *)FormHeapAlloc(0x14u);
      if ( v9 )
        v10 = sub_54EAA0(v9, v8);
      else
        v10 = 0;
    }
    else
    {
      v10 = 0;
    }
    v11 = (_DWORD *)(*(int (__thiscall **)(int))(*((_DWORD *)v4 + 9) + 4))((int)v4 + 0x24);
    v11[2] = v10;
    *v11 = 0;
    v11[1] = *((_DWORD *)v4 + 0xB);
    v12 = *((_DWORD **)v4 + 0xB);
    if ( v12 )
      *v12 = v11;
    else
      *((_DWORD *)v4 + 0xA) = v11;
    ++*((_DWORD *)v4 + 0xC);
    *((_DWORD *)v4 + 0xB) = v11;
  }
  for ( j = (_DWORD *)a1[0x18]; j; j = (_DWORD *)*j )
  {
    v14 = j[2];
    v15 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 0x40))(v14) != 0 ? v14 : 0;
    if ( v15 )
    {
      v16 = (float *)FormHeapAlloc(0x14u);
      if ( v16 )
        v17 = sub_54EAA0(v16, v15);
      else
        v17 = 0;
    }
    else
    {
      v17 = 0;
    }
    v18 = (_DWORD *)(*(int (__thiscall **)(int))(*((_DWORD *)v4 + 0x17) + 4))((int)v4 + 0x5C);
    v18[2] = v17;
    *v18 = 0;
    v18[1] = *((_DWORD *)v4 + 0x19);
    v19 = *((_DWORD **)v4 + 0x19);
    if ( v19 )
      *v19 = v18;
    else
      *((_DWORD *)v4 + 0x18) = v18;
    ++*((_DWORD *)v4 + 0x1A);
    *((_DWORD *)v4 + 0x19) = v18;
  }
  for ( k = (_DWORD *)a1[0x21]; k; k = (_DWORD *)*k )
  {
    v21 = k[2];
    v22 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v21 + 0x40))(v21) != 0 ? v21 : 0;
    if ( v22 )
    {
      v23 = (float *)FormHeapAlloc(0x14u);
      if ( v23 )
        v24 = sub_54EAA0(v23, v22);
      else
        v24 = 0;
    }
    else
    {
      v24 = 0;
    }
    v25 = (_DWORD *)(*(int (__thiscall **)(int))(*((_DWORD *)v4 + 0x20) + 4))((int)v4 + 0x80);
    v25[2] = v24;
    *v25 = 0;
    v25[1] = *((_DWORD *)v4 + 0x22);
    v26 = *((_DWORD **)v4 + 0x22);
    if ( v26 )
      *v26 = v25;
    else
      *((_DWORD *)v4 + 0x21) = v25;
    ++*((_DWORD *)v4 + 0x23);
    *((_DWORD *)v4 + 0x22) = v25;
  }
  for ( m = (_DWORD *)a1[0x2F]; m; m = (_DWORD *)*m )
  {
    v28 = m[2];
    v29 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v28 + 0x40))(v28) != 0 ? v28 : 0;
    if ( v29 )
    {
      v30 = (float *)FormHeapAlloc(0x14u);
      if ( v30 )
        v31 = sub_54EAA0(v30, v29);
      else
        v31 = 0;
    }
    else
    {
      v31 = 0;
    }
    v32 = (_DWORD *)(*(int (__thiscall **)(int))(*((_DWORD *)v4 + 0x2E) + 4))((int)v4 + 0xB8);
    v32[2] = v31;
    *v32 = 0;
    v32[1] = *((_DWORD *)v4 + 0x30);
    v33 = *((_DWORD **)v4 + 0x30);
    if ( v33 )
      *v33 = v32;
    else
      *((_DWORD *)v4 + 0x2F) = v32;
    ++*((_DWORD *)v4 + 0x31);
    *((_DWORD *)v4 + 0x30) = v32;
  }
  for ( n = (_DWORD *)a1[0x38]; n; n = (_DWORD *)*n )
  {
    v35 = n[2];
    v36 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v35 + 0x40))(v35) != 0 ? v35 : 0;
    if ( v36 )
    {
      v37 = (float *)FormHeapAlloc(0x14u);
      if ( v37 )
        v38 = sub_54EAA0(v37, v36);
      else
        v38 = 0;
    }
    else
    {
      v38 = 0;
    }
    v39 = (_DWORD *)(*(int (__thiscall **)(int))(*((_DWORD *)v4 + 0x37) + 4))((int)v4 + 0xDC);
    v39[2] = v38;
    *v39 = 0;
    v39[1] = *((_DWORD *)v4 + 0x39);
    v40 = *((_DWORD **)v4 + 0x39);
    if ( v40 )
      *v40 = v39;
    else
      *((_DWORD *)v4 + 0x38) = v39;
    ++*((_DWORD *)v4 + 0x3A);
    *((_DWORD *)v4 + 0x39) = v39;
  }
  for ( ii = (_DWORD *)a1[0x46]; ii; ii = (_DWORD *)*ii )
  {
    v42 = ii[2];
    v43 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v42 + 0x40))(v42) != 0 ? v42 : 0;
    if ( v43 )
    {
      v44 = (float *)FormHeapAlloc(0x14u);
      if ( v44 )
        v45 = sub_54EAA0(v44, v43);
      else
        v45 = 0;
    }
    else
    {
      v45 = 0;
    }
    v46 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*((_DWORD *)v57 + 0x45) + 4))((_DWORD *)v57 + 0x45);
    v46[2] = v45;
    *v46 = 0;
    v46[1] = *((_DWORD *)v57 + 0x47);
    v47 = *((_DWORD **)v57 + 0x47);
    if ( v47 )
      *v47 = v46;
    else
      *((_DWORD *)v57 + 0x46) = v46;
    ++*((_DWORD *)v57 + 0x48);
    *((_DWORD *)v57 + 0x47) = v46;
  }
  for ( jj = (_DWORD *)a1[0x4F]; jj; jj = (_DWORD *)*jj )
  {
    v49 = jj[2];
    v50 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v49 + 0x40))(v49) != 0 ? v49 : 0;
    if ( v50 )
    {
      v51 = (float *)FormHeapAlloc(0x14u);
      if ( v51 )
        v52 = sub_54EAA0(v51, v50);
      else
        v52 = 0;
    }
    else
    {
      v52 = 0;
    }
    v53 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*((_DWORD *)v57 + 0x4E) + 4))((_DWORD *)v57 + 0x4E);
    v53[2] = v52;
    *v53 = 0;
    v53[1] = *((_DWORD *)v57 + 0x50);
    v54 = *((_DWORD **)v57 + 0x50);
    if ( v54 )
      *v54 = v53;
    else
      *((_DWORD *)v57 + 0x4F) = v53;
    ++*((_DWORD *)v57 + 0x51);
    *((_DWORD *)v57 + 0x50) = v53;
  }
  return v57;
}
