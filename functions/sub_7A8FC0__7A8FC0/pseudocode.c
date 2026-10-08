// OBLIVION AUTHORITY (2026-08-24): Builds a lower explicit leaf LOD from selected source-leaf pairs. Clones the first leaf, averages pair positions, decodes and averages their packed RGB, then calls CBillboardLeaf::SetColor with applyDimming=false. This avoids applying colorScaleByte a second time.
OB_stVectorBillboardLeafPtr_010201A0 *__thiscall OB_CLeafLodEngine_BuildNewLeaves_010201A0(
        OB_CLeafLodEngine_010201A0 *this,
        OB_stVectorBillboardLeafPtr_010201A0 *result)
{
  OB_stVectorBillboardLeafPtr_010201A0 *v3; // ebx
  OB_CLeafLodEngine_SLodEntry_010201A0 *begin; // edi
  bool v5; // cc
  float *end; // esi
  OB_CBillboardLeaf_010201A0 *v7; // eax
  bool v8; // cf
  float *p_x; // esi
  float *v10; // eax
  double v11; // st7
  const OB_SIdvLeafInfo_010201A0 *m_pLeafInfoRef; // ebx
  OB_SIdvLeafTexture_010201A0 *v13; // eax
  int p_leafTextures; // ebx
  unsigned int v15; // esi
  int v16; // esi
  OB_CBillboardLeaf_010201A0 *v17; // ebx
  float v18; // edx
  double v19; // st6
  double v20; // st5
  OB_stVec3_010201A0 *Color_010201A0; // eax
  double v22; // rt1
  OB_CBillboardLeaf_010201A0 *v24; // [esp+1Ch] [ebp-60h] BYREF
  int v25; // [esp+20h] [ebp-5Ch]
  float v26; // [esp+24h] [ebp-58h]
  float v27; // [esp+28h] [ebp-54h]
  float v28; // [esp+2Ch] [ebp-50h]
  float v29; // [esp+30h] [ebp-4Ch]
  float v30; // [esp+34h] [ebp-48h]
  float v31; // [esp+38h] [ebp-44h]
  float v32; // [esp+3Ch] [ebp-40h]
  float v33; // [esp+40h] [ebp-3Ch]
  float v34; // [esp+44h] [ebp-38h]
  float v35; // [esp+48h] [ebp-34h]
  OB_stVec3_010201A0 rgb; // [esp+4Ch] [ebp-30h] BYREF
  OB_stVec3_010201A0 outRgb; // [esp+58h] [ebp-24h] BYREF
  OB_stVec3_010201A0 outColor; // [esp+64h] [ebp-18h] BYREF
  int v39; // [esp+78h] [ebp-4h]

  v25 = 0; /*0x7a8feb*/
  if ( (unk_B42CA4 & 1) == 0 ) /*0x7a8ffb*/
  {
    unk_B42CA4 |= 1u; /*0x7a8ffd*/
    v39 = 1; /*0x7a9008*/
    OB_stRandom_ctor_010201A0(&stru_B42CA0); /*0x7a900c*/
    atexit(sub_A27070); /*0x7a9016*/
  }
  v3 = result; /*0x7a901e*/
  result->begin = 0; /*0x7a9022*/
  result->end = 0; /*0x7a9025*/
  result->capacityEnd = 0; /*0x7a9028*/
  v25 = 1; /*0x7a902b*/
  begin = this->m_vPairs.begin; /*0x7a902f*/
  v5 = begin <= this->m_vPairs.end; /*0x7a9032*/
  v39 = 0; /*0x7a9035*/
  if ( !v5 ) /*0x7a9039*/
    _invalid_parameter_noinfo((int)result, (int)begin, 0); /*0x7a903b*/
  while ( 1 ) /*0x7a9040*/
  {
    end = (float *)this->m_vPairs.end; /*0x7a9040*/
    if ( this->m_vPairs.begin > (OB_CLeafLodEngine_SLodEntry_010201A0 *)end ) /*0x7a9046*/
      _invalid_parameter_noinfo((int)v3, (int)begin, (int)end); /*0x7a9048*/
    if ( begin == (OB_CLeafLodEngine_SLodEntry_010201A0 *)end ) /*0x7a904f*/
      break; /*0x7a904f*/
    if ( (double)this->m_fLeafReductionPercentage < OB_stRandom_GetUniform_010201A0(&stru_B42CA0, 0.0, 1.0) )// BuildNewLeaves emits this pair only when randomUniform(0,1) > leafReductionPercentage; retention/removal is independent of texture index and color. /*0x7a9077*/
    {
      if ( begin >= this->m_vPairs.end ) /*0x7a9080*/
        _invalid_parameter_noinfo((int)v3, (int)begin, (int)end); /*0x7a9082*/
      v7 = OB_CBillboardLeaf_Clone_010201A0(begin->m_pLeaf);// For each retained pair, clones the primary/first leaf. Full copy preserves its raw textureIndexByte (including mirror bit), colorScaleByte, normal, wind, and other metadata; the match's identity fields are not adopted. /*0x7a9089*/
      v8 = begin < this->m_vPairs.end; /*0x7a908e*/
      v24 = v7; /*0x7a9091*/
      if ( !v8 ) /*0x7a9095*/
        _invalid_parameter_noinfo((int)v3, (int)begin, (int)end); /*0x7a9097*/
      p_x = &begin->m_pLeafMatch->position.x; /*0x7a909f*/
      if ( begin >= this->m_vPairs.end ) /*0x7a90a5*/
        _invalid_parameter_noinfo((int)v3, (int)begin, (int)p_x); /*0x7a90a7*/
      v10 = &begin->m_pLeaf->position.x; /*0x7a90b3*/
      v8 = begin < this->m_vPairs.end; /*0x7a90b6*/
      v30 = *p_x + *v10; /*0x7a90b9*/
      v31 = p_x[1] + v10[1]; /*0x7a90c3*/
      v32 = p_x[2] + v10[2]; /*0x7a90cd*/
      v11 = dbl_A2FAA0; /*0x7a90dd*/
      v27 = v30 * v11; /*0x7a90df*/
      v28 = v31 * v11; /*0x7a90e9*/
      v29 = v32 * v11; /*0x7a90f3*/
      if ( !v8 ) /*0x7a90f7*/
      {
        _invalid_parameter_noinfo((int)v3, (int)begin, (int)p_x); /*0x7a90fb*/
        v11 = dbl_A2FAA0; /*0x7a9100*/
      }
      m_pLeafInfoRef = this->m_pLeafInfoRef; /*0x7a910c*/
      v13 = m_pLeafInfoRef->leafTextures.begin; /*0x7a910f*/
      p_leafTextures = (int)&m_pLeafInfoRef->leafTextures; /*0x7a9112*/
      v15 = begin->m_pLeaf->textureIndexByte >> 1;// Uses only the cloned primary leaf's raw textureIndexByte>>1 to select SIdvLeafTexture origin/size for position adjustment. The matching leaf's texture record is ignored. /*0x7a9115*/
      if ( !v13 || v15 >= (*(_DWORD *)(p_leafTextures + 8) - (int)v13) / 0x54 ) /*0x7a9133*/
      {
        _invalid_parameter_noinfo(p_leafTextures, (int)begin, v15); /*0x7a9137*/
        v11 = dbl_A2FAA0; /*0x7a913c*/
      }
      v16 = *(_DWORD *)(p_leafTextures + 4) + 0x54 * v15; /*0x7a9145*/
      v17 = v24; /*0x7a9148*/
      v18 = v28; /*0x7a9150*/
      v19 = *(float *)(v16 + 0x4C) * this->m_fLeafSizeIncreaseFactor * v11; /*0x7a915a*/
      v20 = *(float *)(v16 + 0x34); /*0x7a915c*/
      v24->position.x = v27; /*0x7a915f*/
      v17->position.y = v18; /*0x7a9164*/
      v26 = (v20 - v11) * v19; /*0x7a9169*/
      v29 = v26 + v29; /*0x7a9175*/
      v17->position.z = v29; /*0x7a917d*/
      if ( begin >= this->m_vPairs.end ) /*0x7a9183*/
      {
        _invalid_parameter_noinfo((int)v17, (int)begin, v16); /*0x7a9185*/
        if ( begin >= this->m_vPairs.end ) /*0x7a918d*/
          _invalid_parameter_noinfo((int)v17, (int)begin, v16); /*0x7a918f*/
      }
      end = (float *)OB_CBillboardLeaf_GetColor_010201A0(begin->m_pLeafMatch, &outRgb);// OBLIVION AUTHORITY (2026-08-24): Preserve pointer returned by first GetColor call; the actual second GetColor call follows at 0x7A91AA. /*0x7a91a8*/
      Color_010201A0 = OB_CBillboardLeaf_GetColor_010201A0(begin->m_pLeaf, &outColor);// OBLIVION AUTHORITY (2026-08-24): Second GetColor call decodes the first source leaf; 0x7A91AF..0x7A91F4 averages all three channels by exact 0.5 before SetColor(false). /*0x7a91aa*/
      v33 = Color_010201A0->x + *end; /*0x7a91b7*/
      v34 = end[1] + Color_010201A0->y; /*0x7a91c1*/
      v35 = end[2] + Color_010201A0->z; /*0x7a91d0*/
      v22 = dbl_A2FAA0; /*0x7a91e0*/
      rgb.x = v33 * v22; /*0x7a91e2*/
      rgb.y = v34 * v22; /*0x7a91ec*/
      rgb.z = v22 * v35; /*0x7a91f4*/
      OB_CBillboardLeaf_SetColor_010201A0(v17, &rgb, 0);// Averages the two already-packed RGB colors by exact 0.5 and calls SetColor(...,false), so colorScaleByte is not reapplied. Per channel the result is floor((byteA+byteB)/2). A cross-texture pair therefore mixes colors while retaining the primary leaf's texture/card identity. /*0x7a91f8*/
      OB_stVector4_PushBack_010201A0(&result->allocatorState, &v24); /*0x7a9206*/
      v3 = result; /*0x7a920b*/
    }
    if ( begin >= this->m_vPairs.end ) /*0x7a9212*/
      _invalid_parameter_noinfo((int)v3, (int)begin, (int)end); /*0x7a9214*/
    ++begin; /*0x7a9219*/
  }
  return v3; /*0x7a9223*/
}
