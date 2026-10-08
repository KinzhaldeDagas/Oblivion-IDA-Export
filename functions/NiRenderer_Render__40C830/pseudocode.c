// CULLING audit 2026-09-27 (observed Oblivion behavior): Focused CULLING audit: call 0x40CCD3 uses world SceneGraph camera(+0xDC), root, process(+0xE4), null explicit array. Call 0x40CE48 uses SAME camera/process with first-person node selected at 0x40C945 via selector(true), and null array. First-person node is temporarily AppCulled during world traversal, restored before separate rendering; accumulator flags differ. Do not equate this one callsite with both player perspectives.
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
  int v12; // eax
  float v13; // edx
  int v14; // eax
  NiPoint3 *p_pos; // ecx
  int v16; // eax
  float v17; // edx
  int v18; // eax
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
  float *v44; // eax
  NiRenderTargetGroup *v45; // eax
  NiRenderTargetGroup *v46; // eax
  Sky *sky; // eax
  Sun *sun; // ebx
  NiCamera *v49; // esi
  NiDX9Renderer *inited; // eax
  NiRenderTargetGroup *v51; // eax
  int v52; // ebp
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
  float *v64; // eax
  NiRenderTargetGroup *v65; // eax
  int v66; // esi
  NiRenderedTexture *v67; // eax
  Ni2DBuffer *v68; // eax
  int v69; // esi
  unsigned int v70; // esi
  LPCSTR *v71; // eax
  HINSTANCE *v72; // eax
  Ni2DBuffer *v73; // esi
  NiRenderTargetGroup *v74; // [esp+10h] [ebp-58h]
  NiRenderTargetGroup *v75; // [esp+10h] [ebp-58h]
  bool v76; // [esp+29h] [ebp-3Fh]
  char v77; // [esp+2Ah] [ebp-3Eh]
  char v78; // [esp+2Bh] [ebp-3Dh]
  NiDX9Renderer *a1; // [esp+2Ch] [ebp-3Ch]
  BSRenderedTexture *texture; // [esp+30h] [ebp-38h]
  SceneGraph *v81; // [esp+34h] [ebp-34h]
  NiCullingProcess *v82; // [esp+38h] [ebp-30h]
  int v83; // [esp+3Ch] [ebp-2Ch]
  float v84; // [esp+40h] [ebp-28h]
  float v85; // [esp+44h] [ebp-24h]

  v5 = this; /*0x40c857*/
  currentInteriorCell = MEMORY[0xB333A0]->currentInteriorCell; /*0x40c863*/
  unk_B33395 = 1; /*0x40c868*/
  if ( currentInteriorCell ) /*0x40c86f*/
  {
    if ( (currentInteriorCell->members.flags0 & 2) == 0 ) /*0x40c879*/
      goto LABEL_6; /*0x40c879*/
    sub_49A100((CellInfo *)MEMORY[0xB333A0]->waterNodeData, *((NiCamera **)g_WorldSceneReceiverRoot + 0x37), 0, 0); /*0x40c88f*/
  }
  else
  {
    GridEntry = GetGridEntry( /*0x40c89d*/
                  MEMORY[0xB333A0]->gridCellArray,
                  (unsigned int)uGridsToLoad >> 1,
                  (unsigned int)uGridsToLoad >> 1);
    sub_49A100(GridEntry->info, *((NiCamera **)g_WorldSceneReceiverRoot + 0x37), 0, 0); /*0x40c8b8*/
  }
  ShadowSceneNode = (_BYTE *)GetShadowSceneNode(0); /*0x40c8c4*/
  v9 = ShadowSceneNode[0x12C]; /*0x40c8c6*/
  ShadowSceneNode[0x12C] = 1; /*0x40c8cc*/
  WaterManager_RenderCombinedReflectionPasses( /*0x40c8ec*/
    MEMORY[0xB333A0]->waterManager,
    v2,
    v3,
    v4,
    *((NiCamera **)g_WorldSceneReceiverRoot + 0x37),
    ShadowSceneNode);                           // NiRenderer main render calls WaterManager_RenderCombinedReflectionPasses with the world reflection root and ShadowSceneNode; this is the authoritative caller establishing WaterManager ownership.
  ShadowSceneNode[0x12C] = v9; /*0x40c8f1*/
LABEL_6:
  if ( g_NiParallelUpdateTaskManager ) /*0x40c8fe*/
  {
    if ( *(_BYTE *)(g_NiParallelUpdateTaskManager + 0x1B0) ) /*0x40c900*/
      NiParallelUpdateTaskManager_SubmitSignalTask(); /*0x40c90a*/
    NiParallelUpdateTaskManager_WaitForSignal(3u); /*0x40c911*/
  }
  ShadowPass(v5); /*0x40c91b*/
  v10 = renderer; /*0x40c925*/
  v81 = (SceneGraph *)g_WorldSceneReceiverRoot; /*0x40c931*/
  v82 = *((NiCullingProcess **)g_WorldSceneReceiverRoot + 0x39); /*0x40c93d*/
  a1 = renderer; /*0x40c941*/
  PlayerNode = PlayerCharacter_GetNodeByPerspective(reference, 1); /*0x40c945*/
  v83 = (int)PlayerNode; /*0x40c950*/
  v77 = PlayerNode->members.super.m_flags & 1; /*0x40c954*/
  if ( !v77 ) /*0x40c958*/
    PlayerNode->members.super.m_flags |= 1u; /*0x40c95a*/
  if ( *((_WORD *)g_WorldSceneReceiverRoot + 0x5B) ) /*0x40c964*/
    v12 = **((_DWORD **)g_WorldSceneReceiverRoot + 0x2C); /*0x40c978*/
  else
    v12 = 0; /*0x40c96e*/
  v13 = *(float *)(v12 + 0x54); /*0x40c982*/
  v14 = v12 + 0x54; /*0x40c985*/
  p_pos = &root->members.super.m_localTransform.pos; /*0x40c988*/
  root->members.super.m_localTransform.pos.x = v13; /*0x40c98b*/
  p_pos->y = *(float *)(v14 + 4); /*0x40c990*/
  p_pos->z = *(float *)(v14 + 8); /*0x40c999*/
  NiAVObject_UpdateNiAVObject((NiAVObject *)root, 0.0, 0); /*0x40c9a5*/
  if ( *((_WORD *)g_WorldSceneReceiverRoot + 0x5B) ) /*0x40c9af*/
    v16 = **((_DWORD **)g_WorldSceneReceiverRoot + 0x2C); /*0x40c9c3*/
  else
    v16 = 0; /*0x40c9b9*/
  v17 = *(float *)(v16 + 0x54); /*0x40c9cd*/
  v18 = v16 + 0x54; /*0x40c9d0*/
  v19 = &unk_B333DC->members.super.m_localTransform.pos; /*0x40c9d3*/
  unk_B333DC->members.super.m_localTransform.pos.x = v17; /*0x40c9d6*/
  v19->y = *(float *)(v18 + 4); /*0x40c9db*/
  v19->z = *(float *)(v18 + 8); /*0x40c9e4*/
  NiAVObject_UpdateNiAVObject((NiAVObject *)unk_B333DC, 0.0, 0); /*0x40c9f0*/
  v20 = *(_DWORD *)&MEMORY[0xB33E90][0x1130] >= 2; /*0x40ca04*/
  v21 = 0; /*0x40ca07*/
  v76 = *(_DWORD *)&MEMORY[0xB33E90][0x1130] >= 2; /*0x40ca10*/
  texture = 0; /*0x40ca14*/
  if ( OB_RendererGlobalState_010201A0[0xA5] )
  {
    DefaultRenderTarget = BSTextureManager_GetDefaultRenderTarget( /*0x40ca27*/
                            *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
                            v10,
                            4);
    v21 = DefaultRenderTarget; /*0x40ca2e*/
    texture = DefaultRenderTarget; /*0x40ca30*/
    if ( v20 ) /*0x40ca34*/
    {
LABEL_20:
      v23 = v10->__vftable->super.GetDefaultRTGroup((NiRenderer *)v10); /*0x40ca36*/
      NiRenderer_BeginScene(kClear_ALL, v23); /*0x40ca43*/
      goto LABEL_51; /*0x40ca48*/
    }
    RenderedTexture = DefaultRenderTarget->members.RenderedTexture; /*0x40ca4d*/
    if ( RenderedTexture ) /*0x40ca52*/
      v25 = RenderedTexture->__vftable->super.GetWidth((NiTexture *)RenderedTexture); /*0x40ca5b*/
    else
      v25 = 0; /*0x40ca5f*/
    if ( sub_701640(v10) != v25
      || ((v26 = (NiTexture *)v21->members.RenderedTexture) == 0 ? (v27 = 0) : (v27 = v26->__vftable->GetHeight(v26)),
          sub_701670(v10) != v27) )
    {
      v28 = v21->members.RenderedTexture; /*0x40ca8f*/
      if ( v28 ) /*0x40ca94*/
        v29 = v28->__vftable->super.GetWidth((NiTexture *)v28); /*0x40ca9d*/
      else
        v29 = 0; /*0x40caa1*/
      v30 = (double)(unsigned int)sub_701640(v10) * 1.05 / (double)v29; /*0x40cad4*/
      v31 = v30 > 1.0; /*0x40cad8*/
      v32 = 1.0 == v30; /*0x40cad8*/
      v33 = 1.0; /*0x40cadc*/
      if ( !v31 && !v32 ) /*0x40cade*/
      {
        v34 = v21->members.RenderedTexture; /*0x40cae3*/
        if ( v34 ) /*0x40caea*/
          v35 = v34->__vftable->super.GetWidth((NiTexture *)v34); /*0x40caf3*/
        else
          v35 = 0; /*0x40caf7*/
        v33 = (double)(unsigned int)sub_701640(v10) * 1.05 / (double)v35; /*0x40cb2a*/
      }
      v36 = v21->members.RenderedTexture; /*0x40cb2c*/
      v84 = v33; /*0x40cb2f*/
      if ( v36 ) /*0x40cb35*/
        v37 = v36->__vftable->super.GetHeight((NiTexture *)v36); /*0x40cb3e*/
      else
        v37 = 0; /*0x40cb42*/
      v38 = (double)(unsigned int)sub_701670(v10) * 1.05 / (double)v37; /*0x40cb75*/
      v39 = v38 > 1.0; /*0x40cb79*/
      v40 = 1.0 == v38; /*0x40cb79*/
      v41 = 1.0; /*0x40cb7d*/
      if ( !v39 && !v40 ) /*0x40cb7f*/
      {
        v42 = v21->members.RenderedTexture; /*0x40cb84*/
        if ( v42 ) /*0x40cb8b*/
          v43 = v42->__vftable->super.GetHeight((NiTexture *)v42); /*0x40cb94*/
        else
          v43 = 0; /*0x40cb98*/
        v41 = (double)(unsigned int)sub_701670(v10) * 1.05 / (double)v43; /*0x40cbcb*/
      }
      v85 = v41; /*0x40cbd3*/
      v44 = *((float **)g_WorldSceneReceiverRoot + 0x37); /*0x40cbd9*/
      v44[0x44] = 0.0; /*0x40cbef*/
      v44[0x45] = v84; /*0x40cc01*/
      v44[0x46] = v85; /*0x40cc0b*/
      v44[0x47] = 0.0; /*0x40cc19*/
    }
    v45 = BSRenderedTexture::UseTextureToRender(v21); /*0x40cc21*/
    NiRenderer_BeginScene(kClear_ALL, v45); /*0x40cc29*/
  }
  else if ( a2 ) /*0x40cc37*/
  {
    if ( *(int *)&MEMORY[0xB33E90][0x1130] >= 2 ) /*0x40cc3b*/
      goto LABEL_20; /*0x40cc3b*/
    v46 = BSRenderedTexture::UseTextureToRender(a2); /*0x40cc41*/
    NiRenderer_BeginScene(kClear_ALL, v46); /*0x40cc49*/
  }
  else
  {
    NiRenderer_BeginScene1(kClear_ALL, 0); /*0x40cc54*/
  }
LABEL_51:
  if ( unk_B42CD8 ) /*0x40cc63*/
  {
    unk_B42CD8 = 0; /*0x40cc65*/
    unk_B42CD9 = 1; /*0x40cc6c*/
  }
  unk_B42CDE = byte_B02D38; /*0x40cc84*/
  unk_B42CDF = 1; /*0x40cc8a*/
  unk_B42CE0 = byte_B02D30; /*0x40cc91*/
  sky = MEMORY[0xB333A0]->sky; /*0x40cc97*/
  sun = 0; /*0x40cc9a*/
  if ( sky ) /*0x40cc9e*/
  {
    if ( sky->sun ) /*0x40cca0*/
    {
      if ( sky->unk0DC == 3 || sky->unk0DC == 2 ) /*0x40ccb4*/
      {
        sun = sky->sun; /*0x40ccb6*/
        sub_544AD0(sun); /*0x40ccbb*/
      }
    }
  }
  NiRenderer_CullAndRenderScene(v81->camera, v81, v82, 0); /*0x40ccd3*/
  if ( sun ) /*0x40ccdd*/
    sub_546120((int)sun, 1u); /*0x40cce3*/
  unk_B42CDE = 0; /*0x40ccef*/
  unk_B42CDF = 0; /*0x40ccf6*/
  if ( !OB_RendererGlobalState_010201A0[0xA5] /*0x40cd0e*/
    || !OB_ShaderPassControl_010201A0[0]
    || *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 2 )// [Verified] NiRenderer_Render gates its additional refraction render-target pass on OB_ShaderPassControl.refractionPassEnabled, after the renderer mode and capability checks.
  {
    v78 = 0; /*0x40cd73*/
LABEL_70:
    if ( v77 ) /*0x40cd7d*/
      goto LABEL_85; /*0x40cd7d*/
    goto LABEL_71; /*0x40cd7d*/
  }
  v49 = *((NiCamera **)g_WorldSceneReceiverRoot + 0x37); /*0x40cd15*/
  v78 = 1; /*0x40cd1d*/
  v74 = BSRenderedTexture::UseTextureToRender(v21); /*0x40cd27*/
  inited = (NiDX9Renderer *)BSShaderAccumulator_GetOrCreateGlobal(); /*0x40cd29*/
  if ( !EndTargetGroup(inited, v49, v74) ) /*0x40cd37*/
    goto LABEL_70; /*0x40cd37*/
  if ( v77 ) /*0x40cd3e*/
    goto LABEL_85; /*0x40cd3e*/
  BSShaderAccumulator_GetOrCreateGlobal(); /*0x40cd44*/
  if ( !unk_B42CDB ) /*0x40cd50*/
  {
    if ( v76 ) /*0x40cd57*/
      v51 = v10->__vftable->super.GetDefaultRTGroup((NiRenderer *)v10); /*0x40cd64*/
    else
      v51 = BSRenderedTexture::UseTextureToRender(texture); /*0x40cfc7*/
    NiRenderer_BeginScene(kClear_NONE, v51); /*0x40cd69*/
  }
LABEL_71:
  BSShaderAccumulator_GetOrCreateGlobal(); /*0x40cd83*/
  if ( !unk_B42CDB ) /*0x40cd8f*/
  {
    v52 = *((_DWORD *)g_WorldSceneReceiverRoot + 0x37); /*0x40cd9b*/
    *(_WORD *)(v83 + 0x18) &= ~1u; /*0x40cda5*/
    GetShadowSceneNode(0); /*0x40cdad*/
    sub_7C7050(v83, 0); /*0x40cdb5*/
    v53 = BSShaderAccumulator_GetOrCreateGlobal(); /*0x40cdbd*/
    accumulator = (volatile LONG *)a1->member.super.accumulator; /*0x40cdc6*/
    v55 = v53; /*0x40cdcb*/
    if ( accumulator ) /*0x40cdd1*/
      InterlockedIncrement(accumulator + 1); /*0x40cdd7*/
    if ( (a1->member.super.SceneState1 == 1 || a1->member.super.SceneState2 == 1) && a1->member.super.IsReady == 1 ) /*0x40ce04*/
      a1->__vftable->super.Clear((NiRenderer *)a1, 0, 4u); /*0x40ce14*/
    NiDX9Renderer::SetShaderAccumulator(a1, v55); /*0x40ce1b*/
    (*(void (__thiscall **)(BSShaderAccumulator *, int))(*(_DWORD *)v55 + 0x4C))(v55, v52); /*0x40ce28*/
    *((_BYTE *)v55 + 0x21E2) = 1; /*0x40ce34*/
    NiRenderer_CullAndRenderScene(v81->camera, (SceneGraph *)v83, v82, 0); /*0x40ce48*/
    if ( sun ) /*0x40ce52*/
      sub_546120((int)sun, 2u); /*0x40ce58*/
    v56 = *(void (__thiscall **)(BSShaderAccumulator *))(*(_DWORD *)v55 + 0x50); /*0x40ce5f*/
    *((_BYTE *)v55 + 0x21E1) = 1; /*0x40ce64*/
    v56(v55); /*0x40ce6b*/
    *((_BYTE *)v55 + 0x21E2) = 0; /*0x40ce72*/
    NiDX9Renderer::SetShaderAccumulator(a1, (BSShaderAccumulator *)accumulator); /*0x40ce79*/
    if ( v78 ) /*0x40ce83*/
    {
      v57 = *((NiCamera **)g_WorldSceneReceiverRoot + 0x37); /*0x40ce8b*/
      v75 = BSRenderedTexture::UseTextureToRender(texture); /*0x40ce9a*/
      v58 = (NiDX9Renderer *)BSShaderAccumulator_GetOrCreateGlobal(); /*0x40ce9c*/
      EndTargetGroup(v58, v57, v75); /*0x40cea3*/
    }
    if ( accumulator ) /*0x40ceb2*/
    {
      if ( !InterlockedDecrement(accumulator + 1) ) /*0x40ceb8*/
        (**(void (__thiscall ***)(volatile LONG *, int))accumulator)(accumulator, 1); /*0x40ceca*/
    }
  }
LABEL_85:
  if ( sun ) /*0x40cece*/
    sub_544AF0(sun); /*0x40ced2*/
  if ( OB_RendererGlobalState_010201A0[0xA5] ) /*0x40cede*/
  {
    v59 = renderer; /*0x40cee4*/
    if ( renderer->member.super.SceneState1 || renderer->member.super.SceneState2 ) /*0x40cef3*/
    {
      NiRenderer_EndScene(); /*0x40cefc*/
      v59 = renderer; /*0x40cf01*/
    }
    if ( v76 ) /*0x40cf0c*/
    {
      v60 = v59->__vftable->super.GetDefaultRTGroup((NiRenderer *)v59); /*0x40cf13*/
      v61 = (int)v60->vtbl->GetRenderTargetData(v60, 0); /*0x40cf27*/
      InnerTexture = BSRenderedTexture::GetInnerTexture(texture); /*0x40cf29*/
      v63 = InnerTexture->__vftable->GetBuffer(InnerTexture); /*0x40cf35*/
      renderer->member.device->lpVtbl->StretchRect( /*0x40cf5d*/
        renderer->member.device,
        *(IDirect3DSurface9 **)(v61 + 0xC),
        0,
        v63->members.data->member.Surface,
        0,
        D3DTEXF_NONE);
    }
    ProcessImageSpaceShader(a1, texture, a2); /*0x40cf6e*/
    v64 = *((float **)g_WorldSceneReceiverRoot + 0x37); /*0x40cf81*/
    v64[0x44] = 0.0; /*0x40cf93*/
    v64[0x45] = 1.0; /*0x40cfa1*/
    v64[0x46] = 1.0; /*0x40cfaf*/
    v64[0x47] = 0.0; /*0x40cfb8*/
  }
  else if ( a2 ) /*0x40cfe2*/
  {
    NiRenderer_EndScene(); /*0x40cfe4*/
    if ( v76 ) /*0x40cfee*/
    {
      v65 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x40cffb*/
      v66 = (int)v65->vtbl->GetRenderTargetData(v65, 0); /*0x40d00d*/
      v67 = BSRenderedTexture::GetInnerTexture(a2); /*0x40d00f*/
      v68 = v67->__vftable->GetBuffer(v67); /*0x40d01b*/
      renderer->member.device->lpVtbl->StretchRect( /*0x40d043*/
        renderer->member.device,
        *(IDirect3DSurface9 **)(v66 + 0xC),
        0,
        v68->members.data->member.Surface,
        0,
        D3DTEXF_NONE);
    }
  }
  if ( texture ) /*0x40d04b*/
    BSTextureManager__ReturnRenderedTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7], texture); /*0x40d054*/
  if ( g_NiParallelUpdateTaskManager ) /*0x40d061*/
  {
    v69 = g_NiParallelUpdateTaskManager + 0x190; /*0x40d063*/
    InterlockedIncrement((volatile LONG *)(g_NiParallelUpdateTaskManager + 0x190)); /*0x40d06a*/
    ReleaseSemaphore(*(HANDLE *)(v69 + 8), 1, 0); /*0x40d078*/
  }
  if ( MEMORY[0xB42CF4] ) /*0x40d087*/
  {
    if ( unk_B3339C ) /*0x40d095*/
    {
      v70 = unk_B3339C; /*0x40d097*/
      sub_494F30((unsigned int *)unk_B3339C); /*0x40d099*/
      FormHeapFree(v70); /*0x40d09f*/
    }
    v71 = (LPCSTR *)FormHeapAlloc(0x20u); /*0x40d0a9*/
    if ( v71 ) /*0x40d0bf*/
      v72 = ShowDetectorWindow( /*0x40d0ef*/
              v71,
              (const CHAR *)this->member.super.propertyState,
              (const CHAR *)this->member.super.accumulator,
              (const CHAR *)MEMORY[0xB42CF4],
              "Render Passes",
              0x80000000,
              0x80000000,
              0x320,
              0x258);
    else
      v72 = 0; /*0x40d0f6*/
    unk_B3339C = (int)v72; /*0x40d0f8*/
    if ( MEMORY[0xB42CF4] ) /*0x40d10c*/
    {
      v73 = MEMORY[0xB42CF4]; /*0x40d10e*/
      if ( !InterlockedDecrement((volatile LONG *)&MEMORY[0xB42CF4]->members) ) /*0x40d114*/
      {
        if ( v73 ) /*0x40d120*/
          (*(void (__thiscall **)(Ni2DBuffer *, int))v73->__vftable)(v73, 1); /*0x40d12a*/
      }
      MEMORY[0xB42CF4] = 0; /*0x40d12c*/
    }
  }
  unk_B33395 = 0; /*0x40d136*/
}
