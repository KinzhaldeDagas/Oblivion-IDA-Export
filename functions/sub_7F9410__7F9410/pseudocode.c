// ABI: void __thiscall(batchScratch in ECX, renderPassList on stack, shaderIndex on stack); single epilogue uses retn 8. The only Oblivion caller is 0x7AE6DD and ignores EAX.
void __thiscall OB_DrawLODTreePassList_WithMipBias_010201A0(
        void *batchScratch,
        void *renderPassList,
        unsigned int shaderIndex)
{
  int v3; // eax
  _DWORD *v4; // esi
  NiGeometry **v5; // ecx
  NiGeometry *v6; // ebx
  volatile LONG *v7; // edi
  volatile LONG *v8; // ebp
  HRESULT (__stdcall *SetSamplerState)(IDirect3DDevice9 *, DWORD, D3DSAMPLERSTATETYPE, DWORD); // edx
  void **p_vftable; // ebp
  volatile LONG *BuffData; // esi
  NiGeometry **v12; // eax
  void (__thiscall *v13)(void **, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *); // edx
  NiGeometry **v14; // eax
  void (__thiscall *v15)(void **, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *); // edx
  NiGeometry **v16; // eax
  void (__thiscall *v17)(void **, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *); // edx
  NiGeometry **v18; // eax
  void (__thiscall *v19)(void **, NiGeometry *, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *); // edx
  NiGeometry **v20; // eax
  void (__thiscall *v21)(void **, NiGeometry *, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *); // edx
  volatile LONG *v22; // edi
  unsigned int v23; // edx
  _DWORD *v24; // eax
  NiGeometry **v25; // eax
  volatile LONG *v26; // esi
  volatile LONG *v27; // ebp
  _DWORD *v28; // edx
  NiGeometry **v29; // eax
  NiGeometry *v30; // ebx
  NiGeometryData *v31; // edi
  volatile LONG *v32; // eax
  __int16 v33; // cx
  bool v34; // zf
  NiDynamicEffectState *v35; // edx
  NiGeometry **v36; // eax
  volatile LONG *v37; // esi
  void (__thiscall *v38)(void **, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *); // edx
  NiGeometry **v39; // eax
  void (__thiscall *v40)(void **, NiGeometry *, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *); // edx
  NiRTTI *(__thiscall *GetType)(NiObject *); // eax
  unsigned __int16 v42; // ax
  float v43; // edx
  unsigned __int16 vftable; // cx
  NiDX9Renderer *v45; // esi
  IDirect3DDevice9 *device; // [esp+FCh] [ebp-A8h]
  NiGeometry *v47; // [esp+100h] [ebp-A4h]
  NiGeometry *v48; // [esp+100h] [ebp-A4h]
  NiGeometry *v49; // [esp+100h] [ebp-A4h]
  NiGeometry *v50; // [esp+100h] [ebp-A4h]
  NiGeometry *v51; // [esp+100h] [ebp-A4h]
  NiGeometry *v52; // [esp+100h] [ebp-A4h]
  NiGeometry *v53; // [esp+100h] [ebp-A4h]
  NiDynamicEffectState *v54; // [esp+104h] [ebp-A0h]
  DWORD v55; // [esp+108h] [ebp-9Ch]
  _DWORD *v56; // [esp+120h] [ebp-84h]
  _DWORD *v57; // [esp+120h] [ebp-84h]
  volatile LONG *v58; // [esp+124h] [ebp-80h]
  volatile LONG *v59; // [esp+124h] [ebp-80h]
  NiGeometryData *geomData; // [esp+128h] [ebp-7Ch]
  int v62; // [esp+130h] [ebp-74h]
  volatile LONG *v63; // [esp+130h] [ebp-74h]
  volatile LONG *v64; // [esp+130h] [ebp-74h]
  NiGeometry **v65; // [esp+130h] [ebp-74h]
  volatile LONG *v66; // [esp+134h] [ebp-70h] BYREF
  volatile LONG *v67; // [esp+138h] [ebp-6Ch] BYREF
  volatile LONG *v68; // [esp+13Ch] [ebp-68h] BYREF
  NiDX9Renderer *v69; // [esp+140h] [ebp-64h]
  volatile LONG *v70; // [esp+144h] [ebp-60h] BYREF
  float v71; // [esp+148h] [ebp-5Ch]
  volatile LONG *v72; // [esp+14Ch] [ebp-58h] BYREF
  volatile LONG *v73; // [esp+150h] [ebp-54h] BYREF
  float x; // [esp+154h] [ebp-50h] BYREF
  float y; // [esp+158h] [ebp-4Ch]
  float z; // [esp+15Ch] [ebp-48h]
  float Radius; // [esp+160h] [ebp-44h]
  _BYTE v78[52]; // [esp+164h] [ebp-40h] BYREF
  int v79; // [esp+1A0h] [ebp-4h]

  v69 = renderer;                               // Loads the authoritative NiDX9Renderer pointer from global 0xB3F928 and saves it in var_64. The valid reset later reads its IDirect3DDevice9 at renderer+0x280. /*0x7f944a*/
  v3 = *((_DWORD *)renderPassList + 1); /*0x7f944e*/
  v4 = *(_DWORD **)v3; /*0x7f9451*/
  v5 = *(NiGeometry ***)(v3 + 8); /*0x7f9456*/
  v6 = *v5; /*0x7f9458*/
  v62 = (int)v5; /*0x7f9464*/
  v56 = *(_DWORD **)v3; /*0x7f946b*/
  geomData = (*v5)->member.geomData; /*0x7f946f*/
  v7 = *NiGeometry_GetPropertyState(*v5, &v68); /*0x7f9478*/
  v58 = v7; /*0x7f9480*/
  if ( v68 ) /*0x7f9484*/
  {
    v8 = v68; /*0x7f9486*/
    if ( !InterlockedDecrement(v68 + 1) ) /*0x7f948c*/
      (**(void (__thiscall ***)(volatile LONG *, int))v8)(v8, 1); /*0x7f94a3*/
  }
  SetSamplerState = v69->member.device->lpVtbl->SetSamplerState; /*0x7f94ba*/
  p_vftable = (void **)&v6->member.shader->__vftable; /*0x7f94c0*/
  v55 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0x20B]; /*0x7f94c6*/
  device = v69->member.device; /*0x7f94cb*/
  v66 = *((volatile LONG **)v7 + 6); /*0x7f94cc*/
  SetSamplerState(device, 0, D3DSAMP_MIPMAPLODBIAS, v55);// Direct sampler0 D3DSAMP_MIPMAPLODBIAS write from fLODTreeMipMapLODBias. This precedes both the valid draw route and the empty/no-eligible scan route. /*0x7f94d0*/
  if ( *(_WORD *)(*((_DWORD *)v66 + 0x27) + 0xE) ) /*0x7f94d8*/
  {
LABEL_5:
    qmemcpy(v78, &v6->member.super.m_worldTransform, sizeof(v78)); /*0x7f94e7*/
    x = v6->member.super.m_kWorldBound.Center.x; /*0x7f9503*/
    y = v6->member.super.m_kWorldBound.Center.y; /*0x7f950a*/
    z = v6->member.super.m_kWorldBound.Center.z; /*0x7f9514*/
    Radius = v6->member.super.m_kWorldBound.Radius; /*0x7f951b*/
    LODWORD(v71) = (unsigned __int16)shaderIndex; /*0x7f951f*/
    LODWORD(unk_B42E90) = (unsigned __int16)shaderIndex; /*0x7f9523*/
    *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] = v62; /*0x7f9528*/
    OB_BSShader_ResetLightConstantSlots_010201A0(); /*0x7f952e*/
    OB_BSShader_RebuildRenderEntryLightConstants_010201A0(shaderIndex, v62, (int)v66, 0); /*0x7f9542*/
    sub_7F6A30(v6); /*0x7f954a*/
    BuffData = (volatile LONG *)geomData->member.BuffData; /*0x7f9553*/
    v12 = sub_7016D0(v6, (NiDynamicEffectState **)&v67); /*0x7f955d*/
    v13 = *((void (__thiscall **)(void **, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *))*p_vftable /*0x7f956b*/
          + 0xA);
    v47 = *v12; /*0x7f9578*/
    v79 = 0; /*0x7f9580*/
    v13(p_vftable, v6, 0, BuffData, v58, v47, v78, &x); /*0x7f958b*/
    v79 = 0xFFFFFFFF; /*0x7f9593*/
    if ( v67 ) /*0x7f959e*/
    {
      v66 = v67; /*0x7f95a0*/
      if ( !InterlockedDecrement(v67 + 1) ) /*0x7f95a8*/
        (**(void (__thiscall ***)(volatile LONG *, int))v66)(v66, 1); /*0x7f95c0*/
    }
    v14 = sub_7016D0(v6, (NiDynamicEffectState **)&v67); /*0x7f95c9*/
    v15 = *((void (__thiscall **)(void **, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *))*p_vftable /*0x7f95d3*/
          + 0xB);
    v48 = *v14; /*0x7f95e0*/
    v79 = 1; /*0x7f95e8*/
    v15(p_vftable, v6, 0, BuffData, v58, v48, v78, &x); /*0x7f95f3*/
    v79 = 0xFFFFFFFF; /*0x7f95fb*/
    if ( v67 ) /*0x7f9606*/
    {
      v66 = v67; /*0x7f9608*/
      if ( !InterlockedDecrement(v67 + 1) ) /*0x7f9610*/
        (**(void (__thiscall ***)(volatile LONG *, int))v66)(v66, 1); /*0x7f9628*/
    }
    (*((void (__thiscall **)(void **))*p_vftable + 0x12))(p_vftable); /*0x7f9632*/
    v67 = (volatile LONG *)p_vftable[0xF]; /*0x7f963e*/
    v16 = sub_7016D0(v6, (NiDynamicEffectState **)&v66); /*0x7f9642*/
    v17 = *((void (__thiscall **)(void **, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *))*p_vftable /*0x7f964c*/
          + 0xC);
    v49 = *v16; /*0x7f9659*/
    v79 = 2; /*0x7f9661*/
    v17(p_vftable, v6, 0, BuffData, v58, v49, v78, &x); /*0x7f966c*/
    v79 = 0xFFFFFFFF; /*0x7f9674*/
    if ( v66 ) /*0x7f967f*/
    {
      v63 = v66; /*0x7f9681*/
      if ( !InterlockedDecrement(v66 + 1) ) /*0x7f9689*/
        (**(void (__thiscall ***)(volatile LONG *, int))v63)(v63, 1); /*0x7f96a1*/
    }
    v18 = sub_7016D0(v6, (NiDynamicEffectState **)&v66); /*0x7f96aa*/
    v19 = *((void (__thiscall **)(void **, NiGeometry *, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *))*p_vftable /*0x7f96b4*/
          + 0xD);
    v50 = *v18; /*0x7f96c1*/
    v79 = 3; /*0x7f96cb*/
    v19(p_vftable, v6, 0, 0, BuffData, v58, v50, v78, &x); /*0x7f96d6*/
    v79 = 0xFFFFFFFF; /*0x7f96de*/
    if ( v66 ) /*0x7f96e9*/
    {
      v64 = v66; /*0x7f96eb*/
      if ( !InterlockedDecrement(v66 + 1) ) /*0x7f96f3*/
        (**(void (__thiscall ***)(volatile LONG *, int))v64)(v64, 1); /*0x7f970b*/
    }
    (*((void (__thiscall **)(void **, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *))*p_vftable + 0xF))( /*0x7f971a*/
      p_vftable,
      v6,
      0,
      BuffData,
      v58);
    v20 = sub_7016D0(v6, (NiDynamicEffectState **)&v66); /*0x7f9723*/
    v21 = *((void (__thiscall **)(void **, NiGeometry *, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *))*p_vftable /*0x7f972d*/
          + 0xE);
    v51 = *v20; /*0x7f973a*/
    v79 = 4; /*0x7f9744*/
    v21(p_vftable, v6, 0, 0, BuffData, v58, v51, v78, &x); /*0x7f974f*/
    v79 = 0xFFFFFFFF; /*0x7f9757*/
    if ( v66 ) /*0x7f9762*/
    {
      v22 = v66; /*0x7f9764*/
      if ( !InterlockedDecrement(v66 + 1) ) /*0x7f976a*/
        (**(void (__thiscall ***)(volatile LONG *, int))v22)(v22, 1); /*0x7f9780*/
    }
    v6->__vftable->Unk_22(v6, (NiRenderer *)renderer); /*0x7f9793*/
    v23 = 4 * dword_B28CB0; /*0x7f979f*/
    v68 = (volatile LONG *)geomData; /*0x7f97a6*/
    _memset(*(_DWORD *)batchScratch, 0, v23); /*0x7f97b4*/
    v24 = v56; /*0x7f97b9*/
    if ( v56 ) /*0x7f97c2*/
    {
      while ( 1 ) /*0x7f9874*/
      {
        v28 = (_DWORD *)*v24; /*0x7f9874*/
        v29 = (NiGeometry **)v24[2]; /*0x7f9879*/
        v30 = *v29; /*0x7f987b*/
        v31 = (*v29)->member.geomData; /*0x7f987d*/
        v65 = v29; /*0x7f9883*/
        v57 = v28; /*0x7f988e*/
        v59 = *NiGeometry_GetPropertyState(*v29, &v70); /*0x7f98a3*/
        if ( v70 ) /*0x7f98a7*/
        {
          v66 = v70; /*0x7f98a9*/
          if ( !InterlockedDecrement(v70 + 1) ) /*0x7f98b1*/
          {
            if ( v66 ) /*0x7f98c1*/
              (**(void (__thiscall ***)(volatile LONG *, int))v66)(v66, 1); /*0x7f98c9*/
          }
        }
        v32 = *((volatile LONG **)v59 + 6); /*0x7f98cf*/
        v33 = *(_WORD *)(*((_DWORD *)v32 + 0x27) + 0xE); /*0x7f98d8*/
        v66 = v32; /*0x7f98df*/
        if ( v33 ) /*0x7f98e3*/
        {
          v34 = v68 == (volatile LONG *)v31; /*0x7f98e9*/
          unk_B42E90 = v71; /*0x7f98f5*/
          *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] = v65; /*0x7f98fb*/
          if ( v34 ) /*0x7f9901*/
          {
            OB_DistantLOD_CopyInstancesAndSetTriangles_010201A0(p_vftable, (int)v32); /*0x7f9a5b*/
            GetType = v31->__vftable[1].super.GetType; /*0x7f9a73*/
            if ( *(_BYTE *)(*(_DWORD *)(*((_DWORD *)v66 + 0x27) + 4) + 0xC) ) /*0x7f9a6f*/
            {
              v42 = (int)GetType((NiObject *)v31); /*0x7f9a7a*/
              v43 = v31[1].member.m_kBound.Center.x; /*0x7f9a7c*/
            }
            else
            {
              v42 = (int)GetType((NiObject *)v31); /*0x7f9a81*/
              v43 = *(float *)&v31[1].member.m_usVertices; /*0x7f9a83*/
            }
            vftable = (unsigned __int16)v31[1].__vftable; /*0x7f9a86*/
            *((float *)BuffData + 0x13) = v43; /*0x7f9a8f*/
            v54 = (NiDynamicEffectState *)v67; /*0x7f9a99*/
            *((_DWORD *)BuffData + 0x10) = vftable; /*0x7f9a9e*/
            *((_DWORD *)BuffData + 0xF) = v42; /*0x7f9aa6*/
            *((_DWORD *)BuffData + 0x12) = 0; /*0x7f9aa9*/
            *((_DWORD *)BuffData + 0x11) = 1; /*0x7f9ab0*/
            sub_7F6BF0((int *)batchScratch, v30, (int)p_vftable, (int)v54, 0); /*0x7f9ab7*/
          }
          else
          {
            sub_7F6A30(v30); /*0x7f990c*/
            v35 = (NiDynamicEffectState *)v31->member.BuffData; /*0x7f9911*/
            qmemcpy(v78, &v30->member.super.m_worldTransform, sizeof(v78)); /*0x7f9920*/
            x = v30->member.super.m_kWorldBound.Center.x; /*0x7f9925*/
            y = v30->member.super.m_kWorldBound.Center.y; /*0x7f992c*/
            v66 = (volatile LONG *)v35; /*0x7f9930*/
            z = v30->member.super.m_kWorldBound.Center.z; /*0x7f993b*/
            Radius = v30->member.super.m_kWorldBound.Radius; /*0x7f9945*/
            v36 = sub_7016D0(v30, (NiDynamicEffectState **)&v72); /*0x7f9949*/
            v37 = v66; /*0x7f9954*/
            v38 = *((void (__thiscall **)(void **, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *))*p_vftable /*0x7f995b*/
                  + 0xB);
            v52 = *v36; /*0x7f9968*/
            v79 = 5; /*0x7f9970*/
            v38(p_vftable, v30, 0, v66, v59, v52, v78, &x); /*0x7f997b*/
            v79 = 0xFFFFFFFF; /*0x7f9983*/
            if ( v72 ) /*0x7f998e*/
            {
              v68 = v72; /*0x7f9990*/
              if ( !InterlockedDecrement(v72 + 1) ) /*0x7f9998*/
              {
                if ( v68 ) /*0x7f99a8*/
                  (**(void (__thiscall ***)(volatile LONG *, int))v68)(v68, 1); /*0x7f99b0*/
              }
            }
            (*((void (__thiscall **)(void **))*p_vftable + 0x12))(p_vftable); /*0x7f99ba*/
            v67 = (volatile LONG *)p_vftable[0xF]; /*0x7f99c6*/
            v39 = sub_7016D0(v30, (NiDynamicEffectState **)&v73); /*0x7f99ca*/
            v40 = *((void (__thiscall **)(void **, NiGeometry *, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *))*p_vftable /*0x7f99d4*/
                  + 0xD);
            v53 = *v39; /*0x7f99e1*/
            v79 = 6; /*0x7f99eb*/
            v40(p_vftable, v30, 0, 0, v37, v59, v53, v78, &x); /*0x7f99f6*/
            v79 = 0xFFFFFFFF; /*0x7f99fe*/
            if ( v73 ) /*0x7f9a09*/
            {
              v68 = v73; /*0x7f9a0b*/
              if ( !InterlockedDecrement(v73 + 1) ) /*0x7f9a13*/
              {
                if ( v68 ) /*0x7f9a23*/
                  (**(void (__thiscall ***)(volatile LONG *, int))v68)(v68, 1); /*0x7f9a2b*/
              }
            }
            (*((void (__thiscall **)(void **, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *))*p_vftable + 0xF))( /*0x7f9a3a*/
              p_vftable,
              v30,
              0,
              v37,
              v59);
            sub_7F6BF0((int *)batchScratch, v30, (int)p_vftable, (int)v67, 0); /*0x7f9a49*/
            BuffData = v66; /*0x7f9a4e*/
          }
          v68 = (volatile LONG *)v31; /*0x7f9abc*/
        }
        if ( !v57 ) /*0x7f9ac5*/
          break; /*0x7f9ac5*/
        v24 = v57; /*0x7f9870*/
      }
    }
    BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)renderPassList); /*0x7f9ad4*/
    *((_DWORD *)renderPassList + 3) = *((_DWORD *)renderPassList + 1); /*0x7f9ade*/
    *((_DWORD *)renderPassList + 1) = 0; /*0x7f9ae1*/
    *((_DWORD *)renderPassList + 2) = 0; /*0x7f9ae4*/
    *((_DWORD *)renderPassList + 4) = 0; /*0x7f9ae7*/
    (*((void (__thiscall **)(void **))*p_vftable + 0x13))(p_vftable); /*0x7f9af2*/
    v45 = v69;                                  // Valid draw path reloads ESI=NiDX9Renderer from saved var_64, applies render-state cleanup at 0x7F9AF8..0x7F9B07, then resets bias. Retargeting the empty-path jump here would add that separate render-state call; prefer a dedicated branch trampoline if conditional-only repair is required. /*0x7f9af4*/
    ((void (__thiscall *)(NiDX9RenderState *, _DWORD))v69->member.renderState->vtbl->SetVar_0FF5)( /*0x7f9b07*/
      v69->member.renderState,
      0);
    v45->member.device->lpVtbl->SetSamplerState(v45->member.device, 0, D3DSAMP_MIPMAPLODBIAS, 0);// Only in-function zero-bias reset. The normal block 0x7F9ACB..0x7F9B1E executes it; the 0x7F984D cleanup block does not. /*0x7f9b1c*/
  }
  else
  {                                             // If no queued geometry has the required property/pass word, this scan exhausts the list and takes the cleanup-only exit below. That exit does not reset the bias written at 0x7F94D0.
    while ( v4 ) /*0x7f97d6*/
    {
      v25 = (NiGeometry **)v4[2]; /*0x7f97dd*/
      v6 = *v25; /*0x7f97df*/
      v62 = (int)v25; /*0x7f97e7*/
      v56 = (_DWORD *)*v4; /*0x7f97ef*/
      geomData = (*v25)->member.geomData; /*0x7f97f6*/
      v26 = *NiGeometry_GetPropertyState(*v25, &v70); /*0x7f97ff*/
      v58 = v26; /*0x7f9807*/
      if ( v70 ) /*0x7f980b*/
      {
        v27 = v70; /*0x7f980d*/
        if ( !InterlockedDecrement(v70 + 1) ) /*0x7f9813*/
          (**(void (__thiscall ***)(volatile LONG *, int))v27)(v27, 1); /*0x7f982a*/
      }
      p_vftable = (void **)&v6->member.shader->__vftable; /*0x7f982f*/
      v66 = *((volatile LONG **)v26 + 6); /*0x7f9835*/
      if ( *(_WORD *)(*((_DWORD *)v66 + 0x27) + 0xE) ) /*0x7f983f*/
        goto LABEL_5; /*0x7f9846*/
      v4 = v56; /*0x7f97d0*/
    }
    BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)renderPassList);// Unbalanced empty/no-eligible-geometry exit: clears/moves the list and returns without a direct MIPMAPLODBIAS reset. The nonzero bias can leak into later draws, including leaves, because the leaf stage/cache never writes sampler state 8. /*0x7f9856*/
    *((_DWORD *)renderPassList + 3) = *((_DWORD *)renderPassList + 1); /*0x7f985e*/
    *((_DWORD *)renderPassList + 1) = 0; /*0x7f9861*/
    *((_DWORD *)renderPassList + 2) = 0; /*0x7f9864*/
    *((_DWORD *)renderPassList + 4) = 0;        // Empty/no-eligible cleanup jumps directly to 0x7F9B1E. CFG verification: this is the sole predecessor that bypasses the reset block; bytes E9 AF 02 00 00. /*0x7f9867*/
  }
}
