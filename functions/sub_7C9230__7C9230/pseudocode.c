// Oblivion ShadowLight per-geometry constant setup. For mode-5 caster selectors 6..9, native PointLightPos0 c16 comes from B44FD8; c16.w is the projected-depth divisor, taken from the current light range/control and divided by object scale for rigid geometry. The positive B44EE4 path supplies the alternate depth-origin variant.
int __fastcall sub_7C9230(
        int a1,
        int a2,
        float a3,
        const void **a4,
        int a5,
        int a6,
        int a7,
        int a8,
        NiTransform *a9,
        int a10)
{
  int v10; // eax
  NiTransform *v12; // esi
  double v13; // st7
  bool v14; // zf
  int v15; // edi
  _DWORD **v16; // ecx
  _DWORD *LightRef; // eax
  float v18; // esi
  bool v20; // c0
  double v21; // st7
  int v22; // esi
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  float v26; // edx
  double v27; // st7
  double v28; // st7
  float v29; // ecx
  double v30; // st7
  float v31; // edx
  float *v32; // eax
  int i; // esi
  double v34; // st7
  double v35; // st6
  int v36; // eax
  int v37; // eax
  _DWORD *v38; // esi
  float v39; // edx
  float v40; // eax
  float v41; // ecx
  double scale; // st7
  IDirect3DDevice9 *device; // ebx
  int *v44; // edx
  int v45; // eax
  double v46; // st7
  float *v47; // ebx
  int v48; // eax
  double v49; // st5
  double v50; // st6
  int v51; // edi
  float *v52; // esi
  float v53; // eax
  float v54; // ecx
  float v55; // ecx
  float v56; // edx
  char *v57; // eax
  char *v58; // ecx
  char *v59; // edx
  IDirect3DDevice9 *v60; // ecx
  char *v61; // edi
  const float *v62; // edi
  int j; // esi
  bool v64; // [esp+5Bh] [ebp-229h]
  float v65; // [esp+5Ch] [ebp-228h] BYREF
  float v66; // [esp+60h] [ebp-224h]
  float v67; // [esp+64h] [ebp-220h] BYREF
  float v68; // [esp+68h] [ebp-21Ch]
  float v69; // [esp+6Ch] [ebp-218h]
  float v70; // [esp+70h] [ebp-214h]
  float v71; // [esp+74h] [ebp-210h] BYREF
  float v72; // [esp+78h] [ebp-20Ch]
  float v73; // [esp+7Ch] [ebp-208h]
  float v74; // [esp+80h] [ebp-204h]
  float v75[16]; // [esp+84h] [ebp-200h] BYREF
  _BYTE v76[64]; // [esp+C4h] [ebp-1C0h] BYREF
  float v77; // [esp+104h] [ebp-180h] BYREF
  float v78; // [esp+108h] [ebp-17Ch]
  float v79; // [esp+10Ch] [ebp-178h]
  float v80; // [esp+110h] [ebp-174h]
  float v81; // [esp+114h] [ebp-170h]
  float v82; // [esp+118h] [ebp-16Ch]
  float v83; // [esp+11Ch] [ebp-168h]
  float v84; // [esp+120h] [ebp-164h]
  float v85; // [esp+124h] [ebp-160h]
  float v86; // [esp+128h] [ebp-15Ch]
  float v87; // [esp+12Ch] [ebp-158h]
  float v88; // [esp+130h] [ebp-154h]
  float v89; // [esp+134h] [ebp-150h]
  float v90; // [esp+138h] [ebp-14Ch]
  float v91; // [esp+13Ch] [ebp-148h]
  float v92; // [esp+140h] [ebp-144h]
  int v93; // [esp+144h] [ebp-140h] BYREF
  float v94; // [esp+148h] [ebp-13Ch]
  float v95; // [esp+14Ch] [ebp-138h]
  float v96; // [esp+150h] [ebp-134h]
  float v97; // [esp+154h] [ebp-130h]
  float v98; // [esp+158h] [ebp-12Ch]
  float v99; // [esp+15Ch] [ebp-128h]
  float v100; // [esp+160h] [ebp-124h]
  float v101; // [esp+164h] [ebp-120h]
  float v102; // [esp+168h] [ebp-11Ch]
  float v103; // [esp+16Ch] [ebp-118h]
  float v104; // [esp+170h] [ebp-114h]
  float v105; // [esp+174h] [ebp-110h]
  float v106; // [esp+178h] [ebp-10Ch]
  float v107; // [esp+17Ch] [ebp-108h]
  float v108; // [esp+180h] [ebp-104h]
  char *v109; // [esp+184h] [ebp-100h]
  int v110; // [esp+188h] [ebp-FCh]
  char *v111; // [esp+18Ch] [ebp-F8h]
  IDirect3DDevice9 *v112; // [esp+190h] [ebp-F4h]
  float v113[4]; // [esp+194h] [ebp-F0h] BYREF
  _BYTE v114[64]; // [esp+1A4h] [ebp-E0h] BYREF
  char v115[96]; // [esp+1E4h] [ebp-A0h] BYREF
  _BYTE v116[64]; // [esp+244h] [ebp-40h] BYREF

  v10 = *(_DWORD *)(a7 + 0x18); /*0x7c923f*/
  v66 = *(float *)&a1; /*0x7c9249*/
  v64 = 0; /*0x7c924d*/
  if ( v10 && (v64 = (*(_BYTE *)(v10 + 0x1C) & 2) != 0, (*(_BYTE *)(v10 + 0x1C) & 2) != 0) ) /*0x7c9261*/
  {
    if ( !a5 ) /*0x7c9268*/
      return 0; /*0x7c9268*/
    v12 = a9; /*0x7c9272*/
    if ( !*(_DWORD *)(a1 + 0x34) ) /*0x7c926e*/
      NiDX9Renderer::CalculateBoneMatrixes(unk_B43104, (NiSkinInstance *)a4, a9, 0, 3, 1); /*0x7c9288*/
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x18) + 0x30))( /*0x7c929a*/
      *(_DWORD *)(a1 + 0x18),
      *(unsigned __int16 *)(a5 + 0x24));
  }
  else
  {
    v12 = a9; /*0x7c929e*/
  }
  NiDX9Renderer_SetModelTransform(*(NiDX9Renderer **)(a1 + 0x14), (float *)v12, 0); /*0x7c92a7*/
  v13 = flt_B44EE4; /*0x7c92ac*/
  v14 = *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] == 5; /*0x7c92b2*/
  v15 = LODWORD(unk_B42E90); /*0x7c92bc*/
  v65 = unk_B42E90; /*0x7c92c2*/
  if ( v14 && 0.0 == v13 ) /*0x7c92d5*/
  {
    v16 = *(_DWORD ***)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] + 0xC); /*0x7c92de*/
    if ( *v16 ) /*0x7c92e3*/
    {
      LightRef = ShadowSceneLight_GetLightRef(*v16, &v65); /*0x7c92f5*/
      v18 = v65; /*0x7c92fc*/
      v66 = *(float *)(*LightRef + 0xF8); /*0x7c9308*/
      if ( v65 != 0.0 && !InterlockedDecrement((volatile LONG *)(LODWORD(v65) + 4)) && v18 != 0.0 ) /*0x7c931e*/
        (**(void (__thiscall ***)(_DWORD, int))LODWORD(v18))(LODWORD(v18), 1); /*0x7c9328*/
      if ( !a4 ) /*0x7c932e*/
        v66 = v66 / a9->scale; /*0x7c933a*/
      ShadowLightPointLightPos0DepthRange = v66; /*0x7c9344*/
      return 0; /*0x7c9350*/
    }
    return 0; /*0x7c9f1f*/
  }
  if ( (unsigned int)(v15 - 6) <= 3 )
  {
    v20 = v13 > 0.0; /*0x7c935f*/
    v21 = 0.0; /*0x7c9363*/
    if ( !v20 ) /*0x7c9368*/
    {
      v67 = 0.0; /*0x7c9456*/
      v68 = 0.0; /*0x7c945e*/
      v69 = 0.0; /*0x7c9466*/
      v30 = OB_ShaderConstantStorage_010201A0[0x1E5]; /*0x7c946e*/
      ShadowLightPointLightPos0Constant = 0.0; /*0x7c9474*/
      v70 = v30; /*0x7c947a*/
      v31 = v70; /*0x7c947e*/
      flt_B44FDC = 0.0; /*0x7c9482*/
      flt_B44FE0 = 0.0; /*0x7c9487*/
      ShadowLightPointLightPos0DepthRange = v31; /*0x7c948d*/
      return 0; /*0x7c949b*/
    }
    v22 = *(_DWORD *)(a7 + 0x18); /*0x7c9371*/
    if ( v22 ) /*0x7c9376*/
    {
      if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v22 + 0x54))(*(_DWORD *)(a7 + 0x18)) >= 1 /*0x7c9394*/
        && (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 0x54))(v22) <= 0xA )
      {
        v21 = 0.0; /*0x7c9396*/
        v23 = 1; /*0x7c9398*/
        goto LABEL_26; /*0x7c939d*/
      }
      v21 = 0.0; /*0x7c939f*/
    }
    v23 = 0; /*0x7c93a1*/
LABEL_26:
    v24 = 0; /*0x7c93a3*/
    if ( (v23 != 0 ? v22 : 0) == 0 )
    {
LABEL_34:
      v65 = *(float *)(v24 + 0xA0); /*0x7c93e4*/
      v66 = flt_B44EE4; /*0x7c93f8*/
      if ( !a4 ) /*0x7c93fc*/
        v66 = v66 / a9->scale; /*0x7c9408*/
      v67 = v21; /*0x7c940c*/
      v68 = v21; /*0x7c9414*/
      v26 = v68; /*0x7c9418*/
      v27 = v65; /*0x7c941c*/
      ShadowLightPointLightPos0Constant = v67; /*0x7c9420*/
      v69 = v27; /*0x7c9426*/
      v28 = v66; /*0x7c942e*/
      flt_B44FE0 = v69; /*0x7c9432*/
      v70 = v28; /*0x7c9437*/
      v29 = v70; /*0x7c943b*/
      flt_B44FDC = v26; /*0x7c943f*/
      ShadowLightPointLightPos0DepthRange = v29; /*0x7c9445*/
      return 0; /*0x7c9453*/
    }
    if ( v22 )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 0x54))(v22) >= 5
        && (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 0x54))(v22) <= 0xA )
      {
        v21 = 0.0; /*0x7c93cf*/
        v25 = 1; /*0x7c93d1*/
LABEL_33:
        v24 = v25 != 0 ? v22 : 0;
        goto LABEL_34; /*0x7c93e2*/
      }
      v21 = 0.0; /*0x7c93d8*/
    }
    v25 = 0; /*0x7c93da*/
    goto LABEL_33; /*0x7c93da*/
  }
  v107 = 0.0; /*0x7c94a5*/
  v106 = 0.0; /*0x7c94ac*/
  v105 = 0.0; /*0x7c94b3*/
  v104 = 0.0; /*0x7c94ba*/
  v102 = 0.0; /*0x7c94c1*/
  v101 = 0.0; /*0x7c94c8*/
  v100 = 0.0; /*0x7c94cf*/
  v99 = 0.0; /*0x7c94d6*/
  v97 = 0.0; /*0x7c94dd*/
  v96 = 0.0; /*0x7c94e4*/
  v95 = 0.0; /*0x7c94eb*/
  v94 = 0.0; /*0x7c94f2*/
  v108 = 1.0; /*0x7c94fb*/
  v103 = 1.0; /*0x7c9502*/
  v98 = 1.0; /*0x7c9509*/
  *(float *)&v93 = 1.0; /*0x7c9510*/
  v92 = 1.0; /*0x7c9517*/
  v87 = 1.0; /*0x7c951e*/
  v82 = 1.0; /*0x7c9525*/
  v77 = 1.0; /*0x7c952c*/
  v91 = 0.0; /*0x7c9533*/
  v90 = 0.0; /*0x7c953a*/
  v89 = 0.0; /*0x7c9541*/
  v88 = 0.0; /*0x7c9548*/
  v86 = 0.0; /*0x7c954f*/
  v85 = 0.0; /*0x7c9556*/
  v84 = 0.0; /*0x7c955d*/
  v83 = 0.0; /*0x7c9564*/
  v81 = 0.0; /*0x7c956b*/
  v80 = 0.0; /*0x7c9572*/
  v79 = 0.0; /*0x7c9579*/
  v78 = 0.0; /*0x7c9580*/
  if ( v64 && a4 ) /*0x7c9592*/
  {
    v32 = (float *)a4[0xA]; /*0x7c9598*/
    v77 = *v32; /*0x7c95a4*/
    v78 = v32[1]; /*0x7c95ae*/
    v79 = v32[2]; /*0x7c95b8*/
    v81 = v32[4]; /*0x7c95c2*/
    v82 = v32[5]; /*0x7c95cc*/
    v83 = v32[6]; /*0x7c95d6*/
    v85 = v32[8]; /*0x7c95e0*/
    v86 = v32[9]; /*0x7c95ea*/
    v87 = v32[0xA]; /*0x7c95f4*/
    v89 = v32[0xC] + MEMORY[0xB3F92C]; /*0x7c9604*/
    v90 = v32[0xD] + unk_B3F930; /*0x7c9614*/
    v91 = v32[0xE] + unk_B3F934; /*0x7c9624*/
    v80 = v32[3]; /*0x7c962e*/
    v84 = v32[7]; /*0x7c9638*/
    v88 = v32[0xB]; /*0x7c9642*/
    v92 = v32[0xF]; /*0x7c9654*/
    D3DXMatrixInverse_0((int)&v93, 0, (int)&v77); /*0x7c965e*/
  }
  else
  {
    sub_718A80((float *)v12, (NiTransform *)v76); /*0x7c9672*/
    *(float *)&v93 = *(float *)v76 * *(float *)&v76[0x30]; /*0x7c968b*/
    v94 = *(float *)&v76[0xC] * *(float *)&v76[0x30]; /*0x7c969b*/
    v95 = *(float *)&v76[0x18] * *(float *)&v76[0x30]; /*0x7c96ab*/
    v97 = *(float *)&v76[4] * *(float *)&v76[0x30]; /*0x7c96bb*/
    v98 = *(float *)&v76[0x10] * *(float *)&v76[0x30]; /*0x7c96cb*/
    v99 = *(float *)&v76[0x1C] * *(float *)&v76[0x30]; /*0x7c96db*/
    v101 = *(float *)&v76[8] * *(float *)&v76[0x30]; /*0x7c96eb*/
    v102 = *(float *)&v76[0x14] * *(float *)&v76[0x30]; /*0x7c96fb*/
    v103 = *(float *)&v76[0x30] * *(float *)&v76[0x20]; /*0x7c9709*/
    v105 = *(float *)&v76[0x24]; /*0x7c9717*/
    v106 = *(float *)&v76[0x28]; /*0x7c9725*/
    v107 = *(float *)&v76[0x2C]; /*0x7c9733*/
    v108 = 1.0; /*0x7c973c*/
  }
  if ( *(_BYTE *)(dword_B45030 + 8) ) /*0x7c9748*/
  {
    for ( i = 0; i < 0x20; *(float *)(i + 0xB454D4) = 0.0 ) /*0x7c974e*/
    {
      v71 = -*(float *)(i + 0xB465A8); /*0x7c9760*/
      v72 = -*(float *)(i + 0xB465AC); /*0x7c9775*/
      v73 = -*(float *)(i + 0xB465B0); /*0x7c9782*/
      D3DXVec3TransformNormal_0((int)&v67, (int)&v71, (int)&v93); /*0x7c9786*/
      D3DXVec3Normalize_0((int)&v71, (int)&v67); /*0x7c9795*/
      *(float *)(i + 0xB454D8) = v71; /*0x7c979e*/
      i += 0x10; /*0x7c97a4*/
      *(float *)(i + 0xB454CC) = v72; /*0x7c97ae*/
      *(float *)(i + 0xB454D0) = v73; /*0x7c97b8*/
    }
    v12 = a9; /*0x7c97c8*/
  }
  sub_7C9140((int)&v93, v12->scale, v15, (int)a4); /*0x7c97e1*/
  if ( v15 < 0x180 || v15 > 0x187 ) /*0x7c97f8*/
  {
    v67 = OB_ShaderConstantStorage_010201A0[0x211]; /*0x7c98cd*/
    v68 = OB_ShaderConstantStorage_010201A0[0x212]; /*0x7c98dc*/
    v69 = OB_ShaderConstantStorage_010201A0[0x213]; /*0x7c98ec*/
    D3DXVec3TransformCoord_0((int)&v71, (int)&v67, (int)&v93); /*0x7c98f0*/
    unk_B44F08 = v71; /*0x7c98f9*/
    unk_B44F0C = v72; /*0x7c9903*/
    unk_B44F10 = v73; /*0x7c990d*/
    unk_B44F14 = 1.0; /*0x7c9915*/
    v35 = 1.0; /*0x7c991d*/
    v34 = 0.0; /*0x7c991d*/
  }
  else
  {
    v71 = OB_ShaderConstantStorage_010201A0[0x211]; /*0x7c9808*/
    v72 = OB_ShaderConstantStorage_010201A0[0x212]; /*0x7c9812*/
    v73 = OB_ShaderConstantStorage_010201A0[0x213]; /*0x7c981c*/
    v67 = v71 - v12->pos.x; /*0x7c9827*/
    v68 = v72 - v12->pos.y; /*0x7c9832*/
    v69 = v73 - v12->pos.z; /*0x7c983d*/
    Vector3_NormalizeInPlace(&v67); /*0x7c9841*/
    unk_B44F18 = v67; /*0x7c984c*/
    unk_B44F1C = v68; /*0x7c9856*/
    unk_B44F20 = v69; /*0x7c9860*/
    v34 = 0.0; /*0x7c9866*/
    unk_B44F24 = 0.0; /*0x7c9868*/
    v67 = v71 - MEMORY[0xB3F92C]; /*0x7c9878*/
    v68 = v72 - unk_B3F930; /*0x7c9886*/
    v69 = v73 - unk_B3F934; /*0x7c9894*/
    unk_B44F08 = v67; /*0x7c989c*/
    unk_B44F0C = v68; /*0x7c98a6*/
    unk_B44F10 = v69; /*0x7c98b0*/
    v35 = 1.0; /*0x7c98b6*/
    unk_B44F14 = 1.0; /*0x7c98b8*/
  }
  if ( *(_BYTE *)(dword_B4501C + 8) ) /*0x7c9925*/
  {
    v36 = *(_DWORD *)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] + 0xC); /*0x7c9934*/
    if ( !v36 || *(_BYTE *)(*(_DWORD *)v36 + 0xF5) || v15 >= 0x180 && v15 <= 0x187 || v15 == 0x77 || v15 == 0x85 )// ShadowSceneLight +0xF5 selects the special-light shader-matrix branch; zero continues ordinary selector-specific handling. /*0x7c9971*/
    {
      qmemcpy(v114, (const void *)(*(_DWORD *)(a1 + 0x14) + 0x940), sizeof(v114)); /*0x7c9afd*/
      D3DXMatrixTranspose_0((int)&unk_B45498, (int)v114); /*0x7c9b0c*/
    }
    else
    {
      *(float *)&v76[0x38] = v34; /*0x7c997e*/
      *(float *)&v76[0x34] = *(float *)&v76[0x38]; /*0x7c9985*/
      *(float *)&v76[0x30] = *(float *)&v76[0x38]; /*0x7c998c*/
      *(float *)&v76[0x2C] = *(float *)&v76[0x38]; /*0x7c9993*/
      *(float *)&v76[0x24] = *(float *)&v76[0x38]; /*0x7c999a*/
      *(float *)&v76[0x20] = *(float *)&v76[0x38]; /*0x7c99a1*/
      *(float *)&v76[0x1C] = *(float *)&v76[0x38]; /*0x7c99a8*/
      *(float *)&v76[0x18] = *(float *)&v76[0x38]; /*0x7c99af*/
      *(float *)&v76[0x10] = *(float *)&v76[0x38]; /*0x7c99b6*/
      *(float *)&v76[0xC] = *(float *)&v76[0x38]; /*0x7c99bd*/
      *(float *)&v76[8] = *(float *)&v76[0x38]; /*0x7c99c4*/
      *(float *)&v76[4] = *(float *)&v76[0x38]; /*0x7c99cb*/
      v75[0xE] = *(float *)&v76[0x38]; /*0x7c99d2*/
      v75[0xD] = *(float *)&v76[0x38]; /*0x7c99d6*/
      v75[0xC] = *(float *)&v76[0x38]; /*0x7c99da*/
      v75[0xB] = *(float *)&v76[0x38]; /*0x7c99de*/
      v75[9] = *(float *)&v76[0x38]; /*0x7c99e2*/
      v75[8] = *(float *)&v76[0x38]; /*0x7c99e6*/
      v75[7] = *(float *)&v76[0x38]; /*0x7c99ea*/
      v75[6] = *(float *)&v76[0x38]; /*0x7c99ee*/
      v75[4] = *(float *)&v76[0x38]; /*0x7c99f2*/
      v75[3] = *(float *)&v76[0x38]; /*0x7c99f6*/
      v75[2] = *(float *)&v76[0x38]; /*0x7c99fa*/
      v75[1] = *(float *)&v76[0x38]; /*0x7c99fe*/
      *(float *)&v76[0x3C] = v35; /*0x7c9a02*/
      *(float *)&v76[0x28] = *(float *)&v76[0x3C]; /*0x7c9a09*/
      *(float *)&v76[0x14] = *(float *)&v76[0x3C]; /*0x7c9a10*/
      *(float *)v76 = *(float *)&v76[0x3C]; /*0x7c9a17*/
      v75[0xF] = *(float *)&v76[0x3C]; /*0x7c9a1e*/
      v75[0xA] = *(float *)&v76[0x3C]; /*0x7c9a22*/
      v75[5] = *(float *)&v76[0x3C]; /*0x7c9a26*/
      v75[0] = *(float *)&v76[0x3C]; /*0x7c9a2a*/
      if ( a4 ) /*0x7c9a2e*/
        qmemcpy(v76, a4[0xA], sizeof(v76)); /*0x7c9a3f*/
      else
        sub_7640A0((float *)v76, (float *)v12); /*0x7c9a4c*/
      v37 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F]; /*0x7c9a5a*/
      *(float *)&v76[0x30] = MEMORY[0xB3F92C] + *(float *)&v76[0x30]; /*0x7c9a66*/
      *(float *)&v76[0x34] = unk_B3F930 + *(float *)&v76[0x34]; /*0x7c9a7a*/
      *(float *)&v76[0x38] = unk_B3F934 + *(float *)&v76[0x38]; /*0x7c9a8e*/
      D3DXMatrixMultiply_0((int)v114, (int)v76, **(_DWORD **)(v37 + 0xC) + 0x10); /*0x7c9aae*/
      qmemcpy(v75, v114, sizeof(v75)); /*0x7c9acb*/
      D3DXMatrixTranspose_0((int)v75, (int)v75); /*0x7c9acd*/
      qmemcpy(&unk_B45498, v75, 0x40u); /*0x7c9ae0*/
    }
  }
  if ( *(_BYTE *)(dword_B45024 + 8) ) /*0x7c9b1d*/
  {
    v38 = *(_DWORD **)(a7 + 0x18); /*0x7c9b2a*/
    if ( v38 ) /*0x7c9b2f*/
    {
      if ( (*(int (__thiscall **)(_DWORD))(*v38 + 0x54))(*(_DWORD *)(a7 + 0x18)) != 0xFFFFFFFF ) /*0x7c9b41*/
      {
        if ( GetShadowSceneNode(v38[7] >> 0x1C) ) /*0x7c9b51*/
        {
          if ( v64 && a4 ) /*0x7c9b6c*/
          {
            v39 = MEMORY[0xB3F92C]; /*0x7c9b70*/
            v40 = unk_B3F930; /*0x7c9b76*/
            v75[0] = 1.0; /*0x7c9b7b*/
            v41 = unk_B3F934; /*0x7c9b81*/
            v75[1] = 0.0; /*0x7c9b87*/
            v67 = v39; /*0x7c9b8b*/
            v75[2] = 0.0; /*0x7c9b8f*/
            v68 = v40; /*0x7c9b93*/
            v69 = v41; /*0x7c9b9b*/
            v75[3] = v39; /*0x7c9b9f*/
            v75[4] = 0.0; /*0x7c9ba3*/
            v75[6] = 0.0; /*0x7c9ba7*/
            v75[5] = 1.0; /*0x7c9bad*/
            v75[7] = v40; /*0x7c9bb5*/
            v75[8] = 0.0; /*0x7c9bbb*/
            v75[9] = 0.0; /*0x7c9bbf*/
            v75[0xA] = 1.0; /*0x7c9bc5*/
            v75[0xB] = v41; /*0x7c9bcd*/
            scale = 1.0; /*0x7c9bd1*/
            v75[0xC] = 0.0; /*0x7c9bd3*/
            v75[0xD] = 0.0; /*0x7c9bd7*/
            v75[0xE] = 0.0; /*0x7c9bdb*/
          }
          else
          {
            v75[0] = a9->rot.data[0][0]; /*0x7c9be6*/
            v75[1] = a9->rot.data[0][1]; /*0x7c9bed*/
            v75[2] = a9->rot.data[0][2]; /*0x7c9bf4*/
            v75[3] = a9->pos.x; /*0x7c9bfb*/
            v75[4] = a9->rot.data[1][0]; /*0x7c9c02*/
            v75[5] = a9->rot.data[1][1]; /*0x7c9c09*/
            v75[6] = a9->rot.data[1][2]; /*0x7c9c10*/
            v75[7] = a9->pos.y; /*0x7c9c17*/
            v75[8] = a9->rot.data[2][0]; /*0x7c9c1e*/
            v75[9] = a9->rot.data[2][1]; /*0x7c9c25*/
            v75[0xA] = a9->rot.data[2][2]; /*0x7c9c2c*/
            v75[0xB] = a9->pos.z; /*0x7c9c33*/
            v75[0xC] = 0.0; /*0x7c9c39*/
            v75[0xD] = 0.0; /*0x7c9c3d*/
            v75[0xE] = 0.0; /*0x7c9c41*/
            scale = a9->scale; /*0x7c9c45*/
          }
          v75[0xF] = scale; /*0x7c9c4d*/
          qmemcpy(&unk_B45560, v75, 0x40u); /*0x7c9c5a*/
        }
      }
    }
  }
  if ( *(_BYTE *)(dword_B45068 + 8) ) /*0x7c9c62*/
  {
    if ( a4 ) /*0x7c9c6d*/
    {
      qmemcpy(v75, a4[0xA], sizeof(v75)); /*0x7c9c7f*/
      D3DXMatrixTranspose_0((int)v75, (int)v75); /*0x7c9c85*/
      qmemcpy(&unk_B44F98, v75, 0x40u); /*0x7c9c98*/
    }
  }
  device = unk_B43104->member.device; /*0x7c9ca4*/
  v112 = device; /*0x7c9cb2*/
  if ( (unsigned int)(LODWORD(v65) - 0x177) > 3 ) /*0x7c9cb9*/
    return 0; /*0x7c9cb9*/
  v44 = *(int **)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] + 0xC); /*0x7c9cc5*/
  v45 = *v44; /*0x7c9cc8*/
  v14 = *(_BYTE *)(*v44 + 0x214) == 0; /*0x7c9cca*/
  v110 = *v44; /*0x7c9cd1*/
  if ( !v14 ) /*0x7c9cd8*/
  {
    v62 = (const float *)(v45 + 0x1B4); /*0x7c9efd*/
    for ( j = 0; j < 6; ++j ) /*0x7c9f03*/
    {
      device->lpVtbl->SetClipPlane(device, j, v62); /*0x7c9f10*/
      v62 += 4; /*0x7c9f15*/
    }
    return 0; /*0x7c9f1b*/
  }
  v46 = unk_B3F930; /*0x7c9cde*/
  v47 = (float *)(v45 + 0x150); /*0x7c9ce4*/
  v48 = *(_DWORD *)(LODWORD(v66) + 0x14); /*0x7c9cf0*/
  qmemcpy(v75, (const void *)(v48 + 0x980), sizeof(v75)); /*0x7c9d02*/
  v49 = MEMORY[0xB3F92C]; /*0x7c9d08*/
  v50 = unk_B3F934; /*0x7c9d2f*/
  v65 = v46 * v75[4] + v49 * v75[0] + v50 * v75[8]; /*0x7c9d3c*/
  v75[0xC] = -v65; /*0x7c9d4d*/
  v65 = v49 * v75[1] + v46 * v75[5] + v50 * v75[9]; /*0x7c9d67*/
  v75[0xD] = -v65; /*0x7c9d71*/
  v65 = v46 * v75[6] + v49 * v75[2] + v50 * v75[0xA]; /*0x7c9d87*/
  v75[0xE] = -v65; /*0x7c9d91*/
  qmemcpy(v114, (const void *)(v48 + 0x9C0), sizeof(v114)); /*0x7c9d95*/
  D3DXMatrixMultiply_0((int)v76, (int)v75, (int)v114); /*0x7c9da1*/
  D3DXMatrixInverse_0((int)v116, 0, (int)v76); /*0x7c9db8*/
  D3DXMatrixTranspose_0((int)v76, (int)v116); /*0x7c9dcd*/
  LODWORD(v66) = &v115[4] - (char *)v47; /*0x7c9ddb*/
  v109 = (char *)(&v115[8] - (char *)v47); /*0x7c9de8*/
  v111 = (char *)(&v115[0xC] - (char *)v47); /*0x7c9df8*/
  v51 = 0; /*0x7c9e06*/
  v52 = v47; /*0x7c9e0a*/
  LODWORD(v65) = v115 - (char *)v47; /*0x7c9e0c*/
  do /*0x7c9eca*/
  {
    v53 = v52[1]; /*0x7c9e12*/
    v54 = v52[2]; /*0x7c9e15*/
    v67 = *v52; /*0x7c9e18*/
    v71 = v67; /*0x7c9e20*/
    v68 = v53; /*0x7c9e24*/
    v69 = v54; /*0x7c9e2c*/
    v72 = v53; /*0x7c9e30*/
    v73 = v54; /*0x7c9e3d*/
    v74 = -v52[3]; /*0x7c9e49*/
    D3DXPlaneNormalize_0((int)&v71, (int)&v71); /*0x7c9e4d*/
    D3DXPlaneTransform_0((int)v113, (int)&v71, (int)v76); /*0x7c9e67*/
    v55 = v65; /*0x7c9e73*/
    v56 = v66; /*0x7c9e77*/
    *(float *)((char *)v52 + LODWORD(v65)) = v113[0]; /*0x7c9e7b*/
    v57 = (char *)v52 + LODWORD(v55); /*0x7c9e85*/
    v58 = v109; /*0x7c9e88*/
    *(float *)((char *)v52 + LODWORD(v56)) = v113[1]; /*0x7c9e8f*/
    v59 = v111; /*0x7c9e99*/
    *(float *)((char *)v52 + (_DWORD)v58) = v113[2]; /*0x7c9ea0*/
    v60 = v112; /*0x7c9ea3*/
    *(float *)((char *)v52 + (_DWORD)v59) = v113[3]; /*0x7c9eb2*/
    v60->lpVtbl->SetClipPlane(v60, v51++, (const float *)v57); /*0x7c9ebf*/
    v52 += 4; /*0x7c9ec4*/
  }
  while ( v51 < 6 ); /*0x7c9eca*/
  v61 = (char *)(v110 + 0x1B4); /*0x7c9ed7*/
  *(_BYTE *)(v110 + 0x214) = 1; /*0x7c9ee9*/
  qmemcpy(v61, v115, 0x60u); /*0x7c9ef0*/
  return 0; /*0x7c934a*/
}
