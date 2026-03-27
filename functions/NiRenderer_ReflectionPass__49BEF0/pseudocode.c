void __thiscall NiRenderer_ReflectionPass(NiDX9Renderer *this, float *arg0, NiAVObject *a3)
{
  bool v4; // zf
  NiCamera *v5; // eax
  NiCamera *v6; // eax
  Ni2DBuffer *v7; // eax
  bool v8; // sf
  double v9; // st7
  TESForm *v10; // eax
  float v11; // ecx
  float v12; // edx
  float v13; // eax
  double v14; // st7
  double v15; // st6
  NiDX9RendererVtbl *vftable; // eax
  NiCamera **v17; // esi
  NiRenderTargetGroup *v18; // eax
  NiDX9Renderer *v19; // ecx
  char v20; // cl
  NiNode *v21; // eax
  char v22; // cl
  char v23; // al
  PlayerCharacter *v24; // ecx
  NiNode *PlayerNode; // eax
  PlayerCharacter *v26; // ecx
  NiNode *v27; // eax
  NiNode *nodeSkyRoot; // ebx
  float y; // eax
  float z; // ecx
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
  NiCamera **v46; // esi
  NiDX9Renderer *v47; // ecx
  NiDX9Renderer *v48; // eax
  double v49; // st6
  double v50; // st7
  double v51; // st5
  NiAccumulator *v52; // esi
  NiAccumulator **v53; // edi
  int v54; // eax
  NiNode *v55; // eax
  float v56; // eax
  UInt32 v57; // ecx
  NiNode *v58; // eax
  unsigned int k; // esi
  unsigned int m; // ebx
  GridEntry *v61; // edi
  unsigned int v62; // eax
  NiNode *v63; // eax
  UInt32 m_uiRefCount; // eax
  NiDX9Renderer *v65; // esi
  char v66; // cl
  NiDX9Renderer **v67; // eax
  NiDX9Renderer *v68; // edi
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
  NiDX9Renderer *v87; // [esp+94h] [ebp-2C0h] BYREF
  float v88; // [esp+98h] [ebp-2BCh]
  char v89; // [esp+9Eh] [ebp-2B6h]
  char v90; // [esp+9Fh] [ebp-2B5h]
  UInt32 v91; // [esp+A0h] [ebp-2B4h]
  IDirect3DDevice9 *device; // [esp+A4h] [ebp-2B0h]
  float x; // [esp+A8h] [ebp-2ACh] BYREF
  float v94; // [esp+ACh] [ebp-2A8h]
  UInt32 v95; // [esp+B0h] [ebp-2A4h]
  int v96; // [esp+B4h] [ebp-2A0h]
  UInt32 (__thiscall *v97)(NiRenderer *); // [esp+B8h] [ebp-29Ch] BYREF
  void (__thiscall *v98)(NiRenderer *, float); // [esp+BCh] [ebp-298h]
  float v99; // [esp+C0h] [ebp-294h]
  float v100; // [esp+C4h] [ebp-290h] BYREF
  float v101; // [esp+C8h] [ebp-28Ch]
  float v102; // [esp+CCh] [ebp-288h]
  float v103; // [esp+D0h] [ebp-284h] BYREF
  float v104; // [esp+D4h] [ebp-280h]
  float v105; // [esp+D8h] [ebp-27Ch]
  float v106; // [esp+DCh] [ebp-278h] BYREF
  float v107; // [esp+E0h] [ebp-274h]
  float v108; // [esp+E4h] [ebp-270h]
  float v109[2]; // [esp+E8h] [ebp-26Ch] BYREF
  float v110; // [esp+F0h] [ebp-264h]
  int v111; // [esp+F4h] [ebp-260h]
  float v112; // [esp+F8h] [ebp-25Ch]
  float v113[4]; // [esp+FCh] [ebp-258h] BYREF
  float v114; // [esp+10Ch] [ebp-248h] BYREF
  float v115; // [esp+110h] [ebp-244h]
  float v116; // [esp+114h] [ebp-240h]
  float v117[3]; // [esp+118h] [ebp-23Ch] BYREF
  float v118[4]; // [esp+124h] [ebp-230h] BYREF
  float v119[4]; // [esp+134h] [ebp-220h] BYREF
  float v120[17]; // [esp+144h] [ebp-210h] BYREF
  float v121[9]; // [esp+188h] [ebp-1CCh] BYREF
  int v122[4]; // [esp+1ACh] [ebp-1A8h] BYREF
  _BYTE v123[68]; // [esp+1BCh] [ebp-198h] BYREF
  float v124[9]; // [esp+200h] [ebp-154h] BYREF
  TESWaterCulling a2; // [esp+224h] [ebp-130h] BYREF
  int v126; // [esp+350h] [ebp-4h]

  v87 = this;
  v4 = byte_B07050 == 0;
  v111 = 0;
  if ( !v4 )
  {
    if ( ImageSpaceEffectEnabled )
    {
      if ( arg0 )
      {
        if ( !this->__vftable )
        {
          v5 = (NiCamera *)FormHeapAlloc(0x124u);
          v96 = (int)v5;
          v126 = 0;
          if ( v5 )
            v6 = sub_70D590(v5);
          else
            v6 = 0;
          v126 = 0xFFFFFFFF;
          NiSmartPointer_Set__((Ni2DBuffer **)this, (Ni2DBuffer *)v6);
          if ( !this->member.super.super.m_uiRefCount )
          {
            v7 = (Ni2DBuffer *)sub_7C2420(g_textureManager, dword_B43104, 0x100, 0, 0, 0);
            NiSmartPointer_Set__((Ni2DBuffer **)&this->member, v7);
          }
        }
        v8 = dword_B070B0 < 0;
        v91 = this->member.super.pad014[0xC];
        v9 = (double)dword_B070B0;
        if ( v8 )
          v9 = v9 + flt_A2FC78;
        v71 = v9;
        v10 = sub_65E5E0((TESObjectREFR *)TESDataHandler_g_PlayerRef, v71);
        if ( v10 )
        {
          *(float *)&v91 = TESObjectCELL_GetWaterHeight(v10);
          this->member.super.pad014[0xC] = v91;
        }
        x = 0.0;
        v94 = 0.0;
        v95 = v91;
        v103 = 0.0;
        v104 = 0.0;
        v105 = 1.0;
        sub_716E00(v122, &v103, &x);
        v11 = arg0[0x22];
        v117[0] = arg0[0x19];
        v12 = arg0[0x23];
        v13 = arg0[0x24];
        v117[1] = arg0[0x1C];
        v14 = arg0[0x1F];
        v109[0] = v11;
        v117[2] = v14;
        v103 = 0.0;
        v109[1] = v12;
        v104 = 0.0;
        v15 = flt_A30634;
        v110 = v13;
        v105 = v15;
        x = 0.0;
        v94 = 1.0;
        v100 = 1.0;
        *(float *)&v95 = 0.0;
        v101 = 0.0;
        v102 = 0.0;
        sub_70FCC0(v121, &v100, &x, &v103);
        v110 = v110 - *(float *)&v91;
        sub_710250(&v114, v117, v121);
        v106 = arg0[0x1B];
        v107 = arg0[0x1E];
        v108 = -arg0[0x21];
        v72 = v115 * v108 - v116 * v107;
        v84 = v116 * v106 - v108 * v114;
        v78 = v107 * v114 - v115 * v106;
        v73 = -v72;
        v85 = -v84;
        v79 = -v78;
        v100 = v73;
        v101 = v85;
        v102 = v79;
        sub_70FCC0(v124, &v114, &v100, &v106);
        sub_710250((float *)&v97, v109, v121);
        vftable = this->__vftable;
        v99 = v99 + *(float *)&v91;
        vftable->super.GetFlags = v97;
        vftable->super.SetClearDepth = v98;
        *(float *)&vftable->super.GetClearDepth = v99;
        qmemcpy(&this->__vftable->super.gap0[0x30], v124, 0x24u);
        v74 = fabs(arg0[0x25]);
        v17 = (NiCamera **)v87;
        *(float *)&v87->__vftable->super.SetClearColor4 = v74;
        v18 = BSRenderedTexture::UseTextureToRender((BSRenderedTexture *)v17[1]);
        NiRenderer_BeginScene(kClear_ALL, v18);
        v19 = g_Renderer;
        if ( (g_Renderer->member.super.SceneState1 == 1 || v19->member.super.SceneState2 == 1)
          && v19->member.super.IsReady == 1 )
        {
          v19->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v19, &(*v17)->members.ViewPort);
        }
        Camera_SetFrustum(*v17, (int)(arg0 + 0x3B));
        NiAVObject_UpdateNiAVObject((NiAVObject *)*v17, 0.0, 1);
        v20 = *(_BYTE *)(value + 0x18);
        *(_WORD *)(value + 0x18) |= 1u;
        v21 = LodWaterRoot;
        v4 = LodWaterRoot == 0;
        v83 = 0;
        v90 = v20 & 1;
        if ( !v4 )
        {
          v22 = v21->members.super.m_flags & 1;
          v21->members.super.m_flags |= 1u;
          v83 = v22;
        }
        v23 = sub_7B2130(1);
        v24 = TESDataHandler_g_PlayerRef;
        LOBYTE(v112) = v23;
        PlayerNode = PlayerCharacter_GetPlayerNode(v24, 1);
        v26 = TESDataHandler_g_PlayerRef;
        v89 = PlayerNode->members.super.m_flags & 1;
        v27 = PlayerCharacter_GetPlayerNode(v26, 1);
        v27->members.super.m_flags |= 1u;
        nodeSkyRoot = TES->sky->nodeSkyRoot;
        y = nodeSkyRoot->members.super.m_localTransform.pos.y;
        z = nodeSkyRoot->members.super.m_localTransform.pos.z;
        x = nodeSkyRoot->members.super.m_localTransform.pos.x;
        LODWORD(nodeSkyRoot->members.super.m_localTransform.pos.x) = v97;
        v94 = y;
        *(float *)&v95 = z;
        LODWORD(nodeSkyRoot->members.super.m_localTransform.pos.y) = v98;
        nodeSkyRoot->members.super.m_localTransform.pos.z = v99;
        NiAVObject_UpdateNiAVObject((NiAVObject *)nodeSkyRoot, 0.0, 1);
        v31 = dword_B36094;
        v4 = dword_B36094 == 0;
        v82 = 0;
        v96 = dword_B36094;
        if ( !v4 )
        {
          v32 = *(_BYTE *)(v31 + 0x18) & 1;
          *(_WORD *)(v31 + 0x18) |= 1u;
          v82 = v32;
        }
        v33 = uGridsToLoad;
        device = (IDirect3DDevice9 *)(uGridsToLoad / (unsigned int)dword_B070E0);
        v34 = (double)(int)device;
        if ( (int)device < 0 )
          v34 = v34 + flt_A2FC78;
        v75 = v34;
        v76 = floor(v75);
        v86 = Double_To_SInt32(v76);
        for ( i = 0; i < v33; ++i )
        {
          for ( j = 0; j < v33; ++j )
          {
            GridEntry = GetGridEntry(TES->gridCellArray, i, j);
            if ( (int)i < v86 || (int)j < v86 || (v37 = uGridsToLoad - v86, i >= v37) || j >= v37 )
            {
              if ( GridEntry )
              {
                if ( GridEntry->cell )
                {
                  if ( TESObjectCELL_GetNiNode_(GridEntry->cell) )
                  {
                    NiNode = TESObjectCELL_GetNiNode_(GridEntry->cell);
                    NiNode->members.super.m_flags |= kFlag_AppCulled;
                  }
                }
              }
            }
            v33 = uGridsToLoad;
          }
        }
        TESWaterCullingProcess::TESWaterCullingProcess(&a2, 0);
        v39 = (NiCamera *)v87->__vftable;
        v126 = 1;
        a2.super.Camera = v39;
        inited = InitBSShaderAccumulator();
        v41 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement;
        v42 = (volatile LONG *)inited;
        v77 = inited;
        if ( inited )
          v41((volatile LONG *)inited + 1);
        accumulator = g_Renderer->member.super.accumulator;
        v81 = (volatile LONG *)accumulator;
        if ( accumulator )
          v41((volatile LONG *)accumulator + 1);
        v44 = g_Renderer->member.super.accumulator;
        p_accumulator = &g_Renderer->member.super.accumulator;
        LOBYTE(v126) = 3;
        v88 = *(float *)&p_accumulator;
        if ( v44 != (NiAccumulator *)v42 )
        {
          if ( v44 )
          {
            if ( !InterlockedDecrement((volatile LONG *)v44 + 1) )
              (**(void (__thiscall ***)(NiAccumulator *, int))v44)(v44, 1);
          }
          *(_DWORD *)LODWORD(v88) = v42;
          if ( v42 )
            InterlockedIncrement(v42 + 1);
        }
        v46 = (NiCamera **)v87;
        byte_B42CE8 = 1;
        (*(void (__thiscall **)(BSShaderAccumulator *, NiCamera *))(*(_DWORD *)v77 + 0x4C))(v77, *v46);
        *((_BYTE *)v77 + 0x21E0) = 1;
        SetCameraViewProj(g_Renderer, *v46);
        NiCullingProcess::SetFrustum(&a2.super, &(*v46)->members.Frustum);
        NiAVObject_Render((NiAVObject *)nodeSkyRoot, &a2.super);
        v47 = g_Renderer;
        device = dword_B43104->member.device;
        SetCameraViewProj(v47, *v46);
        NiCullingProcess::SetFrustum(&a2.super, &(*v46)->members.Frustum);
        v48 = dword_B43104;
        qmemcpy(v120, &dword_B43104->member.viewMatrix, 0x40u);
        v49 = flt_B3F930;
        v50 = CameraWorldTranslate;
        v51 = flt_B3F934;
        v88 = v120[8] * v51 + v120[0] * v50 + v120[4] * v49;
        v120[0xC] = -v88;
        v88 = v120[1] * v50 + v120[5] * v49 + v120[9] * v51;
        v120[0xD] = -v88;
        v88 = v50 * v120[2] + v49 * v120[6] + v51 * v120[0xA];
        v120[0xE] = -v88;
        qmemcpy(&a2.unk.CullingPlanes[1], &v48->member.projMatrix, 0x40u);
        D3DXMatrixMultiply_0(v123, v120, &a2.unk.CullingPlanes[1]);
        D3DXMatrixInverse_0(&a2.unk.CullingPlanes[5], 0, v123);
        D3DXMatrixTranspose_0(v123, &a2.unk.CullingPlanes[5]);
        v113[0] = 0.0;
        v113[1] = 0.0;
        v113[2] = 1.0;
        v113[3] = -*(float *)&v91;
        D3DXPlaneNormalize_0(v113, v113);
        D3DXPlaneTransform_0(v118, v113, v123);
        v119[0] = v118[0];
        v119[1] = v118[1];
        v119[2] = v118[2];
        v119[3] = v118[3];
        device->lpVtbl->SetClipPlane(device, 0, v119);
        ((void (__thiscall *)(NiDX9RenderState *, int, int, _DWORD))dword_B43104->member.renderState->vtbl->SetRenderState)(
          dword_B43104->member.renderState,
          0x98,
          1,
          0);
        nodeSkyRoot->members.super.m_flags |= 1u;
        LOBYTE(device) = byte_B09AE5;
        sub_4EA010(0);
        sub_483CD0((_DWORD *)TES->gridDistantArray, 0);
        NiAVObject_Render(a3, &a2.super);
        (*(void (__thiscall **)(BSShaderAccumulator *))(*(_DWORD *)v77 + 0x50))(v77);
        ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))dword_B43104->member.renderState->vtbl->SetRenderState)(
          dword_B43104->member.renderState,
          0x98,
          0,
          0);
        sub_4EA010((char)device);
        sub_483CD0((_DWORD *)TES->gridDistantArray, 1);
        nodeSkyRoot->members.super.m_flags &= ~1u;
        v52 = g_Renderer->member.super.accumulator;
        v53 = &g_Renderer->member.super.accumulator;
        if ( v52 != (NiAccumulator *)v81 )
        {
          if ( v52 )
          {
            if ( !InterlockedDecrement((volatile LONG *)v52 + 1) )
              (**(void (__thiscall ***)(NiAccumulator *, int))v52)(v52, 1);
          }
          *v53 = (NiAccumulator *)v81;
          if ( v81 )
            InterlockedIncrement(v81 + 1);
        }
        byte_B42CE8 = 0;
        a2.super.Camera = 0;
        NiRenderer_EndScene();
        v54 = value;
        if ( v90 )
          *(_WORD *)(v54 + 0x18) |= 1u;
        else
          *(_WORD *)(v54 + 0x18) &= ~1u;
        v55 = LodWaterRoot;
        if ( LodWaterRoot )
        {
          if ( v83 )
            v55->members.super.m_flags |= 1u;
          else
            v55->members.super.m_flags &= ~1u;
        }
        sub_7B2130(SLOBYTE(v112));
        v56 = v94;
        v57 = v95;
        nodeSkyRoot->members.super.m_localTransform.pos.x = x;
        nodeSkyRoot->members.super.m_localTransform.pos.y = v56;
        LODWORD(nodeSkyRoot->members.super.m_localTransform.pos.z) = v57;
        NiAVObject_UpdateNiAVObject((NiAVObject *)nodeSkyRoot, 0.0, 1);
        v58 = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1);
        if ( v89 )
          v58->members.super.m_flags |= 1u;
        else
          v58->members.super.m_flags &= ~1u;
        if ( v96 )
        {
          if ( v82 )
            *(_WORD *)(v96 + 0x18) |= 1u;
          else
            *(_WORD *)(v96 + 0x18) &= ~1u;
        }
        for ( k = 0; k < uGridsToLoad; ++k )
        {
          for ( m = 0; m < uGridsToLoad; ++m )
          {
            v61 = GetGridEntry(TES->gridCellArray, k, m);
            if ( (int)k >= v86 && (int)m >= v86 )
            {
              v62 = uGridsToLoad - v86;
              if ( k < v62 && m < v62 )
                continue;
            }
            if ( v61 )
            {
              if ( v61->cell )
              {
                if ( TESObjectCELL_GetNiNode_(v61->cell) )
                {
                  v63 = TESObjectCELL_GetNiNode_(v61->cell);
                  v63->members.super.m_flags &= kFlag_SelUpdate|kFlag_SelUpdateTransforms|kFlag_SelUpdatePropControllers|kFlag_SelUpdateRigid|kFlag_DisplayObject|kFlag_DisableSorting|kFlag_SelTransformsOverride|kFlag_IsNode|0xFE00;
                }
              }
            }
          }
        }
        if ( waterShader )
        {
          m_uiRefCount = v87->member.super.super.m_uiRefCount;
          if ( m_uiRefCount )
          {
            v65 = v87;
            v66 = v111;
            v67 = (NiDX9Renderer **)(m_uiRefCount + 0x20);
          }
          else
          {
            v65 = 0;
            v87 = 0;
            v67 = &v87;
            v66 = 1;
          }
          v68 = *v67;
          if ( (v66 & 1) != 0 )
          {
            if ( v65 )
            {
              if ( !InterlockedDecrement((volatile LONG *)&v65->member) )
                ((void (__thiscall *)(NiDX9Renderer *, int))v65->__vftable->super.gap0[0])(v65, 1);
            }
          }
          v69 = waterShader->Unk104[1];
          v70 = &waterShader->Unk104[1];
          if ( (NiDX9Renderer *)v69 != v68 )
          {
            if ( v69 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v69 + 4)) )
                (**(void (__thiscall ***)(UInt32, int))v69)(v69, 1);
            }
            *v70 = (UInt32)v68;
            if ( v68 )
              InterlockedIncrement((volatile LONG *)&v68->member);
          }
        }
        LOBYTE(v126) = 2;
        if ( v81 )
        {
          if ( !InterlockedDecrement(v81 + 1) )
            (**(void (__thiscall ***)(volatile LONG *, int))v81)(v81, 1);
        }
        LOBYTE(v126) = 1;
        if ( !InterlockedDecrement((volatile LONG *)v77 + 1) )
          (**(void (__thiscall ***)(BSShaderAccumulator *, int))v77)(v77, 1);
        v126 = 0xFFFFFFFF;
        BSCullingProcess::~BSCullingProcess((BSCullingProcess *)&a2);
      }
    }
  }
}
