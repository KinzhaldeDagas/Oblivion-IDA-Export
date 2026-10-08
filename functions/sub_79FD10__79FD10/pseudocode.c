//
//
// [2026-10-03 material ownership] Verified guide+2C receives generated profile vector length and +28 receives indexed vertex counter. Emits spinePoints*profileWidth vertices; passes guide map byte+18 to diffuse writer. Fallout 0x82830F40 matches. Typed this/guide prototype and engine geometry/lighting pointers improve field propagation without importing later-source layouts.
void __thiscall OB_CFrondEngine_BuildExtrusionVertices_010201A0(
        OB_CFrondEngine_010201A0 *this,
        OB_SFrondGuide_010201A0 *guide)
{
  OB_CIndexedGeometry_010201A0 *v2; // edi
  OB_stVectorFloat_010201A0 *p_capacity; // esi
  unsigned int v4; // eax
  double v5; // st7
  double v6; // st7
  bool v7; // zf
  double v8; // st7
  double v9; // st7
  double verticesPerGuideVertex; // st6
  void *begin; // eax
  char *v12; // eax
  unsigned int v13; // esi
  OB_stRotTransform_010201A0 *v14; // esi
  double offsetAngle; // st7
  int end; // edi
  int v17; // esi
  unsigned int *v18; // ecx
  OB_stVectorFloat_010201A0 *owner; // esi
  float *v20; // eax
  float *v21; // edx
  double v22; // st6
  void *v23; // eax
  double v24; // rt0
  float *v25; // eax
  OB_CIndexedGeometry_010201A0 *indexedGeometry; // ecx
  __int16 frondMapIndex; // dx
  OB_CIndexedGeometry_010201A0 *v28; // ecx
  unsigned int *v29; // ecx
  float *v30; // eax
  double v31; // st6
  OB_CIndexedGeometry_010201A0 *v32; // ecx
  void *v33; // eax
  float v34; // eax
  bool v35; // cf
  unsigned int v36; // ecx
  unsigned int sharedVertexStartIndex; // edx
  unsigned int v38; // esi
  const float *VertexCoord_010201A0; // edi
  const float *v40; // eax
  float *v41; // esi
  unsigned int v42; // esi
  float *v43; // esi
  OB_CFrondEngine_010201A0 *v44; // edi
  unsigned int v45; // esi
  unsigned __int16 v46; // ax
  double v47; // st7
  OB_stVectorFloat_010201A0 *v48; // eax
  float *v49; // eax
  OB_CIndexedGeometry_010201A0 *v50; // ecx
  OB_stVectorFloat_010201A0 *v51; // ebx
  unsigned int *v52; // esi
  OB_stVectorFloatIterator_010201A0 _FFFFFFFC; // [esp-4h] [ebp-140h]
  OB_stVectorFloatIterator_010201A0 _FFFFFFFCa; // [esp-4h] [ebp-140h]
  float angleDegrees; // [esp+4h] [ebp-138h]
  __int16 angleDegreesa; // [esp+4h] [ebp-138h]
  float v57; // [esp+18h] [ebp-124h]
  float v58; // [esp+18h] [ebp-124h]
  float v59; // [esp+18h] [ebp-124h]
  float v60; // [esp+18h] [ebp-124h]
  float v61; // [esp+18h] [ebp-124h]
  float v62; // [esp+18h] [ebp-124h]
  float v63; // [esp+18h] [ebp-124h]
  float v64; // [esp+18h] [ebp-124h]
  float v65; // [esp+18h] [ebp-124h]
  float v66; // [esp+18h] [ebp-124h]
  int v67; // [esp+18h] [ebp-124h]
  float **p_begin; // [esp+18h] [ebp-124h]
  float *v69; // [esp+18h] [ebp-124h]
  unsigned int i; // [esp+1Ch] [ebp-120h]
  int v71; // [esp+1Ch] [ebp-120h]
  unsigned int v72; // [esp+1Ch] [ebp-120h]
  float v73; // [esp+20h] [ebp-11Ch]
  float v74; // [esp+20h] [ebp-11Ch]
  float v75; // [esp+20h] [ebp-11Ch]
  float v76; // [esp+20h] [ebp-11Ch]
  float v77; // [esp+20h] [ebp-11Ch]
  float v78; // [esp+20h] [ebp-11Ch]
  float v79; // [esp+20h] [ebp-11Ch]
  float v80; // [esp+20h] [ebp-11Ch]
  float v81; // [esp+24h] [ebp-118h] BYREF
  float v82; // [esp+28h] [ebp-114h]
  float v83; // [esp+2Ch] [ebp-110h]
  OB_stVectorFloatIterator_010201A0 result; // [esp+30h] [ebp-10Ch] BYREF
  float v85; // [esp+38h] [ebp-104h]
  int value; // [esp+3Ch] [ebp-100h] BYREF
  int v87; // [esp+40h] [ebp-FCh]
  float v88; // [esp+44h] [ebp-F8h]
  OB_stVectorFloatIterator_010201A0 v89; // [esp+48h] [ebp-F4h] BYREF
  float v90; // [esp+50h] [ebp-ECh]
  OB_CFrondEngine_010201A0 *v91; // [esp+54h] [ebp-E8h]
  OB_stVectorFloat_010201A0 binormal; // [esp+58h] [ebp-E4h] BYREF
  OB_stVectorFloat_010201A0 lengths; // [esp+68h] [ebp-D4h] BYREF
  OB_stVectorFloatIterator_010201A0 diffuseST; // [esp+78h] [ebp-C4h] BYREF
  OB_stVector_stVectorFloat_010201A0 runningLengths; // [esp+80h] [ebp-BCh] BYREF
  OB_stVector4_010201A0 v96; // [esp+90h] [ebp-ACh] BYREF
  OB_stVector4_010201A0 v97; // [esp+A0h] [ebp-9Ch] BYREF
  float normal; // [esp+B0h] [ebp-8Ch] BYREF
  float v99; // [esp+B4h] [ebp-88h]
  float v100; // [esp+B8h] [ebp-84h]
  OB_stRotTransform_010201A0 v101; // [esp+BCh] [ebp-80h] BYREF
  float tangent; // [esp+E0h] [ebp-5Ch] BYREF
  float v103; // [esp+E4h] [ebp-58h]
  float v104; // [esp+E8h] [ebp-54h]
  OB_stRotTransform_010201A0 v105; // [esp+ECh] [ebp-50h] BYREF
  float coord[3]; // [esp+110h] [ebp-2Ch] BYREF
  float rgba[5]; // [esp+11Ch] [ebp-20h] BYREF
  int v108; // [esp+138h] [ebp-4h]

  v2 = (OB_CIndexedGeometry_010201A0 *)this; /*0x79fd42*/
  v91 = this; /*0x79fd44*/
  p_capacity = 0; /*0x79fd48*/
  if ( this->indexedGeometry ) /*0x79fd4a*/
  {
    if ( this->lightingEngine ) /*0x79fd52*/
    {
      memset(&v96.begin, 0, 0xC); /*0x79fd5b*/
      v108 = 1; /*0x79fd70*/
      memset(&v97.begin, 0, 0xC); /*0x79fd77*/
      OB_CFrondEngine_BuildProfileVectors_010201A0(this, (unsigned int)guide, &v96.allocatorState, &v97.allocatorState); /*0x79fdaa*/
      if ( v96.begin ) /*0x79fdb8*/
        v4 = ((char *)v96.end - (char *)v96.begin) / 0xC; /*0x79fdd5*/
      else
        v4 = 0; /*0x79fdba*/
      guide->verticesPerGuideVertex = v4; /*0x79fdd7*/
      guide->sharedVertexStartIndex = *(unsigned __int16 *)(*(_DWORD *)&v2->retainTexcoords + 0x22); /*0x79fde5*/
      for ( i = 0; /*0x79fdec*/
            i < OB_stVector_SFrondVertex_Size_010201A0(&guide->vertexVector);
            p_capacity = (OB_stVectorFloat_010201A0 *)i )
      {
        v5 = (double)(int)i; /*0x79fe04*/
        if ( (int)i < 0 ) /*0x79fe0a*/
          v5 = v5 + flt_A2FC78; /*0x79fe0c*/
        *(float *)&result.owner = v5; /*0x79fe14*/
        *(float *)&value = COERCE_FLOAT(OB_stVector_SFrondVertex_Size_010201A0(&guide->vertexVector)); /*0x79fe1f*/
        v6 = (double)value; /*0x79fe23*/
        if ( value < 0 ) /*0x79fe27*/
          v6 = v6 + flt_A2FC78; /*0x79fe29*/
        v7 = guide->verticesPerGuideVertex == 0; /*0x79fe2f*/
        v8 = v6 - dbl_A2F928; /*0x79fe33*/
        v81 = 0.0; /*0x79fe39*/
        *(float *)&value = *(float *)&result.owner / v8; /*0x79fe45*/
        if ( !v7 ) /*0x79fe49*/
        {
          v87 = 0x38 * i; /*0x79fe62*/
          result.owner = 0; /*0x79fe66*/
          do /*0x7a05eb*/
          {
            v9 = (double)SLODWORD(v81); /*0x79fe72*/
            if ( v81 < 0.0 ) /*0x79fe78*/
              v9 = v9 + flt_A2FC78; /*0x79fe7a*/
            verticesPerGuideVertex = (double)(int)guide->verticesPerGuideVertex; /*0x79fe83*/
            if ( (int)guide->verticesPerGuideVertex < 0 ) /*0x79fe88*/
              verticesPerGuideVertex = verticesPerGuideVertex + flt_A2FC78; /*0x79fe8a*/
            begin = guide->vertexVector.begin; /*0x79fe96*/
            v57 = v9 / (verticesPerGuideVertex - dbl_A2F928); /*0x79fe9d*/
            if ( !begin || i >= ((char *)guide->vertexVector.end - (char *)begin) / 0x38 ) /*0x79febf*/
              _invalid_parameter_noinfo((int)guide, (int)v2, (int)p_capacity); /*0x79fec1*/
            v12 = (char *)guide->vertexVector.begin; /*0x79feca*/
            qmemcpy(&v101, &v12[v87 + 0xC], sizeof(v101)); /*0x79fedd*/
            if ( i ) /*0x79fee5*/
            {
              v13 = i - 1; /*0x79fee9*/
              if ( !v12 || v13 >= ((char *)guide->vertexVector.end - (char *)v12) / 0x38 ) /*0x79ff08*/
                _invalid_parameter_noinfo((int)guide, (int)&tangent, v13); /*0x79ff0a*/
              v14 = (OB_stRotTransform_010201A0 *)((char *)guide->vertexVector.begin + 0x38 * v13 + 0xC); /*0x79ff1b*/
            }
            else
            {
              v14 = &v101; /*0x79ff21*/
            }
            offsetAngle = guide->offsetAngle; /*0x79ff28*/
            qmemcpy(&v105, v14, sizeof(v105)); /*0x79ff37*/
            v17 = (int)&v14[1]; /*0x79ff37*/
            end = (int)coord; /*0x79ff37*/
            angleDegrees = offsetAngle; /*0x79ff41*/
            OB_stRotTransform_RotateXDegrees_010201A0(&v101, angleDegrees); /*0x79ff44*/
            OB_stRotTransform_RotateXDegrees_010201A0(&v105, guide->offsetAngle); /*0x79ff57*/
            if ( !v96.begin /*0x79ff8c*/
              || (end = (int)v96.end, v18 = v96.begin, LODWORD(v81) >= ((char *)v96.end - (char *)v96.begin) / 0xC) )
            {
              _invalid_parameter_noinfo((int)guide, end, v17); /*0x79ff8e*/
              end = (int)v96.end; /*0x79ff93*/
              v18 = v96.begin; /*0x79ff9a*/
            }
            owner = result.owner; /*0x79ffaa*/
            *(float *)&v89.owner = v101.m[3] * *(float *)((char *)v18 + (unsigned int)result.owner + 4) /*0x79ffcb*/
                                 + v101.m[0] * *(float *)((char *)v18 + (unsigned int)result.owner)
                                 + v101.m[6] * *(float *)((char *)v18 + (unsigned int)result.owner + 8);
            v88 = v101.m[4] * *(float *)((char *)v18 + (unsigned int)result.owner + 4) /*0x79fff3*/
                + v101.m[1] * *(float *)((char *)v18 + (unsigned int)result.owner)
                + v101.m[7] * *(float *)((char *)v18 + (unsigned int)result.owner + 8);
            v82 = v101.m[5] * *(float *)((char *)v18 + (unsigned int)result.owner + 4) /*0x7a001b*/
                + v101.m[2] * *(float *)((char *)v18 + (unsigned int)result.owner)
                + v101.m[8] * *(float *)((char *)v18 + (unsigned int)result.owner + 8);
            if ( !v18 || (end -= (int)v18, LODWORD(v81) >= end / 0xC) ) /*0x7a0037*/
            {
              _invalid_parameter_noinfo((int)guide, end, (int)result.owner); /*0x7a0039*/
              v18 = v96.begin; /*0x7a003e*/
            }
            v20 = (float *)((char *)v18 + (unsigned int)result.owner + 4); /*0x7a004c*/
            v21 = (float *)((char *)v18 + (unsigned int)result.owner + 8); /*0x7a0052*/
            *(float *)&result.owner = v105.m[3] * *v20 /*0x7a006d*/
                                    + v105.m[0] * *(float *)((char *)v18 + (unsigned int)result.owner)
                                    + v105.m[6] * *v21;
            v90 = v105.m[1] * *(float *)((char *)&owner->allocatorState + (_DWORD)v18) /*0x7a0091*/
                + v105.m[4] * *v20
                + v105.m[7] * *v21;
            v22 = v105.m[5] * *v20; /*0x7a00a6*/
            v23 = guide->vertexVector.begin; /*0x7a00a8*/
            v85 = v105.m[2] * *(float *)((char *)&owner->allocatorState + (_DWORD)v18) + v22 + v105.m[8] * *v21; /*0x7a00ba*/
            v83 = *(float *)&result.owner + *(float *)&v89.owner; /*0x7a00c6*/
            *(float *)&v89.owner = v90 + v88; /*0x7a00da*/
            v88 = *(float *)&v89.owner; /*0x7a00e2*/
            *(float *)&result.owner = v85 + v82; /*0x7a00ee*/
            v82 = *(float *)&result.owner; /*0x7a00f6*/
            v24 = dbl_A2FAA0; /*0x7a0106*/
            v73 = v83 * v24; /*0x7a0108*/
            v85 = *(float *)&v89.owner * v24; /*0x7a0112*/
            v82 = v24 * *(float *)&result.owner; /*0x7a011a*/
            if ( !v23 || i >= ((char *)guide->vertexVector.end - (char *)v23) / 0x38 ) /*0x7a013c*/
              _invalid_parameter_noinfo((int)guide, end, (int)owner); /*0x7a013e*/
            v25 = (float *)((char *)guide->vertexVector.begin + v87); /*0x7a0146*/
            v74 = *v25 + v73; /*0x7a0150*/
            v85 = v25[1] + v85; /*0x7a015b*/
            v82 = v25[2] + v82; /*0x7a0166*/
            coord[0] = v74; /*0x7a016e*/
            coord[1] = v85; /*0x7a0179*/
            coord[2] = v82; /*0x7a0184*/
            v75 = *(float *)&v89.owner * *(float *)&v89.owner /*0x7a01bf*/
                + v83 * v83
                + *(float *)&result.owner * *(float *)&result.owner;
            v76 = sqrt(v75); /*0x7a01cc*/
            indexedGeometry = v91->indexedGeometry; /*0x7a01e4*/
            v77 = 1.0 / v76; /*0x7a01e6*/
            tangent = v83 * v77; /*0x7a01f8*/
            v103 = *(float *)&v89.owner * v77; /*0x7a0205*/
            v104 = v77 * *(float *)&result.owner; /*0x7a0210*/
            OB_CIndexedGeometry_AddVertexCoord_010201A0(indexedGeometry, coord); /*0x7a0217*/
            frondMapIndex = guide->frondMapIndex; /*0x7a021c*/
            v28 = v91->indexedGeometry; /*0x7a0225*/
            *(float *)&diffuseST.owner = v57; /*0x7a0227*/
            diffuseST.current = (float *)value; /*0x7a0233*/
            OB_CIndexedGeometry_AddVertexTexCoord0_010201A0(v28, (const float *)&diffuseST, frondMapIndex); /*0x7a0239*/
            v29 = v97.begin; /*0x7a023e*/
            if ( !v97.begin || LODWORD(v81) >= ((char *)v97.end - (char *)v97.begin) / 0xC ) /*0x7a0266*/
            {
              _invalid_parameter_noinfo((int)guide, (int)v91, (int)owner); /*0x7a0268*/
              v29 = v97.begin; /*0x7a026d*/
            }
            v78 = *(float *)((char *)&owner->allocatorState + (_DWORD)v29) * v101.m[0] /*0x7a029a*/
                + v101.m[3] * *(float *)((char *)&owner->begin + (_DWORD)v29)
                + v101.m[6] * *(float *)((char *)&owner->end + (_DWORD)v29);
            v85 = v101.m[1] * *(float *)((char *)&owner->allocatorState + (_DWORD)v29) /*0x7a02c2*/
                + v101.m[4] * *(float *)((char *)&owner->begin + (_DWORD)v29)
                + v101.m[7] * *(float *)((char *)&owner->end + (_DWORD)v29);
            v90 = v101.m[2] * *(float *)((char *)&owner->allocatorState + (_DWORD)v29) /*0x7a02ea*/
                + v101.m[5] * *(float *)((char *)&owner->begin + (_DWORD)v29)
                + v101.m[8] * *(float *)((char *)&owner->end + (_DWORD)v29);
            if ( !v29 || LODWORD(v81) >= ((char *)v97.end - (char *)v29) / 0xC ) /*0x7a030f*/
            {
              _invalid_parameter_noinfo((int)guide, (int)v91, (int)owner); /*0x7a0311*/
              v29 = v97.begin; /*0x7a0316*/
            }
            v30 = (float *)((char *)&owner->end + (_DWORD)v29); /*0x7a0324*/
            v58 = v105.m[3] * *(float *)((char *)&owner->begin + (_DWORD)v29) /*0x7a0343*/
                + v105.m[0] * *(float *)((char *)&owner->allocatorState + (_DWORD)v29)
                + v105.m[6] * *v30;
            v82 = v105.m[4] * *(float *)((char *)&owner->begin + (_DWORD)v29) /*0x7a0369*/
                + v105.m[1] * *(float *)((char *)&owner->allocatorState + (_DWORD)v29)
                + v105.m[7] * *v30;
            v88 = v105.m[5] * *(float *)((char *)&owner->begin + (_DWORD)v29) /*0x7a038f*/
                + v105.m[2] * *(float *)((char *)&owner->allocatorState + (_DWORD)v29)
                + v105.m[8] * *v30;
            v59 = v58 + v78; /*0x7a039b*/
            v79 = v82 + v85; /*0x7a03a7*/
            v82 = v88 + v90; /*0x7a03b3*/
            v31 = dbl_A2FAA0; /*0x7a03bb*/
            *(float *)&result.owner = v59 * v31; /*0x7a03c5*/
            *(float *)&v89.owner = v79 * v31; /*0x7a03cf*/
            v83 = v31 * v82; /*0x7a03d7*/
            v60 = *(float *)&v89.owner * *(float *)&v89.owner /*0x7a03f7*/
                + *(float *)&result.owner * *(float *)&result.owner
                + v83 * v83;
            v61 = sqrt(v60); /*0x7a0404*/
            v62 = 1.0 / v61; /*0x7a0410*/
            normal = *(float *)&result.owner * v62; /*0x7a0422*/
            v99 = *(float *)&v89.owner * v62; /*0x7a042f*/
            v100 = v62 * v83; /*0x7a043a*/
            rgba[3] = 1.0; /*0x7a0443*/
            rgba[2] = 1.0; /*0x7a044a*/
            rgba[1] = 1.0; /*0x7a0451*/
            rgba[0] = 1.0; /*0x7a045f*/
            OB_CIndexedGeometry_AddVertexColor_010201A0(v91->indexedGeometry, rgba); /*0x7a0469*/
            OB_CIndexedGeometry_AddVertexNormal_010201A0(v91->indexedGeometry, &normal); /*0x7a0478*/
            OB_CIndexedGeometry_AddVertexTangent_010201A0(v91->indexedGeometry, &tangent); /*0x7a0487*/
            *(float *)&result.owner = v99 * v104 - v100 * v103; /*0x7a04b8*/
            *(float *)&v89.owner = v100 * tangent - v104 * normal; /*0x7a04d8*/
            v83 = v103 * normal - v99 * tangent; /*0x7a04e2*/
            v63 = *(float *)&result.owner * *(float *)&result.owner /*0x7a0502*/
                + *(float *)&v89.owner * *(float *)&v89.owner
                + v83 * v83;
            v64 = sqrt(v63); /*0x7a050f*/
            v32 = v91->indexedGeometry; /*0x7a0520*/
            v65 = 1.0 / v64; /*0x7a0522*/
            *(float *)&binormal.allocatorState = *(float *)&result.owner * v65; /*0x7a0534*/
            *(float *)&binormal.begin = *(float *)&v89.owner * v65; /*0x7a053e*/
            *(float *)&binormal.end = v65 * v83; /*0x7a0546*/
            OB_CIndexedGeometry_AddVertexBinormal_010201A0(v32, (const float *)&binormal.allocatorState); /*0x7a054a*/
            if ( v91->indexedGeometry->vertexWeighting ) /*0x7a0551*/
            {
              v33 = guide->vertexVector.begin; /*0x7a0557*/
              if ( !v33 || i >= ((char *)guide->vertexVector.end - (char *)v33) / 0x38 ) /*0x7a057a*/
                _invalid_parameter_noinfo((int)guide, (int)v91, (int)owner); /*0x7a057c*/
              result.owner = (OB_stVectorFloat_010201A0 *)guide->vertexVector.begin; /*0x7a0586*/
              if ( !result.owner || i >= ((OB_stVectorFloat_010201A0 *)guide->vertexVector.end - result.owner) / 0x38 ) /*0x7a05a8*/
                _invalid_parameter_noinfo((int)guide, (int)v91, (int)owner); /*0x7a05aa*/
              OB_CIndexedGeometry_AddVertexWind_010201A0( /*0x7a05ca*/
                v91->indexedGeometry,
                *(float *)((char *)guide->vertexVector.begin + v87 + 0x30),
                *((_BYTE *)&result.owner[3].begin + v87));
            }
            v34 = v81; /*0x7a05cf*/
            v2 = v91->indexedGeometry; /*0x7a05d3*/
            ++v91->indexedGeometry->currentVertexWriteCounter; /*0x7a05d5*/
            ++LODWORD(v34); /*0x7a05da*/
            p_capacity = (OB_stVectorFloat_010201A0 *)&owner->capacity; /*0x7a05dd*/
            v35 = LODWORD(v34) < guide->verticesPerGuideVertex; /*0x7a05e0*/
            v81 = v34; /*0x7a05e3*/
            result.owner = p_capacity; /*0x7a05e7*/
          }
          while ( v35 ); /*0x7a05eb*/
        }
        ++i; /*0x7a05fa*/
      }
      memset(&lengths.begin, 0, 0xC);           // Initializes the local vector<float> holding total length for each extrusion-profile lane (RT4.1 m_vLengths). /*0x7a060d*/
      memset(&runningLengths.begin, 0, 0xC);    // Initializes the local vector<vector<float>> holding cumulative lengths per extrusion-profile lane (RT4.1 m_vRunningLengths). /*0x7a0619*/
      v7 = guide->verticesPerGuideVertex == 0; /*0x7a062b*/
      LOBYTE(v108) = 3; /*0x7a062e*/
      v71 = 0; /*0x7a0636*/
      if ( !v7 ) /*0x7a063a*/
      {
        *(float *)&value = 0.0; /*0x7a0644*/
        do /*0x7a083e*/
        {
          memset(&binormal.begin, 0, 0xC); /*0x7a064a*/
          v81 = 0.0; /*0x7a064e*/
          LOBYTE(v108) = 4; /*0x7a0670*/
          OB_stVectorFloat_InsertOne_010201A0( /*0x7a0678*/
            &binormal,
            &diffuseST,
            (OB_stVectorFloatIterator_010201A0)(unsigned int)&binormal,
            (const float *)&value);
          v87 = 1; /*0x7a067f*/
          if ( OB_stVector_SFrondVertex_Size_010201A0(&guide->vertexVector) > 1 ) /*0x7a068f*/
          {
            do /*0x7a07a4*/
            {
              v36 = guide->verticesPerGuideVertex; /*0x7a0695*/
              sharedVertexStartIndex = guide->sharedVertexStartIndex; /*0x7a069c*/
              v38 = v71 + sharedVertexStartIndex + v36 * (v87 - 1); /*0x7a06bb*/
              VertexCoord_010201A0 = OB_CIndexedGeometry_GetVertexCoord_010201A0( /*0x7a06c9*/
                                       v91->indexedGeometry,
                                       v71 + sharedVertexStartIndex + v36 * v87);
              v40 = OB_CIndexedGeometry_GetVertexCoord_010201A0(v91->indexedGeometry, v38); /*0x7a06cb*/
              v41 = binormal.end; /*0x7a06d2*/
              v85 = *VertexCoord_010201A0; /*0x7a06d6*/
              v80 = VertexCoord_010201A0[1]; /*0x7a06dd*/
              v90 = VertexCoord_010201A0[2]; /*0x7a06e4*/
              v82 = *v40; /*0x7a06ea*/
              v66 = v40[1]; /*0x7a06f1*/
              v88 = v40[2]; /*0x7a06f8*/
              *(float *)&v67 = (v66 - v80) * (v66 - v80) + (v82 - v85) * (v82 - v85) + (v88 - v90) * (v88 - v90); /*0x7a0724*/
              v81 = COERCE_FLOAT((v67 >> 1) + 0x1FC00000) + v81; /*0x7a0745*/
              if ( binormal.begin && binormal.end - binormal.begin < (unsigned int)(binormal.capacity - binormal.begin) ) /*0x7a075d*/
              {
                *binormal.end = v81; /*0x7a0768*/
                binormal.end = v41 + 1; /*0x7a076a*/
              }
              else
              {
                if ( binormal.begin > binormal.end ) /*0x7a0772*/
                  _invalid_parameter_noinfo((int)guide, (int)VertexCoord_010201A0, (int)binormal.end); /*0x7a0774*/
                _FFFFFFFC.current = v41; /*0x7a0782*/
                _FFFFFFFC.owner = &binormal; /*0x7a0783*/
                OB_stVectorFloat_InsertOne_010201A0(&binormal, &result, _FFFFFFFC, &v81); /*0x7a078b*/
              }
              v42 = ++v87; /*0x7a0794*/
            }
            while ( v42 < OB_stVector_SFrondVertex_Size_010201A0(&guide->vertexVector) ); /*0x7a07a4*/
          }
          OB_stVector_stVectorFloat_PushBack_010201A0(&runningLengths, &binormal);// OBLIVION AUTHORITY (2026-08-30): Appends the just-built inner vector<float> of cumulative extrusion distances to the outer vector<vector<float>>. This is the executable's m_vRunningLengths construction; RT4.1 FrondEngine.h:242 and FrondEngine.cpp:770-793 corroborate the already-observed role. /*0x7a07b5*/
          v43 = lengths.end; /*0x7a07c0*/
          if ( lengths.begin && lengths.end - lengths.begin < (unsigned int)(lengths.capacity - lengths.begin) ) /*0x7a07d8*/
          {
            *lengths.end = v81; /*0x7a07e3*/
            lengths.end = v43 + 1; /*0x7a07e5*/
          }
          else
          {
            if ( lengths.begin > lengths.end ) /*0x7a07ed*/
              _invalid_parameter_noinfo((int)guide, 0, (int)lengths.end); /*0x7a07ef*/
            _FFFFFFFCa.current = v43; /*0x7a07fd*/
            _FFFFFFFCa.owner = &lengths; /*0x7a07fe*/
            OB_stVectorFloat_InsertOne_010201A0(&lengths, &v89, _FFFFFFFCa, &v81); /*0x7a0806*/
          }
          LOBYTE(v108) = 3; /*0x7a0811*/
          if ( binormal.begin ) /*0x7a0819*/
            FormHeapFree((unsigned int)binormal.begin); /*0x7a081c*/
          v35 = v71 + 1 < guide->verticesPerGuideVertex; /*0x7a082b*/
          memset(&binormal.begin, 0, 0xC); /*0x7a082e*/
          ++v71; /*0x7a083a*/
        }
        while ( v35 ); /*0x7a083e*/
      }
      v72 = 0; /*0x7a0849*/
      if ( guide->verticesPerGuideVertex ) /*0x7a0846*/
      {
        v44 = v91; /*0x7a0853*/
        do /*0x7a096f*/
        {
          v45 = 1; /*0x7a0862*/
          if ( OB_stVector_SFrondVertex_Size_010201A0(&guide->vertexVector) > 1 ) /*0x7a086e*/
          {
            value = 0x10 * v72; /*0x7a087b*/
            do /*0x7a095b*/
            {
              v46 = LOWORD(guide->sharedVertexStartIndex) + v72 + v45 * LOWORD(guide->verticesPerGuideVertex); /*0x7a0893*/
              v44->indexedGeometry->currentVertexWriteCounter = v46; /*0x7a0899*/
              v47 = *OB_CIndexedGeometry_GetVertexTexCoord0_010201A0(v44->indexedGeometry, v46); /*0x7a08a5*/
              v48 = runningLengths.begin; /*0x7a08a7*/
              *(float *)&diffuseST.owner = v47; /*0x7a08ad*/
              if ( !runningLengths.begin || v72 >= runningLengths.end - runningLengths.begin ) /*0x7a08c3*/
              {
                _invalid_parameter_noinfo((int)guide, (int)v44, v45); /*0x7a08c5*/
                v48 = runningLengths.begin; /*0x7a08ca*/
              }
              p_begin = &v48[value / 0x10u].begin; /*0x7a08d6*/
              if ( !*p_begin || v45 >= v48[value / 0x10u].end - *p_begin ) /*0x7a08eb*/
                _invalid_parameter_noinfo((int)guide, (int)v44, v45); /*0x7a08ed*/
              v49 = lengths.begin; /*0x7a08f8*/
              v69 = &(*p_begin)[v45]; /*0x7a0901*/
              if ( !lengths.begin || v72 >= lengths.end - lengths.begin ) /*0x7a0914*/
              {
                _invalid_parameter_noinfo((int)guide, (int)v44, v45); /*0x7a0916*/
                v49 = lengths.begin; /*0x7a091b*/
              }
              angleDegreesa = guide->frondMapIndex; /*0x7a0935*/
              v50 = v44->indexedGeometry; /*0x7a0937*/
              *(float *)&diffuseST.current = *v69 / v49[v72] * dbl_A3F460; /*0x7a093f*/
              OB_CIndexedGeometry_AddVertexTexCoord0_010201A0(v50, (const float *)&diffuseST, angleDegreesa); /*0x7a0943*/
              ++v44->indexedGeometry->currentVertexWriteCounter; /*0x7a094a*/
              ++v45; /*0x7a0951*/
            }
            while ( v45 < OB_stVector_SFrondVertex_Size_010201A0(&guide->vertexVector) ); /*0x7a095b*/
          }
          ++v72; /*0x7a096b*/
        }
        while ( v72 < guide->verticesPerGuideVertex ); /*0x7a096f*/
      }
      if ( runningLengths.begin ) /*0x7a097d*/
      {
        v51 = runningLengths.end; /*0x7a097f*/
        if ( runningLengths.begin != runningLengths.end ) /*0x7a0988*/
        {
          v52 = (unsigned int *)&runningLengths.begin->begin; /*0x7a098a*/
          do /*0x7a09af*/
          {
            if ( *v52 ) /*0x7a0990*/
              FormHeapFree(*v52); /*0x7a0997*/
            *v52 = 0; /*0x7a099f*/
            v52[1] = 0; /*0x7a09a1*/
            v52[2] = 0; /*0x7a09a4*/
            v52 += 4; /*0x7a09a7*/
          }
          while ( v52 + 0xFFFFFFFF != (unsigned int *)v51 ); /*0x7a09af*/
        }
        FormHeapFree((unsigned int)runningLengths.begin); /*0x7a09b6*/
      }
      memset(&runningLengths.begin, 0, 0xC); /*0x7a09c4*/
      if ( lengths.begin ) /*0x7a09d6*/
        FormHeapFree((unsigned int)lengths.begin); /*0x7a09d9*/
      memset(&lengths.begin, 0, 0xC); /*0x7a09ea*/
      if ( v97.begin ) /*0x7a09f6*/
        FormHeapFree((unsigned int)v97.begin); /*0x7a09f9*/
      memset(&v97.begin, 0, 0xC); /*0x7a0a0a*/
      if ( v96.begin ) /*0x7a0a1f*/
        FormHeapFree((unsigned int)v96.begin); /*0x7a0a22*/
    }
  }
}
