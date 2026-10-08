// Oblivion Lighting30 per-draw constants. For selectors 0x14E..0x151 it writes the projected-shadow matrix from ShadowSceneLight+0x10 to vertex c10..c13, transforms LightData into object space, and commits/caches six D3D clip planes. Main vertex-map automatic semantics separately supply non-skinned WVP c0..c3 or skinned WVP c1..c4 and BoneMatrix3 c31..c84.
// GPU static-world audit 2026-09-27: observed directional-light normal transform and normalization at 7FBE57/7FBE69; point-light coordinate transform at 7FBF4E. For non-skinned selectors 14E/14F, xyz is scaled by a9->scale at 7FBFC2..7FBFE2; other non-skinned branch divides light range by object scale at 7FBFB4. Preserve selector-specific geometry-space light semantics when replacing CPU per-draw setup.
// DX11 GPU-world verification 2026-10-01: ordinary 0x12D..0x146, renderMode !=5, rigid property+0x1C bit2 clear uses the current inverse from 718A80. Property+0x100 gate is reset by 7FB400 each pass. Direction rows negate world-normalized vectors, TransformNormal, D3DX normalize then 43F350 normalize. Points use object-space XYZ and signed radius/scale. Eye writes both B46F88 and B46DA8. Full source production must include shader-unread rows; prior reflection is not a native writer predicate. Fallout PPC 82227160/822277D0 under 822254D8 split these light/eye roles into helpers; architectural comparison only, no offset/selector/ABI equivalence asserted.
// DX11 GPU-world source production 2026-10-01: the verified mapped-world branch at B46D68 requires its current branch proof (not projected-light data). Its 64-byte transposed world source can be regenerated from the current object transform and render origin, carrying renderer world[3,7,11,15] through unchanged as761AE0 does. Generated automatic/mapped setters must merge in 9A8E30 occurrence/map/entry order, including overwritten and shader-unread registers. This value/state plan alone does not replace native source-global commits or authorize draw omission.
// DX11 source-state audit 2026-10-01: object-space light conversion uses the counts established by7FF4A0. For the admitted one-sun ordinary profile, point slots above min(entryCount,B2DCFC)-1 remain in their pre-geometry world representation. Zero entryCount still declares one directional source slot, so data slot0 cannot be marked no-write merely because no light dispatcher ran. ConstantGroup commit needs all49 row effects known plus original-source guards; vertex sources, property flag100 and other generic globals remain separate obligations.
// DX11 vertex-source commit audit 2026-10-01: rigid property flag bit2 clear avoids the missing-skin-partition early return. Renderer world update765480 is called with device-update flag0. Mode5 does not enter ordinary source work, leaving property+100 cleared and B46D68..B46DB7 unchanged. Otherwise the wrapper-reset property+100 becomes1. B4696E gates the four mapped world rows; when disabled they preserve current values. Eye at B46DA8 and pixel alias B46F88 are written for ordinary selectors12D..146 independent of light-source qualification. Matrix projected branches remain separately unresolved. Source-state replay must follow occurrence order and must not recover unknown data through a later no-write preserve.
// DX11 vertex-source verification 2026-10-01: 7FC041 mov edx,[B46658] and following loads read the global world-eye source (ConstantStorage index211). Read and seal B46658..B46667 at the actual bucket boundary before regenerating B46DA8 and B46F88. An earlier frame-camera sample is not sufficient source authority if eye input changes. The direct byte search confirmed this consumer even though interior-array XrefsTo(B46658) is empty; that xref absence is not evidence of no consumers.
// DX11 code-provider audit 2026-10-01: project source required this function but none of the exact-address world/local/SLS/actor catalogs supplied7FB6F0. Added the full4307-byte native body to the world code catalog. A test-only assumed actor fallback was removed; source/renderer capture now requires the actual contract. This closes a live admission gap, not a change to Oblivion behavior.
double __userpurge sub_7FB6F0@<st0>(
        char *a1@<ecx>,
        double result@<st0>,
        float a3,
        NiSkinInstance *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        NiTransform *a9,
        int a10)
{
  int v10; // esi
  BOOL v12; // eax
  int v13; // edi
  bool v14; // zf
  NiSkinInstance *v15; // esi
  float *v16; // ebx
  _DWORD *LightRef; // eax
  float v18; // edi
  double v19; // st6
  double v20; // st5
  float *v21; // eax
  double v22; // st6
  int v23; // edx
  int v24; // eax
  unsigned int v25; // eax
  int v26; // eax
  int v27; // edi
  int v28; // ebx
  int v29; // eax
  float *v30; // esi
  float v31; // ecx
  double v32; // st6
  float v33; // eax
  float v34; // edx
  float *v35; // esi
  int v36; // edi
  float v37; // edx
  float v38; // eax
  float v39; // ecx
  float v40; // edx
  double v41; // st6
  float v42; // eax
  double v43; // st6
  float v44; // ecx
  float v45; // edx
  float v46; // ecx
  float v47; // edx
  double v48; // st5
  double v49; // st4
  double v50; // st3
  double v51; // st6
  double v52; // st5
  double v53; // st4
  double v54; // st3
  float v55; // edx
  float v56; // eax
  float v57; // ecx
  double v58; // st6
  float v59; // eax
  float v60; // ecx
  double v61; // st6
  float v62; // edx
  double v63; // st6
  float v64; // eax
  double v65; // st6
  float v66; // ecx
  double v67; // st6
  float v68; // edx
  double v69; // st6
  float v70; // eax
  double v71; // st6
  float v72; // ecx
  double v73; // st6
  float v74; // edx
  double v75; // st6
  float v76; // eax
  double v77; // st6
  float v78; // ecx
  double v79; // st6
  float v80; // edx
  double v81; // st6
  float v82; // eax
  float v83; // ecx
  float v84; // edx
  float v85; // eax
  float v86; // ecx
  float v87; // edx
  float v88; // eax
  float v89; // ecx
  float v90; // edx
  float v91; // ecx
  IDirect3DDevice9 *device; // ebx
  int *v93; // ecx
  int v94; // eax
  float *v95; // ebx
  int v96; // eax
  double v97; // st5
  double v98; // st6
  double v99; // st4
  int v100; // edi
  float *v101; // esi
  float v102; // edx
  float v103; // eax
  float v104; // eax
  float v105; // ecx
  float v106; // edx
  int v107; // ecx
  char *v108; // edi
  const float *v109; // edi
  int i; // esi
  float v111; // [esp+64h] [ebp-25Ch] BYREF
  float v112; // [esp+68h] [ebp-258h]
  float v113; // [esp+6Ch] [ebp-254h]
  float v114; // [esp+70h] [ebp-250h]
  bool v115; // [esp+77h] [ebp-249h]
  float v116; // [esp+78h] [ebp-248h] BYREF
  float v117; // [esp+7Ch] [ebp-244h]
  float v118; // [esp+80h] [ebp-240h]
  float v119; // [esp+84h] [ebp-23Ch]
  float scale; // [esp+88h] [ebp-238h]
  float v121; // [esp+8Ch] [ebp-234h] BYREF
  int v122; // [esp+90h] [ebp-230h]
  float v123; // [esp+94h] [ebp-22Ch] BYREF
  float v124; // [esp+98h] [ebp-228h]
  float v125; // [esp+9Ch] [ebp-224h]
  float v126; // [esp+A0h] [ebp-220h] BYREF
  float v127; // [esp+A4h] [ebp-21Ch]
  float v128; // [esp+A8h] [ebp-218h]
  float v129; // [esp+ACh] [ebp-214h]
  float v130; // [esp+B0h] [ebp-210h] BYREF
  float v131; // [esp+B4h] [ebp-20Ch]
  float v132; // [esp+B8h] [ebp-208h]
  float v133; // [esp+BCh] [ebp-204h]
  _BYTE v134[64]; // [esp+C0h] [ebp-200h] BYREF
  float v135[19]; // [esp+100h] [ebp-1C0h] BYREF
  float v136; // [esp+14Ch] [ebp-174h] BYREF
  float v137; // [esp+150h] [ebp-170h]
  float v138; // [esp+154h] [ebp-16Ch]
  float v139; // [esp+158h] [ebp-168h] BYREF
  float v140; // [esp+15Ch] [ebp-164h]
  float v141; // [esp+160h] [ebp-160h]
  float v142; // [esp+164h] [ebp-15Ch]
  float v143; // [esp+168h] [ebp-158h]
  float v144; // [esp+16Ch] [ebp-154h]
  float v145; // [esp+170h] [ebp-150h]
  float v146; // [esp+174h] [ebp-14Ch]
  float v147; // [esp+178h] [ebp-148h]
  float v148; // [esp+17Ch] [ebp-144h]
  float v149; // [esp+180h] [ebp-140h]
  float v150; // [esp+184h] [ebp-13Ch]
  float v151; // [esp+188h] [ebp-138h]
  float v152; // [esp+18Ch] [ebp-134h]
  float v153; // [esp+190h] [ebp-130h]
  float v154; // [esp+194h] [ebp-12Ch]
  float v155; // [esp+198h] [ebp-128h] BYREF
  float v156; // [esp+19Ch] [ebp-124h]
  float v157; // [esp+1A0h] [ebp-120h]
  float v158; // [esp+1A4h] [ebp-11Ch]
  float v159; // [esp+1A8h] [ebp-118h]
  float v160; // [esp+1ACh] [ebp-114h]
  float v161; // [esp+1B0h] [ebp-110h]
  float v162; // [esp+1B4h] [ebp-10Ch]
  float v163; // [esp+1B8h] [ebp-108h]
  float v164; // [esp+1BCh] [ebp-104h]
  float v165; // [esp+1C0h] [ebp-100h]
  float v166; // [esp+1C4h] [ebp-FCh]
  float v167; // [esp+1C8h] [ebp-F8h]
  float v168; // [esp+1CCh] [ebp-F4h]
  float v169; // [esp+1D0h] [ebp-F0h]
  float v170; // [esp+1D4h] [ebp-ECh]
  IDirect3DDevice9 *v171; // [esp+1D8h] [ebp-E8h]
  int v172; // [esp+1DCh] [ebp-E4h]
  _BYTE v173[64]; // [esp+1E0h] [ebp-E0h] BYREF
  char v174[96]; // [esp+220h] [ebp-A0h] BYREF
  _BYTE v175[64]; // [esp+280h] [ebp-40h] BYREF

  v10 = *(_DWORD *)(a7 + 0x18); /*0x7fb701*/
  v119 = *(float *)&a1; /*0x7fb709*/
  if ( v10 ) /*0x7fb70d*/
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x54))(v10) == 0xA; /*0x7fb724*/
  else
    v12 = 0; /*0x7fb70f*/
  v13 = v12 ? v10 : 0;
  v14 = (*(_BYTE *)(v13 + 0x1C) & 2) == 0; /*0x7fb734*/
  v122 = LODWORD(unk_B42E90);                   // Read active RenderPass selector published by BSShaderAccumulator_DrawRenderPass. /*0x7fb738*/
  v115 = !v14; /*0x7fb741*/
  if ( v14 ) /*0x7fb745*/
  {
    v16 = (float *)a9; /*0x7fb788*/
    v15 = a4; /*0x7fb78b*/
  }
  else
  {
    if ( !a5 ) /*0x7fb74b*/
      return result; /*0x7fb74b*/
    v14 = *((_DWORD *)a1 + 0xD) == 0; /*0x7fb751*/
    v15 = a4; /*0x7fb755*/
    v16 = (float *)a9; /*0x7fb758*/
    if ( v14 ) /*0x7fb75b*/
      NiDX9Renderer::CalculateBoneMatrixes(unk_B43104, a4, a9, 0, 3, 1); /*0x7fb76b*/
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(LODWORD(v119) + 0x18) + 0x30))( /*0x7fb784*/
      *(_DWORD *)(LODWORD(v119) + 0x18),
      *(unsigned __int16 *)(a5 + 0x24));
  }
  NiDX9Renderer_SetModelTransform(*(NiDX9Renderer **)(LODWORD(v119) + 0x14), v16, 0); /*0x7fb798*/
  if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] == 5 ) /*0x7fb7a5*/
  {
    LightRef = ShadowSceneLight_GetLightRef( /*0x7fb7b7*/
                 **(_DWORD ***)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] + 0xC),
                 &v121);
    v18 = v121; /*0x7fb7be*/
    v119 = *(float *)(*LightRef + 0xF8); /*0x7fb7ca*/
    if ( v121 != 0.0 && !InterlockedDecrement((volatile LONG *)(LODWORD(v121) + 4)) && v18 != 0.0 ) /*0x7fb7e0*/
      (**(void (__thiscall ***)(_DWORD, int))LODWORD(v18))(LODWORD(v18), 1); /*0x7fb7ea*/
    if ( !v15 ) /*0x7fb7ee*/
      v119 = v119 / v16[0xC]; /*0x7fb7f7*/
    OB_ShaderConstantStorage_010201A0[0x480] = v119; /*0x7fb801*/
  }
  else
  {
    v19 = 0.0; /*0x7fb817*/
    v20 = 1.0; /*0x7fb819*/
    if ( !*(_BYTE *)(v13 + 0x100) ) /*0x7fb810*/
    {
      v14 = !v115; /*0x7fb821*/
      *(_BYTE *)(v13 + 0x100) = 1; /*0x7fb828*/
      v169 = 0.0; /*0x7fb82f*/
      v168 = 0.0; /*0x7fb836*/
      v167 = 0.0; /*0x7fb83d*/
      v166 = 0.0; /*0x7fb844*/
      v164 = 0.0; /*0x7fb84b*/
      v163 = 0.0; /*0x7fb852*/
      v162 = 0.0; /*0x7fb859*/
      v161 = 0.0; /*0x7fb860*/
      v159 = 0.0; /*0x7fb867*/
      v158 = 0.0; /*0x7fb86e*/
      v157 = 0.0; /*0x7fb875*/
      v156 = 0.0; /*0x7fb87c*/
      v153 = 0.0; /*0x7fb883*/
      v152 = 0.0; /*0x7fb88a*/
      v151 = 0.0; /*0x7fb891*/
      v150 = 0.0; /*0x7fb898*/
      v148 = 0.0; /*0x7fb89f*/
      v147 = 0.0; /*0x7fb8a6*/
      v146 = 0.0; /*0x7fb8ad*/
      v145 = 0.0; /*0x7fb8b4*/
      v143 = 0.0; /*0x7fb8bb*/
      v142 = 0.0; /*0x7fb8c2*/
      v141 = 0.0; /*0x7fb8c9*/
      v140 = 0.0; /*0x7fb8d0*/
      v170 = 1.0; /*0x7fb8d7*/
      v165 = 1.0; /*0x7fb8de*/
      v160 = 1.0; /*0x7fb8e5*/
      v155 = 1.0; /*0x7fb8ec*/
      v154 = 1.0; /*0x7fb8f3*/
      v149 = 1.0; /*0x7fb8fa*/
      v144 = 1.0; /*0x7fb901*/
      v139 = 1.0; /*0x7fb908*/
      if ( v14 || !v15 ) /*0x7fb917*/
      {
        sub_718A80(v16, (NiTransform *)v134); /*0x7fb9f6*/
        v155 = *(float *)v134 * *(float *)&v134[0x30]; /*0x7fba0c*/
        v156 = *(float *)&v134[0xC] * *(float *)&v134[0x30]; /*0x7fba19*/
        v157 = *(float *)&v134[0x18] * *(float *)&v134[0x30]; /*0x7fba29*/
        v159 = *(float *)&v134[4] * *(float *)&v134[0x30]; /*0x7fba36*/
        v160 = *(float *)&v134[0x10] * *(float *)&v134[0x30]; /*0x7fba46*/
        v161 = *(float *)&v134[0x1C] * *(float *)&v134[0x30]; /*0x7fba56*/
        v163 = *(float *)&v134[8] * *(float *)&v134[0x30]; /*0x7fba63*/
        v164 = *(float *)&v134[0x14] * *(float *)&v134[0x30]; /*0x7fba73*/
        v165 = *(float *)&v134[0x30] * *(float *)&v134[0x20]; /*0x7fba81*/
        v167 = *(float *)&v134[0x24]; /*0x7fba8f*/
        v168 = *(float *)&v134[0x28]; /*0x7fba9d*/
        v169 = *(float *)&v134[0x2C]; /*0x7fbaab*/
        v22 = 1.0; /*0x7fbab2*/
        v170 = 1.0; /*0x7fbab4*/
      }
      else
      {
        v21 = *((float **)v15 + 0xA); /*0x7fb91d*/
        v139 = *v21; /*0x7fb929*/
        v140 = v21[1]; /*0x7fb933*/
        v141 = v21[2]; /*0x7fb93d*/
        v143 = v21[4]; /*0x7fb947*/
        v144 = v21[5]; /*0x7fb951*/
        v145 = v21[6]; /*0x7fb95b*/
        v147 = v21[8]; /*0x7fb965*/
        v148 = v21[9]; /*0x7fb96f*/
        v149 = v21[0xA]; /*0x7fb979*/
        v151 = v21[0xC] + MEMORY[0xB3F92C]; /*0x7fb989*/
        v152 = v21[0xD] + unk_B3F930; /*0x7fb999*/
        v153 = v21[0xE] + unk_B3F934; /*0x7fb9a9*/
        v142 = v21[3]; /*0x7fb9b3*/
        v146 = v21[7]; /*0x7fb9bd*/
        v150 = v21[0xB]; /*0x7fb9c7*/
        v154 = v21[0xF]; /*0x7fb9d9*/
        D3DXMatrixInverse_0((int)&v155, 0, (int)&v139); /*0x7fb9e3*/
        v22 = 1.0; /*0x7fb9e8*/
      }
      if ( BYTE2(OB_ShaderConstantStorage_010201A0[0x2D6]) ) /*0x7fbabb*/
      {
        v23 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F]; /*0x7fbac8*/
        v24 = *(_DWORD *)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] + 0xC); /*0x7fbace*/
        if ( !v24 || *(_BYTE *)(*(_DWORD *)v24 + 0xF5) || v122 >= 0x147 && v122 <= 0x14D )// ShadowSceneLight +0xF5 selects the special-light shader-matrix branch; zero continues ordinary selector-specific handling. /*0x7fbaf8*/
        {
          qmemcpy(v135, (const void *)(*(_DWORD *)(LODWORD(v119) + 0x14) + 0x940), 0x40u); /*0x7fbccd*/
          D3DXMatrixTranspose_0((int)v135, (int)v135); /*0x7fbccf*/
          OB_ShaderConstantStorage_010201A0[0x3D5] = v135[0]; /*0x7fbcdb*/
          OB_ShaderConstantStorage_010201A0[0x3D6] = v135[1]; /*0x7fbce8*/
          OB_ShaderConstantStorage_010201A0[0x3D7] = v135[2]; /*0x7fbcf5*/
          OB_ShaderConstantStorage_010201A0[0x3D8] = v135[3]; /*0x7fbd02*/
          OB_ShaderConstantStorage_010201A0[0x3D9] = v135[4]; /*0x7fbd0f*/
          OB_ShaderConstantStorage_010201A0[0x3DA] = v135[5]; /*0x7fbd1c*/
          OB_ShaderConstantStorage_010201A0[0x3DB] = v135[6]; /*0x7fbd29*/
          OB_ShaderConstantStorage_010201A0[0x3DC] = v135[7]; /*0x7fbd36*/
          OB_ShaderConstantStorage_010201A0[0x3DD] = v135[8]; /*0x7fbd43*/
          OB_ShaderConstantStorage_010201A0[0x3DE] = v135[9]; /*0x7fbd50*/
          OB_ShaderConstantStorage_010201A0[0x3DF] = v135[0xA]; /*0x7fbd5d*/
          OB_ShaderConstantStorage_010201A0[0x3E0] = v135[0xB]; /*0x7fbd6a*/
          OB_ShaderConstantStorage_010201A0[0x3E1] = v135[0xC]; /*0x7fbd77*/
          OB_ShaderConstantStorage_010201A0[0x3E2] = v135[0xD]; /*0x7fbd84*/
          OB_ShaderConstantStorage_010201A0[0x3E3] = v135[0xE]; /*0x7fbd91*/
          OB_ShaderConstantStorage_010201A0[0x3E4] = v135[0xF]; /*0x7fbd9e*/
        }
        else
        {
          *(float *)&v134[0x38] = 0.0; /*0x7fbb02*/
          *(float *)&v134[0x34] = 0.0; /*0x7fbb09*/
          *(float *)&v134[0x30] = 0.0; /*0x7fbb10*/
          *(float *)&v134[0x2C] = 0.0; /*0x7fbb17*/
          *(float *)&v134[0x24] = 0.0; /*0x7fbb1e*/
          *(float *)&v134[0x20] = 0.0; /*0x7fbb25*/
          *(float *)&v134[0x1C] = 0.0; /*0x7fbb2c*/
          *(float *)&v134[0x18] = 0.0; /*0x7fbb33*/
          *(float *)&v134[0x10] = 0.0; /*0x7fbb3a*/
          *(float *)&v134[0xC] = 0.0; /*0x7fbb41*/
          *(float *)&v134[8] = 0.0; /*0x7fbb45*/
          *(float *)&v134[4] = 0.0; /*0x7fbb49*/
          v135[0xE] = 0.0; /*0x7fbb4d*/
          v135[0xD] = 0.0; /*0x7fbb54*/
          v135[0xC] = 0.0; /*0x7fbb5b*/
          v135[0xB] = 0.0; /*0x7fbb62*/
          v135[9] = 0.0; /*0x7fbb69*/
          v135[8] = 0.0; /*0x7fbb70*/
          v135[7] = 0.0; /*0x7fbb77*/
          v135[6] = 0.0; /*0x7fbb7e*/
          v135[4] = 0.0; /*0x7fbb85*/
          v135[3] = 0.0; /*0x7fbb8c*/
          v135[2] = 0.0; /*0x7fbb93*/
          v135[1] = 0.0; /*0x7fbb9a*/
          *(float *)&v134[0x3C] = v22; /*0x7fbba1*/
          *(float *)&v134[0x28] = v22; /*0x7fbba8*/
          *(float *)&v134[0x14] = v22; /*0x7fbbaf*/
          *(float *)v134 = v22; /*0x7fbbb6*/
          v135[0xF] = v22; /*0x7fbbba*/
          v135[0xA] = v22; /*0x7fbbc1*/
          v135[5] = v22; /*0x7fbbc8*/
          v135[0] = v22; /*0x7fbbcf*/
          if ( v15 ) /*0x7fbbd6*/
          {
            qmemcpy(v134, *((const void **)v15 + 0xA), sizeof(v134)); /*0x7fbbe4*/
          }
          else
          {
            sub_7640A0((float *)v134, v16); /*0x7fbbee*/
            v23 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F]; /*0x7fbbf3*/
          }
          v25 = LODWORD(unk_B42E90) - 0x14E;    // Recognize the four native shadow selectors 0x14E..0x151. /*0x7fbc0e*/
          *(float *)&v134[0x30] = MEMORY[0xB3F92C] + *(float *)&v134[0x30]; /*0x7fbc16*/
          *(float *)&v134[0x34] = unk_B3F930 + *(float *)&v134[0x34]; /*0x7fbc2a*/
          *(float *)&v134[0x38] = unk_B3F934 + *(float *)&v134[0x38]; /*0x7fbc3e*/
          if ( v25 > 3 ) /*0x7fbc45*/
            v26 = *(_DWORD *)(*(_DWORD *)(v23 + 0xC) + 4); /*0x7fbc51*/
          else
            v26 = **(_DWORD **)(v23 + 0xC);     // Use current ShadowSceneLight projected-shadow transform at light+0x10. /*0x7fbc4a*/
          D3DXMatrixMultiply_0((int)v173, (int)v134, v26 + 0x10);// Combine object/camera-relative transform with ShadowSceneLight+0x10. /*0x7fbc65*/
          qmemcpy(v135, v173, 0x40u); /*0x7fbc88*/
          D3DXMatrixTranspose_0((int)v135, (int)v135); /*0x7fbc8a*/
          qmemcpy(&OB_ShaderConstantStorage_010201A0[0x3D5], v135, 0x40u);// Write ShadowSceneLight projected transform to VS c10..c13; SM3013/14 multiply original POSITION, SM3015/16 multiply the blended skinned position. /*0x7fbca0*/
        }
        v15 = a4; /*0x7fbda4*/
        v22 = 1.0; /*0x7fbda7*/
      }
      if ( v122 < 0x152 || v122 > 0x153 ) /*0x7fbdb9*/
      {
        v27 = 0; /*0x7fbdc5*/
        v28 = Double_To_SInt32(result); /*0x7fbdd2*/
        *(float *)&v29 = COERCE_FLOAT(Double_To_SInt32(result)); /*0x7fbdd4*/
        v121 = *(float *)&v29; /*0x7fbde3*/
        if ( (v122 < 0x14E || v122 > 0x151) && v28 > 0 )// Selectors 0x14E..0x151 skip the ordinary direction-normalization block. /*0x7fbdf7*/
        {
          v30 = &OB_ShaderConstantStorage_010201A0[0x481]; /*0x7fbdff*/
          v27 = v28; /*0x7fbe06*/
          v129 = 0.0; /*0x7fbe08*/
          do /*0x7fbee3*/
          {
            v111 = -*v30; /*0x7fbe1c*/
            v112 = -v30[1]; /*0x7fbe31*/
            v113 = -v30[2]; /*0x7fbe3b*/
            v123 = v111; /*0x7fbe43*/
            v124 = v112; /*0x7fbe4b*/
            v125 = v113; /*0x7fbe53*/
            D3DXVec3TransformNormal_0((int)&v136, (int)&v123, (int)&v155); /*0x7fbe57*/
            D3DXVec3Normalize_0((int)&v123, (int)&v136); /*0x7fbe69*/
            v116 = v123; /*0x7fbe72*/
            v130 = v123; /*0x7fbe7e*/
            v117 = v124; /*0x7fbe82*/
            v131 = v124; /*0x7fbe8e*/
            v118 = v125; /*0x7fbe92*/
            v132 = v125; /*0x7fbe9e*/
            result = Vector3_NormalizeInPlace(&v130); /*0x7fbea2*/
            v30 += 8; /*0x7fbead*/
            --v28; /*0x7fbeb0*/
            v126 = v130; /*0x7fbeb3*/
            v127 = v131; /*0x7fbebf*/
            v31 = v131; /*0x7fbec3*/
            v32 = v132; /*0x7fbec7*/
            v30[0xFFFFFFF8] = v130; /*0x7fbecb*/
            v33 = v129; /*0x7fbece*/
            v128 = v32; /*0x7fbed2*/
            v34 = v128; /*0x7fbed6*/
            v30[0xFFFFFFF9] = v31; /*0x7fbeda*/
            v30[0xFFFFFFFA] = v34; /*0x7fbedd*/
            v30[0xFFFFFFFB] = v33; /*0x7fbee0*/
          }
          while ( v28 ); /*0x7fbee3*/
          v22 = 1.0; /*0x7fbee9*/
          *(float *)&v29 = v121; /*0x7fbeeb*/
        }
        if ( v29 > 0 ) /*0x7fbef1*/
        {
          v35 = &OB_ShaderConstantStorage_010201A0[8 * v27 + 0x481]; /*0x7fbf02*/
          v36 = v29; /*0x7fbf04*/
          do /*0x7fc02e*/
          {
            v37 = v35[1]; /*0x7fbf08*/
            v38 = v35[2]; /*0x7fbf0b*/
            v126 = *v35; /*0x7fbf0e*/
            v39 = v35[3]; /*0x7fbf16*/
            v130 = v126; /*0x7fbf19*/
            v127 = v37; /*0x7fbf1d*/
            v128 = v38; /*0x7fbf25*/
            v131 = v37; /*0x7fbf29*/
            v132 = v38; /*0x7fbf39*/
            v129 = v39; /*0x7fbf41*/
            D3DXVec3TransformCoord_0((int)&v136, (int)&v130, (int)&v155); /*0x7fbf4e*/
            v116 = v136; /*0x7fbf5e*/
            v117 = v137; /*0x7fbf6d*/
            v123 = v136; /*0x7fbf7c*/
            v118 = v138; /*0x7fbf80*/
            v124 = v137; /*0x7fbf8c*/
            v121 = v129; /*0x7fbf90*/
            v125 = v138; /*0x7fbf94*/
            if ( !a4 ) /*0x7fbf98*/
            {                                   // Non-skinned 0x14E/0x14F scale LightData.xyz into object space by object scale.
              if ( v122 == 0x14E || v122 == 0x14F ) /*0x7fbfaa*/
              {
                scale = a9->scale; /*0x7fbfc2*/
                v123 = v136 * scale; /*0x7fbfd0*/
                v124 = scale * v124; /*0x7fbfda*/
                v125 = scale * v125; /*0x7fbfe2*/
              }
              else
              {
                v121 = v129 / a9->scale; /*0x7fbfb4*/
              }
            }
            v35 += 8; /*0x7fbff0*/
            --v36; /*0x7fbff3*/
            v111 = v123; /*0x7fbff6*/
            v112 = v124; /*0x7fc002*/
            v40 = v124; /*0x7fc006*/
            v41 = v125; /*0x7fc00a*/
            v35[0xFFFFFFF8] = v123; /*0x7fc00e*/
            v113 = v41; /*0x7fc011*/
            v42 = v113; /*0x7fc015*/
            v43 = v121; /*0x7fc019*/
            v35[0xFFFFFFF9] = v40; /*0x7fc01d*/
            v114 = v43; /*0x7fc020*/
            v44 = v114; /*0x7fc024*/
            v35[0xFFFFFFFA] = v42; /*0x7fc028*/
            v35[0xFFFFFFFB] = v44; /*0x7fc02b*/
          }
          while ( v36 ); /*0x7fc02e*/
          v22 = 1.0; /*0x7fc034*/
        }
        v15 = a4; /*0x7fc036*/
        v16 = (float *)a9; /*0x7fc039*/
      }
      v45 = OB_ShaderConstantStorage_010201A0[0x211]; /*0x7fc041*/
      v46 = OB_ShaderConstantStorage_010201A0[0x213]; /*0x7fc047*/
      v131 = OB_ShaderConstantStorage_010201A0[0x212]; /*0x7fc04d*/
      v130 = v45; /*0x7fc055*/
      v47 = OB_ShaderConstantStorage_010201A0[0x214]; /*0x7fc059*/
      v132 = v46; /*0x7fc067*/
      v133 = v47; /*0x7fc06b*/
      if ( (unsigned int)(v122 - 0x147) > 6 ) /*0x7fc06f*/
      {
        v136 = v130; /*0x7fc132*/
        v137 = v131; /*0x7fc145*/
        v138 = v132; /*0x7fc155*/
        D3DXVec3TransformCoord_0((int)&v116, (int)&v136, (int)&v155); /*0x7fc15c*/
        v51 = v116; /*0x7fc161*/
        v52 = v117; /*0x7fc16d*/
        OB_ShaderConstantStorage_010201A0[0x3E5] = v116; /*0x7fc171*/
        v112 = v52; /*0x7fc176*/
        v53 = v118; /*0x7fc17e*/
        OB_ShaderConstantStorage_010201A0[0x3E6] = v112; /*0x7fc182*/
        v113 = v53; /*0x7fc188*/
        OB_ShaderConstantStorage_010201A0[0x3E7] = v113; /*0x7fc192*/
        v54 = v51; /*0x7fc1a0*/
        v22 = 1.0; /*0x7fc1a0*/
        v111 = v54; /*0x7fc1a2*/
        OB_ShaderConstantStorage_010201A0[0x3E8] = 1.0; /*0x7fc1a6*/
        v112 = v52; /*0x7fc1b1*/
        OB_ShaderConstantStorage_010201A0[0x45D] = v111; /*0x7fc1b5*/
        OB_ShaderConstantStorage_010201A0[0x45E] = v112; /*0x7fc1bf*/
        v113 = v53; /*0x7fc1c5*/
        OB_ShaderConstantStorage_010201A0[0x45F] = v113; /*0x7fc1cd*/
        v114 = 1.0; /*0x7fc1d2*/
        OB_ShaderConstantStorage_010201A0[0x460] = 1.0; /*0x7fc1da*/
      }
      else
      {
        v116 = v130 - MEMORY[0xB3F92C]; /*0x7fc07f*/
        v117 = v131 - unk_B3F930; /*0x7fc08d*/
        v118 = v132 - unk_B3F934; /*0x7fc09b*/
        v48 = v116; /*0x7fc09f*/
        v49 = v117; /*0x7fc0ab*/
        OB_ShaderConstantStorage_010201A0[0x3E5] = v116; /*0x7fc0af*/
        v112 = v49; /*0x7fc0b5*/
        v50 = v118; /*0x7fc0bd*/
        OB_ShaderConstantStorage_010201A0[0x3E6] = v112; /*0x7fc0c1*/
        v113 = v50; /*0x7fc0c7*/
        OB_ShaderConstantStorage_010201A0[0x3E7] = v113; /*0x7fc0d1*/
        v114 = v22; /*0x7fc0d6*/
        OB_ShaderConstantStorage_010201A0[0x3E8] = v114; /*0x7fc0e0*/
        v111 = v48; /*0x7fc0e6*/
        OB_ShaderConstantStorage_010201A0[0x45D] = v111; /*0x7fc0ee*/
        v112 = v49; /*0x7fc0f4*/
        OB_ShaderConstantStorage_010201A0[0x45E] = v112; /*0x7fc0fe*/
        v113 = v50; /*0x7fc103*/
        OB_ShaderConstantStorage_010201A0[0x45F] = v113; /*0x7fc10b*/
        v114 = v22; /*0x7fc111*/
        OB_ShaderConstantStorage_010201A0[0x460] = v114; /*0x7fc119*/
      }
      v20 = v22; /*0x7fc1e2*/
      v19 = 0.0; /*0x7fc1e2*/
    }
    if ( BYTE1(OB_ShaderConstantStorage_010201A0[0x2D9]) ) /*0x7fc1e4*/
    {
      if ( v115 && v15 ) /*0x7fc1fe*/
      {
        v55 = MEMORY[0xB3F92C]; /*0x7fc204*/
        *(float *)v134 = v20; /*0x7fc20a*/
        v56 = unk_B3F930; /*0x7fc20e*/
        v57 = unk_B3F934; /*0x7fc215*/
        *(float *)&v134[4] = v19; /*0x7fc21b*/
        *(float *)&v134[8] = *(float *)&v134[4]; /*0x7fc21f*/
        v116 = v55; /*0x7fc223*/
        v117 = v56; /*0x7fc22b*/
        *(float *)&v134[0xC] = v55; /*0x7fc22f*/
        v118 = v57; /*0x7fc233*/
        *(float *)&v134[0x10] = *(float *)&v134[4]; /*0x7fc237*/
        *(float *)&v134[0x18] = *(float *)&v134[4]; /*0x7fc23e*/
        *(float *)&v134[0x14] = v20; /*0x7fc247*/
        *(float *)&v134[0x1C] = v56; /*0x7fc252*/
        *(float *)&v134[0x20] = *(float *)&v134[4]; /*0x7fc25b*/
        *(float *)&v134[0x24] = *(float *)&v134[4]; /*0x7fc262*/
        *(float *)&v134[0x28] = *(float *)&v134[0x14]; /*0x7fc26b*/
        *(float *)&v134[0x2C] = v57; /*0x7fc276*/
        v58 = v20; /*0x7fc27d*/
        *(float *)&v134[0x30] = *(float *)&v134[4]; /*0x7fc27f*/
        *(float *)&v134[0x34] = *(float *)&v134[4]; /*0x7fc286*/
        *(float *)&v134[0x38] = *(float *)&v134[4]; /*0x7fc28d*/
      }
      else
      {
        *(float *)v134 = *v16; /*0x7fc29d*/
        *(float *)&v134[4] = v16[1]; /*0x7fc2a4*/
        *(float *)&v134[8] = v16[2]; /*0x7fc2ab*/
        *(float *)&v134[0xC] = v16[9]; /*0x7fc2b2*/
        *(float *)&v134[0x10] = v16[3]; /*0x7fc2b9*/
        *(float *)&v134[0x14] = v16[4]; /*0x7fc2c3*/
        *(float *)&v134[0x18] = v16[5]; /*0x7fc2cd*/
        *(float *)&v134[0x1C] = v16[0xA]; /*0x7fc2d7*/
        *(float *)&v134[0x20] = v16[6]; /*0x7fc2e1*/
        *(float *)&v134[0x24] = v16[7]; /*0x7fc2eb*/
        *(float *)&v134[0x28] = v16[8]; /*0x7fc2f5*/
        *(float *)&v134[0x2C] = v16[0xB]; /*0x7fc2ff*/
        *(float *)&v134[0x30] = v19; /*0x7fc306*/
        *(float *)&v134[0x34] = v19; /*0x7fc30d*/
        *(float *)&v134[0x38] = v19; /*0x7fc314*/
        v58 = v16[0xC]; /*0x7fc31b*/
      }
      *(float *)&v134[0x3C] = v58; /*0x7fc31e*/
      qmemcpy(v135, v134, 0x40u); /*0x7fc335*/
      v114 = v135[3]; /*0x7fc35f*/
      v59 = v135[1]; /*0x7fc36e*/
      v60 = v135[2]; /*0x7fc372*/
      v111 = v135[4]; /*0x7fc376*/
      v61 = v135[5]; /*0x7fc37a*/
      OB_ShaderConstantStorage_010201A0[0x401] = v135[0]; /*0x7fc381*/
      v62 = v114; /*0x7fc387*/
      v112 = v61; /*0x7fc38b*/
      v63 = v135[6]; /*0x7fc38f*/
      OB_ShaderConstantStorage_010201A0[0x402] = v59; /*0x7fc396*/
      v64 = v111; /*0x7fc39b*/
      v113 = v63; /*0x7fc39f*/
      v65 = v135[7]; /*0x7fc3a3*/
      OB_ShaderConstantStorage_010201A0[0x403] = v60; /*0x7fc3aa*/
      v66 = v112; /*0x7fc3b0*/
      v114 = v65; /*0x7fc3b4*/
      v67 = v135[8]; /*0x7fc3b8*/
      OB_ShaderConstantStorage_010201A0[0x404] = v62; /*0x7fc3bf*/
      v68 = v113; /*0x7fc3c5*/
      v111 = v67; /*0x7fc3c9*/
      v69 = v135[9]; /*0x7fc3cd*/
      OB_ShaderConstantStorage_010201A0[0x405] = v64; /*0x7fc3d4*/
      v70 = v114; /*0x7fc3d9*/
      v112 = v69; /*0x7fc3dd*/
      v71 = v135[0xA]; /*0x7fc3e1*/
      OB_ShaderConstantStorage_010201A0[0x406] = v66; /*0x7fc3e8*/
      v72 = v111; /*0x7fc3ee*/
      v113 = v71; /*0x7fc3f2*/
      v73 = v135[0xB]; /*0x7fc3f6*/
      OB_ShaderConstantStorage_010201A0[0x407] = v68; /*0x7fc3fd*/
      v74 = v112; /*0x7fc403*/
      v114 = v73; /*0x7fc407*/
      v75 = v135[0xC]; /*0x7fc40b*/
      OB_ShaderConstantStorage_010201A0[0x408] = v70; /*0x7fc412*/
      v76 = v113; /*0x7fc417*/
      v111 = v75; /*0x7fc41b*/
      v77 = v135[0xD]; /*0x7fc41f*/
      OB_ShaderConstantStorage_010201A0[0x409] = v72; /*0x7fc426*/
      v78 = v114; /*0x7fc42c*/
      v112 = v77; /*0x7fc430*/
      v79 = v135[0xE]; /*0x7fc434*/
      OB_ShaderConstantStorage_010201A0[0x40A] = v74; /*0x7fc43b*/
      v80 = v111; /*0x7fc441*/
      v113 = v79; /*0x7fc445*/
      v81 = v135[0xF]; /*0x7fc449*/
      OB_ShaderConstantStorage_010201A0[0x40B] = v76; /*0x7fc450*/
      v82 = v112; /*0x7fc455*/
      v114 = v81; /*0x7fc459*/
      OB_ShaderConstantStorage_010201A0[0x40C] = v78; /*0x7fc45d*/
      v83 = v113; /*0x7fc463*/
      OB_ShaderConstantStorage_010201A0[0x40D] = v80; /*0x7fc467*/
      v84 = v114; /*0x7fc46d*/
      OB_ShaderConstantStorage_010201A0[0x40E] = v82; /*0x7fc471*/
      v85 = unk_B44EE8; /*0x7fc476*/
      OB_ShaderConstantStorage_010201A0[0x40F] = v83; /*0x7fc47b*/
      v86 = unk_B44EEC; /*0x7fc481*/
      OB_ShaderConstantStorage_010201A0[0x410] = v84; /*0x7fc487*/
      v87 = unk_B44EF0; /*0x7fc48d*/
      OB_ShaderConstantStorage_010201A0[0x411] = v85; /*0x7fc493*/
      v88 = unk_B44EF4; /*0x7fc498*/
      OB_ShaderConstantStorage_010201A0[0x412] = v86; /*0x7fc49d*/
      v89 = unk_B44EF8; /*0x7fc4a3*/
      OB_ShaderConstantStorage_010201A0[0x413] = v87; /*0x7fc4a9*/
      v90 = unk_B44EFC; /*0x7fc4af*/
      OB_ShaderConstantStorage_010201A0[0x414] = v88; /*0x7fc4b5*/
      OB_ShaderConstantStorage_010201A0[0x415] = v89; /*0x7fc4ba*/
      OB_ShaderConstantStorage_010201A0[0x416] = v90; /*0x7fc4c0*/
      v91 = g_CanopyShadowProjectionScale; /*0x7fc4cb*/
      v15 = a4; /*0x7fc4d1*/
      LODWORD(OB_ShaderConstantStorage_010201A0[0x417]) = unk_B44F00; /*0x7fc4d4*/
      OB_ShaderConstantStorage_010201A0[0x418] = v91; /*0x7fc4d9*/
    }
    if ( HIBYTE(OB_ShaderConstantStorage_010201A0[0x2DA]) ) /*0x7fc4e5*/
    {
      if ( v15 ) /*0x7fc4f0*/
      {
        qmemcpy(v135, *((const void **)v15 + 0xA), 0x40u); /*0x7fc50c*/
        D3DXMatrixTranspose_0((int)v135, (int)v135); /*0x7fc50e*/
        qmemcpy(&OB_ShaderConstantStorage_010201A0[0x419], v135, 0x40u); /*0x7fc524*/
      }
    }
    device = unk_B43104->member.device; /*0x7fc530*/
    v171 = device; /*0x7fc53f*/
    if ( (unsigned int)(v122 - 0x14E) <= 3 )    // Only selectors 0x14E..0x151 commit the six ShadowSceneLight clip planes. /*0x7fc546*/
    {
      v93 = *(int **)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] + 0xC); /*0x7fc551*/
      v94 = *v93; /*0x7fc554*/
      v14 = *(_BYTE *)(*v93 + 0x214) == 0;      // ShadowSceneLight+0x214 is the transformed-clip-plane cache-valid byte. /*0x7fc556*/
      v172 = *v93; /*0x7fc55d*/
      if ( v14 ) /*0x7fc564*/
      {
        v95 = (float *)(v94 + 0x150); /*0x7fc56e*/
        v96 = *(_DWORD *)(LODWORD(v119) + 0x14); /*0x7fc574*/
        qmemcpy(v135, (const void *)(v96 + 0x980), 0x40u); /*0x7fc589*/
        v97 = unk_B3F930; /*0x7fc592*/
        v98 = MEMORY[0xB3F92C]; /*0x7fc5ad*/
        v99 = unk_B3F934; /*0x7fc5db*/
        scale = v135[8] * v99 + v135[0] * v98 + v135[4] * v97; /*0x7fc5e4*/
        v135[0xC] = -scale; /*0x7fc5ee*/
        scale = v135[5] * v97 + v135[1] * v98 + v135[9] * v99; /*0x7fc614*/
        v135[0xD] = -scale; /*0x7fc61e*/
        scale = v98 * v135[2] + v97 * v135[6] + v99 * v135[0xA]; /*0x7fc644*/
        v135[0xE] = -scale; /*0x7fc64e*/
        qmemcpy(v173, (const void *)(v96 + 0x9C0), sizeof(v173)); /*0x7fc655*/
        D3DXMatrixMultiply_0((int)v134, (int)v135, (int)v173); /*0x7fc660*/
        D3DXMatrixInverse_0((int)v175, 0, (int)v134); /*0x7fc674*/
        D3DXMatrixTranspose_0((int)v134, (int)v175); /*0x7fc686*/
        LODWORD(v121) = &v174[4] - (char *)v95; /*0x7fc694*/
        v100 = 0; /*0x7fc69f*/
        v101 = v95; /*0x7fc6a3*/
        LODWORD(v119) = &v174[8] - (char *)v95; /*0x7fc6a5*/
        v122 = &v174[0xC] - (char *)v95; /*0x7fc6b2*/
        LODWORD(scale) = v174 - (char *)v95; /*0x7fc6bf*/
        do /*0x7fc764*/
        {
          v102 = v101[1]; /*0x7fc6c5*/
          v103 = v101[2]; /*0x7fc6c8*/
          v116 = *v101; /*0x7fc6cb*/
          v111 = v116; /*0x7fc6d3*/
          v117 = v102; /*0x7fc6d7*/
          v118 = v103; /*0x7fc6df*/
          v112 = v102; /*0x7fc6e3*/
          v113 = v103; /*0x7fc6f0*/
          v114 = -v101[3]; /*0x7fc6fc*/
          D3DXPlaneNormalize_0((int)&v111, (int)&v111); /*0x7fc700*/
          D3DXPlaneTransform_0((int)&v126, (int)&v111, (int)v134); /*0x7fc714*/
          v104 = scale; /*0x7fc71d*/
          v105 = v121; /*0x7fc721*/
          *(float *)((char *)v101 + LODWORD(scale)) = v126; /*0x7fc725*/
          v106 = v119; /*0x7fc72c*/
          *(float *)((char *)v101 + LODWORD(v105)) = v127; /*0x7fc732*/
          v107 = v122; /*0x7fc739*/
          *(float *)((char *)v101 + LODWORD(v106)) = v128; /*0x7fc73d*/
          result = v129; /*0x7fc741*/
          *(float *)((char *)v101 + v107) = v129; /*0x7fc746*/
          v171->lpVtbl->SetClipPlane(v171, v100++, (float *)((char *)v101 + LODWORD(v104)));// Commit transformed plane to IDirect3DDevice9::SetClipPlane(index 0..5). /*0x7fc759*/
          v101 += 4; /*0x7fc75e*/
        }
        while ( v100 < 6 ); /*0x7fc764*/
        v108 = (char *)(v172 + 0x1B4); /*0x7fc771*/
        *(_BYTE *)(v172 + 0x214) = 1;           // Cache transformed plane at ShadowSceneLight+0x1B4 (six float4 planes). /*0x7fc783*/
        qmemcpy(v108, v174, 0x60u); /*0x7fc78a*/
      }
      else
      {
        v109 = (const float *)(v94 + 0x1B4);    // Mark ShadowSceneLight clip-plane cache valid at +0x214. /*0x7fc797*/
        for ( i = 0; i < 6; ++i ) /*0x7fc79d*/
        {
          device->lpVtbl->SetClipPlane(device, i, v109); /*0x7fc7ab*/
          v109 += 4; /*0x7fc7b0*/
        }
      }
    }
  }
  return result; /*0x7fb807*/
}
