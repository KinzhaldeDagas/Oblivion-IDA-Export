//
// [Palmetto v136 2026-10-06] v135 runtime reports repeated nonfinite generated orientation, preparedPoses0, and all Palmetto attachments reconstructedPoses=meshCount. Old plugin checked9 floats N/T/B although only N is consumed. Native791DCA..791DE4 computes cross(N,N)=0, then791DE8 calls78ED70, whose1/sqrt(dot) has no zero guard; unused binormal can be NaN. v136 reads/validates only normal+1C..24 and rebuilds T/B. It retains finite/nonzero-normal rejection and validates the resulting frame. NaN-unused-binormal regression and independent review pass; live appearance UNVERIFIED.
void __thiscall OB_CBranch_MakeLeaf_010201A0(
        OB_CBranch_010201A0 *this,
        const OB_stVec3_010201A0 *position,
        float percentAlongParent,
        const OB_CBranch_010201A0 *parentBranch,
        const OB_stVec3_010201A0 *normal,
        const OB_stVec3_010201A0 *parentDirection,
        float primaryWindWeight,
        int primaryWindGroup,
        OB_stVectorBillboardLeafPtr_010201A0 *leaves)
{
  int v9; // ebx
  int v11; // eax
  _BYTE *v12; // ecx
  unsigned int v13; // edi
  _BYTE *v14; // eax
  double v15; // st7
  int v16; // ebx
  unsigned int v17; // eax
  _DWORD *v18; // esi
  unsigned int v19; // edi
  unsigned int v20; // ecx
  unsigned int v21; // ebx
  _BYTE *v22; // ecx
  OB_stVectorBillboardLeafPtr_010201A0 *v23; // ebp
  char v24; // al
  bool v25; // zf
  int v26; // ecx
  OB_CBranch_010201A0 *v27; // edi
  double v28; // st7
  __int16 v29; // ax
  OB_CBillboardLeaf_010201A0 *v30; // esi
  unsigned int v31; // eax
  OB_stVec3_010201A0 *v32; // ecx
  float *v33; // edi
  const OB_stVec3_010201A0 *v34; // eax
  float x; // ecx
  float y; // edx
  float z; // eax
  double v38; // st7
  float v39; // eax
  double v40; // st5
  float v41; // ecx
  float v42; // edx
  double v43; // st6
  float v44; // edx
  float v45; // eax
  double v46; // st7
  int v47; // [esp+4h] [ebp-64h]
  float primaryWindWeighta; // [esp+8h] [ebp-60h]
  float primaryWindWeightb; // [esp+8h] [ebp-60h]
  int v50; // [esp+Ch] [ebp-5Ch]
  unsigned __int16 v51; // [esp+26h] [ebp-42h]
  __int64 v52; // [esp+2Ch] [ebp-3Ch] BYREF
  float v53; // [esp+34h] [ebp-34h]
  float v54; // [esp+38h] [ebp-30h] BYREF
  float v55; // [esp+3Ch] [ebp-2Ch]
  float v56; // [esp+40h] [ebp-28h]
  OB_stVec3_010201A0 rgb; // [esp+44h] [ebp-24h] BYREF
  float v58[3]; // [esp+50h] [ebp-18h] BYREF
  unsigned int v59; // [esp+64h] [ebp-4h]
  float percentAlongParenta; // [esp+70h] [ebp+8h]
  float percentAlongParentb; // [esp+70h] [ebp+8h]

  v11 = *(_DWORD *)(unk_B429B8 + 0x14); /*0x791a03*/
  if ( v11 && (*(_DWORD *)(unk_B429B8 + 0x18) - v11) / 0x54 ) /*0x791a22*/
  {
    if ( MEMORY[0xB429F0] /*0x791a57*/
      && ((_BYTE *)MEMORY[0xB429F4] - (_BYTE *)MEMORY[0xB429F0]) >> 2
      && OB_CBranch_CheckBlossomRoom_010201A0((int)parentBranch, percentAlongParent) )
    {
      v12 = MEMORY[0xB429F0]; /*0x791a64*/
      v13 = 0; /*0x791a6a*/
      if ( !MEMORY[0xB429F0] ) /*0x791a64*/
        goto LABEL_11; /*0x791a64*/
      v14 = MEMORY[0xB429F4]; /*0x791a70*/
      this = (OB_CBranch_010201A0 *)(((_BYTE *)MEMORY[0xB429F4] - v12) >> 2); /*0x791a79*/
      if ( (unsigned int)this > 1 ) /*0x791a7f*/
      {
        v15 = OB_stRandom_GetUniform_010201A0(0.0, flt_A3F3D8); /*0x791a98*/
        LODWORD(v52) = v51 | 0xC00; /*0x791aad*/
        v12 = MEMORY[0xB429F0]; /*0x791ab1*/
        v52 = (__int64)v15; /*0x791abb*/
        v14 = MEMORY[0xB429F4]; /*0x791ac9*/
        v13 = (unsigned int)(__int64)v15 % (unsigned int)this; /*0x791ace*/
      }
      if ( !v12 || v13 >= (v14 - v12) >> 2 ) /*0x791adb*/
      {
LABEL_11:
        _invalid_parameter_noinfo(v9, v13, (int)this); /*0x791add*/
        v12 = MEMORY[0xB429F0]; /*0x791ae2*/
      }
      v16 = *(_DWORD *)&v12[4 * v13]; /*0x791ae8*/
    }
    else
    {
      if ( !MEMORY[0xB429D0] ) /*0x791af8*/
        return; /*0x791af8*/
      v17 = ((_BYTE *)MEMORY[0xB429D4] - (_BYTE *)MEMORY[0xB429D0]) >> 2; /*0x791b05*/
      if ( v17 <= 1 ) /*0x791b0b*/
      {
        if ( !v17 ) /*0x791b97*/
          return; /*0x791b97*/
        v16 = *(_DWORD *)sub_54F7A0(&stru_B429CC, 0); /*0x791ba9*/
      }
      else
      {
        *(float *)&v52 = OB_stRandom_GetUniform_010201A0(0.0, flt_A8C690); /*0x791b2d*/
        v18 = MEMORY[0xB429D0]; /*0x791b31*/
        v19 = (unsigned int)MEMORY[0xB429D4]; /*0x791b39*/
        if ( MEMORY[0xB429D0] ) /*0x791b31*/
          v20 = (int)(v19 - (_DWORD)v18) >> 2; /*0x791b49*/
        else
          v20 = 0; /*0x791b41*/
        v52 = (__int64)*(float *)&v52; /*0x791b68*/
        v21 = (unsigned int)v52 % v20; /*0x791b78*/
        if ( !v18 || (v19 = (int)(v19 - (_DWORD)v18) >> 2, v21 >= v19) ) /*0x791b83*/
        {
          _invalid_parameter_noinfo(v21, v19, (int)v18); /*0x791b85*/
          v18 = MEMORY[0xB429D0]; /*0x791b8a*/
        }
        v16 = v18[v21]; /*0x791b90*/
      }
    }
    v22 = (_BYTE *)unk_B429B8; /*0x791bab*/
    v23 = leaves; /*0x791bb7*/
    if ( *(_DWORD *)(unk_B429B8 + 0xC) == 1 ) /*0x791bbf*/
    {
      v24 = OB_CBranch_CheckLeafRoom_010201A0(&position->x, v16 / 2, &stru_B429FC); /*0x791bdb*/
    }
    else
    {
      if ( *(_DWORD *)(unk_B429B8 + 0xC) != 2 ) /*0x791bc4*/
      {
LABEL_30:
        v25 = *v22 == 0; /*0x791bee*/
        *(float *)&leaves = 1.0; /*0x791bf3*/
        if ( !v25 ) /*0x791bf7*/
        {
          *(float *)&parentBranch = OB_CBranch_AccumulateLeafDimmingPercent_010201A0(parentBranch);// Calls Oblivion full-chain accumulator A(parentBranch); full-chain complement interpolation is authoritative and differs from supplied RT4.1 source. /*0x791c03*/
          *(float *)&parentBranch = *(float *)&parentBranch + (1.0 - *(float *)&parentBranch) * percentAlongParent;// q = A(parentBranch) + (1 - A(parentBranch)) * percentAlongParent. /*0x791c22*/
          *(float *)&parentBranch = *(float *)&parentBranch * (*(float *)&parentBranch * *(float *)&parentBranch);// Cubes the hierarchical percent: q3 = q*q*q. /*0x791c30*/
          percentAlongParenta = 1.0 - *(float *)(v26 + 4);// Reads OB_SIdvLeafInfo_010201A0::dimmingScalar at leafInfo+4. Final float scale is 1-dimmingScalar+dimmingScalar*q3. /*0x791c39*/
          *(float *)&leaves = (1.0 - *(float *)&parentBranch) * percentAlongParenta + *(float *)&parentBranch;// Final generated-leaf scale = q3 + (1-q3)*(1-s) = 1-s+s*q3. /*0x791c4f*/
        }
        *(float *)&v27 = COERCE_FLOAT(FormHeapAlloc(0x4Cu)); /*0x791c5a*/
        parentBranch = v27; /*0x791c5f*/
        v59 = 0; /*0x791c65*/
        if ( *(float *)&v27 == 0.0 ) /*0x791c6d*/
        {
          *(float *)&v30 = 0.0; /*0x791cc7*/
        }
        else
        {
          v50 = primaryWindGroup; /*0x791c77*/
          primaryWindWeighta = primaryWindWeight; /*0x791c7b*/
          v28 = OB_stRandom_GetUniform_010201A0(0.0, flt_A5A04C); /*0x791c93*/
          v47 = Double_To_SInt32(v28) % *(_DWORD *)(unk_B429B8 + 0x38); /*0x791cb4*/
          v29 = Double_To_SInt32(*(float *)&leaves * dbl_A3DDD8);// Converts scale*255 with truncation toward zero; constructor stores the low byte as CBillboardLeaf::colorScaleByte at +0x18. /*0x791cb5*/
          *(float *)&v30 = COERCE_FLOAT( /*0x791cc3*/
                             OB_CBillboardLeaf_ctor_args_010201A0(
                               (OB_CBillboardLeaf_010201A0 *)v27,
                               position,
                               v29,
                               v47,
                               primaryWindWeighta,
                               v50));
        }
        v59 = 0xFFFFFFFF; /*0x791cd0*/
        parentBranch = (const OB_CBranch_010201A0 *)v30; /*0x791cd8*/
        OB_stVector4_PushBack_010201A0(&v23->allocatorState, &parentBranch); /*0x791cdc*/
        if ( *(_DWORD *)(unk_B429B8 + 0xC) == 1 ) /*0x791cea*/
          OB_stVector4_PushBack_010201A0(&stru_B429FC, &parentBranch); /*0x791cf6*/
        v31 = OB_stVectorLeafTexture_At_010201A0((_DWORD *)(unk_B429B8 + 0x10), v16 / 2);// SpeedTree CBillboardLeaf raw alternate index is texture*2+mirror. Divide by two before indexing compact SIdvLeafTexture or leaf map-bank collections. /*0x791d0c*/
        v32 = (OB_stVec3_010201A0 *)normal; /*0x791d11*/
        v30->textureIndexByte = v16;            // Stores raw alternate texture index (texture*2 + mirror) in CBillboardLeaf+0x40; this byte is not a zero-based map-bank collection index. /*0x791d15*/
        v33 = (float *)v31; /*0x791d1d*/
        *(float *)&parentBranch = v32->y * v32->y + v32->x * v32->x + v32->z * v32->z; /*0x791d32*/
        parentBranch = (const OB_CBranch_010201A0 *)(((int)parentBranch >> 1) + 0x1FC00000); /*0x791d42*/
        if ( *(float *)&parentBranch >= dbl_A68618 ) /*0x791d55*/
          v34 = (const OB_stVec3_010201A0 *)OB_stVec3_Interpolate_010201A0( /*0x791d6f*/
                                              v58,
                                              &parentDirection->x,
                                              &v32->x,
                                              *(float *)(v31 + 0x10));
        else
          v34 = parentDirection; /*0x791d57*/
        x = v34->x; /*0x791d77*/
        y = v34->y; /*0x791d79*/
        z = v34->z; /*0x791d7c*/
        v52 = __PAIR64__(LODWORD(y), LODWORD(x)); /*0x791d7f*/
        v53 = z; /*0x791d87*/
        OB_NormalizeVec3_010201A0((float *)&v52); /*0x791d8f*/
        v38 = *((float *)&v52 + 1); /*0x791d94*/
        v39 = *(float *)&v52; /*0x791d9a*/
        v40 = v53; /*0x791d9e*/
        v41 = *((float *)&v52 + 1); /*0x791da2*/
        v42 = v53; /*0x791da8*/
        v43 = *((float *)&v52 + 1) * v53; /*0x791dac*/
        LODWORD(v30->normal.x) = v52; /*0x791dae*/
        v30->normal.y = v41; /*0x791db1*/
        v30->normal.z = v42; /*0x791db4*/
        v30->tangent.x = v39; /*0x791db9*/
        v30->tangent.y = v41; /*0x791dbe*/
        v30->tangent.z = v42; /*0x791dc7*/
        v54 = v43 - v43; /*0x791dca*/
        v55 = v40 * *(float *)&v52 - v40 * *(float *)&v52; /*0x791ddc*/
        v56 = v38 * *(float *)&v52 - v38 * *(float *)&v52; /*0x791de4*/
        OB_NormalizeVec3_010201A0(&v54); /*0x791de8*/
        v44 = v55; /*0x791df1*/
        v45 = v56; /*0x791df5*/
        v30->binormal.x = v54; /*0x791df9*/
        v30->binormal.y = v44; /*0x791dfc*/
        v30->binormal.z = v45; /*0x791dff*/
        primaryWindWeightb = -v33[4]; /*0x791e16*/
        *(float *)&parentBranch = OB_stRandom_GetUniform_010201A0(primaryWindWeightb, v33[4]); /*0x791e1e*/
        v46 = *(float *)&parentBranch; /*0x791e36*/
        *(float *)&parentBranch = v33[2] + *(float *)&parentBranch; /*0x791e38*/
        percentAlongParentb = v33[3] + v46; /*0x791e41*/
        rgb.x = v46 + v33[1]; /*0x791e48*/
        rgb.y = *(float *)&parentBranch; /*0x791e50*/
        rgb.z = percentAlongParentb; /*0x791e58*/
        OB_CBillboardLeaf_SetColor_010201A0(v30, &rgb, 1);// OBLIVION AUTHORITY (2026-08-24): Interior callsite, not the function entry. Calls CBillboardLeaf::SetColor(newLeaf, generatedRgb, true), applying CBillboardLeaf+0x18 colorScaleByte once when generating LOD0 leaves. /*0x791e5c*/
        return; /*0x791e5c*/
      }
      v24 = OB_CBranch_CheckLeafRoom_010201A0(&position->x, v16 / 2, leaves); /*0x791bc7*/
    }
    if ( !v24 ) /*0x791be2*/
      return; /*0x791be2*/
    v22 = (_BYTE *)unk_B429B8; /*0x791be8*/
    goto LABEL_30; /*0x791be8*/
  }
}
