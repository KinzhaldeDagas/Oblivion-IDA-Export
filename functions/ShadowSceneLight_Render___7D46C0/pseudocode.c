// Oblivion per-source shadow-map producer. Borrows and owns a pooled type-0x17 texture at +0x114, configures the perspective projector/camera and expanded clip planes at +0x150, clears and renders eligible caster geometry offscreen through mode-5 accumulator buckets, publishes view +0x50, projection +0x90, combined view-projection +0x10, invalidates clip-plane cache +0x214, and returns the map when no longer eligible.
//
// CULLING audit 2026-09-27 (observed Oblivion behavior): Focused shadow route: creates temporary base process at 0x7D4E43, sets shadow camera/frustum, writes ActivePlanes=0 at 0x7D4E7E, then calls 0x70C0B0 at 0x7D4E89. IMPORTANT: virtual Process subsequently calls SetFrustum and resets mask to 0x3F; pre-call zero alone does not establish a persistent no-frustum bypass. Uses separate camera/process/accumulator ownership.
void __thiscall ShadowSceneLight_RenderPerSourceShadowMap(int this, int _240)
{
  int v2; // ebx
  void *ShadowMap; // eax
  _DWORD *LightRef; // eax
  float *v5; // eax
  double v6; // st6
  double v7; // st5
  double v8; // st4
  double v9; // st3
  NiDX9Renderer *v10; // ecx
  BSShaderAccumulator *v11; // edx
  float *v12; // eax
  BSShaderAccumulator *v13; // edx
  BSShaderAccumulator *v14; // edx
  float *v15; // eax
  float *v16; // esi
  double v17; // st7
  bool v18; // zf
  double v19; // st7
  double v20; // st5
  NiDX9Renderer *v21; // esi
  double v22; // st5
  double v23; // st6
  BSShaderAccumulator *inited; // eax
  Ni2DBuffer **v25; // ebx
  NiCamera *v26; // eax
  NiCamera *v27; // eax
  float *v28; // eax
  int v29; // esi
  int v30; // ecx
  float *ExtraData; // eax
  float v32; // ecx
  float v33; // edx
  double v34; // rt2
  float *v35; // ecx
  double v36; // st7
  double v37; // st7
  double v38; // st7
  int v39; // eax
  Ni2DBuffer *v40; // eax
  int v41; // edi
  Ni2DBuffer *v42; // ecx
  int v43; // ecx
  int v44; // edx
  int v45; // eax
  NiDX9Renderer *v46; // ecx
  NiDX9Renderer *v47; // ecx
  NiRenderTargetGroup *v48; // eax
  BSShaderAccumulator *v49; // esi
  SceneGraph *v50; // edi
  Ni2DBuffer *v51; // ebx
  NiDX9Renderer *v52; // esi
  NiDX9Renderer *v53; // ebx
  int v54; // esi
  NiRenderedTexture *InnerTexture; // eax
  float v56; // edx
  float v57; // ecx
  float v58; // eax
  double v59; // st7
  double v60; // st6
  double v61; // st5
  double v62; // st4
  double v63; // st4
  double v64; // st6
  int v65; // esi
  int accumulator; // [esp+20h] [ebp-218h]
  BSShaderAccumulator *v67; // [esp+40h] [ebp-1F8h] BYREF
  float Near; // [esp+44h] [ebp-1F4h]
  float v69; // [esp+48h] [ebp-1F0h]
  BSShaderAccumulator *v70; // [esp+4Ch] [ebp-1ECh] BYREF
  NiDX9Renderer *v71; // [esp+50h] [ebp-1E8h]
  BSShaderAccumulator *v72; // [esp+54h] [ebp-1E4h] BYREF
  float v73; // [esp+58h] [ebp-1E0h]
  BSShaderAccumulator *v74; // [esp+5Ch] [ebp-1DCh]
  unsigned __int64 v75; // [esp+60h] [ebp-1D8h] BYREF
  float v76; // [esp+68h] [ebp-1D0h]
  BSShaderAccumulator *v77; // [esp+6Ch] [ebp-1CCh] BYREF
  NiDX9Renderer *v78; // [esp+70h] [ebp-1C8h]
  BSShaderAccumulator *v79; // [esp+74h] [ebp-1C4h]
  BSShaderAccumulator *width; // [esp+78h] [ebp-1C0h] BYREF
  float v81; // [esp+7Ch] [ebp-1BCh]
  float v82; // [esp+80h] [ebp-1B8h]
  float v83; // [esp+84h] [ebp-1B4h]
  BSShaderAccumulator *v84; // [esp+88h] [ebp-1B0h] BYREF
  NiDX9Renderer *v85; // [esp+8Ch] [ebp-1ACh]
  BSShaderAccumulator *v86; // [esp+90h] [ebp-1A8h]
  float Far; // [esp+94h] [ebp-1A4h]
  int v88; // [esp+98h] [ebp-1A0h]
  NiFrustum a2; // [esp+9Ch] [ebp-19Ch] BYREF
  float v90[4]; // [esp+B8h] [ebp-180h] BYREF
  _DWORD v91[4]; // [esp+C8h] [ebp-170h] BYREF
  float v92[16]; // [esp+D8h] [ebp-160h] BYREF
  float v93[16]; // [esp+118h] [ebp-120h] BYREF
  float v94[13]; // [esp+164h] [ebp-D4h] BYREF
  BSCullingProcess v95; // [esp+198h] [ebp-A0h] BYREF

  v2 = this; /*0x7d46f2*/
  v88 = this; /*0x7d46f4*/
  if ( (*(_BYTE *)(this + 0xF4) /*0x7d474b*/
     && *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 3
     && (OB_RendererGlobalState_010201A0[0xA7] & 0x10) != 0
     || *(_BYTE *)(this + 0x120))
    && *(_WORD *)(this + 0x118) != 0xFF
    && *(float *)(this + 0xD8) > dbl_A30068 )
  {
    if ( !*(_DWORD *)(this + 0x114) ) /*0x7d4751*/
    {
      ShadowMap = (void *)BSTextureManager__BorrowFrustumShadowTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7]);// Borrow one BSRenderedTexture from the unused frustum-shadow pool when +0x114 is null. /*0x7d4760*/
      if ( !ShadowMap ) /*0x7d4769*/
      {
        LightRef = ShadowSceneLight_GetLightRef((_DWORD *)v2, &v67); /*0x7d4770*/
        *(_WORD *)(*LightRef + 0x18) |= 1u; /*0x7d4777*/
        NiPointerSlot_Release((NiD3DVertexShader *)&v67); /*0x7d4780*/
        return; /*0x7d479a*/
      }
      ShadowSceneLight_SetShadowMap((ShadowSceneLight_DecodedLayout *)v2, ShadowMap);// Publish/strong-own the borrowed shadow texture at ShadowSceneLight+0x114. /*0x7d479e*/
    }
    v5 = *(float **)(v2 + 0x130); /*0x7d47ac*/
    qmemcpy(v94, (const void *)(*(_DWORD *)(v2 + 0x100) + 0x64), sizeof(v94)); /*0x7d47be*/
    *(float *)&v67 = v5[8] - v94[9]; /*0x7d47ca*/
    *(float *)&v71 = v5[9] - v94[0xA]; /*0x7d47d8*/
    *(float *)&v70 = v5[0xA] - v94[0xB]; /*0x7d47ea*/
    v84 = v67; /*0x7d47f2*/
    v85 = v71; /*0x7d47fa*/
    v86 = v70; /*0x7d4802*/
    Vector3_NormalizeInPlace((float *)&v84); /*0x7d4806*/
    *(float *)&v67 = -*(float *)&rhs; /*0x7d481e*/
    *(float *)&v71 = -*(float *)&MEMORY[0xB258EC]; /*0x7d482f*/
    *(float *)&v70 = -*(float *)&MEMORY[0xB258F0]; /*0x7d483b*/
    v72 = v67; /*0x7d4843*/
    v73 = *(float *)&v71; /*0x7d484b*/
    v74 = v70; /*0x7d4853*/
    NiPoint3__NormalizedCrossProduct((float *)&v84, (float *)&v77, (float *)&v72); /*0x7d4857*/
    v6 = dbl_A3D8E8; /*0x7d4860*/
    v7 = *(float *)&v79; /*0x7d486a*/
    v8 = *(float *)&v78; /*0x7d4871*/
    if ( v6 > *(float *)&v77 ) /*0x7d4875*/
    {
      v9 = dbl_A91288; /*0x7d4877*/
      if ( v9 < *(float *)&v77 && v8 < v6 && v8 > v9 && v7 < v6 && v7 > v9 ) /*0x7d48b0*/
      {
        v10 = (NiDX9Renderer *)MEMORY[0xB258D4]; /*0x7d48b7*/
        v11 = (BSShaderAccumulator *)MEMORY[0xB258D8]; /*0x7d48bd*/
        v72 = (BSShaderAccumulator *)stru_B258D0; /*0x7d48c3*/
        v73 = *(float *)&v10; /*0x7d48c7*/
        v74 = v11; /*0x7d48cb*/
      }
    }
    v12 = NiPoint3__NormalizedCrossProduct((float *)&v84, (float *)&width, (float *)&v77); /*0x7d48e7*/
    v13 = *(BSShaderAccumulator **)v12; /*0x7d48f0*/
    *(float *)&v67 = -*(float *)&v77; /*0x7d48f4*/
    v72 = v13; /*0x7d48f8*/
    v73 = v12[1]; /*0x7d4905*/
    v14 = *((BSShaderAccumulator **)v12 + 2); /*0x7d4909*/
    *(float *)&v71 = -*(float *)&v78; /*0x7d490c*/
    v74 = v14; /*0x7d4914*/
    *(float *)&v70 = -*(float *)&v79; /*0x7d491c*/
    *(float *)&v75 = *(float *)&v67; /*0x7d4924*/
    v77 = v67; /*0x7d4930*/
    *((float *)&v75 + 1) = *(float *)&v71; /*0x7d4934*/
    v78 = v71; /*0x7d4940*/
    v76 = *(float *)&v70; /*0x7d4944*/
    v79 = v70; /*0x7d4950*/
    NiFrustum::SetOrtho(&a2, 0); /*0x7d4954*/
    v15 = *(float **)(v2 + 0x130); /*0x7d4959*/
    v16 = *(float **)(v2 + 0x100); /*0x7d495f*/
    a2.Ortho = 0; /*0x7d4965*/
    v69 = v15[0xB]; /*0x7d4970*/
    *(float *)&v71 = v16[0x22] - v15[8]; /*0x7d497d*/
    *(float *)&v67 = v16[0x23] - v15[9]; /*0x7d498a*/
    *(float *)&v70 = v16[0x24] - v15[0xA]; /*0x7d4997*/
    *(float *)&v67 = *(float *)&v67 * *(float *)&v67 + *(float *)&v71 * *(float *)&v71 + *(float *)&v70 * *(float *)&v70; /*0x7d49b7*/
    *(float *)&v67 = sqrt(*(float *)&v67); /*0x7d49c4*/
    v69 = v69 / *(float *)&v67 * dbl_A91280;    // Native projector FOV in degrees = caster radius / source-to-projector distance * 110.0. /*0x7d49de*/
    v17 = v69; /*0x7d49e2*/
    *(float *)(v2 + 0x124) = v69;               // Store the native projector FOV in degrees at ShadowSceneLight+0x124. /*0x7d49e6*/
    v69 = v17 * dbl_A2FAA0 * dbl_A91278;        // Convert the stored field of view to its half-angle in radians: FOV * 0.5 * 0.01745327934622765. /*0x7d49f8*/
    v69 = tan(v69);                             // Apply tan(FOV/2) to obtain the symmetric lateral-frustum extent used by the Oblivion shadow camera. /*0x7d4a05*/
    *(float *)&v67 = v69; /*0x7d4a0d*/
    v18 = *(_BYTE *)(v2 + 0xF4) == 0; /*0x7d4a11*/
    v19 = v69; /*0x7d4a18*/
    v69 = -v69; /*0x7d4a20*/
    a2.Left = v69;                              // Perspective frustum left and bottom are -tan(FOV/2). /*0x7d4a28*/
    a2.Bottom = v69; /*0x7d4a2c*/
    a2.Right = v19;                             // Perspective frustum right and top are +tan(FOV/2). /*0x7d4a33*/
    a2.Top = v19; /*0x7d4a37*/
    a2.Near = 1.0;                              // Per-source shadow camera near plane is 1.0. /*0x7d4a40*/
    v20 = v16[0x3E]; /*0x7d4a47*/
    v21 = unk_B43104; /*0x7d4a4d*/
    a2.Far = v20;                               // Per-source shadow camera far plane comes from the observed source/caster state. /*0x7d4a53*/
    v71 = v21; /*0x7d4a5c*/
    v90[0] = 0.0; /*0x7d4a60*/
    v90[3] = 0.0; /*0x7d4a67*/
    v22 = 1.0; /*0x7d4a6e*/
    v23 = 0.0; /*0x7d4a6e*/
    v90[1] = 1.0; /*0x7d4a70*/
    v90[2] = 1.0; /*0x7d4a77*/
    if ( !v18 ) /*0x7d4a7e*/
    {
      if ( BSShaderManager_IsShadowMappingReady() ) /*0x7d4a8a*/
      {
        inited = BSShaderAccumulator_GetOrCreateGlobal(); /*0x7d4a97*/
        sub_405070(&v70, (int)inited); /*0x7d4aa1*/
        accumulator = (int)v21->member.super.accumulator; /*0x7d4aa9*/
        v95.unk9C = 0; /*0x7d4aae*/
        sub_405070(&v67, accumulator); /*0x7d4ab9*/
        LOBYTE(v95.unk9C) = 1; /*0x7d4ac5*/
        NiDX9Renderer::SetShaderAccumulator(v21, v70); /*0x7d4acd*/
        v25 = (Ni2DBuffer **)(v2 + 0x14C);      // ShadowSceneLight+0x14C owns the lazily allocated per-source shadow camera. /*0x7d4ad2*/
        if ( !*v25 ) /*0x7d4ad8*/
        {
          *(float *)&v26 = COERCE_FLOAT(FormHeapAlloc(0x124u)); /*0x7d4ae2*/
          Near = *(float *)&v26; /*0x7d4aea*/
          LOBYTE(v95.unk9C) = 2; /*0x7d4af0*/
          if ( *(float *)&v26 == 0.0 ) /*0x7d4af8*/
            v27 = 0; /*0x7d4b0c*/
          else
            v27 = sub_70D590(v26); /*0x7d4afc*/
          LOBYTE(v95.unk9C) = 1; /*0x7d4b11*/
          NiSmartPointer_Set__(v25, (Ni2DBuffer *)v27); /*0x7d4b19*/
        }
        v28 = (float *)*v25; /*0x7d4b27*/
        v28[0x15] = v94[9]; /*0x7d4b29*/
        v28[0x16] = v94[0xA]; /*0x7d4b33*/
        v28[0x17] = v94[0xB]; /*0x7d4b3d*/
        NiAVObject_UpdateNiAVObject((NiAVObject *)*v25, 0.0, 1); /*0x7d4b48*/
        v29 = v88; /*0x7d4b4d*/
        v30 = *(_DWORD *)(v88 + 0x130); /*0x7d4b51*/
        v75 = *(_QWORD *)(v30 + 0x20); /*0x7d4b5a*/
        v76 = *(float *)(v30 + 0x28); /*0x7d4b6d*/
        ExtraData = (float *)NiObjectNET_GetExtraData((NiObjectNET *)v30, (const char *)&off_A7D2CC); /*0x7d4b71*/
        v32 = ExtraData[6]; /*0x7d4b76*/
        v33 = ExtraData[7]; /*0x7d4b79*/
        v82 = ExtraData[8]; /*0x7d4b7f*/
        v81 = v33; /*0x7d4b87*/
        *(float *)&width = v32; /*0x7d4b8f*/
        if ( v33 + v32 < v82 ) /*0x7d4b9e*/
        {
          v34 = dbl_A3F3E8; /*0x7d4bae*/
          v69 = *(float *)&rhs * v34; /*0x7d4bb0*/
          Far = *(float *)&MEMORY[0xB258EC] * v34; /*0x7d4bbc*/
          Near = v34 * *(float *)&MEMORY[0xB258F0]; /*0x7d4bc6*/
          *(float *)&v75 = v69 + *(float *)&v75; /*0x7d4bd2*/
          *((float *)&v75 + 1) = *((float *)&v75 + 1) + Far; /*0x7d4bde*/
          v76 = v76 + Near; /*0x7d4bea*/
        }
        sub_70C340((float *)*v25, (float *)&v75, (float *)&v72); /*0x7d4bfa*/
        Camera_SetFrustum((NiCamera *)*v25, (int)&a2); /*0x7d4c06*/
        sub_404D30(*v25, v90); /*0x7d4c15*/
        NiAVObject_UpdateNiAVObject((NiAVObject *)*v25, 0.0, 1); /*0x7d4c24*/
        v35 = (float *)*v25; /*0x7d4c29*/
        width = (BSShaderAccumulator *)(*v25)[5].members.width; /*0x7d4c2e*/
        v81 = v35[0x1E]; /*0x7d4c39*/
        v36 = v35[0x21]; /*0x7d4c41*/
        v77 = width; /*0x7d4c47*/
        v82 = v36; /*0x7d4c4b*/
        *(float *)&v78 = v81; /*0x7d4c53*/
        *(float *)&v79 = v82; /*0x7d4c57*/
        width = *((BSShaderAccumulator **)v35 + 0x1A); /*0x7d4c5e*/
        v81 = v35[0x1D]; /*0x7d4c69*/
        v37 = v35[0x20]; /*0x7d4c71*/
        v72 = width; /*0x7d4c77*/
        v82 = v37; /*0x7d4c7b*/
        *(float *)&v74 = v82; /*0x7d4c83*/
        v73 = v81; /*0x7d4c87*/
        width = *((BSShaderAccumulator **)v35 + 0x19); /*0x7d4c8e*/
        v81 = v35[0x1C]; /*0x7d4c99*/
        v38 = v35[0x1F]; /*0x7d4ca1*/
        *(float *)&v85 = v81; /*0x7d4ca4*/
        v39 = *(_DWORD *)(v29 + 0x130); /*0x7d4ca8*/
        v82 = v38; /*0x7d4cae*/
        v84 = width; /*0x7d4cb9*/
        Near = a2.Near; /*0x7d4cc1*/
        Far = a2.Far; /*0x7d4cd0*/
        *(float *)&v86 = v82; /*0x7d4cd4*/
        sub_70C230(v35, (float *)(v39 + 0x20)); /*0x7d4cd8*/
        v40 = *v25; /*0x7d4cdd*/
        qmemcpy(&a2, &(*v25)[0xB].members.data, sizeof(a2)); /*0x7d4cee*/
        a2.Far = a2.Far + dbl_A6BEA0; /*0x7d4cfd*/
        v41 = v88; /*0x7d4d04*/
        NiFrustumPlanes_SetFromFrustumAndTransform((NiFrustumPlanes *)(v88 + 0x150), &a2, (NiTransform *)&v40[5]);// Build six world-space frustum planes at ShadowSceneLight+0x150 using a temporarily expanded far plane. /*0x7d4d17*/
        v42 = *v25; /*0x7d4d20*/
        a2.Near = Near; /*0x7d4d22*/
        a2.Far = Far; /*0x7d4d32*/
        Camera_SetFrustum((NiCamera *)v42, (int)&a2); /*0x7d4d39*/
        v43 = dword_B25AD4; /*0x7d4d43*/
        v44 = dword_B25AD8; /*0x7d4d49*/
        v91[0] = dword_B25AD0; /*0x7d4d4f*/
        v45 = dword_B25ADC; /*0x7d4d56*/
        v91[1] = v43; /*0x7d4d5b*/
        v46 = renderer; /*0x7d4d62*/
        v91[2] = v44; /*0x7d4d68*/
        v91[3] = v45; /*0x7d4d6f*/
        ((void (__thiscall *)(NiDX9Renderer *, _DWORD *))v46->__vftable->super.GetClearColor)(v46, v91); /*0x7d4d83*/
        v47 = renderer; /*0x7d4d87*/
        *(float *)&width = 1.0; /*0x7d4d8d*/
        v81 = 1.0; /*0x7d4d91*/
        v82 = 1.0; /*0x7d4d99*/
        v83 = 1.0; /*0x7d4d9e*/
        ((void (__thiscall *)(NiDX9Renderer *, BSShaderAccumulator **))v47->__vftable->super.SetClearColor4)( /*0x7d4da7*/
          v47,
          &width);                              // Temporarily set renderer clear color to white (1,1,1,1) for the shadow target clear.
        v48 = BSRenderedTexture::UseTextureToRender(*(BSRenderedTexture **)(v41 + 0x114));// Resolve the NiRenderTargetGroup owned by ShadowSceneLight+0x114. /*0x7d4daf*/
        NiRenderer_BeginScene(kClear_ALL, v48); // Push/begin the per-source R32F target with engine kClear_ALL (7). /*0x7d4db7*/
        ((void (__thiscall *)(NiDX9Renderer *, _DWORD *))renderer->__vftable->super.SetClearColor4)(renderer, v91);// Restore the renderer clear color immediately after the target was cleared; clear depth/stencil defaults remain 1.0/0. /*0x7d4dd2*/
        if ( (v71->member.super.SceneState1 == 1 || v71->member.super.SceneState2 == 1) /*0x7d4df3*/
          && v71->member.super.IsReady == 1 )
        {
          ((void (__stdcall *)(float *, BSShaderAccumulator **, BSShaderAccumulator **, BSShaderAccumulator **, NiFrustum *, float *))v71->__vftable->super.SetupCamera)( /*0x7d4e21*/
            &v94[9],
            &v84,
            &v72,
            &v77,
            &a2,
            v90);                               // Install the shadow projector camera and normalized full-target viewport. This call authors viewport state only, not scissor state.
        }
        v49 = v70; /*0x7d4e25*/
        (*(void (__thiscall **)(BSShaderAccumulator *, Ni2DBuffer *))(*(_DWORD *)v70 + 0x4C))(v70, *v25);// Begin the dedicated accumulator transaction with the per-source shadow camera. /*0x7d4e31*/
        *((_BYTE *)v49 + 0x21E0) = 1;           // Set accumulator shadow-production byte +0x21E0 before culling/submission. /*0x7d4e3c*/
        NiCullingProcess_NiCullingProcess(&v95.super, 0); /*0x7d4e43*/
        v95.super.Camera = (NiCamera *)*v25; /*0x7d4e4e*/
        LOBYTE(v95.unk9C) = 3; /*0x7d4e5d*/
        NiCullingProcess::SetFrustum(&v95.super, &a2); /*0x7d4e65*/
        v50 = *(SceneGraph **)(v41 + 0x130); /*0x7d4e6a*/
        v51 = *v25; /*0x7d4e70*/
        v95.super.Planes.ActivePlanes = 0; /*0x7d4e7e*/
        NiRenderer_CullAndRenderScene((NiCamera *)v51, v50, &v95.super, 0);// Cull ShadowSceneLight+0x130 through the shadow camera and submit the visible geometry to the installed accumulator. /*0x7d4e89*/
        *((_BYTE *)v49 + 0x21E1) = 1;           // Set accumulator ready byte +0x21E1 only after visible geometry has been queued. /*0x7d4e8e*/
        (*(void (__thiscall **)(BSShaderAccumulator *))(*(_DWORD *)v49 + 0x50))(v49);// Final accumulator flush: in global mode 5 this draws buckets 6-9 and 0x154-0x155, then clears accumulated passes. /*0x7d4e9f*/
        v52 = v71; /*0x7d4ea1*/
        if ( (v71->member.super.SceneState1 == 1 || v71->member.super.SceneState2 == 1) /*0x7d4ec0*/
          && v71->member.super.IsReady == 1 )
        {
          v71->__vftable->super.SetupCamera( /*0x7d4eed*/
            (NiRenderer *)v71,
            (NiPoint3 *)&g_zeroNiPoint3,
            (NiPoint3 *)&v84,
            (NiPoint3 *)&v72,
            (NiPoint3 *)&v77,
            &a2,
            v90);
        }
        v53 = v71; /*0x7d4eef*/
        qmemcpy(v93, &v52->member.viewMatrix, sizeof(v93)); /*0x7d4f05*/
        qmemcpy(v92, &v71->member.projMatrix, sizeof(v92)); /*0x7d4f19*/
        NiRenderer_EndScene();                  // End the per-source target after view/projection matrices were captured. This drains the target stack and does not restore viewport or scissor state. /*0x7d4f1b*/
        NiDX9Renderer::SetShaderAccumulator(v53, v67);// Restore the renderer's previous shader accumulator. /*0x7d4f27*/
        if ( *((_DWORD *)v70 + 1) < 2u ) /*0x7d4f36*/
          InterlockedIncrement((volatile LONG *)v70 + 1); /*0x7d4f39*/
        v54 = v88; /*0x7d4f3f*/
        if ( *(_BYTE *)(v88 + 0x12C) ) /*0x7d4f43*/
        {
          InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(v88 + 0x114));// Optional +0x12C path obtains the inner texture for immediate shader binding. /*0x7d4f52*/
          ShaderDefinition9_BindRenderedTexture(InnerTexture); /*0x7d4f58*/
        }
        *(_BYTE *)(v54 + 0x214) = 0;            // Invalidate ShadowSceneLight transformed-clip-plane cache (+0x214=0) after producing a new map. /*0x7d4f67*/
        LOBYTE(v95.unk9C) = 1; /*0x7d4f6e*/
        BSCullingProcess::~BSCullingProcess(&v95); /*0x7d4f76*/
        LOBYTE(v95.unk9C) = 0; /*0x7d4f7f*/
        NiPointerSlot_Release((NiD3DVertexShader *)&v67); /*0x7d4f87*/
        v95.unk9C = 0xFFFFFFFF; /*0x7d4f90*/
        NiPointerSlot_Release((NiD3DVertexShader *)&v70); /*0x7d4f9b*/
        v2 = v54; /*0x7d4fa0*/
        goto LABEL_43; /*0x7d4fa2*/
      }
      v19 = *(float *)&v67; /*0x7d4faf*/
      v22 = 1.0; /*0x7d4fb1*/
      v23 = 0.0; /*0x7d4fb1*/
    }
    v56 = *(&g_zeroNiPoint3 + 1); /*0x7d4fb7*/
    v93[0] = *(float *)&v77; /*0x7d4fbd*/
    v57 = g_zeroNiPoint3; /*0x7d4fc4*/
    v58 = MEMORY[0xB3F9B0][0]; /*0x7d4fce*/
    v93[1] = *(float *)&v72; /*0x7d4fd3*/
    v75 = __PAIR64__(LODWORD(v56), LODWORD(v57)); /*0x7d4fe2*/
    v93[2] = *(float *)&v84; /*0x7d4fe6*/
    v76 = v58; /*0x7d4fed*/
    v93[3] = v23; /*0x7d4ff3*/
    v93[4] = *(float *)&v78; /*0x7d4ffe*/
    v93[5] = v73; /*0x7d5009*/
    v93[6] = *(float *)&v85; /*0x7d5014*/
    v93[7] = v23; /*0x7d501d*/
    v93[8] = *(float *)&v79; /*0x7d5028*/
    v93[9] = *(float *)&v74; /*0x7d5033*/
    v93[0xA] = *(float *)&v86; /*0x7d503e*/
    v93[0xB] = v93[7]; /*0x7d5045*/
    Near = *(float *)&v77 * v57 + *(float *)&v78 * v56 + v58 * *(float *)&v79; /*0x7d506c*/
    v93[0xC] = -Near; /*0x7d5076*/
    Near = v56 * v73 + v57 * *(float *)&v72 + v58 * *(float *)&v74; /*0x7d5095*/
    v93[0xD] = -Near; /*0x7d509f*/
    Near = v57 * *(float *)&v84 + v56 * *(float *)&v85 + v58 * *(float *)&v86; /*0x7d50c0*/
    v93[0xE] = -Near; /*0x7d50ca*/
    v93[0xF] = v22; /*0x7d50d1*/
    *(float *)&v67 = v19 - a2.Left; /*0x7d50e4*/
    Far = v19 - a2.Bottom; /*0x7d50f7*/
    Near = a2.Far - 1.0; /*0x7d510a*/
    v69 = 1.0 / Near; /*0x7d5112*/
    v92[0] = dbl_A3D0C0 / *(float *)&v67; /*0x7d5120*/
    v92[4] = v23; /*0x7d5129*/
    Near = a2.Left + v19; /*0x7d5136*/
    v92[8] = -Near / *(float *)&v67; /*0x7d5144*/
    v92[0xC] = v23; /*0x7d514d*/
    v92[1] = v92[0xC]; /*0x7d5154*/
    v92[5] = dbl_A3D0C0 / Far; /*0x7d5167*/
    Near = v19 + a2.Bottom; /*0x7d5174*/
    v92[9] = -Near / Far; /*0x7d5180*/
    v92[0xD] = v23; /*0x7d5189*/
    v92[2] = v92[0xD]; /*0x7d5190*/
    v92[6] = v92[0xD]; /*0x7d5197*/
    v92[0xA] = v69 * a2.Far; /*0x7d51a6*/
    v92[0xE] = -(a2.Far * v69); /*0x7d51b3*/
    v92[3] = v23; /*0x7d51ba*/
    v92[7] = v92[3]; /*0x7d51c1*/
    v92[0xF] = v92[3]; /*0x7d51c8*/
    v92[0xB] = v22; /*0x7d51cf*/
LABEL_43:
    v59 = v94[0xA]; /*0x7d51d6*/
    v60 = v94[0xA] * *(float *)&v78; /*0x7d51e4*/
    v61 = v94[9]; /*0x7d51ed*/
    v62 = v94[9]; /*0x7d51fb*/
    qmemcpy((void *)(v2 + 0x50), v93, 0x40u);   // Publish the shadow view matrix at ShadowSceneLight+0x50. /*0x7d51fd*/
    v63 = v60 + v62 * *(float *)&v77 + v94[0xB] * *(float *)&v79; /*0x7d5214*/
    v64 = v94[0xB]; /*0x7d5214*/
    Near = v63; /*0x7d521e*/
    *(float *)(v2 + 0x80) = -Near; /*0x7d5235*/
    qmemcpy((void *)(v2 + 0x90), v92, 0x40u);   // Publish the shadow projection matrix at ShadowSceneLight+0x90. /*0x7d523b*/
    Near = v73 * v59 + *(float *)&v72 * v61 + *(float *)&v74 * v64; /*0x7d525b*/
    *(float *)(v2 + 0x84) = -Near; /*0x7d5266*/
    Near = v59 * *(float *)&v85 + v61 * *(float *)&v84 + v64 * *(float *)&v86; /*0x7d527e*/
    *(float *)(v2 + 0x88) = -Near; /*0x7d5288*/
    D3DXMatrixMultiply_0((int)v92, v2 + 0x50, v2 + 0x90);// Multiply the published shadow view and projection matrices. /*0x7d528e*/
    qmemcpy((void *)(v2 + 0x10), v92, 0x40u);   // Publish the combined shadow view-projection matrix at ShadowSceneLight+0x10; Lighting30 consumers use this transform. /*0x7d52a2*/
    return; /*0x7d52a2*/
  }
  if ( *(_DWORD *)(this + 0x114) ) /*0x7d52bc*/
  {
    BSTextureManager__ReturnFrustumShadowTexture( /*0x7d52cd*/
      *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
      *(_DWORD *)(this + 0x114));               // When the light is no longer eligible, return +0x114 to the frustum-shadow pool and clear ownership.
    v65 = *(_DWORD *)(v2 + 0x114); /*0x7d52d2*/
    if ( v65 ) /*0x7d52da*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v65 + 4)) ) /*0x7d52e0*/
        (**(void (__thiscall ***)(int, int))v65)(v65, 1); /*0x7d52f6*/
      *(_DWORD *)(v2 + 0x114) = 0; /*0x7d52f8*/
    }
  }
}
