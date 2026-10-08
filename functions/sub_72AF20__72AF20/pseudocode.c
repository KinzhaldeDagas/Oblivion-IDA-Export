// Verified shared weighted-skin transform: composes per-bone NiTransforms, traverses per-vertex bone indices/weights, transforms source positions/normals and accumulates into caller-provided output arrays. BSTempEffectGeometryDecal_InitializeUsingSkinnedGeometryData passes its source skinData and NiGeometryData vertex/normal arrays here; NiDX9ShaderDeclaration_PackVertexStream is another caller. This is general renderer skinning code, not a blood-specific routine.
void __thiscall sub_72AF20(_DWORD *this, int a2, int a3, int a4, float *a5, float *a6, float *a7, float *a8, int a9)
{
  NiTransform *v9; // eax
  int v10; // ebx
  int v11; // edi
  unsigned int v12; // esi
  float *v13; // edx
  int v14; // edi
  unsigned int v15; // esi
  float *v16; // eax
  float *v17; // esi
  float *v18; // ecx
  _DWORD *v19; // ecx
  NiTransform *v20; // eax
  int v21; // esi
  unsigned int v22; // edx
  unsigned __int16 v23; // ax
  int v24; // ecx
  int v25; // eax
  double v26; // st2
  double v27; // st1
  int v28; // edi
  float *v29; // eax
  float *v30; // ecx
  int v31; // edx
  _DWORD *v32; // ecx
  NiTransform *v33; // eax
  int v34; // edi
  unsigned int v35; // esi
  unsigned __int16 v36; // ax
  int v37; // ecx
  int v38; // eax
  float *v39; // edi
  float *v40; // edx
  double v41; // st6
  float *v42; // edi
  int v43; // ecx
  float *k; // eax
  int *v45; // ebp
  unsigned int v46; // ebx
  NiTransform *v47; // eax
  int v48; // esi
  unsigned int m; // edx
  unsigned __int16 v50; // ax
  float *v51; // eax
  double v52; // st6
  double v53; // st7
  const NiTransform *v54; // [esp+0h] [ebp-1C8h]
  const NiTransform *v55; // [esp+0h] [ebp-1C8h]
  int v56; // [esp+14h] [ebp-1B4h]
  float *v57; // [esp+14h] [ebp-1B4h]
  float *v58; // [esp+14h] [ebp-1B4h]
  int v59; // [esp+18h] [ebp-1B0h]
  int v60; // [esp+18h] [ebp-1B0h]
  unsigned int v61; // [esp+18h] [ebp-1B0h]
  _DWORD *i; // [esp+1Ch] [ebp-1ACh]
  _DWORD *j; // [esp+1Ch] [ebp-1ACh]
  int v64; // [esp+20h] [ebp-1A8h]
  unsigned int v65; // [esp+20h] [ebp-1A8h]
  unsigned int v66; // [esp+20h] [ebp-1A8h]
  int v67; // [esp+24h] [ebp-1A4h]
  float v68; // [esp+24h] [ebp-1A4h]
  float v69; // [esp+28h] [ebp-1A0h]
  int v70; // [esp+28h] [ebp-1A0h]
  float v71; // [esp+28h] [ebp-1A0h]
  unsigned int v72; // [esp+2Ch] [ebp-19Ch]
  float v73; // [esp+30h] [ebp-198h]
  float v74; // [esp+30h] [ebp-198h]
  float v75; // [esp+30h] [ebp-198h]
  float v76; // [esp+34h] [ebp-194h]
  float v77; // [esp+34h] [ebp-194h]
  float v78; // [esp+34h] [ebp-194h]
  float v79; // [esp+38h] [ebp-190h]
  float v80; // [esp+38h] [ebp-190h]
  float v81; // [esp+38h] [ebp-190h]
  int v82; // [esp+3Ch] [ebp-18Ch]
  float *v83; // [esp+3Ch] [ebp-18Ch]
  float v84; // [esp+40h] [ebp-188h]
  float v85; // [esp+40h] [ebp-188h]
  float v86; // [esp+44h] [ebp-184h]
  float v87; // [esp+44h] [ebp-184h]
  float v88; // [esp+48h] [ebp-180h]
  float v89; // [esp+48h] [ebp-180h]
  float v91; // [esp+50h] [ebp-178h]
  float v92; // [esp+50h] [ebp-178h]
  float v93; // [esp+54h] [ebp-174h]
  float v94; // [esp+54h] [ebp-174h]
  float v95; // [esp+58h] [ebp-170h]
  float v96; // [esp+58h] [ebp-170h]
  float v97; // [esp+5Ch] [ebp-16Ch]
  float v98; // [esp+5Ch] [ebp-16Ch]
  float v99; // [esp+60h] [ebp-168h]
  float v100; // [esp+60h] [ebp-168h]
  float v101; // [esp+64h] [ebp-164h]
  float v102; // [esp+64h] [ebp-164h]
  NiTransform out; // [esp+68h] [ebp-160h] BYREF
  int v104; // [esp+9Ch] [ebp-12Ch] BYREF
  float v105; // [esp+A0h] [ebp-128h]
  float v106; // [esp+A4h] [ebp-124h]
  float v107; // [esp+A8h] [ebp-120h]
  float v108; // [esp+ACh] [ebp-11Ch]
  float v109; // [esp+B0h] [ebp-118h]
  float v110; // [esp+B4h] [ebp-114h]
  float v111; // [esp+B8h] [ebp-110h]
  float v112; // [esp+BCh] [ebp-10Ch]
  float *v113; // [esp+C0h] [ebp-108h]
  float v114; // [esp+C4h] [ebp-104h]
  float v115; // [esp+C8h] [ebp-100h]
  float v116; // [esp+CCh] [ebp-FCh]
  int v117; // [esp+D0h] [ebp-F8h]
  float v118; // [esp+D4h] [ebp-F4h]
  float v119; // [esp+D8h] [ebp-F0h]
  float v120; // [esp+DCh] [ebp-ECh]
  float v121; // [esp+E0h] [ebp-E8h]
  float v122; // [esp+E4h] [ebp-E4h]
  float v123; // [esp+E8h] [ebp-E0h]
  float v124; // [esp+ECh] [ebp-DCh]
  float v125; // [esp+F0h] [ebp-D8h]
  float v126; // [esp+F4h] [ebp-D4h]
  NiTransform parent; // [esp+F8h] [ebp-D0h] BYREF
  NiTransform local; // [esp+12Ch] [ebp-9Ch] BYREF
  NiTransform v129; // [esp+160h] [ebp-68h] BYREF
  NiTransform v130; // [esp+194h] [ebp-34h] BYREF

  sub_718A80((float *)(*(this + 4) + 0x64), &local); /*0x72af3e*/
  v9 = NiTransform_Compose((const NiTransform *)(*(this + 2) + 0xC), &out, &local); /*0x72af56*/
  v10 = *(this + 2); /*0x72af5b*/
  qmemcpy(&parent, v9, sizeof(parent)); /*0x72af6c*/
  v11 = *(_DWORD *)(v10 + 0x44); /*0x72af6e*/
  v12 = *(_DWORD *)(v10 + 0x40); /*0x72af71*/
  v64 = v11; /*0x72af7d*/
  v72 = v12; /*0x72af81*/
  if ( a3 && a6 ) /*0x72af94*/
  {
    v13 = a7; /*0x72af9a*/
    if ( a7 && a8 ) /*0x72afb1*/
    {
      v14 = a4; /*0x72afb7*/
      v15 = 0xC * a4; /*0x72afc3*/
      v82 = 0xC * a4 + a3; /*0x72afc8*/
      v67 = 0xC * a4 + v82; /*0x72afd6*/
      v16 = a5; /*0x72afda*/
      if ( a9 == 0xC ) /*0x72afe1*/
      {
        _memset((int)a5, 0, 0xC * a4); /*0x72afe7*/
        _memset((int)a6, 0, v15); /*0x72aff0*/
        _memset((int)a7, 0, v15); /*0x72b000*/
        _memset((int)a8, 0, v15); /*0x72b010*/
      }
      else
      {
        v17 = a8; /*0x72b01f*/
        v18 = a6; /*0x72b026*/
        if ( a4 ) /*0x72b028*/
        {
          v56 = a4; /*0x72b02e*/
          do /*0x72b0bb*/
          {
            *v16 = g_zeroNiPoint3.x; /*0x72b038*/
            v16[1] = g_zeroNiPoint3.y; /*0x72b040*/
            v16[2] = g_zeroNiPoint3.z; /*0x72b049*/
            *v18 = g_zeroNiPoint3.x; /*0x72b052*/
            v18[1] = g_zeroNiPoint3.y; /*0x72b05a*/
            v16 = (float *)((char *)v16 + a9); /*0x72b063*/
            v18[2] = g_zeroNiPoint3.z; /*0x72b06a*/
            v18 = (float *)((char *)v18 + a9); /*0x72b073*/
            *v13 = g_zeroNiPoint3.x; /*0x72b07a*/
            v13[1] = g_zeroNiPoint3.y; /*0x72b082*/
            v13[2] = g_zeroNiPoint3.z; /*0x72b08b*/
            v13 = (float *)((char *)v13 + a9); /*0x72b094*/
            *v17 = g_zeroNiPoint3.x; /*0x72b09b*/
            v17[1] = g_zeroNiPoint3.y; /*0x72b0a3*/
            v17[2] = g_zeroNiPoint3.z; /*0x72b0ac*/
            v17 = (float *)((char *)v17 + a9); /*0x72b0af*/
            --v56; /*0x72b0b6*/
          }
          while ( v56 ); /*0x72b0bb*/
          v14 = a4; /*0x72b0c1*/
        }
      }
      v59 = 0; /*0x72b0cd*/
      if ( v72 ) /*0x72b0d5*/
      {
        v19 = (_DWORD *)(v64 + 0x44); /*0x72b0df*/
        for ( i = (_DWORD *)(v64 + 0x44); ; v19 = i ) /*0x72b0e2*/
        {
          v65 = *((unsigned __int16 *)v19 + 2); /*0x72b0fc*/
          v54 = (const NiTransform *)(v19 + 0xFFFFFFEF); /*0x72b10d*/
          v20 = NiTransform_Compose(&parent, &v130, (const NiTransform *)(*(_DWORD *)(*(this + 5) + 4 * v59) + 0x64)); /*0x72b129*/
          qmemcpy(&out, NiTransform_Compose(v20, &v129, v54), sizeof(out)); /*0x72b144*/
          v21 = *i; /*0x72b14d*/
          v117 = *i; /*0x72b157*/
          NiMatrix3_ScaleTo((float *)&out, (float *)&v104, out.scale); /*0x72b166*/
          v22 = 0; /*0x72b16b*/
          if ( v65 ) /*0x72b171*/
          {
            while ( 1 ) /*0x72b187*/
            {
              v23 = *(_WORD *)(v21 + 8 * v22); /*0x72b187*/
              v69 = *(float *)(v21 + 8 * v22 + 4); /*0x72b18f*/
              v24 = a9 * v23; /*0x72b1a6*/
              v25 = 0xC * v23; /*0x72b1b3*/
              v57 = (float *)(v25 + a2 + 8); /*0x72b1b9*/
              v118 = v105 * *(float *)(v25 + a2 + 4) + *(float *)&v104 * *(float *)(v25 + a2) + v106 * *v57 + out.pos.x; /*0x72b1df*/
              v119 = v108 * *(float *)(v25 + a2 + 4) + v107 * *(float *)(v25 + a2) + v109 * *v57 + out.pos.y; /*0x72b20f*/
              v58 = (float *)(v82 + v25 + 8); /*0x72b240*/
              v120 = v111 * *(float *)(v25 + a2 + 4) /*0x72b24d*/
                   + v110 * *(float *)(v25 + a2)
                   + v112 * *(float *)(v25 + a2 + 8)
                   + out.pos.z;
              v124 = out.rot.data[0][0] * *(float *)(v25 + a3) /*0x72b277*/
                   + out.rot.data[0][1] * *(float *)(v25 + a3 + 4)
                   + out.rot.data[0][2] * *(float *)(v25 + a3 + 8);
              v125 = out.rot.data[1][0] * *(float *)(v25 + a3) /*0x72b29f*/
                   + out.rot.data[1][1] * *(float *)(v25 + a3 + 4)
                   + out.rot.data[1][2] * *(float *)(v25 + a3 + 8);
              v126 = out.rot.data[2][0] * *(float *)(v25 + a3) /*0x72b2c7*/
                   + out.rot.data[2][1] * *(float *)(v25 + a3 + 4)
                   + out.rot.data[2][2] * *(float *)(v25 + a3 + 8);
              v97 = out.rot.data[0][1] * *(float *)(v82 + v25 + 4) /*0x72b2e1*/
                  + out.rot.data[0][0] * *(float *)(v82 + v25)
                  + out.rot.data[0][2] * *v58;
              v99 = out.rot.data[1][1] * *(float *)(v82 + v25 + 4) /*0x72b2fa*/
                  + out.rot.data[1][0] * *(float *)(v82 + v25)
                  + out.rot.data[1][2] * *v58;
              v26 = out.rot.data[2][1] * *(float *)(v82 + v25 + 4) + out.rot.data[2][0] * *(float *)(v82 + v25); /*0x72b312*/
              v27 = out.rot.data[2][2] * *v58; /*0x72b31b*/
              v113 = (float *)(v67 + v25 + 8); /*0x72b32f*/
              v101 = v26 + v27; /*0x72b33a*/
              v91 = out.rot.data[0][2] * *v113 /*0x72b360*/
                  + out.rot.data[0][1] * *(float *)(v67 + v25 + 4)
                  + out.rot.data[0][0] * *(float *)(v67 + v25);
              v93 = out.rot.data[1][1] * *(float *)(v67 + v25 + 4) /*0x72b37c*/
                  + out.rot.data[1][0] * *(float *)(v67 + v25)
                  + out.rot.data[1][2] * *v113;
              v95 = out.rot.data[2][0] * *(float *)(v67 + v25) /*0x72b3a8*/
                  + out.rot.data[2][1] * *(float *)(v67 + v25 + 4)
                  + out.rot.data[2][2] * *v113;
              v114 = v118 * v69; /*0x72b3bd*/
              v115 = v119 * v69; /*0x72b3cd*/
              v116 = v120 * v69; /*0x72b3dd*/
              *(float *)((char *)a5 + v24) = v114 + *(float *)((char *)a5 + v24); /*0x72b3ee*/
              ++v22; /*0x72b3f1*/
              *(float *)((char *)a5 + v24 + 4) = v115 + *(float *)((char *)a5 + v24 + 4); /*0x72b403*/
              *(float *)((char *)a5 + v24 + 8) = *(float *)((char *)a5 + v24 + 8) + v116; /*0x72b414*/
              v121 = v124 * v69; /*0x72b426*/
              v122 = v125 * v69; /*0x72b436*/
              v123 = v126 * v69; /*0x72b446*/
              *(float *)((char *)a6 + v24) = v121 + *(float *)((char *)a6 + v24); /*0x72b457*/
              *(float *)((char *)a6 + v24 + 4) = v122 + *(float *)((char *)a6 + v24 + 4); /*0x72b465*/
              *(float *)((char *)a6 + v24 + 8) = v123 + *(float *)((char *)a6 + v24 + 8); /*0x72b474*/
              v84 = v97 * v69; /*0x72b47e*/
              v86 = v99 * v69; /*0x72b488*/
              v88 = v101 * v69; /*0x72b492*/
              *(float *)((char *)a7 + v24) = *(float *)((char *)a7 + v24) + v84; /*0x72b49d*/
              *(float *)((char *)a7 + v24 + 4) = v86 + *(float *)((char *)a7 + v24 + 4); /*0x72b4a8*/
              *(float *)((char *)a7 + v24 + 8) = v88 + *(float *)((char *)a7 + v24 + 8); /*0x72b4b6*/
              v73 = v91 * v69; /*0x72b4c5*/
              v76 = v93 * v69; /*0x72b4cf*/
              v79 = v69 * v95; /*0x72b4d7*/
              *(float *)((char *)a8 + v24) = *(float *)((char *)a8 + v24) + v73; /*0x72b4e2*/
              *(float *)((char *)a8 + v24 + 4) = v76 + *(float *)((char *)a8 + v24 + 4); /*0x72b4ed*/
              *(float *)((char *)a8 + v24 + 8) = v79 + *(float *)((char *)a8 + v24 + 8); /*0x72b4fb*/
              if ( v22 >= v65 ) /*0x72b4fd*/
                break; /*0x72b4fd*/
              v21 = v117; /*0x72b180*/
            }
          }
          i += 0x13; /*0x72b507*/
          if ( ++v59 >= v72 ) /*0x72b517*/
            break; /*0x72b517*/
        }
        v14 = a4; /*0x72b51d*/
      }
      NiPoint3_NormalizeStridedArray(a6, v14, a9); /*0x72b52e*/
      NiPoint3_NormalizeStridedArray(a7, v14, a9); /*0x72b53d*/
      NiPoint3_NormalizeStridedArray(a8, v14, a9); /*0x72b54c*/
    }
    else
    {
      v28 = a9; /*0x72b561*/
      v29 = a5; /*0x72b56b*/
      if ( a9 == 0xC ) /*0x72b572*/
      {
        _memset((int)a5, 0, 0xC * a4); /*0x72b586*/
        _memset((int)a6, 0, 0xC * a4); /*0x72b58f*/
      }
      else
      {
        v30 = a6; /*0x72b5a1*/
        if ( a4 ) /*0x72b5a3*/
        {
          v31 = a4; /*0x72b5a5*/
          do /*0x72b5eb*/
          {
            *v29 = g_zeroNiPoint3.x; /*0x72b5b6*/
            v29[1] = g_zeroNiPoint3.y; /*0x72b5be*/
            v29[2] = g_zeroNiPoint3.z; /*0x72b5c7*/
            *v30 = g_zeroNiPoint3.x; /*0x72b5d0*/
            v30[1] = g_zeroNiPoint3.y; /*0x72b5d8*/
            v30[2] = g_zeroNiPoint3.z; /*0x72b5e1*/
            v29 = (float *)((char *)v29 + a9); /*0x72b5e4*/
            v30 = (float *)((char *)v30 + a9); /*0x72b5e6*/
            --v31; /*0x72b5e8*/
          }
          while ( v31 ); /*0x72b5eb*/
        }
      }
      v60 = 0; /*0x72b5f2*/
      if ( v12 ) /*0x72b5fa*/
      {
        v32 = (_DWORD *)(v64 + 0x44); /*0x72b604*/
        for ( j = (_DWORD *)(v64 + 0x44); ; v32 = j ) /*0x72b607*/
        {
          v66 = *((unsigned __int16 *)v32 + 2); /*0x72b61c*/
          v55 = (const NiTransform *)(v32 + 0xFFFFFFEF); /*0x72b62d*/
          v33 = NiTransform_Compose(&parent, &v129, (const NiTransform *)(*(_DWORD *)(*(this + 5) + 4 * v60) + 0x64)); /*0x72b649*/
          qmemcpy(&out, NiTransform_Compose(v33, &v130, v55), sizeof(out)); /*0x72b664*/
          v34 = *j; /*0x72b66d*/
          v70 = *j; /*0x72b677*/
          NiMatrix3_ScaleTo((float *)&out, (float *)&v104, out.scale); /*0x72b683*/
          v35 = 0; /*0x72b688*/
          if ( v66 ) /*0x72b68e*/
          {
            while ( 1 ) /*0x72b6a4*/
            {
              v36 = *(_WORD *)(v34 + 8 * v35); /*0x72b6a4*/
              v68 = *(float *)(v34 + 8 * v35 + 4); /*0x72b6ac*/
              v37 = a9 * v36; /*0x72b6c3*/
              v38 = 0xC * v36; /*0x72b6d0*/
              v39 = (float *)(v38 + a2 + 8); /*0x72b6d2*/
              v74 = v105 * *(float *)(v38 + a2 + 4) + *(float *)&v104 * *(float *)(v38 + a2) + v106 * *v39 + out.pos.x; /*0x72b6f8*/
              v77 = v108 * *(float *)(v38 + a2 + 4) + v107 * *(float *)(v38 + a2) + v109 * *v39 + out.pos.y; /*0x72b725*/
              v40 = (float *)(v38 + a3 + 4); /*0x72b73e*/
              v41 = v112 * *v39; /*0x72b74b*/
              v42 = (float *)(v38 + a3 + 8); /*0x72b74d*/
              v80 = v111 * *(float *)(v38 + a2 + 4) + v110 * *(float *)(v38 + a2) + v41 + out.pos.z; /*0x72b75a*/
              v85 = out.rot.data[0][0] * *(float *)(v38 + a3) + out.rot.data[0][1] * *v40 + out.rot.data[0][2] * *v42; /*0x72b775*/
              v87 = out.rot.data[1][0] * *(float *)(v38 + a3) + out.rot.data[1][1] * *v40 + out.rot.data[1][2] * *v42; /*0x72b790*/
              v89 = out.rot.data[2][0] * *(float *)(v38 + a3) + out.rot.data[2][1] * *v40 + out.rot.data[2][2] * *v42; /*0x72b7b1*/
              v92 = v74 * v68; /*0x72b7c3*/
              v94 = v77 * v68; /*0x72b7cd*/
              v96 = v80 * v68; /*0x72b7de*/
              ++v35; /*0x72b7e6*/
              *(float *)((char *)a5 + v37) = v92 + *(float *)((char *)a5 + v37); /*0x72b7f0*/
              *(float *)((char *)a5 + v37 + 4) = v94 + *(float *)((char *)a5 + v37 + 4); /*0x72b7fb*/
              *(float *)((char *)a5 + v37 + 8) = v96 + *(float *)((char *)a5 + v37 + 8); /*0x72b809*/
              v98 = v85 * v68; /*0x72b811*/
              v100 = v87 * v68; /*0x72b81b*/
              v102 = v68 * v89; /*0x72b823*/
              *(float *)((char *)a6 + v37) = v98 + *(float *)((char *)a6 + v37); /*0x72b82e*/
              *(float *)((char *)a6 + v37 + 4) = *(float *)((char *)a6 + v37 + 4) + v100; /*0x72b839*/
              *(float *)((char *)a6 + v37 + 8) = v102 + *(float *)((char *)a6 + v37 + 8); /*0x72b847*/
              if ( v35 >= v66 ) /*0x72b849*/
                break; /*0x72b849*/
              v34 = v70; /*0x72b6a0*/
            }
          }
          j += 0x13; /*0x72b853*/
          if ( ++v60 >= v72 ) /*0x72b863*/
            break; /*0x72b863*/
        }
        v28 = a9; /*0x72b869*/
      }
      NiPoint3_NormalizeStridedArray(a6, a4, v28); /*0x72b87a*/
    }
  }
  else
  {
    if ( a9 == 0xC ) /*0x72b899*/
    {
      _memset((int)a5, 0, 0xC * a4); /*0x72b8b4*/
    }
    else
    {
      v43 = a4; /*0x72b8be*/
      for ( k = a5; v43; --v43 ) /*0x72b8ce*/
      {
        *k = g_zeroNiPoint3.x; /*0x72b8d6*/
        k[1] = g_zeroNiPoint3.y; /*0x72b8de*/
        k[2] = g_zeroNiPoint3.z; /*0x72b8e7*/
        k = (float *)((char *)k + a9); /*0x72b8ea*/
      }
    }
    v61 = 0; /*0x72b8f3*/
    if ( v12 ) /*0x72b8fb*/
    {
      v45 = (int *)(v11 + 0x44); /*0x72b901*/
      do /*0x72ba88*/
      {
        v46 = *((unsigned __int16 *)v45 + 2); /*0x72b912*/
        v47 = NiTransform_Compose(&parent, &v129, (const NiTransform *)(*(_DWORD *)(*(this + 5) + 4 * v61) + 0x64)); /*0x72b935*/
        qmemcpy(&out, NiTransform_Compose(v47, &v130, (const NiTransform *)(v45 + 0xFFFFFFEF)), sizeof(out)); /*0x72b94c*/
        NiMatrix3_ScaleTo((float *)&out, (float *)&v104, out.scale); /*0x72b965*/
        v48 = *v45; /*0x72b96a*/
        for ( m = 0; m < v46; ++m ) /*0x72b971*/
        {
          v50 = *(_WORD *)(v48 + 8 * m); /*0x72b980*/
          v71 = *(float *)(v48 + 8 * m + 4); /*0x72b988*/
          v83 = (float *)((char *)a5 + a9 * v50); /*0x72b9aa*/
          v51 = (float *)(a2 + 0xC * v50); /*0x72b9b5*/
          v75 = v105 * v51[1] + *(float *)&v104 * *v51 + v106 * v51[2] + out.pos.x; /*0x72b9d9*/
          v78 = v108 * v51[1] + v107 * *v51 + v109 * v51[2] + out.pos.y; /*0x72ba05*/
          v81 = v111 * v51[1] + v110 * *v51 + v112 * v51[2] + out.pos.z; /*0x72ba31*/
          v52 = v78 * v71 + v83[1]; /*0x72ba5a*/
          *v83 = v75 * v71 + *v83; /*0x72ba5c*/
          v53 = v81 * v71 + v83[2]; /*0x72ba63*/
          v83[1] = v52; /*0x72ba65*/
          v83[2] = v53; /*0x72ba68*/
        }
        v45 += 0x13; /*0x72ba7d*/
        ++v61; /*0x72ba84*/
      }
      while ( v61 < v72 ); /*0x72ba88*/
    }
  }
}
