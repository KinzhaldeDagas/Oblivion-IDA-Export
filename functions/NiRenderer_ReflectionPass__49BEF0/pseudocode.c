// WaterManager water-reflection render pass. Called with two NiAVObject scene roots. It creates/selects a dedicated BSShaderAccumulator, swaps it into the renderer, sets g_bWaterReflectionPassActive at 0x49C4CC, begins accumulation, renders reflected scene roots with the reflection camera/frustum, flushes the accumulator, restores the previous renderer accumulator, clears the global at 0x49C809, and then ends the scene. This is the only writer of the global.
void __thiscall WaterManager_RenderReflectionPass(
        WaterManager *this,
        NiAVObject *primaryRoot,
        NiAVObject *secondaryRoot)
{
  bool v4; // zf
  NiCamera *v5; // eax
  NiCamera *v6; // eax
  Ni2DBuffer *v7; // eax
  bool v8; // sf
  double v9; // st7
  TESForm *v10; // eax
  float x; // ecx
  float y; // edx
  float z; // eax
  double v14; // st7
  double v15; // st6
  NiCamera *Camera; // eax
  WaterManager *v17; // esi
  NiRenderTargetGroup *v18; // eax
  NiDX9Renderer *v19; // ecx
  char v20; // cl
  int v21; // eax
  char v22; // cl
  char v23; // al
  PlayerCharacter *v24; // ecx
  NiNode *NodeByPerspective; // eax
  PlayerCharacter *v26; // ecx
  NiNode *v27; // eax
  NiNode *nodeSkyRoot; // ebx
  float v29; // eax
  float v30; // ecx
  int v31; // eax
  char v32; // cl
  unsigned int v33; // esi
  double v34; // st7
  unsigned int i; // edi
  GridEntry *GridEntry; // esi
  unsigned int v37; // eax
  NiNode *NiNode; // eax
  NiCamera *v39; // edx
  BSShaderAccumulator *inited; // eax
  void (__stdcall *v41)(volatile LONG *); // esi
  volatile LONG *v42; // edi
  NiAccumulator *accumulator; // eax
  NiAccumulator *v44; // esi
  NiAccumulator **p_accumulator; // eax
  NiCamera **p_Camera; // esi
  NiDX9Renderer *v47; // ecx
  NiDX9Renderer *v48; // eax
  double v49; // st6
  double v50; // st7
  double v51; // st5
  NiAccumulator *v52; // esi
  NiAccumulator **v53; // edi
  int v54; // eax
  int v55; // eax
  float v56; // eax
  float v57; // ecx
  NiNode *v58; // eax
  unsigned int k; // esi
  unsigned int m; // ebx
  GridEntry *v61; // edi
  unsigned int v62; // eax
  NiNode *v63; // eax
  BSRenderedTexture *ReflectionMap; // eax
  WaterManager *v65; // esi
  char v66; // cl
  WaterManager **p_RenderedTexture; // eax
  WaterManager *v68; // edi
  UInt32 v69; // esi
  UInt32 *v70; // ebx
  float v71; // [esp+6Ch] [ebp-2E8h]
  float v72; // [esp+84h] [ebp-2D0h]
  float v73; // [esp+84h] [ebp-2D0h]
  float v74; // [esp+84h] [ebp-2D0h]
  float v75; // [esp+84h] [ebp-2D0h]
  float v76; // [esp+84h] [ebp-2D0h]
  BSShaderAccumulator *v77; // [esp+84h] [ebp-2D0h]
  float v78; // [esp+88h] [ebp-2CCh]
  float v79; // [esp+88h] [ebp-2CCh]
  unsigned int j; // [esp+88h] [ebp-2CCh]
  volatile LONG *v81; // [esp+88h] [ebp-2CCh]
  char v82; // [esp+8Eh] [ebp-2C6h]
  char v83; // [esp+8Fh] [ebp-2C5h]
  float v84; // [esp+90h] [ebp-2C4h]
  float v85; // [esp+90h] [ebp-2C4h]
  int v86; // [esp+90h] [ebp-2C4h]
  WaterManager *v87; // [esp+94h] [ebp-2C0h] BYREF
  float v88; // [esp+98h] [ebp-2BCh]
  char v89; // [esp+9Eh] [ebp-2B6h]
  char v90; // [esp+9Fh] [ebp-2B5h]
  float WaterHeight; // [esp+A0h] [ebp-2B4h]
  IDirect3DDevice9 *device; // [esp+A4h] [ebp-2B0h]
  float v93; // [esp+A8h] [ebp-2ACh] BYREF
  float v94; // [esp+ACh] [ebp-2A8h]
  float v95; // [esp+B0h] [ebp-2A4h]
  int v96; // [esp+B4h] [ebp-2A0h]
  NiPoint3 v97; // [esp+B8h] [ebp-29Ch] BYREF
  float v98; // [esp+C4h] [ebp-290h] BYREF
  float v99; // [esp+C8h] [ebp-28Ch]
  float v100; // [esp+CCh] [ebp-288h]
  float v101; // [esp+D0h] [ebp-284h] BYREF
  float v102; // [esp+D4h] [ebp-280h]
  float v103; // [esp+D8h] [ebp-27Ch]
  float v104; // [esp+DCh] [ebp-278h] BYREF
  float v105; // [esp+E0h] [ebp-274h]
  float v106; // [esp+E4h] [ebp-270h]
  float v107[2]; // [esp+E8h] [ebp-26Ch] BYREF
  float v108; // [esp+F0h] [ebp-264h]
  int v109; // [esp+F4h] [ebp-260h]
  float v110; // [esp+F8h] [ebp-25Ch]
  float v111[4]; // [esp+FCh] [ebp-258h] BYREF
  float v112; // [esp+10Ch] [ebp-248h] BYREF
  float v113; // [esp+110h] [ebp-244h]
  float v114; // [esp+114h] [ebp-240h]
  float v115[3]; // [esp+118h] [ebp-23Ch] BYREF
  float v116[4]; // [esp+124h] [ebp-230h] BYREF
  float v117[4]; // [esp+134h] [ebp-220h] BYREF
  float v118[17]; // [esp+144h] [ebp-210h] BYREF
  float v119[9]; // [esp+188h] [ebp-1CCh] BYREF
  int v120[4]; // [esp+1ACh] [ebp-1A8h] BYREF
  _BYTE v121[68]; // [esp+1BCh] [ebp-198h] BYREF
  float v122[9]; // [esp+200h] [ebp-154h] BYREF
  TESWaterCulling a2; // [esp+224h] [ebp-130h] BYREF
  int v124; // [esp+350h] [ebp-4h]

  v87 = this; /*0x49bf24*/
  v4 = byte_B07050 == 0; /*0x49bf2a*/
  v109 = 0; /*0x49bf31*/
  if ( !v4 ) /*0x49bf38*/
  {
    if ( OB_RendererGlobalState_010201A0[0xA5] ) /*0x49bf3e*/
    {
      if ( primaryRoot ) /*0x49bf50*/
      {
        if ( !this->Camera ) /*0x49bf56*/
        {
          v5 = (NiCamera *)FormHeapAlloc(0x124u); /*0x49bf5f*/
          v96 = (int)v5; /*0x49bf67*/
          v124 = 0; /*0x49bf6d*/
          if ( v5 ) /*0x49bf74*/
            v6 = sub_70D590(v5); /*0x49bf78*/
          else
            v6 = 0; /*0x49bf7f*/
          v124 = 0xFFFFFFFF; /*0x49bf84*/
          NiSmartPointer_Set__((Ni2DBuffer **)this, (Ni2DBuffer *)v6); /*0x49bf8f*/
          if ( !this->ReflectionMap ) /*0x49bf94*/
          {
            v7 = (Ni2DBuffer *)sub_7C2420( /*0x49bfb4*/
                                 *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
                                 unk_B43104,
                                 0x100,
                                 0,
                                 0,
                                 0);
            NiSmartPointer_Set__((Ni2DBuffer **)&this->ReflectionMap, v7); /*0x49bfbc*/
          }
        }
        v8 = dword_B070B0 < 0; /*0x49bfca*/
        WaterHeight = this->WaterHeight; /*0x49bfcc*/
        v9 = (double)dword_B070B0; /*0x49bfd0*/
        if ( v8 ) /*0x49bfd6*/
          v9 = v9 + flt_A2FC78; /*0x49bfd8*/
        v71 = v9; /*0x49bfe5*/
        v10 = sub_65E5E0((TESObjectREFR *)reference, v71); /*0x49bfe8*/
        if ( v10 ) /*0x49bfef*/
        {
          WaterHeight = TESObjectCELL_GetWaterHeight((ExtraDataList *)v10); /*0x49bff8*/
          this->WaterHeight = WaterHeight; /*0x49c000*/
        }
        v93 = 0.0; /*0x49c009*/
        v94 = 0.0; /*0x49c00e*/
        v95 = WaterHeight; /*0x49c01b*/
        v101 = 0.0; /*0x49c026*/
        v102 = 0.0; /*0x49c02a*/
        v103 = 1.0; /*0x49c030*/
        sub_716E00((float *)v120, &v101, &v93); /*0x49c034*/
        x = primaryRoot->members.m_worldTransform.pos.x; /*0x49c03c*/
        v115[0] = primaryRoot->members.m_worldTransform.rot.data[0][0]; /*0x49c042*/
        y = primaryRoot->members.m_worldTransform.pos.y; /*0x49c04c*/
        z = primaryRoot->members.m_worldTransform.pos.z; /*0x49c052*/
        v115[1] = primaryRoot->members.m_worldTransform.rot.data[1][0]; /*0x49c058*/
        v14 = primaryRoot->members.m_worldTransform.rot.data[2][0]; /*0x49c05f*/
        v107[0] = x; /*0x49c062*/
        v115[2] = v14; /*0x49c066*/
        v101 = 0.0; /*0x49c074*/
        v107[1] = y; /*0x49c078*/
        v102 = 0.0; /*0x49c07f*/
        v15 = kTerrainLODQuadRayDirectionZ; /*0x49c087*/
        v108 = z; /*0x49c08d*/
        v103 = v15; /*0x49c094*/
        v93 = 0.0; /*0x49c0a5*/
        v94 = 1.0; /*0x49c0ab*/
        v98 = 1.0; /*0x49c0af*/
        v95 = 0.0; /*0x49c0b3*/
        v99 = 0.0; /*0x49c0b7*/
        v100 = 0.0; /*0x49c0bb*/
        sub_70FCC0(v119, &v98, &v93, &v101); /*0x49c0bf*/
        v108 = v108 - WaterHeight; /*0x49c0e6*/
        NiPoint3_MultiplyMatrix3(&v112, v115, v119); /*0x49c0ee*/
        v104 = primaryRoot->members.m_worldTransform.rot.data[0][2]; /*0x49c0f6*/
        v105 = primaryRoot->members.m_worldTransform.rot.data[1][2]; /*0x49c100*/
        v106 = -primaryRoot->members.m_worldTransform.rot.data[2][2]; /*0x49c10c*/
        v72 = v113 * v106 - v114 * v105; /*0x49c136*/
        v84 = v114 * v104 - v106 * v112; /*0x49c16c*/
        v78 = v105 * v112 - v113 * v104; /*0x49c176*/
        v73 = -v72; /*0x49c180*/
        v85 = -v84; /*0x49c18a*/
        v79 = -v78; /*0x49c194*/
        v98 = v73; /*0x49c19c*/
        v99 = v85; /*0x49c1a4*/
        v100 = v79; /*0x49c1ac*/
        sub_70FCC0(v122, &v112, &v98, &v104); /*0x49c1b0*/
        NiPoint3_MultiplyMatrix3(&v97.x, v107, v119); /*0x49c1c7*/
        Camera = this->Camera; /*0x49c1d4*/
        v97.z = v97.z + WaterHeight; /*0x49c1dd*/
        Camera->members.super.m_localTransform.pos = v97; /*0x49c1e1*/
        qmemcpy(&this->Camera->members.super.m_localTransform, v122, 0x24u); /*0x49c203*/
        v74 = fabs(primaryRoot->members.m_worldTransform.scale); /*0x49c215*/
        v17 = v87; /*0x49c21d*/
        v87->Camera->members.super.m_localTransform.scale = v74; /*0x49c223*/
        v18 = BSRenderedTexture::UseTextureToRender(v17->ReflectionMap); /*0x49c229*/
        NiRenderer_BeginScene(kClear_ALL, v18); /*0x49c231*/
        v19 = renderer; /*0x49c236*/
        if ( (renderer->member.super.SceneState1 == 1 || v19->member.super.SceneState2 == 1) /*0x49c25d*/
          && v19->member.super.IsReady == 1 )
        {
          v19->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v19, &v17->Camera->members.ViewPort); /*0x49c26d*/
        }
        Camera_SetFrustum(v17->Camera, (int)&primaryRoot[1].members.m_localTransform.rot.data[1][1]); /*0x49c278*/
        NiAVObject_UpdateNiAVObject((NiAVObject *)v17->Camera, 0.0, 1); /*0x49c286*/
        v20 = *(_BYTE *)(*(_DWORD *)&MEMORY[0xB33E90][0x13A0] + 0x18); /*0x49c290*/
        *(_WORD *)(*(_DWORD *)&MEMORY[0xB33E90][0x13A0] + 0x18) |= 1u; /*0x49c293*/
        v21 = *(_DWORD *)&MEMORY[0xB33E90][0x13A4]; /*0x49c297*/
        v4 = *(_DWORD *)&MEMORY[0xB33E90][0x13A4] == 0; /*0x49c29f*/
        v83 = 0; /*0x49c2a1*/
        v90 = v20 & 1; /*0x49c2a6*/
        if ( !v4 ) /*0x49c2aa*/
        {
          v22 = *(_BYTE *)(v21 + 0x18) & 1; /*0x49c2af*/
          *(_WORD *)(v21 + 0x18) |= 1u; /*0x49c2b2*/
          v83 = v22; /*0x49c2b6*/
        }
        v23 = sub_7B2130(1); /*0x49c2bd*/
        v24 = reference; /*0x49c2c2*/
        LOBYTE(v110) = v23; /*0x49c2cc*/
        NodeByPerspective = PlayerCharacter_GetNodeByPerspective(v24, 1); /*0x49c2d3*/
        v26 = reference; /*0x49c2db*/
        v89 = NodeByPerspective->members.super.m_flags & 1; /*0x49c2e4*/
        v27 = PlayerCharacter_GetNodeByPerspective(v26, 1); /*0x49c2e8*/
        v27->members.super.m_flags |= 1u; /*0x49c2ef*/
        nodeSkyRoot = MEMORY[0xB333A0]->sky->nodeSkyRoot; /*0x49c2fc*/
        v29 = nodeSkyRoot->members.super.m_localTransform.pos.y; /*0x49c302*/
        v30 = nodeSkyRoot->members.super.m_localTransform.pos.z; /*0x49c305*/
        v93 = nodeSkyRoot->members.super.m_localTransform.pos.x; /*0x49c308*/
        nodeSkyRoot->members.super.m_localTransform.pos.x = v97.x; /*0x49c310*/
        v94 = v29; /*0x49c313*/
        v95 = v30; /*0x49c31b*/
        nodeSkyRoot->members.super.m_localTransform.pos.y = v97.y; /*0x49c31f*/
        nodeSkyRoot->members.super.m_localTransform.pos.z = v97.z; /*0x49c328*/
        NiAVObject_UpdateNiAVObject((NiAVObject *)nodeSkyRoot, 0.0, 1); /*0x49c330*/
        v31 = unk_B36094; /*0x49c335*/
        v4 = unk_B36094 == 0; /*0x49c33a*/
        v82 = 0; /*0x49c33c*/
        v96 = unk_B36094; /*0x49c341*/
        if ( !v4 ) /*0x49c345*/
        {
          v32 = *(_BYTE *)(v31 + 0x18) & 1; /*0x49c34a*/
          *(_WORD *)(v31 + 0x18) |= 1u; /*0x49c34d*/
          v82 = v32; /*0x49c351*/
        }
        v33 = uGridsToLoad; /*0x49c355*/
        device = (IDirect3DDevice9 *)(uGridsToLoad / (unsigned int)dword_B070E0); /*0x49c367*/
        v34 = (double)(int)device; /*0x49c36b*/
        if ( (int)device < 0 ) /*0x49c36f*/
          v34 = v34 + flt_A2FC78; /*0x49c371*/
        v75 = v34; /*0x49c377*/
        v76 = floor(v75); /*0x49c38a*/
        v86 = Double_To_SInt32(v76); /*0x49c39a*/
        for ( i = 0; i < v33; ++i ) /*0x49c39e*/
        {
          for ( j = 0; j < v33; ++j ) /*0x49c3a4*/
          {
            GridEntry = GetGridEntry(MEMORY[0xB333A0]->gridCellArray, i, j); /*0x49c3cd*/
            if ( (int)i < v86 || (int)j < v86 || (v37 = uGridsToLoad - v86, i >= v37) || j >= v37 ) /*0x49c3ea*/
            {
              if ( GridEntry ) /*0x49c3ee*/
              {
                if ( GridEntry->cell ) /*0x49c3f0*/
                {
                  if ( GetObjectPointerAt_054(GridEntry->cell) ) /*0x49c3f6*/
                  {
                    NiNode = GetObjectPointerAt_054(GridEntry->cell); /*0x49c401*/
                    NiNode->members.super.m_flags |= kFlag_AppCulled; /*0x49c406*/
                  }
                }
              }
            }
            v33 = uGridsToLoad; /*0x49c410*/
          }
        }
        TESWaterCullingProcess::TESWaterCullingProcess(&a2, 0); /*0x49c426*/
        v39 = v87->Camera; /*0x49c42f*/
        v124 = 1; /*0x49c431*/
        a2.super.Camera = v39; /*0x49c43c*/
        inited = BSShaderAccumulator_GetOrCreateGlobal(); /*0x49c443*/
        v41 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x49c448*/
        v42 = (volatile LONG *)inited; /*0x49c44e*/
        v77 = inited; /*0x49c452*/
        if ( inited ) /*0x49c456*/
          v41((volatile LONG *)inited + 1); /*0x49c45c*/
        accumulator = renderer->member.super.accumulator; /*0x49c464*/
        v81 = (volatile LONG *)accumulator; /*0x49c469*/
        if ( accumulator ) /*0x49c46d*/
          v41((volatile LONG *)accumulator + 1); /*0x49c473*/
        v44 = renderer->member.super.accumulator; /*0x49c47a*/
        p_accumulator = &renderer->member.super.accumulator; /*0x49c47d*/
        LOBYTE(v124) = 3; /*0x49c482*/
        v88 = *(float *)&p_accumulator; /*0x49c48a*/
        if ( v44 != (NiAccumulator *)v42 ) /*0x49c48e*/
        {
          if ( v44 ) /*0x49c492*/
          {
            if ( !InterlockedDecrement((volatile LONG *)v44 + 1) ) /*0x49c498*/
              (**(void (__thiscall ***)(NiAccumulator *, int))v44)(v44, 1); /*0x49c4ae*/
          }
          *(_DWORD *)LODWORD(v88) = v42; /*0x49c4b6*/
          if ( v42 ) /*0x49c4b8*/
            InterlockedIncrement(v42 + 1); /*0x49c4be*/
        }
        p_Camera = &v87->Camera; /*0x49c4c4*/
        g_bWaterReflectionPassActive = 1;       // Enter water-reflection accumulation: set g_bWaterReflectionPassActive after swapping in the dedicated reflection accumulator and immediately before BeginAccumulation plus reflected scene traversal. This is the sole set-to-one write. /*0x49c4cc*/
        (*(void (__thiscall **)(BSShaderAccumulator *, NiCamera *))(*(_DWORD *)v77 + 0x4C))(v77, *p_Camera);// Call BSShaderAccumulator vtable +0x4C BeginAccumulation with the reflection camera while g_bWaterReflectionPassActive is set. /*0x49c4dd*/
        *((_BYTE *)v77 + 0x21E0) = 1; /*0x49c4df*/
        SetCameraViewProj(renderer, *p_Camera); /*0x49c4ef*/
        NiCullingProcess::SetFrustum(&a2.super, &(*p_Camera)->members.Frustum); /*0x49c503*/
        NiAVObject_Render((NiAVObject *)nodeSkyRoot, &a2.super); /*0x49c512*/
        v47 = renderer; /*0x49c523*/
        device = unk_B43104->member.device; /*0x49c529*/
        SetCameraViewProj(v47, *p_Camera); /*0x49c530*/
        NiCullingProcess::SetFrustum(&a2.super, &(*p_Camera)->members.Frustum); /*0x49c545*/
        v48 = unk_B43104; /*0x49c54a*/
        qmemcpy(v118, &unk_B43104->member.viewMatrix, 0x40u); /*0x49c561*/
        v49 = unk_B3F930; /*0x49c56a*/
        v50 = MEMORY[0xB3F92C]; /*0x49c585*/
        v51 = unk_B3F934; /*0x49c59a*/
        v88 = v118[8] * v51 + v118[0] * v50 + v118[4] * v49; /*0x49c59e*/
        v118[0xC] = -v88; /*0x49c5a8*/
        v88 = v118[1] * v50 + v118[5] * v49 + v118[9] * v51; /*0x49c5ce*/
        v118[0xD] = -v88; /*0x49c5d8*/
        v88 = v50 * v118[2] + v49 * v118[6] + v51 * v118[0xA]; /*0x49c5fe*/
        v118[0xE] = -v88; /*0x49c613*/
        qmemcpy(&a2.unk.CullingPlanes[1], &v48->member.projMatrix, 0x40u); /*0x49c621*/
        D3DXMatrixMultiply_0((int)v121, (int)v118, (int)&a2.unk.CullingPlanes[1]); /*0x49c63b*/
        D3DXMatrixInverse_0((int)&a2.unk.CullingPlanes[5], 0, (int)v121); /*0x49c652*/
        D3DXMatrixTranspose_0((int)v121, (int)&a2.unk.CullingPlanes[5]); /*0x49c667*/
        v111[0] = 0.0; /*0x49c66e*/
        v111[1] = 0.0; /*0x49c67c*/
        v111[2] = 1.0; /*0x49c688*/
        v111[3] = -WaterHeight; /*0x49c696*/
        D3DXPlaneNormalize_0((int)v111, (int)v111); /*0x49c69d*/
        D3DXPlaneTransform_0((int)v116, (int)v111, (int)v121); /*0x49c6ba*/
        v117[0] = v116[0]; /*0x49c6ca*/
        v117[1] = v116[1]; /*0x49c6df*/
        v117[2] = v116[2]; /*0x49c6f0*/
        v117[3] = v116[3]; /*0x49c6ff*/
        device->lpVtbl->SetClipPlane(device, 0, v117); /*0x49c70e*/
        ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))unk_B43104->member.renderState->vtbl->SetRenderState)( /*0x49c72a*/
          unk_B43104->member.renderState,
          0x98,
          1,
          0);
        nodeSkyRoot->members.super.m_flags |= 1u; /*0x49c732*/
        LOBYTE(device) = byte_B09AE5; /*0x49c73d*/
        sub_4EA010(0); /*0x49c747*/
        sub_483CD0((_DWORD *)MEMORY[0xB333A0]->gridDistantArray, 0); /*0x49c75a*/
        NiAVObject_Render(secondaryRoot, &a2.super); /*0x49c76a*/
        (*(void (__thiscall **)(BSShaderAccumulator *))(*(_DWORD *)v77 + 0x50))(v77);// Call the dedicated reflection accumulator's vtable +0x50 Flush before restoring the renderer's previous accumulator and clearing the reflection flag. /*0x49c778*/
        ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))unk_B43104->member.renderState->vtbl->SetRenderState)( /*0x49c794*/
          unk_B43104->member.renderState,
          0x98,
          0,
          0);
        sub_4EA010((char)device); /*0x49c7a5*/
        sub_483CD0((_DWORD *)MEMORY[0xB333A0]->gridDistantArray, 1); /*0x49c7b8*/
        nodeSkyRoot->members.super.m_flags &= ~1u; /*0x49c7bd*/
        v52 = renderer->member.super.accumulator; /*0x49c7c9*/
        v53 = &renderer->member.super.accumulator; /*0x49c7cc*/
        if ( v52 != (NiAccumulator *)v81 ) /*0x49c7d3*/
        {
          if ( v52 ) /*0x49c7d7*/
          {
            if ( !InterlockedDecrement((volatile LONG *)v52 + 1) ) /*0x49c7dd*/
              (**(void (__thiscall ***)(NiAccumulator *, int))v52)(v52, 1); /*0x49c7f3*/
          }
          *v53 = (NiAccumulator *)v81; /*0x49c7fb*/
          if ( v81 ) /*0x49c7fd*/
            InterlockedIncrement(v81 + 1); /*0x49c803*/
        }
        g_bWaterReflectionPassActive = 0;       // Leave water-reflection accumulation: clear g_bWaterReflectionPassActive only after the reflection accumulator was flushed and the previous renderer accumulator restored. This is the sole clear write. /*0x49c809*/
        a2.super.Camera = 0; /*0x49c810*/
        NiRenderer_EndScene(); /*0x49c81b*/
        v54 = *(_DWORD *)&MEMORY[0xB33E90][0x13A0]; /*0x49c825*/
        if ( v90 ) /*0x49c834*/
          *(_WORD *)(v54 + 0x18) |= 1u; /*0x49c836*/
        else
          *(_WORD *)(v54 + 0x18) &= ~1u; /*0x49c83c*/
        v55 = *(_DWORD *)&MEMORY[0xB33E90][0x13A4]; /*0x49c840*/
        if ( *(_DWORD *)&MEMORY[0xB33E90][0x13A4] ) /*0x49c840*/
        {
          if ( v83 ) /*0x49c84e*/
            *(_WORD *)(v55 + 0x18) |= 1u; /*0x49c850*/
          else
            *(_WORD *)(v55 + 0x18) &= ~1u; /*0x49c856*/
        }
        sub_7B2130(SLOBYTE(v110)); /*0x49c862*/
        v56 = v94; /*0x49c86d*/
        v57 = v95; /*0x49c871*/
        nodeSkyRoot->members.super.m_localTransform.pos.x = v93; /*0x49c878*/
        nodeSkyRoot->members.super.m_localTransform.pos.y = v56; /*0x49c87c*/
        nodeSkyRoot->members.super.m_localTransform.pos.z = v57; /*0x49c880*/
        NiAVObject_UpdateNiAVObject((NiAVObject *)nodeSkyRoot, 0.0, 1); /*0x49c888*/
        v58 = PlayerCharacter_GetNodeByPerspective(reference, 1); /*0x49c894*/
        if ( v89 ) /*0x49c89e*/
          v58->members.super.m_flags |= 1u; /*0x49c8a0*/
        else
          v58->members.super.m_flags &= ~1u; /*0x49c8a6*/
        if ( v96 ) /*0x49c8b0*/
        {
          if ( v82 ) /*0x49c8b7*/
            *(_WORD *)(v96 + 0x18) |= 1u; /*0x49c8b9*/
          else
            *(_WORD *)(v96 + 0x18) &= ~1u; /*0x49c8bf*/
        }
        for ( k = 0; k < uGridsToLoad; ++k ) /*0x49c8c3*/
        {
          for ( m = 0; m < uGridsToLoad; ++m ) /*0x49c8cd*/
          {
            v61 = GetGridEntry(MEMORY[0xB333A0]->gridCellArray, k, m); /*0x49c8ec*/
            if ( (int)k >= v86 && (int)m >= v86 ) /*0x49c8f6*/
            {
              v62 = uGridsToLoad - v86; /*0x49c8fd*/
              if ( k < v62 && m < v62 ) /*0x49c905*/
                continue; /*0x49c905*/
            }
            if ( v61 ) /*0x49c909*/
            {
              if ( v61->cell ) /*0x49c90b*/
              {
                if ( GetObjectPointerAt_054(v61->cell) ) /*0x49c911*/
                {
                  v63 = GetObjectPointerAt_054(v61->cell); /*0x49c91c*/
                  v63->members.super.m_flags &= kFlag_SelUpdate|kFlag_SelUpdateTransforms|kFlag_SelUpdatePropControllers|kFlag_SelUpdateRigid|kFlag_DisplayObject|kFlag_DisableSorting|kFlag_SelTransformsOverride|kFlag_IsNode|0xFE00; /*0x49c921*/
                }
              }
            }
          }
        }
        if ( MEMORY[0xB45DCC] ) /*0x49c931*/
        {
          ReflectionMap = v87->ReflectionMap; /*0x49c942*/
          if ( ReflectionMap ) /*0x49c947*/
          {
            v65 = v87; /*0x49c949*/
            v66 = v109; /*0x49c94d*/
            p_RenderedTexture = (WaterManager **)&ReflectionMap->members.RenderedTexture; /*0x49c954*/
          }
          else
          {
            v65 = 0; /*0x49c959*/
            v87 = 0; /*0x49c95b*/
            p_RenderedTexture = &v87; /*0x49c95f*/
            v66 = 1; /*0x49c963*/
          }
          v68 = *p_RenderedTexture; /*0x49c96b*/
          if ( (v66 & 1) != 0 ) /*0x49c96d*/
          {
            if ( v65 ) /*0x49c971*/
            {
              if ( !InterlockedDecrement((volatile LONG *)&v65->ReflectionMap) ) /*0x49c977*/
                ((void (__thiscall *)(WaterManager *, int))v65->Camera->vtbl)(v65, 1); /*0x49c989*/
            }
          }
          v69 = MEMORY[0xB45DCC]->Unk104[1]; /*0x49c991*/
          v70 = &MEMORY[0xB45DCC]->Unk104[1]; /*0x49c997*/
          if ( (WaterManager *)v69 != v68 ) /*0x49c99f*/
          {
            if ( v69 ) /*0x49c9a3*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v69 + 4)) ) /*0x49c9a9*/
                (**(void (__thiscall ***)(UInt32, int))v69)(v69, 1); /*0x49c9bf*/
            }
            *v70 = (UInt32)v68; /*0x49c9c3*/
            if ( v68 ) /*0x49c9c5*/
              InterlockedIncrement((volatile LONG *)&v68->ReflectionMap); /*0x49c9cb*/
          }
        }
        LOBYTE(v124) = 2; /*0x49c9d7*/
        if ( v81 ) /*0x49c9df*/
        {
          if ( !InterlockedDecrement(v81 + 1) ) /*0x49c9e5*/
            (**(void (__thiscall ***)(volatile LONG *, int))v81)(v81, 1); /*0x49c9f7*/
        }
        LOBYTE(v124) = 1; /*0x49ca01*/
        if ( !InterlockedDecrement((volatile LONG *)v77 + 1) ) /*0x49ca09*/
          (**(void (__thiscall ***)(BSShaderAccumulator *, int))v77)(v77, 1); /*0x49ca1b*/
        v124 = 0xFFFFFFFF; /*0x49ca24*/
        BSCullingProcess::~BSCullingProcess((BSCullingProcess *)&a2); /*0x49ca2f*/
      }
    }
  }
}
