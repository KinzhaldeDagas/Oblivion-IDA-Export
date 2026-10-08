// Oblivion ShadowSceneNode visibility/ranking pass: culls full lights against the current camera, updates per-light visibility/score state, partitions viable lights into active handling, and enforces configured shadow-light budgets.
// DX11 restricted-bucket authority audit 2026-10-01: the BS accumulator branch of ShadowSceneNode_VisibleCullAndRankFullLights retains the previous renderer accumulator at 7C7D0F, installs current ESI through 405710 at 7C7D22, then invokes Flush via vtable+50 at 7C7D54 (return 7C7D56). Renderer+8 therefore owns a NiPointer reference to ESI throughout that call. Afterward 7C7D5D restores prior accumulator and 7C7D8D drops the current local reference. 405710 uses refcount+4 decrement/destroy then assign/increment. Distinguish the 7C7A79 branch: it allocates a NiAlphaAccumulator, so that return address is not by itself proof of an ordinary BS Lighting30 bucket. Bound accumulator lifetime does not prove mutable list, geometry/material, pool or writer exclusion.
void __userpurge ShadowSceneNode_VisibleCullAndRankFullLights(
        int a1@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        NiCullingProcess *a2)
{
  int v5; // ebp
  NiCamera *Camera; // edi
  _DWORD *v7; // ecx
  LONG v8; // esi
  int v9; // ebx
  void (__thiscall ***v10)(_DWORD, int); // ebp
  int v11; // eax
  bool v12; // zf
  void (__thiscall ***v13)(_DWORD, int); // esi
  float v14; // eax
  BSShaderAccumulator *v15; // esi
  NiDX9Renderer *v16; // ecx
  NiAccumulator *v17; // ebx
  float y; // eax
  int z_low; // ecx
  NiProperty *NiPropertyByID; // eax
  float v21; // edx
  float v22; // ecx
  double v23; // st7
  int m_extraDataList; // edx
  double v25; // st7
  float v26; // ecx
  float v27; // edx
  float v28; // eax
  BSShaderAccumulator *v29; // eax
  BSShaderAccumulator *v30; // esi
  volatile LONG *accumulator; // ebp
  NiDX9Renderer *v32; // ecx
  _DWORD *v34; // [esp+18h] [ebp-34h]
  float v35; // [esp+18h] [ebp-34h]
  int v36; // [esp+1Ch] [ebp-30h] BYREF
  float v37; // [esp+20h] [ebp-2Ch]
  float x; // [esp+24h] [ebp-28h]
  float v39; // [esp+28h] [ebp-24h]
  float v40; // [esp+2Ch] [ebp-20h]
  float v41; // [esp+30h] [ebp-1Ch]
  float v42; // [esp+34h] [ebp-18h]
  int v43; // [esp+38h] [ebp-14h]
  float v44; // [esp+3Ch] [ebp-10h]
  int v45; // [esp+48h] [ebp-4h]

  v5 = a1; /*0x7c78f7*/
  Camera = a2->Camera; /*0x7c7908*/
  if ( !*(_BYTE *)(a1 + 0x12C) ) /*0x7c78fd*/
  {
    v7 = *(_DWORD **)(a1 + 0xE8); /*0x7c7911*/
    if ( v7 ) /*0x7c7919*/
    {
      while ( 1 ) /*0x7c7925*/
      {
        v8 = v7[2]; /*0x7c7925*/
        v34 = (_DWORD *)*v7; /*0x7c792f*/
        if ( v8 ) /*0x7c7933*/
        {
          v9 = *ShadowSceneLight_GetLightRef((_DWORD *)v8, &v36); /*0x7c7945*/
          if ( v36 ) /*0x7c794d*/
          {
            v10 = (void (__thiscall ***)(_DWORD, int))v36; /*0x7c794f*/
            if ( !InterlockedDecrement((volatile LONG *)(v36 + 4)) ) /*0x7c7955*/
              (**v10)(v10, 1); /*0x7c796c*/
            v5 = a1; /*0x7c796e*/
          }
          if ( !v9 || *(_DWORD *)(v9 + 4) == 1 ) /*0x7c797a*/
          {
            ShadowSceneNode_RemoveFullLight((int **)v5, v8); /*0x7c79b0*/
          }
          else
          {
            if ( *(_BYTE *)(v8 + 0x104) ) /*0x7c797c*/
              ShadowSceneNode_RefreshMovedPointLightSource( /*0x7c7988*/
                (ShadowSceneNode_DecodedLayout *)v5,
                (ShadowSceneLight_DecodedLayout *)v8);
            if ( !*(_BYTE *)(v8 + 0xF4) || !BSShaderManager_IsShadowMappingReady() ) /*0x7c7996*/
              ShadowSceneLight_CullProcess((void *)v8, (int)a2);// Visible/cull path calls ShadowSceneLight_CullProcess at its true entry 0x007D6390. /*0x7c79a6*/
          }
        }
        if ( !v34 ) /*0x7c79ba*/
          break; /*0x7c79ba*/
        v7 = v34; /*0x7c7921*/
      }
    }
    ShadowSceneNode_ReorderFullLightsByCameraScore((_DWORD *)v5, (float *)Camera);// After visible/cull updates, reorder the full list by native camera-relative score. /*0x7c79c3*/
  }
  v11 = unk_B43124;                             // V165 receiver audit (2026-09-19, authoritative Oblivion): control reaches this suffix only after the full-light mutation/cull loop and the ReorderFullLightsByCameraScore call at 7C79C3, or after the native 12C skip branch. The function then performs camera/fog setup, visible traversal and accumulator Flush before returning. A whole-call CullFullLights writer therefore spans rendering; this boundary alone is not permission to waive writer exclusion. /*0x7c79c8*/
  v12 = unk_B43124 == (_DWORD)Camera; /*0x7c79cd*/
  OB_RendererGlobalState_010201A0[0x97] = *(_BYTE *)(v5 + 0x11C); /*0x7c79d5*/
  if ( !v12 ) /*0x7c79db*/
  {
    if ( v11 ) /*0x7c79df*/
    {
      v13 = (void (__thiscall ***)(_DWORD, int))v11; /*0x7c79e1*/
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x7c79e7*/
        (**v13)(v13, 1); /*0x7c79fd*/
    }
    unk_B43124 = (int)Camera; /*0x7c7a01*/
    if ( Camera ) /*0x7c7a07*/
      InterlockedIncrement((volatile LONG *)&Camera->members); /*0x7c7a0d*/
  }
  if ( *(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF] ) /*0x7c7a13*/
  {
    if ( OB_DisplayDebugFlags_010201A0[2] == 1 ) /*0x7c7a91*/
    {
      if ( dword_B2D18C == 0xFFFFFFFF ) /*0x7c7a9a*/
        dword_B2D18C = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xA7]; /*0x7c7aa2*/
      *(_DWORD *)&OB_RendererGlobalState_010201A0[0xA7] = 4; /*0x7c7aa8*/
    }
    else if ( dword_B2D18C != 0xFFFFFFFF ) /*0x7c7abc*/
    {
      *(_DWORD *)&OB_RendererGlobalState_010201A0[0xA7] = dword_B2D18C; /*0x7c7abe*/
      dword_B2D18C = 0xFFFFFFFF; /*0x7c7ac3*/
    }
    y = Camera->members.super.m_worldTransform.pos.y; /*0x7c7ad3*/
    z_low = SLODWORD(Camera->members.super.m_worldTransform.pos.z); /*0x7c7ad9*/
    x = Camera->members.super.m_worldTransform.pos.x; /*0x7c7adf*/
    v41 = x; /*0x7c7ae7*/
    v39 = y; /*0x7c7aef*/
    v42 = y; /*0x7c7af7*/
    v40 = *(float *)&z_low; /*0x7c7afb*/
    v43 = z_low; /*0x7c7b07*/
    v44 = 0.0; /*0x7c7b14*/
    OB_BSShader_SetSharedFloat4Constant_010201A0(0x1Cu, SLODWORD(x), SLODWORD(y), z_low, COERCE_INT(0.0)); /*0x7c7b2b*/
    x = Camera->members.super.m_worldTransform.rot.data[0][0]; /*0x7c7b33*/
    v39 = Camera->members.super.m_worldTransform.rot.data[1][0]; /*0x7c7b3f*/
    v40 = Camera->members.super.m_worldTransform.rot.data[2][0]; /*0x7c7b48*/
    v41 = x; /*0x7c7b50*/
    v42 = v39; /*0x7c7b5e*/
    *(float *)&v43 = v40; /*0x7c7b6d*/
    v44 = 0.0; /*0x7c7b7a*/
    OB_BSShader_SetSharedFloat4Constant_010201A0(0x1Du, SLODWORD(x), SLODWORD(v39), SLODWORD(v40), COERCE_INT(0.0)); /*0x7c7b85*/
    x = Camera->members.super.m_worldTransform.rot.data[0][2]; /*0x7c7b8d*/
    v39 = Camera->members.super.m_worldTransform.rot.data[1][2]; /*0x7c7b99*/
    v40 = Camera->members.super.m_worldTransform.rot.data[2][2]; /*0x7c7ba5*/
    v41 = x; /*0x7c7bad*/
    v42 = v39; /*0x7c7bbb*/
    *(float *)&v43 = v40; /*0x7c7bca*/
    v44 = 0.0; /*0x7c7bd7*/
    OB_BSShader_SetSharedFloat4Constant_010201A0(0x1Eu, SLODWORD(x), SLODWORD(v39), SLODWORD(v40), COERCE_INT(0.0)); /*0x7c7be2*/
    NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v5, 1);// Fog render consumer decode: ShadowSceneNode reads node property type 1 fog property; B333E4 reaches this path through root/sky property attachment. /*0x7c7bee*/
    if ( NiPropertyByID ) /*0x7c7bf5*/
    {
      v21 = *(float *)&NiPropertyByID[1].members.m_pcName; /*0x7c7bfe*/
      v22 = *(float *)&NiPropertyByID[1].members.m_controller; /*0x7c7c01*/
      v37 = *(float *)&NiPropertyByID[1].members.m_extraDataListLen; /*0x7c7c04*/
      v23 = *(float *)&NiPropertyByID[2].vtbl; /*0x7c7c08*/
      x = v21; /*0x7c7c0b*/
      m_extraDataList = (int)NiPropertyByID[1].members.m_extraDataList; /*0x7c7c0f*/
      v35 = v23; /*0x7c7c12*/
      v39 = v22; /*0x7c7c1a*/
      v40 = *(float *)&m_extraDataList; /*0x7c7c20*/
      v37 = v35 - v37; /*0x7c7c28*/
      v25 = v37; /*0x7c7c34*/
      OB_ShaderConstantStorage_010201A0[0x209] = v35;// Fog render consumer decode: ShadowSceneNode shared FogParam B45E14[0x209..0x20C] = (fogEnd, fogEnd - fogStart, 0, 0). /*0x7c7c38*/
      v42 = v25; /*0x7c7c3d*/
      OB_ShaderConstantStorage_010201A0[0x20A] = v42; /*0x7c7c47*/
      v41 = x; /*0x7c7c61*/
      OB_ShaderConstantStorage_010201A0[0x20B] = 0.0; /*0x7c7c65*/
      v26 = v41; /*0x7c7c6f*/
      v42 = v39; /*0x7c7c73*/
      OB_ShaderConstantStorage_010201A0[0x20C] = 0.0; /*0x7c7c77*/
      v27 = v42; /*0x7c7c80*/
      *(float *)&v43 = v40; /*0x7c7c84*/
      OB_ShaderConstantStorage_010201A0[0x20D] = v26;// Fog render consumer decode: ShadowSceneNode shared FogColor B45E14[0x20D..0x210] = (fog.r, fog.g, fog.b, 0). /*0x7c7c88*/
      v28 = *(float *)&v43; /*0x7c7c8e*/
      OB_ShaderConstantStorage_010201A0[0x20E] = v27; /*0x7c7c92*/
      v44 = 0.0; /*0x7c7c98*/
      OB_ShaderConstantStorage_010201A0[0x20F] = v28; /*0x7c7ca0*/
      OB_ShaderConstantStorage_010201A0[0x210] = 0.0; /*0x7c7ca5*/
    }
    OB_ShaderConstantStorage_010201A0[0xA9] = (OB_ShaderConstantStorage_010201A0[0x95] /*0x7c7cc5*/
                                             - OB_ShaderConstantStorage_010201A0[0x94])
                                            * flt_B2C670
                                            + OB_ShaderConstantStorage_010201A0[0x94];
    *(float *)&v29 = COERCE_FLOAT(BSShaderAccumulator_GetOrCreateGlobal()); /*0x7c7ccb*/
    v30 = v29; /*0x7c7cd0*/
    v37 = *(float *)&v29; /*0x7c7cd4*/
    if ( *(float *)&v29 != 0.0 ) /*0x7c7cd8*/
      InterlockedIncrement((volatile LONG *)v29 + 1); /*0x7c7cde*/
    v12 = *((_DWORD *)v30 + 1) == 1; /*0x7c7ce4*/
    v45 = 1; /*0x7c7ceb*/
    if ( v12 ) /*0x7c7cf3*/
      InterlockedIncrement((volatile LONG *)v30 + 1); /*0x7c7cf6*/
    accumulator = (volatile LONG *)renderer->member.super.accumulator; /*0x7c7d01*/
    if ( accumulator ) /*0x7c7d0a*/
      InterlockedIncrement(accumulator + 1); /*0x7c7d10*/
    v32 = renderer; /*0x7c7d16*/
    LOBYTE(v45) = 2; /*0x7c7d1d*/
    NiDX9Renderer::SetShaderAccumulator(v32, v30); /*0x7c7d22*/
    (*(void (__thiscall **)(BSShaderAccumulator *, NiCamera *))(*(_DWORD *)v30 + 0x4C))(v30, Camera); /*0x7c7d2f*/
    *((_BYTE *)v30 + 0x21E0) = 1; /*0x7c7d3a*/
    NiNode::OnVisible((NiNode *)a1, a2);        // V165 receiver audit: NiNode::OnVisible is called from inside ShadowSceneNode_VisibleCullAndRankFullLights (hook kind CullFullLights), after native light cull/reorder and accumulator BeginAccumulation. The whole-call observer writer is still active during this traversal and the following accumulator Flush. /*0x7c7d41*/
    *((_BYTE *)v30 + 0x21E1) = 1; /*0x7c7d46*/
    (*(void (__thiscall **)(BSShaderAccumulator *))(*(_DWORD *)v30 + 0x50))(v30);// V165 receiver audit: indirect call is BSShaderAccumulator vtable+50 = 7AE070 Flush. Proven constructor store at 7ABE67 installs vtable A8CC5C; dword A8CCAC is 7AE070. Ordinary Flush uses vtable+60 -> 7AC9A0 FlushPassBucket, which calls 7A9820 at 7ACDE4/7ACECC. Thus native material draws occur before hooked CullFullLights returns; blanket writer exclusion around the full 7C78D0 call blocks their receiver captures. /*0x7c7d54*/
    NiDX9Renderer::SetShaderAccumulator(renderer, (BSShaderAccumulator *)accumulator);// this /*0x7c7d5d*/
                                                // Verified shader-accumulator CullFullLights Flush return site: preceding 7C7D54 FF D0 calls BSShaderAccumulator vtable+50 = 7AE070. Native runtime can use this exact returnAddress with matching enclosing CullFullLights cookie to recognize RenderLighting context. Do not waive the parent's writer for the entire Flush; protect prefix/cleanup/gaps and nested real writers.
    LOBYTE(v45) = 1; /*0x7c7d64*/
    if ( accumulator ) /*0x7c7d69*/
    {
      if ( !InterlockedDecrement(accumulator + 1) ) /*0x7c7d6f*/
        (**(void (__thiscall ***)(volatile LONG *, int))accumulator)(accumulator, 1); /*0x7c7d82*/
    }
    v45 = 0xFFFFFFFF; /*0x7c7d85*/
    if ( !InterlockedDecrement((volatile LONG *)v30 + 1) ) /*0x7c7d8d*/
      (**(void (__thiscall ***)(BSShaderAccumulator *, int))v30)(v30, 1); /*0x7c7d9f*/
  }
  else
  {
    v14 = COERCE_FLOAT(FormHeapAlloc(0x38u)); /*0x7c7a1e*/
    v37 = v14; /*0x7c7a26*/
    v45 = 0; /*0x7c7a2c*/
    if ( v14 == 0.0 ) /*0x7c7a34*/
      v15 = 0; /*0x7c7a41*/
    else
      v15 = (BSShaderAccumulator *)NiAlphaAccumulator_Constructor((_DWORD *)LODWORD(v14)); /*0x7c7a3d*/
    v16 = renderer; /*0x7c7a43*/
    v17 = renderer->member.super.accumulator; /*0x7c7a49*/
    v45 = 0xFFFFFFFF; /*0x7c7a4d*/
    NiDX9Renderer::SetShaderAccumulator(v16, v15); /*0x7c7a55*/
    (*(void (__usercall **)(BSShaderAccumulator *@<ecx>, NiCamera *, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v15 + 0x4C))( /*0x7c7a62*/
      v15,
      Camera,
      a4,
      a3,
      st5_0);
    NiNode::OnVisible((NiNode *)v5, a2); /*0x7c7a6b*/
    (*(void (__thiscall **)(BSShaderAccumulator *))(*(_DWORD *)v15 + 0x50))(v15); /*0x7c7a77*/
    NiDX9Renderer::SetShaderAccumulator(renderer, v17);// this /*0x7c7a80*/
                                                // Verified alternate CullFullLights virtual Flush return site: preceding 7C7A77 FF D0 calls accumulator vtable+50, zero pushed call arguments. Return identity alone does not authorize a read phase; runtime also requires exact enclosing CullFullLights invocation/cookie and qualified draw scope.
  }
}
