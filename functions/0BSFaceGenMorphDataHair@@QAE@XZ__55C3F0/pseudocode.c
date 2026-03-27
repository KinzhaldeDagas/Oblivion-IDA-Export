BSFaceGenMorphDataHair *__thiscall BSFaceGenMorphDataHair::BSFaceGenMorphDataHair(BSFaceGenMorphDataHair *this, int a2)
{
  unsigned int v3; // ebp
  int v5; // eax
  int v6; // eax
  char *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  unsigned int v12; // edi
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // edi
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // edi
  int v24; // eax
  int v25; // edi
  int v26; // eax
  int v27; // edi
  float v28; // edx
  double v29; // st7
  int v31; // [esp+14h] [ebp-2Ch]
  int v32; // [esp+18h] [ebp-28h]
  int v33; // [esp+1Ch] [ebp-24h]
  float v35; // [esp+30h] [ebp-10h]
  unsigned int v36; // [esp+44h] [ebp+4h]

  v3 = 0;
  *(_DWORD *)this = &NiRefObject::`vftable';
  *((_DWORD *)this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *(_DWORD *)this = &BSFaceGenMorphDataHair::`vftable';
  *((_DWORD *)this + 2) = 0;
  if ( !a2 )
    return this;
  v5 = *(_DWORD *)(a2 + 0x84);
  if ( !v5 || !((*(_DWORD *)(a2 + 0x88) - v5) / 0x2C) )
    _invalid_parameter_noinfo();
  v6 = *(_DWORD *)(a2 + 0x84);
  v7 = *(_DWORD *)(v6 + 0x18) < 0x10u ? (char *)(v6 + 4) : *(char **)(v6 + 4);
  if ( _strcmp("HairMorph", v7) )
    return this;
  v8 = *(_DWORD *)(a2 + 0x84);
  if ( !v8 || !((*(_DWORD *)(a2 + 0x88) - v8) / 0x2C) )
    _invalid_parameter_noinfo();
  v9 = *(_DWORD *)(a2 + 0x84);
  v10 = *(_DWORD *)(v9 + 0x20);
  v11 = v9 + 0x1C;
  if ( v10 )
  {
    v36 = (*(_DWORD *)(v11 + 8) - v10) / 0xC;
    v12 = v36;
  }
  else
  {
    v12 = 0;
    v36 = 0;
  }
  v13 = (_DWORD *)FormHeapAlloc(0xCu);
  v14 = v13 ? sub_55A0C0(v13, v12) : 0;
  *((_DWORD *)this + 2) = v14;
  v33 = v14[1];
  if ( !v12 )
    return this;
  v15 = 0;
  do
  {
    v16 = *(_DWORD *)(a2 + 0x84);
    if ( !v16 || !((*(_DWORD *)(a2 + 0x88) - v16) / 0x2C) )
      _invalid_parameter_noinfo();
    v17 = *(_DWORD *)(a2 + 0x84);
    v18 = *(_DWORD *)(v17 + 0x20);
    v19 = v17 + 0x1C;
    if ( !v18 || v3 >= (*(_DWORD *)(v19 + 8) - v18) / 0xC )
      _invalid_parameter_noinfo();
    v20 = *(_DWORD *)(a2 + 0x84);
    v32 = v15 + *(_DWORD *)(v19 + 4);
    if ( !v20 || !((*(_DWORD *)(a2 + 0x88) - v20) / 0x2C) )
      _invalid_parameter_noinfo();
    v21 = *(_DWORD *)(a2 + 0x84);
    v22 = *(_DWORD *)(v21 + 0x20);
    v23 = v21 + 0x1C;
    if ( !v22 || v3 >= (*(_DWORD *)(v23 + 8) - v22) / 0xC )
      _invalid_parameter_noinfo();
    v24 = *(_DWORD *)(a2 + 0x84);
    v31 = v15 + *(_DWORD *)(v23 + 4);
    if ( !v24 || !((*(_DWORD *)(a2 + 0x88) - v24) / 0x2C) )
      _invalid_parameter_noinfo();
    v25 = *(_DWORD *)(a2 + 0x84);
    v26 = *(_DWORD *)(v25 + 0x20);
    v27 = v25 + 0x1C;
    if ( !v26 || v3 >= (*(_DWORD *)(v27 + 8) - v26) / 0xC )
      _invalid_parameter_noinfo();
    v28 = *(float *)(v31 + 4);
    v29 = *(float *)(v32 + 8);
    *(float *)(v15 + v33) = *(float *)(v15 + *(_DWORD *)(v27 + 4));
    v35 = v29;
    *(float *)(v15 + v33 + 4) = v28;
    *(float *)(v15 + v33 + 8) = v35;
    ++v3;
    v15 += 0xC;
  }
  while ( v3 < v36 );
  return this;
}
