// Oblivion CPU indexed-geometry wind pass: transforms each referenced original vertex through its primary matrix, blends by primary weight, and computes each vertex once.
bool __thiscall OB_CIndexedGeometry_ComputeWindEffect_010201A0(OB_CIndexedGeometry_010201A0 *this, __int16 lodLevel)
{
  bool result; // al
  void *begin; // eax
  unsigned int v5; // ecx
  int v6; // edi
  int v7; // eax
  unsigned int i; // ebp
  unsigned __int16 v9; // bx
  void *v10; // ecx
  int v11; // eax
  unsigned __int16 v12; // ax
  void *v13; // ecx
  int v14; // ecx
  void *v15; // ecx
  int v16; // ecx
  unsigned int v17; // ebx
  void *v18; // ecx
  void *v19; // eax
  float *v20; // edi
  void *v21; // ecx
  double v22; // st7
  OB_stTransform_010201A0 *v23; // eax
  double v24; // st7
  void *v25; // eax
  float *v26; // eax
  int j; // [esp+4h] [ebp-3Ch]
  unsigned int v28; // [esp+8h] [ebp-38h]
  float v29; // [esp+10h] [ebp-30h]
  float v30; // [esp+1Ch] [ebp-24h]
  float v31; // [esp+20h] [ebp-20h]
  float v32; // [esp+24h] [ebp-1Ch]
  float v33; // [esp+28h] [ebp-18h]
  float v34; // [esp+2Ch] [ebp-14h]
  float v35; // [esp+30h] [ebp-10h]
  float v36; // [esp+34h] [ebp-Ch]
  float v37; // [esp+38h] [ebp-8h]
  float v38; // [esp+3Ch] [ebp-4h]

  result = 0; /*0x794ae6*/
  if ( !this->valid ) /*0x794ae8*/
  {
    begin = this->vertexCoords.begin; /*0x794af1*/
    if ( begin ) /*0x794af6*/
      v5 = ((char *)this->vertexCoords.end - (char *)begin) >> 2; /*0x794b01*/
    else
      v5 = 0; /*0x794af8*/
    v6 = (unsigned __int16)(v5 / 3); /*0x794b14*/
    if ( !this->vertexWindComputed ) /*0x794b0f*/
      this->vertexWindComputed = (unsigned __int8 *)FormHeapAlloc((unsigned __int16)v6); /*0x794b25*/
    v7 = 0; /*0x794b2b*/
    if ( (_WORD)v6 ) /*0x794b2f*/
    {
      do /*0x794b3d*/
        this->vertexWindComputed[v7++] = 0; /*0x794b34*/
      while ( v7 < (unsigned __int16)v6 ); /*0x794b3d*/
    }
    for ( i = 0; ; ++i ) /*0x794b41*/
    {
      v9 = lodLevel; /*0x794b4f*/
      v28 = i; /*0x794b58*/
      if ( lodLevel <= (__int16)0xFFFFFFFF ) /*0x794b5c*/
        goto LABEL_16; /*0x794b5c*/
      v10 = this->perLodStrips.begin; /*0x794b5e*/
      if ( !v10 || lodLevel >= (unsigned int)(((char *)this->perLodStrips.end - (char *)v10) >> 4) ) /*0x794b72*/
        _invalid_parameter_noinfo(lodLevel, lodLevel, (int)this); /*0x794b74*/
      v6 = (int)this->perLodStrips.begin + 0x10 * lodLevel; /*0x794b7c*/
      v11 = *(_DWORD *)(v6 + 4); /*0x794b7f*/
      if ( v11 ) /*0x794b84*/
        v12 = (*(_DWORD *)(v6 + 8) - v11) >> 2; /*0x794b8e*/
      else
LABEL_16:
        v12 = 0; /*0x794b93*/
      if ( (int)i >= v12 ) /*0x794b9a*/
        break; /*0x794b9a*/
      for ( j = 0; ; ++j ) /*0x794ba0*/
      {
        v13 = this->perLodStripLengths.begin; /*0x794ba8*/
        if ( !v13 || v9 >= (unsigned int)(((char *)this->perLodStripLengths.end - (char *)v13) >> 4) ) /*0x794bbc*/
          _invalid_parameter_noinfo(v9, v6, (int)this); /*0x794bbe*/
        v6 = (int)this->perLodStripLengths.begin + 0x10 * v9; /*0x794bcb*/
        v14 = *(_DWORD *)(v6 + 4); /*0x794bce*/
        if ( !v14 || i >= (*(_DWORD *)(v6 + 8) - v14) >> 1 ) /*0x794bde*/
          _invalid_parameter_noinfo(v9, v6, (int)this); /*0x794be0*/
        if ( j >= *(unsigned __int16 *)(*(_DWORD *)(v6 + 4) + 2 * i) ) /*0x794bf0*/
          break; /*0x794bf0*/
        v15 = this->perLodStrips.begin; /*0x794bf6*/
        if ( !v15 || v9 >= (unsigned int)(((char *)this->perLodStrips.end - (char *)v15) >> 4) ) /*0x794c07*/
          _invalid_parameter_noinfo(v9, v6, (int)this); /*0x794c09*/
        v6 = (int)this->perLodStrips.begin + 0x10 * v9; /*0x794c13*/
        v16 = *(_DWORD *)(v6 + 4); /*0x794c16*/
        if ( !v16 || i >= (*(_DWORD *)(v6 + 8) - v16) >> 2 ) /*0x794c27*/
          _invalid_parameter_noinfo(v9, v6, (int)this); /*0x794c29*/
        v17 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * i) + 2 * j); /*0x794c3f*/
        if ( !this->vertexWindComputed[v17] ) /*0x794c42*/
        {
          v18 = this->primaryWindWeights.begin; /*0x794c4c*/
          if ( !v18 || v17 >= ((char *)this->primaryWindWeights.end - (char *)v18) >> 2 ) /*0x794c63*/
            _invalid_parameter_noinfo((unsigned __int16)v17, v6, (int)this); /*0x794c65*/
          v19 = this->originalVertexCoords.begin; /*0x794c73*/
          v29 = *((float *)this->primaryWindWeights.begin + v17); /*0x794c78*/
          if ( !v19 || !(((char *)this->originalVertexCoords.end - (char *)v19) >> 2) ) /*0x794c86*/
            _invalid_parameter_noinfo((unsigned __int16)v17, v6, (int)this); /*0x794c8b*/
          v20 = (float *)this->originalVertexCoords.begin; /*0x794c90*/
          v21 = this->primaryWindMatrixIndices.begin; /*0x794c93*/
          v22 = v20[3 * v17]; /*0x794ca0*/
          v6 = (int)&v20[3 * v17]; /*0x794ca3*/
          v33 = v22; /*0x794ca7*/
          v34 = *(float *)(v6 + 4); /*0x794cae*/
          v35 = *(float *)(v6 + 8); /*0x794cb5*/
          if ( !v21 || v17 >= (char *)this->primaryWindMatrixIndices.end - (char *)v21 ) /*0x794cc5*/
            _invalid_parameter_noinfo((unsigned __int16)v17, v6, (int)this); /*0x794cc7*/
          v23 = &CWindEngine__s_windMatrixContainer.matrices[*((unsigned __int8 *)this->primaryWindMatrixIndices.begin /*0x794cd9*/
                                                             + v17)];
          v36 = v23->m[8] * v35 + v23->m[0] * v33 + v23->m[4] * v34 + v23->m[0xC]; /*0x794d0a*/
          v37 = v23->m[5] * v34 + v23->m[1] * v33 + v23->m[9] * v35 + v23->m[0xD]; /*0x794d24*/
          v24 = v33 * v23->m[2] + v34 * v23->m[6] + v35 * v23->m[0xA] + v23->m[0xE]; /*0x794d3b*/
          v25 = this->vertexCoords.begin; /*0x794d3e*/
          v38 = v24; /*0x794d43*/
          v30 = *(float *)v6 + (v36 - *(float *)v6) * v29; /*0x794d73*/
          v31 = (v37 - *(float *)(v6 + 4)) * v29 + *(float *)(v6 + 4); /*0x794d89*/
          v32 = v29 * (v38 - *(float *)(v6 + 8)) + *(float *)(v6 + 8); /*0x794d9f*/
          if ( !v25 || !(((char *)this->vertexCoords.end - (char *)v25) >> 2) ) /*0x794daa*/
            _invalid_parameter_noinfo((unsigned __int16)v17, v6, (int)this); /*0x794daf*/
          v26 = (float *)((char *)this->vertexCoords.begin + 0xC * v17); /*0x794dbf*/
          i = v28; /*0x794dc1*/
          *v26 = v30; /*0x794dc5*/
          v26[1] = v31; /*0x794dcb*/
          v26[2] = v32; /*0x794dce*/
          this->vertexWindComputed[v17] = 1; /*0x794dd4*/
        }
        v9 = lodLevel; /*0x794ddd*/
      }
    }
    this->valid = 1; /*0x794df1*/
    return 1; /*0x794df5*/
  }
  return result; /*0x794df8*/
}
