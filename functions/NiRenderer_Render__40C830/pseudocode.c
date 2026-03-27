void __thiscall NiRenderer_Render(NiDX9Renderer *this, BSRenderedTexture *a2)
{
  double v2; // st5
  double v3; // st6
  double v4; // st7
  NiDX9Renderer *v5; // edi
  TESObjectCELL *currentInteriorCell; // eax
  GridEntry *GridEntry; // eax
  _BYTE *ShadowSceneNode; // esi
  char v9; // bl
  NiDX9Renderer *v10; // ebp
  NiNode *PlayerNode; // eax
  NiAVObjectVtbl *vtbl; // eax
  float v13; // edx
  void (__thiscall **p_ApplyTransform)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool); // eax
  NiPoint3 *p_pos; // ecx
  NiAVObjectVtbl *v16; // eax
  float v17; // edx
  void (__thiscall **v18)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool); // eax
  NiPoint3 *v19; // ecx
  bool v20; // bl
  BSRenderedTexture *v21; // edi
  BSRenderedTexture *DefaultRenderTarget; // eax
  NiRenderTargetGroup *v23; // eax
  NiRenderedTexture *RenderedTexture; // ecx
  int v25; // esi
  NiTexture *v26; // ecx
  UInt32 v27; // esi
  NiRenderedTexture *v28; // ecx
  unsigned int v29; // esi
  double v30; // st7
  bool v31; // c0
  bool v32; // c3
  double v33; // st7
  NiRenderedTexture *v34; // ecx
  unsigned int v35; // esi
  NiRenderedTexture *v36; // ecx
  unsigned int v37; // esi
  double v38; // st7
  bool v39; // c0
  bool v40; // c3
  double v41; // st7
  NiRenderedTexture *v42; // ecx
  unsigned int v43; // esi
  NiCamera *camera; // eax
  NiRenderTargetGroup *v45; // eax
  NiRenderTargetGroup *v46; // eax
  Sky *sky; // eax
  Sun *sun; // ebx
  NiCamera *v49; // esi
  NiDX9Renderer *inited; // eax
  NiRenderTargetGroup *v51; // eax
  NiCamera *v52; // ebp
  BSShaderAccumulator *v53; // eax
  volatile LONG *accumulator; // edi
  BSShaderAccumulator *v55; // esi
  void (__thiscall *v56)(BSShaderAccumulator *); // eax
  NiCamera *v57; // esi
  NiDX9Renderer *v58; // eax
  NiDX9Renderer *v59; // ecx
  NiRenderTargetGroup *v60; // eax
  int v61; // esi
  NiRenderedTexture *InnerTexture; // eax
  Ni2DBuffer *v63; // eax
  NiCamera *v64; // eax
  NiRenderTargetGroup *v65; // eax
  int v66; // esi
  NiRenderedTexture *v67; // eax
  Ni2DBuffer *v68; // eax
  int v69; // esi
  unsigned int v70; // esi
  int *v71; // eax
  HINSTANCE *v72; // eax
  void (__thiscall ***v73)(_DWORD, int); // esi
  NiRenderTargetGroup *v74; // [esp+10h] [ebp-58h]
  NiRenderTargetGroup *v75; // [esp+10h] [ebp-58h]
  bool v76; // [esp+29h] [ebp-3Fh]
  char v77; // [esp+2Ah] [ebp-3Eh]
  char v78; // [esp+2Bh] [ebp-3Dh]
  NiDX9Renderer *a1; // [esp+2Ch] [ebp-3Ch]
  BSRenderedTexture *v80; // [esp+30h] [ebp-38h]
  SceneGraph *v81; // [esp+34h] [ebp-34h]
  NiCullingProcess *cullingProcess; // [esp+38h] [ebp-30h]
  int v83; // [esp+3Ch] [ebp-2Ch]
  float v84; // [esp+40h] [ebp-28h]
  float v85; // [esp+44h] [ebp-24h]

  v5 = this;
  currentInteriorCell = TES->currentInteriorCell;
  byte_B33395 = 1;
  if ( currentInteriorCell )
  {
    if ( (currentInteriorCell->members.flags0 & 2) == 0 )
      goto LABEL_6;
    sub_49A100((CellInfo *)TES->waterNodeData, g_worldScenegraph->camera, 0, 0);
  }
  else
  {
    GridEntry = GetGridEntry(TES->gridCellArray, (unsigned int)uGridsToLoad >> 1, (unsigned int)uGridsToLoad >> 1);
    sub_49A100(GridEntry->info, g_worldScenegraph->camera, 0, 0);
  }
  ShadowSceneNode = (_BYTE *)GetShadowSceneNode(0);
  v9 = ShadowSceneNode[0x12C];
  ShadowSceneNode[0x12C] = 1;
  CombinedWaterRelfectionPAsses(TES->waterManager, v2, v3, v4, g_worldScenegraph->camera, ShadowSceneNode);
  ShadowSceneNode[0x12C] = v9;
LABEL_6:
  if ( dword_B3F940 )
  {
    if ( *(_BYTE *)(dword_B3F940 + 0x1B0) )
      sub_701AD0();
    sub_404D60(3u);
  }
  ShadowPass(v5);
  v10 = g_Renderer;
  v81 = g_worldScenegraph;
  cullingProcess = g_worldScenegraph->cullingProcess;
  a1 = g_Renderer;
  PlayerNode = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1);
  v83 = (int)PlayerNode;
  v77 = PlayerNode->members.super.m_flags & 1;
  if ( !v77 )
    PlayerNode->members.super.m_flags |= 1u;
  if ( g_worldScenegraph->super.children.end )
    vtbl = g_worldScenegraph->super.children.data->vtbl;
  else
    vtbl = 0;
  v13 = *(float *)&vtbl->ApplyTransform;
  p_ApplyTransform = &vtbl->ApplyTransform;
  p_pos = &dword_B333D8->members.super.m_localTransform.pos;
  dword_B333D8->members.super.m_localTransform.pos.x = v13;
  LODWORD(p_pos->y) = p_ApplyTransform[1];
  LODWORD(p_pos->z) = p_ApplyTransform[2];
  NiAVObject_UpdateNiAVObject((NiAVObject *)dword_B333D8, 0.0, 0);
  if ( g_worldScenegraph->super.children.end )
    v16 = g_worldScenegraph->super.children.data->vtbl;
  else
    v16 = 0;
  v17 = *(float *)&v16->ApplyTransform;
  v18 = &v16->ApplyTransform;
  v19 = &dword_B333DC->members.super.m_localTransform.pos;
  dword_B333DC->members.super.m_localTransform.pos.x = v17;
  LODWORD(v19->y) = v18[1];
  LODWORD(v19->z) = v18[2];
  NiAVObject_UpdateNiAVObject((NiAVObject *)dword_B333DC, 0.0, 0);
  v20 = iMultisample >= 2;
  v21 = 0;
  v76 = iMultisample >= 2;
  v80 = 0;
  if ( ImageSpaceEffectEnabled )
  {
    DefaultRenderTarget = BSTextureManager_GetDefaultRenderTarget(g_textureManager, v10, 4);
    v21 = DefaultRenderTarget;
    v80 = DefaultRenderTarget;
    if ( v20 )
    {
LABEL_20:
      v23 = v10->__vftable->super.GetDefaultRTGroup((NiRenderer *)v10);
      NiRenderer_BeginScene(kClear_ALL, v23);
      goto LABEL_51;
    }
    RenderedTexture = DefaultRenderTarget->members.RenderedTexture;
    if ( RenderedTexture )
      v25 = RenderedTexture->__vftable->super.GetWidth((NiTexture *)RenderedTexture);
    else
      v25 = 0;
    if ( sub_701640(v10) != v25
      || ((v26 = (NiTexture *)v21->members.RenderedTexture) == 0 ? (v27 = 0) : (v27 = v26->__vftable->GetHeight(v26)),
          sub_701670(v10) != v27) )
    {
      v28 = v21->members.RenderedTexture;
      if ( v28 )
        v29 = v28->__vftable->super.GetWidth((NiTexture *)v28);
      else
        v29 = 0;
      v30 = (double)(unsigned int)sub_701640(v10) * 1.05 / (double)v29;
      v31 = v30 > 1.0;
      v32 = 1.0 == v30;
      v33 = 1.0;
      if ( !v31 && !v32 )
      {
        v34 = v21->members.RenderedTexture;
        if ( v34 )
          v35 = v34->__vftable->super.GetWidth((NiTexture *)v34);
        else
          v35 = 0;
        v33 = (double)(unsigned int)sub_701640(v10) * 1.05 / (double)v35;
      }
      v36 = v21->members.RenderedTexture;
      v84 = v33;
      if ( v36 )
        v37 = v36->__vftable->super.GetHeight((NiTexture *)v36);
      else
        v37 = 0;
      v38 = (double)(unsigned int)sub_701670(v10) * 1.05 / (double)v37;
      v39 = v38 > 1.0;
      v40 = 1.0 == v38;
      v41 = 1.0;
      if ( !v39 && !v40 )
      {
        v42 = v21->members.RenderedTexture;
        if ( v42 )
          v43 = v42->__vftable->super.GetHeight((NiTexture *)v42);
        else
          v43 = 0;
        v41 = (double)(unsigned int)sub_701670(v10) * 1.05 / (double)v43;
      }
      v85 = v41;
      camera = g_worldScenegraph->camera;
      camera->members.ViewPort.l = 0.0;
      camera->members.ViewPort.r = v84;
      camera->members.ViewPort.t = v85;
      camera->members.ViewPort.b = 0.0;
    }
    v45 = BSRenderedTexture::UseTextureToRender(v21);
    NiRenderer_BeginScene(kClear_ALL, v45);
  }
  else if ( a2 )
  {
    if ( iMultisample >= 2 )
      goto LABEL_20;
    v46 = BSRenderedTexture::UseTextureToRender(a2);
    NiRenderer_BeginScene(kClear_ALL, v46);
  }
  else
  {
    NiRenderer_BeginScene1(kClear_ALL, 0);
  }
LABEL_51:
  if ( byte_B42CD8 )
  {
    byte_B42CD8 = 0;
    byte_B42CD9 = 1;
  }
  byte_B42CDE = byte_B02D38;
  byte_B42CDF = 1;
  byte_B42CE0 = byte_B02D30;
  sky = TES->sky;
  sun = 0;
  if ( sky )
  {
    if ( sky->sun )
    {
      if ( sky->unk0DC == 3 || sky->unk0DC == 2 )
      {
        sun = sky->sun;
        sub_544AD0(sun);
      }
    }
  }
  sub_70C0B0(v81->camera, v81, cullingProcess, 0);
  if ( sun )
    sub_546120((int)sun, 1u);
  byte_B42CDE = 0;
  byte_B42CDF = 0;
  if ( !ImageSpaceEffectEnabled || !enableRefraction || ShaderPackage < 2 )
  {
    v78 = 0;
LABEL_70:
    if ( v77 )
      goto LABEL_85;
    goto LABEL_71;
  }
  v49 = g_worldScenegraph->camera;
  v78 = 1;
  v74 = BSRenderedTexture::UseTextureToRender(v21);
  inited = (NiDX9Renderer *)InitBSShaderAccumulator();
  if ( !EndTargetGroup(inited, v49, v74) )
    goto LABEL_70;
  if ( v77 )
    goto LABEL_85;
  InitBSShaderAccumulator();
  if ( !byte_B42CDB )
  {
    if ( v76 )
      v51 = v10->__vftable->super.GetDefaultRTGroup((NiRenderer *)v10);
    else
      v51 = BSRenderedTexture::UseTextureToRender(v80);
    NiRenderer_BeginScene(kClear_NONE, v51);
  }
LABEL_71:
  InitBSShaderAccumulator();
  if ( !byte_B42CDB )
  {
    v52 = g_worldScenegraph->camera;
    *(_WORD *)(v83 + 0x18) &= ~1u;
    GetShadowSceneNode(0);
    sub_7C7050(v83, 0);
    v53 = InitBSShaderAccumulator();
    accumulator = (volatile LONG *)a1->member.super.accumulator;
    v55 = v53;
    if ( accumulator )
      InterlockedIncrement(accumulator + 1);
    if ( (a1->member.super.SceneState1 == 1 || a1->member.super.SceneState2 == 1) && a1->member.super.IsReady == 1 )
      a1->__vftable->super.Clear((NiRenderer *)a1, 0, 4u);
    NiDX9Renderer::SetShaderAccumulator(a1, v55);
    (*(void (__thiscall **)(BSShaderAccumulator *, NiCamera *))(*(_DWORD *)v55 + 0x4C))(v55, v52);
    *((_BYTE *)v55 + 0x21E2) = 1;
    sub_70C0B0(v81->camera, (SceneGraph *)v83, cullingProcess, 0);
    if ( sun )
      sub_546120((int)sun, 2u);
    v56 = *(void (__thiscall **)(BSShaderAccumulator *))(*(_DWORD *)v55 + 0x50);
    *((_BYTE *)v55 + 0x21E1) = 1;
    v56(v55);
    *((_BYTE *)v55 + 0x21E2) = 0;
    NiDX9Renderer::SetShaderAccumulator(a1, (BSShaderAccumulator *)accumulator);
    if ( v78 )
    {
      v57 = g_worldScenegraph->camera;
      v75 = BSRenderedTexture::UseTextureToRender(v80);
      v58 = (NiDX9Renderer *)InitBSShaderAccumulator();
      EndTargetGroup(v58, v57, v75);
    }
    if ( accumulator )
    {
      if ( !InterlockedDecrement(accumulator + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))accumulator)(accumulator, 1);
    }
  }
LABEL_85:
  if ( sun )
    sub_544AF0(sun);
  if ( ImageSpaceEffectEnabled )
  {
    v59 = g_Renderer;
    if ( g_Renderer->member.super.SceneState1 || g_Renderer->member.super.SceneState2 )
    {
      NiRenderer_EndScene();
      v59 = g_Renderer;
    }
    if ( v76 )
    {
      v60 = v59->__vftable->super.GetDefaultRTGroup((NiRenderer *)v59);
      v61 = (int)v60->vtbl->GetRenderTargetData(v60, 0);
      InnerTexture = BSRenderedTexture::GetInnerTexture(v80);
      v63 = InnerTexture->__vftable->GetBuffer(InnerTexture);
      g_Renderer->member.device->lpVtbl->StretchRect(
        g_Renderer->member.device,
        *(IDirect3DSurface9 **)(v61 + 0xC),
        0,
        v63->members.data->member.Surface,
        0,
        D3DTEXF_NONE);
    }
    ProcessImageSpaceShader(a1, v80, a2);
    v64 = g_worldScenegraph->camera;
    v64->members.ViewPort.l = 0.0;
    v64->members.ViewPort.r = 1.0;
    v64->members.ViewPort.t = 1.0;
    v64->members.ViewPort.b = 0.0;
  }
  else if ( a2 )
  {
    NiRenderer_EndScene();
    if ( v76 )
    {
      v65 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
      v66 = (int)v65->vtbl->GetRenderTargetData(v65, 0);
      v67 = BSRenderedTexture::GetInnerTexture(a2);
      v68 = v67->__vftable->GetBuffer(v67);
      g_Renderer->member.device->lpVtbl->StretchRect(
        g_Renderer->member.device,
        *(IDirect3DSurface9 **)(v66 + 0xC),
        0,
        v68->members.data->member.Surface,
        0,
        D3DTEXF_NONE);
    }
  }
  if ( v80 )
    sub_7C1EE0(g_textureManager, v80);
  if ( dword_B3F940 )
  {
    v69 = dword_B3F940 + 0x190;
    InterlockedIncrement((volatile LONG *)(dword_B3F940 + 0x190));
    ReleaseSemaphore(*(HANDLE *)(v69 + 8), 1, 0);
  }
  if ( RenderWindowNiNode )
  {
    if ( dword_B3339C )
    {
      v70 = dword_B3339C;
      sub_494F30((unsigned int *)dword_B3339C);
      FormHeapFree(v70);
    }
    v71 = (int *)FormHeapAlloc(0x20u);
    if ( v71 )
      v72 = ShowDetectorWindow(
              v71,
              (int)this->member.super.propertyState,
              (int)this->member.super.accumulator,
              RenderWindowNiNode,
              (int)"Render Passes",
              0x80000000,
              0x80000000,
              0x320,
              0x258);
    else
      v72 = 0;
    dword_B3339C = (int)v72;
    if ( RenderWindowNiNode )
    {
      v73 = (void (__thiscall ***)(_DWORD, int))RenderWindowNiNode;
      if ( !InterlockedDecrement((volatile LONG *)(RenderWindowNiNode + 4)) )
      {
        if ( v73 )
          (**v73)(v73, 1);
      }
      RenderWindowNiNode = 0;
    }
  }
  byte_B33395 = 0;
}
