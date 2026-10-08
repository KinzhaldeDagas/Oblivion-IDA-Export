BSFaceGenMorphDataHair *__userpurge BSFaceGenMorphDataHair::BSFaceGenMorphDataHair@<eax>(
        BSFaceGenMorphDataHair *this@<ecx>,
        int a2@<edi>,
        int a3)
{
  unsigned int v4; // ebp
  int v6; // eax
  int v7; // eax
  const char *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // eax
  unsigned int v13; // edi
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  int v16; // ebx
  int v17; // eax
  int v18; // edi
  int v19; // eax
  int v20; // edi
  int v21; // eax
  int v22; // edi
  int v23; // edi
  int v24; // eax
  int v25; // edi
  int v26; // eax
  int v27; // edi
  int v28; // edi
  int v29; // eax
  float v30; // edx
  double v31; // st7
  int v33; // [esp+14h] [ebp-2Ch]
  int v34; // [esp+18h] [ebp-28h]
  int v35; // [esp+1Ch] [ebp-24h]
  float v37; // [esp+30h] [ebp-10h]
  unsigned int v38; // [esp+44h] [ebp+4h]

  v4 = 0; /*0x55c41d*/
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x55c424*/
  *((_DWORD *)this + 1) = 0; /*0x55c42a*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x55c42d*/
  *(_DWORD *)this = &BSFaceGenMorphDataHair::`vftable'; /*0x55c43d*/
  *((_DWORD *)this + 2) = 0; /*0x55c443*/
  if ( !a3 ) /*0x55c446*/
    return this; /*0x55c446*/
  v6 = *(_DWORD *)(a3 + 0x84); /*0x55c44c*/
  if ( !v6 || !((*(_DWORD *)(a3 + 0x88) - v6) / 0x2C) ) /*0x55c46d*/
    _invalid_parameter_noinfo((int)this, a2, a3); /*0x55c471*/
  v7 = *(_DWORD *)(a3 + 0x84); /*0x55c476*/
  v8 = *(_DWORD *)(v7 + 0x18) < 0x10u ? (const char *)(v7 + 4) : *(const char **)(v7 + 4);
  if ( CRT_StricmpLocaleDispatch("HairMorph", v8) ) /*0x55c490*/
    return this; /*0x55c490*/
  v9 = *(_DWORD *)(a3 + 0x84); /*0x55c4a0*/
  if ( !v9 || !((*(_DWORD *)(a3 + 0x88) - v9) / 0x2C) ) /*0x55c4c1*/
    _invalid_parameter_noinfo((int)this, a2, a3); /*0x55c4c5*/
  v10 = *(_DWORD *)(a3 + 0x84); /*0x55c4ca*/
  v11 = *(_DWORD *)(v10 + 0x20); /*0x55c4d0*/
  v12 = v10 + 0x1C; /*0x55c4d3*/
  if ( v11 ) /*0x55c4d8*/
  {
    v38 = (*(_DWORD *)(v12 + 8) - v11) / 0xC; /*0x55c4f7*/
    v13 = v38; /*0x55c4fb*/
  }
  else
  {
    v13 = 0; /*0x55c4da*/
    v38 = 0; /*0x55c4dc*/
  }
  v14 = (_DWORD *)FormHeapAlloc(0xCu); /*0x55c4ff*/
  v15 = v14 ? sub_55A0C0(v14, v13) : 0;
  *((_DWORD *)this + 2) = v15; /*0x55c522*/
  v35 = v15[1]; /*0x55c528*/
  if ( !v13 ) /*0x55c52c*/
    return this; /*0x55c69f*/
  v16 = 0; /*0x55c532*/
  do /*0x55c693*/
  {
    v17 = *(_DWORD *)(a3 + 0x84); /*0x55c534*/
    if ( !v17 || !((*(_DWORD *)(a3 + 0x88) - v17) / 0x2C) ) /*0x55c555*/
      _invalid_parameter_noinfo(v16, v13, a3); /*0x55c559*/
    v18 = *(_DWORD *)(a3 + 0x84); /*0x55c55e*/
    v19 = *(_DWORD *)(v18 + 0x20); /*0x55c564*/
    v20 = v18 + 0x1C; /*0x55c567*/
    if ( !v19 || v4 >= (*(_DWORD *)(v20 + 8) - v19) / 0xC ) /*0x55c585*/
      _invalid_parameter_noinfo(v16, v20, a3); /*0x55c587*/
    v21 = *(_DWORD *)(a3 + 0x84); /*0x55c58f*/
    v22 = v16 + *(_DWORD *)(v20 + 4); /*0x55c595*/
    v34 = v22; /*0x55c599*/
    if ( !v21 || !((*(_DWORD *)(a3 + 0x88) - v21) / 0x2C) ) /*0x55c5b6*/
      _invalid_parameter_noinfo(v16, v22, a3); /*0x55c5ba*/
    v23 = *(_DWORD *)(a3 + 0x84); /*0x55c5bf*/
    v24 = *(_DWORD *)(v23 + 0x20); /*0x55c5c5*/
    v25 = v23 + 0x1C; /*0x55c5c8*/
    if ( !v24 || v4 >= (*(_DWORD *)(v25 + 8) - v24) / 0xC ) /*0x55c5e6*/
      _invalid_parameter_noinfo(v16, v25, a3); /*0x55c5e8*/
    v26 = *(_DWORD *)(a3 + 0x84); /*0x55c5f0*/
    v27 = v16 + *(_DWORD *)(v25 + 4); /*0x55c5f6*/
    v33 = v27; /*0x55c5fa*/
    if ( !v26 || !((*(_DWORD *)(a3 + 0x88) - v26) / 0x2C) ) /*0x55c617*/
      _invalid_parameter_noinfo(v16, v27, a3); /*0x55c61b*/
    v28 = *(_DWORD *)(a3 + 0x84); /*0x55c620*/
    v29 = *(_DWORD *)(v28 + 0x20); /*0x55c626*/
    v13 = v28 + 0x1C; /*0x55c629*/
    if ( !v29 || v4 >= (*(_DWORD *)(v13 + 8) - v29) / 0xC ) /*0x55c647*/
      _invalid_parameter_noinfo(v16, v13, a3); /*0x55c649*/
    v30 = *(float *)(v33 + 4); /*0x55c66b*/
    v31 = *(float *)(v34 + 8); /*0x55c66f*/
    *(float *)(v16 + v35) = *(float *)(v16 + *(_DWORD *)(v13 + 4)); /*0x55c676*/
    v37 = v31; /*0x55c679*/
    *(float *)(v16 + v35 + 4) = v30; /*0x55c681*/
    *(float *)(v16 + v35 + 8) = v37; /*0x55c685*/
    ++v4; /*0x55c689*/
    v16 += 0xC; /*0x55c68c*/
  }
  while ( v4 < v38 ); /*0x55c693*/
  return this; /*0x55c6a1*/
}
