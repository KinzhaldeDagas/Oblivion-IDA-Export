// SpeedTree decode: stock CFrondEngine::EndGuide. Computes guide length from vertex positions, selects frond texture/aspect/size/angle, writes map index/radius/offset, and stores surface area as lodSizeScalar * length.
void __thiscall OB_CFrondEngine_EndGuide_010201A0(OB_CFrondEngine_010201A0 *this, float lodSizeScalar)
{
  void *begin; // eax
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // esi
  void *v7; // eax
  const OB_stVector16_010201A0 *v8; // esi
  void *v9; // eax
  char *v10; // ebp
  char *v11; // eax
  double v12; // st7
  float *v13; // eax
  float v14; // ecx
  double v15; // st4
  double v16; // st6
  double v17; // st7
  void *v18; // eax
  void *v19; // eax
  void *v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // edx
  void *v23; // eax
  int v24; // ebx
  double v25; // st7
  unsigned int end_low; // ebx
  void *v27; // eax
  double v28; // st7
  unsigned int v29; // ebx
  void *v30; // eax
  char *v31; // eax
  float *v32; // ebp
  unsigned int v33; // ebx
  double v34; // st7
  void *v35; // eax
  double v36; // st7
  OB_stRandom_010201A0 v37; // [esp+1Fh] [ebp-19h] BYREF
  float v38; // [esp+20h] [ebp-18h]
  __int64 Uniform_010201A0; // [esp+24h] [ebp-14h]
  unsigned int v40; // [esp+34h] [ebp-4h]

  begin = this->guideVectorWrapper.begin; /*0x79a029*/
  v4 = 0; /*0x79a02c*/
  if ( begin ) /*0x79a030*/
    v5 = ((char *)this->guideVectorWrapper.end - (char *)begin) / 0x30; /*0x79a04a*/
  else
    v5 = 0; /*0x79a032*/
  v6 = v5 - 1; /*0x79a04c*/
  v7 = this->guideVectorWrapper.begin; /*0x79a04f*/
  if ( !v7 || v6 >= ((char *)this->guideVectorWrapper.end - (char *)v7) / 0x30 ) /*0x79a06e*/
    _invalid_parameter_noinfo(0, (int)this, v6); /*0x79a070*/
  v8 = (const OB_stVector16_010201A0 *)((char *)this->guideVectorWrapper.begin + 0x30 * v6); /*0x79a07b*/
  if ( OB_stVector_SFrondVertex_Size_010201A0(v8) != 1 ) /*0x79a088*/
  {
    v38 = 0.0; /*0x79a08e*/
    do /*0x79a147*/
    {
      v9 = v8->begin; /*0x79a092*/
      if ( !v9 || v4 + 1 >= ((char *)v8->end - (char *)v9) / 0x38 ) /*0x79a0b6*/
        _invalid_parameter_noinfo(v4, (int)this, (int)v8); /*0x79a0b8*/
      v10 = (char *)v8->begin; /*0x79a0bd*/
      if ( !v10 || v4 >= ((char *)v8->end - (char *)v10) / 0x38 ) /*0x79a0de*/
        _invalid_parameter_noinfo(v4, (int)this, (int)v8); /*0x79a0e0*/
      v11 = (char *)v8->begin; /*0x79a0ed*/
      v12 = *(float *)&v10[LODWORD(v38) + 0x3C] - *(float *)&v11[LODWORD(v38) + 4]; /*0x79a0f0*/
      v13 = (float *)&v11[LODWORD(v38)]; /*0x79a0f4*/
      LODWORD(v14) = LODWORD(v38) + 0x38; /*0x79a0fa*/
      ++v4; /*0x79a0ff*/
      v15 = *(float *)&v10[LODWORD(v38) + 0x38] - *v13; /*0x79a109*/
      v16 = *(float *)&v10[LODWORD(v38) + 0x40] - v13[2]; /*0x79a111*/
      v38 = v12 * v12 + v15 * v15 + v16 * v16; /*0x79a119*/
      v17 = COERCE_FLOAT((SLODWORD(v38) >> 1) + 0x1FC00000); /*0x79a12d*/
      v38 = v14; /*0x79a131*/
      *(float *)&v8[1].allocatorState = v17 + *(float *)&v8[1].allocatorState; /*0x79a13a*/
    }
    while ( v4 < OB_stVector_SFrondVertex_Size_010201A0(v8) - 1 ); /*0x79a147*/
  }
  OB_stRandom_ctor_010201A0(&v37); /*0x79a151*/
  v18 = this->frondTextureVectorWrapper.begin;  // CFrondEngine::EndGuide reads the decoded SFrondTexture vector at +0x40; each 0x2C-byte entry supplies aspect ratio, size scale, and angle-offset limits for the chosen map index. /*0x79a156*/
  v40 = 0; /*0x79a15b*/
  if ( v18 && ((char *)this->frondTextureVectorWrapper.end - (char *)v18) / 0x2C ) /*0x79a179*/
  {
    v20 = this->frondTextureVectorWrapper.begin; /*0x79a1c7*/
    if ( v20 ) /*0x79a1cc*/
      v21 = ((char *)this->frondTextureVectorWrapper.end - (char *)v20) / 0x2C; /*0x79a1e6*/
    else
      v21 = 0; /*0x79a1ce*/
    Uniform_010201A0 = (__int64)OB_stRandom_GetUniform_010201A0(&v37, 0.0, flt_A3F3D8); /*0x79a21b*/
    v22 = (unsigned int)Uniform_010201A0 % v21; /*0x79a223*/
    LOBYTE(v8[1].end) = (unsigned int)Uniform_010201A0 % v21; /*0x79a229*/
    v23 = this->frondTextureVectorWrapper.begin; /*0x79a22c*/
    v24 = (unsigned __int8)v22; /*0x79a231*/
    if ( !v23 /*0x79a24e*/
      || (unsigned __int8)v22 >= (unsigned int)(((char *)this->frondTextureVectorWrapper.end - (char *)v23) / 0x2C) )
    {
      _invalid_parameter_noinfo((unsigned __int8)v22, (int)this, (int)v8); /*0x79a250*/
    }
    v25 = *((float *)this->frondTextureVectorWrapper.begin + 0xB * v24 + 7); /*0x79a25b*/
    end_low = LOBYTE(v8[1].end); /*0x79a25f*/
    *(float *)&v8[1].begin = v25 * *(float *)&v8[1].allocatorState * dbl_A2FAA0; /*0x79a26c*/
    v27 = this->frondTextureVectorWrapper.begin; /*0x79a26f*/
    if ( !v27 || end_low >= ((char *)this->frondTextureVectorWrapper.end - (char *)v27) / 0x2C ) /*0x79a28e*/
      _invalid_parameter_noinfo(end_low, (int)this, (int)v8); /*0x79a290*/
    v28 = *((float *)this->frondTextureVectorWrapper.begin + 0xB * end_low + 8); /*0x79a29b*/
    v29 = LOBYTE(v8[1].end); /*0x79a29f*/
    *(float *)&v8[1].begin = v28 * *(float *)&v8[1].begin; /*0x79a2a6*/
    v30 = this->frondTextureVectorWrapper.begin; /*0x79a2a9*/
    if ( !v30 || v29 >= ((char *)this->frondTextureVectorWrapper.end - (char *)v30) / 0x2C ) /*0x79a2c8*/
      _invalid_parameter_noinfo(v29, (int)this, (int)v8); /*0x79a2ca*/
    v31 = (char *)this->frondTextureVectorWrapper.begin; /*0x79a2cf*/
    v32 = (float *)&v31[0x2C * v29]; /*0x79a2da*/
    v33 = LOBYTE(v8[1].end); /*0x79a2dc*/
    if ( !v31 || v33 >= ((char *)this->frondTextureVectorWrapper.end - (char *)v31) / 0x2C ) /*0x79a2fa*/
      _invalid_parameter_noinfo(v33, (int)this, (int)v8); /*0x79a2fc*/
    *(float *)&Uniform_010201A0 = OB_stRandom_GetUniform_010201A0( /*0x79a320*/
                                    &v37,
                                    *((float *)this->frondTextureVectorWrapper.begin + 0xB * v33 + 9),
                                    v32[0xA]);
    v34 = *(float *)&Uniform_010201A0; /*0x79a324*/
    v8[1].capacityEnd = (void *)Uniform_010201A0; /*0x79a328*/
    v35 = this->guideVectorWrapper.begin; /*0x79a32b*/
    if ( v35 ) /*0x79a330*/
      v35 = (void *)(((char *)this->guideVectorWrapper.end - (char *)v35) / 0x30); /*0x79a346*/
    if ( ((unsigned __int8)v35 & 1) != 0 ) /*0x79a34a*/
      *(float *)&v8[1].capacityEnd = v34 * dbl_A3D360; /*0x79a352*/
  }
  else
  {
    v19 = this->guideVectorWrapper.begin; /*0x79a17d*/
    if ( !v19 || v4 >= ((char *)this->guideVectorWrapper.end - (char *)v19) / 0x30 ) /*0x79a19c*/
      _invalid_parameter_noinfo(v4, (int)this, (int)v8); /*0x79a19e*/
    *((_BYTE *)this->guideVectorWrapper.begin + 0x30 * v4 + 0x18) = 0; /*0x79a1ac*/
    *(float *)&v8[1].begin = *(float *)&v8[1].allocatorState * dbl_A2FAA0; /*0x79a1ba*/
    *(float *)&v8[1].capacityEnd = 0.0; /*0x79a1bf*/
  }
  v36 = lodSizeScalar * *(float *)&v8[1].allocatorState; /*0x79a361*/
  v40 = 0xFFFFFFFF; /*0x79a364*/
  *(float *)&v8[2].allocatorState = v36; /*0x79a36c*/
  Shared_NoOpVirtual_60D0A0(&v37); /*0x79a36f*/
}
