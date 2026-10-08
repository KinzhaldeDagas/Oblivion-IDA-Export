// Oblivion leaf static lighting: one normal and one packed color per billboard leaf; the later four-corner SpeedTree path is not present.
void __thiscall OB_CLightingEngine_ComputeLeafStaticLighting_010201A0(
        OB_CLightingEngine_010201A0 *this,
        const OB_stVec3_010201A0 *treeCenter,
        OB_stVectorBillboardLeafPtr_010201A0 *leafLods,
        int numLeafLods)
{
  int lightIndex; // ebx
  unsigned int v5; // esi
  bool v6; // zf
  OB_CBillboardLeaf_010201A0 ***lodBeginSlot; // edi
  const OB_CBillboardLeaf_010201A0 **leafIt; // ebp
  bool v9; // cf
  float *v10; // edi
  double v11; // st7
  float *lightAttrY; // esi
  double v13; // st6
  OB_stVec3_010201A0 *v14; // eax
  float y; // edx
  float x; // ecx
  double v17; // st6
  double v18; // st1
  double v19; // st3
  double v20; // st1
  double v21; // st2
  double v22; // st3
  double v23; // st4
  double v24; // st7
  double v25; // rt2
  double v26; // st6
  double v27; // st7
  double v28; // rtt
  OB_CLightingEngine_010201A0 *lightingAfterLights; // esi
  float v30; // [esp+14h] [ebp-B4h]
  float v31; // [esp+14h] [ebp-B4h]
  float v32; // [esp+14h] [ebp-B4h]
  float v33; // [esp+14h] [ebp-B4h]
  OB_stVec3_010201A0 rgb; // [esp+18h] [ebp-B0h] BYREF
  OB_CBillboardLeaf_010201A0 ***p_begin; // [esp+24h] [ebp-A4h]
  float v36; // [esp+28h] [ebp-A0h]
  float v37; // [esp+2Ch] [ebp-9Ch]
  float v38; // [esp+30h] [ebp-98h]
  float z; // [esp+34h] [ebp-94h]
  OB_stVec3_010201A0 v40; // [esp+38h] [ebp-90h] BYREF
  int v41; // [esp+44h] [ebp-84h]
  float v42; // [esp+48h] [ebp-80h]
  OB_CLightingEngine_010201A0 *lighting; // [esp+4Ch] [ebp-7Ch]
  int v44; // [esp+50h] [ebp-78h]
  OB_stVec3_010201A0 lightPosition; // [esp+54h] [ebp-74h] BYREF
  float v46; // [esp+60h] [ebp-68h]
  float v47; // [esp+64h] [ebp-64h]
  float v48; // [esp+68h] [ebp-60h]
  float v49; // [esp+6Ch] [ebp-5Ch]
  float v50; // [esp+70h] [ebp-58h]
  float v51; // [esp+74h] [ebp-54h]
  float v52; // [esp+78h] [ebp-50h]
  float v53; // [esp+7Ch] [ebp-4Ch]
  float v54; // [esp+80h] [ebp-48h]
  float v55; // [esp+84h] [ebp-44h]
  float v56; // [esp+88h] [ebp-40h]
  float v57; // [esp+8Ch] [ebp-3Ch]
  float v58; // [esp+90h] [ebp-38h]
  float v59; // [esp+94h] [ebp-34h]
  float v60; // [esp+98h] [ebp-30h]
  float v61; // [esp+9Ch] [ebp-2Ch]
  float v62; // [esp+A0h] [ebp-28h]
  float v63; // [esp+A4h] [ebp-24h]
  float v64; // [esp+A8h] [ebp-20h]
  float *p_x; // [esp+ACh] [ebp-1Ch]
  float v66[3]; // [esp+B0h] [ebp-18h] BYREF
  OB_stVec3_010201A0 outRgb; // [esp+BCh] [ebp-Ch] BYREF

  v6 = this->leafLightingMethod == 1; /*0x793e16*/
  lighting = this; /*0x793e1a*/
  if ( v6 ) /*0x793e1e*/
  {
    if ( this->staticLightingStyle ) /*0x793e24*/
    {
      if ( numLeafLods > 0 ) /*0x793e37*/
      {
        lodBeginSlot = &leafLods->begin; /*0x793e48*/
        p_begin = &leafLods->begin; /*0x793e4b*/
        v44 = numLeafLods; /*0x793e4f*/
        do /*0x79432b*/
        {
          leafIt = (const OB_CBillboardLeaf_010201A0 **)*lodBeginSlot; /*0x793e53*/
          if ( *lodBeginSlot > lodBeginSlot[1] ) /*0x793e58*/
            _invalid_parameter_noinfo(lightIndex, (int)lodBeginSlot, v5); /*0x793e5a*/
          while ( 1 ) /*0x793e60*/
          {
            v5 = (unsigned int)lodBeginSlot[1]; /*0x793e60*/
            if ( (unsigned int)*lodBeginSlot > v5 ) /*0x793e65*/
              _invalid_parameter_noinfo(lightIndex, (int)lodBeginSlot, v5); /*0x793e6b*/
            lightIndex = (int)(lodBeginSlot + 0xFFFFFFFF); /*0x793e70*/
            if ( leafIt == (const OB_CBillboardLeaf_010201A0 **)v5 ) /*0x793e7e*/
              break; /*0x793e7e*/
            if ( (unsigned int)leafIt >= *(_DWORD *)(lightIndex + 8) ) /*0x793e87*/
              _invalid_parameter_noinfo(lightIndex, (int)lodBeginSlot, v5); /*0x793e89*/
            v9 = (unsigned int)leafIt < *(_DWORD *)(lightIndex + 8); /*0x793e94*/
            p_x = &(*leafIt)->normal.x; /*0x793e97*/
            if ( !v9 ) /*0x793e9e*/
              _invalid_parameter_noinfo(lightIndex, (int)lodBeginSlot, v5); /*0x793ea0*/
            v10 = &(*leafIt)->position.x; /*0x793ea8*/
            if ( (unsigned int)leafIt >= *(_DWORD *)(lightIndex + 8) ) /*0x793eae*/
              _invalid_parameter_noinfo(lightIndex, (int)v10, v5); /*0x793eb0*/
            OB_CBillboardLeaf_GetColor_010201A0(*leafIt, &outRgb); /*0x793ec0*/
            v11 = 0.0; /*0x793ec5*/
            lightPosition.z = 0.0; /*0x793ec7*/
            lightIndex = 0; /*0x793ecb*/
            lightPosition.y = 0.0; /*0x793ecd*/
            lightAttrY = &CLightingEngine__s_lightAttributes[0].position.y; /*0x793ed1*/
            lightPosition.x = 0.0; /*0x793ed6*/
            v42 = flt_A30634; /*0x793ee0*/
            rgb.z = 0.0; /*0x793ee4*/
            rgb.y = 0.0; /*0x793ee8*/
            rgb.x = 0.0; /*0x793eec*/
            v13 = 1.0; /*0x793ef0*/
            do /*0x794223*/
            {
              if ( CLightingEngine__s_lightEnabled[lightIndex] ) /*0x793ef2*/
              {
                v40.x = lightAttrY[0xFFFFFFFF]; /*0x793f04*/
                v40.y = *lightAttrY; /*0x793f0a*/
                v40.z = lightAttrY[1]; /*0x793f11*/
                if ( v11 == lightAttrY[0xB] ) /*0x793f1d*/
                {
                  v14 = &v40; /*0x793f1f*/
                }
                else
                {
                  v14 = (OB_stVec3_010201A0 *)v66; /*0x793f29*/
                  v66[0] = v40.x - *v10; /*0x793f32*/
                  v66[1] = v40.y - v10[1]; /*0x793f40*/
                  v66[2] = v40.z - v10[2]; /*0x793f4e*/
                }
                y = v14->y; /*0x793f55*/
                x = v14->x; /*0x793f58*/
                z = v14->z; /*0x793f6d*/
                v30 = y * y + x * x + z * z; /*0x793f85*/
                v31 = sqrt(v30); /*0x793f92*/
                v32 = 1.0 / v31; /*0x793fa9*/
                v37 = x * v32; /*0x793fbb*/
                v38 = y * v32; /*0x793fc5*/
                z = v32 * z; /*0x793fcd*/
                v36 = p_x[1] * v38 + v37 * *p_x + p_x[2] * z; /*0x793fe9*/
                v17 = v36; /*0x793fed*/
                if ( v42 <= (double)v36 ) /*0x793ffc*/
                {
                  v42 = v36; /*0x794002*/
                  lightPosition = v40; /*0x79400e*/
                }
                if ( v17 < 0.0 ) /*0x794023*/
                {
                  v36 = 0.0; /*0x794027*/
                  v17 = (float)0.0; /*0x79402f*/
                }
                v6 = (lighting->staticLightingStyle & 1) == 0; /*0x794035*/
                v36 = v17 * (1.0 - lighting->leafLightingAdjustmentScalar) + lighting->leafLightingAdjustmentScalar; /*0x79404e*/
                if ( v6 ) /*0x794052*/
                {
                  v11 = 0.0; /*0x794240*/
                  v13 = 1.0; /*0x794242*/
                }
                else
                {
                  v53 = lighting->leafMaterial.emissive[0]; /*0x79405b*/
                  v54 = lighting->leafMaterial.emissive[1]; /*0x794062*/
                  v55 = lighting->leafMaterial.emissive[2]; /*0x794069*/
                  v56 = lightAttrY[5] * lighting->leafMaterial.ambient[0]; /*0x794076*/
                  v57 = lightAttrY[6] * lighting->leafMaterial.ambient[1]; /*0x794083*/
                  v58 = lightAttrY[7] * lighting->leafMaterial.ambient[2]; /*0x794090*/
                  v33 = 1.0; /*0x794099*/
                  if ( 0.0 == lightAttrY[0xB] ) /*0x7940a7*/
                    goto LABEL_29; /*0x7940a7*/
                  v18 = v40.x - *v10; /*0x7940bd*/
                  v19 = v18 * v18; /*0x7940bf*/
                  v20 = v40.y - v10[1]; /*0x7940c1*/
                  v21 = v19; /*0x7940c5*/
                  v22 = v40.z - v10[2]; /*0x7940c5*/
                  *(float *)&v41 = v20 * v20 + v21 + v22 * v22; /*0x7940cd*/
                  v23 = lightAttrY[0xD]; /*0x7940d5*/
                  LODWORD(v52) = (v41 >> 1) + 0x1FC00000; /*0x7940e0*/
                  *(float *)&v41 = v23 * v52 + lightAttrY[0xC] + v52 * (lightAttrY[0xE] * v52); /*0x7940fa*/
                  if ( *(float *)&v41 == 0.0 ) /*0x79410d*/
                  {
LABEL_29:
                    v24 = 1.0; /*0x79411b*/
                  }
                  else
                  {
                    v24 = 1.0; /*0x794111*/
                    v33 = 1.0 / *(float *)&v41; /*0x794113*/
                  }
                  v62 = lightAttrY[2] * v36 * outRgb.x; /*0x794133*/
                  v63 = lightAttrY[3] * v36 * outRgb.y; /*0x794146*/
                  v64 = v36 * lightAttrY[4] * outRgb.z; /*0x794157*/
                  v46 = v62 + v56; /*0x79416c*/
                  v47 = v63 + v57; /*0x79417e*/
                  v48 = v64 + v58; /*0x794190*/
                  v49 = v46 * v33; /*0x7941a2*/
                  v50 = v47 * v33; /*0x7941ac*/
                  v51 = v33 * v48; /*0x7941b4*/
                  v59 = v49 + v53; /*0x7941c0*/
                  v60 = v50 + v54; /*0x7941cf*/
                  v61 = v51 + v55; /*0x7941e1*/
                  rgb.x = v59 + rgb.x; /*0x7941f3*/
                  rgb.y = v60 + rgb.y; /*0x794202*/
                  rgb.z = v61 + rgb.z; /*0x794211*/
                  v13 = v24; /*0x794215*/
                  v11 = 0.0; /*0x794215*/
                }
              }
              lightAttrY += 0x10; /*0x794217*/
              ++lightIndex; /*0x79421a*/
            }
            while ( (int)lightAttrY < (int)flt_B2B9D4 ); /*0x794223*/
            if ( rgb.x >= v11 ) /*0x794234*/
            {
              if ( rgb.x > v13 ) /*0x79424d*/
                rgb.x = v13; /*0x79424f*/
              v28 = v13; /*0x794253*/
              v26 = v11; /*0x794253*/
              v27 = v28; /*0x794253*/
            }
            else
            {
              v25 = v13; /*0x794238*/
              v26 = v11; /*0x794238*/
              v27 = v25; /*0x794238*/
              rgb.x = v26; /*0x79423a*/
            }
            if ( rgb.y >= v26 ) /*0x794260*/
            {
              if ( rgb.y > v27 ) /*0x794271*/
                rgb.y = v27; /*0x794275*/
            }
            else
            {
              rgb.y = v26; /*0x794264*/
            }
            if ( rgb.z >= v26 ) /*0x794286*/
            {
              if ( rgb.z > v27 ) /*0x79429b*/
                rgb.z = v27; /*0x79429d*/
            }
            else
            {
              rgb.z = v26; /*0x79428c*/
            }
            lightingAfterLights = lighting; /*0x7942a5*/
            if ( (lighting->staticLightingStyle & 1) != 0 ) /*0x7942ad*/
            {
              if ( leafIt >= (const OB_CBillboardLeaf_010201A0 **)p_begin[1] ) /*0x7942b9*/
                _invalid_parameter_noinfo(lightIndex, (int)v10, (int)lighting); /*0x7942bb*/
              OB_CBillboardLeaf_SetColor_010201A0((OB_CBillboardLeaf_010201A0 *)*leafIt, &rgb, 0);// Static style bit0 writes computed RGB with applyDimming=false: repacks but does not multiply colorScaleByte. /*0x7942ca*/
            }
            if ( (lightingAfterLights->staticLightingStyle & 2) != 0 ) /*0x7942d3*/
            {
              if ( leafIt >= (const OB_CBillboardLeaf_010201A0 **)p_begin[1] ) /*0x7942df*/
                _invalid_parameter_noinfo(lightIndex, (int)v10, (int)lightingAfterLights); /*0x7942e1*/
              OB_CBillboardLeaf_AdjustStaticLighting_010201A0( /*0x7942fd*/
                (OB_CBillboardLeaf_010201A0 *)*leafIt,
                treeCenter,
                &lightPosition,
                lightingAfterLights->leafLightingAdjustmentScalar);// Static style bit1 invokes dominant-light shadow adjustment after optional bit0 processing. That helper decodes packed RGB then calls SetColor(true).
            }
            if ( leafIt >= (const OB_CBillboardLeaf_010201A0 **)p_begin[1] ) /*0x79430c*/
              _invalid_parameter_noinfo(lightIndex, (int)v10, (int)lightingAfterLights); /*0x79430e*/
            lodBeginSlot = p_begin; /*0x794313*/
            ++leafIt; /*0x794317*/
          }
          lodBeginSlot += 4; /*0x79431f*/
          v6 = v44-- == 1; /*0x794322*/
          p_begin = lodBeginSlot; /*0x794327*/
        }
        while ( !v6 ); /*0x79432b*/
      }
    }
  }
}
