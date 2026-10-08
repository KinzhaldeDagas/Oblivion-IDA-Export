char __thiscall NiRenderer_Create(
        NiDX9Renderer *this,
        UInt32 a2,
        UInt32 a3,
        UInt32 a4,
        void *a5,
        void *a6,
        UInt32 a7,
        UInt32 a8,
        int a9,
        int a10,
        int a11,
        int a12,
        unsigned __int32 a13,
        UInt32 a14,
        int a15)
{
  UInt32 *p_d3dDevFlags; // ebx
  UInt32 v17; // edi
  UInt32 *p_d3dDevType; // esi
  void *v19; // ecx
  UInt32 adapterIdx; // eax
  _DWORD *v21; // eax
  void *v22; // ecx
  int v23; // ecx
  void *v24; // eax
  void *v25; // ecx
  UInt32 v26; // eax
  int v27; // eax
  int v28; // eax
  void *v29; // ecx
  HRESULT v30; // ecx
  IDirect3D9 *v31; // eax
  UINT BackBufferCount; // edx
  UINT v33; // ebx
  void *v34; // ecx
  void *v36; // ecx
  char v37; // dl
  IDirect3DDevice9 *device; // edx
  NiDX9ImplicitBufferData *v39; // edi
  NiRenderTargetGroup *v40; // eax
  int v41; // ecx
  NiRenderTargetGroup *v42; // eax
  void *v43; // ecx
  NiD3DShader *v44; // eax
  Ni2DBuffer *v45; // eax
  NiDX9VertexBufferManager *v46; // eax
  NiDX9VertexBufferManager *v47; // eax
  NiDX9IndexBufferManager *v48; // eax
  NiDX9IndexBufferManager *v49; // eax
  _DWORD *v50; // eax
  NiDX9TextureManager *v51; // eax
  IDirect3DDevice9 *v52; // ecx
  NiGeometryGroupManager *v53; // eax
  NiDX9RendererVtbl *vftable; // edx
  char v55; // al
  NiGeometryGroup *v56; // eax
  NiGeometryGroupManager *geometryGroupMgr; // ecx
  _DWORD *v58; // eax
  NiDX9LightManager *v59; // eax
  NiDX9RendererVtbl *v60; // eax
  void (__thiscall *SetupCamera)(NiRenderer *, NiPoint3 *, NiPoint3 *, NiPoint3 *, NiPoint3 *, NiFrustum *, float *); // eax
  void *v62; // ecx
  rsize_t v63; // [esp+24h] [ebp-4DCh]
  rsize_t v64; // [esp+24h] [ebp-4DCh]
  rsize_t v65; // [esp+24h] [ebp-4DCh]
  rsize_t v66; // [esp+24h] [ebp-4DCh]
  rsize_t v67; // [esp+24h] [ebp-4DCh]
  NiRenderTargetGroup *defaultRTGroup; // [esp+28h] [ebp-4D8h]
  rsize_t v69; // [esp+30h] [ebp-4D0h]
  NiDepthStencilBuffer *v70; // [esp+3Ch] [ebp-4C4h]
  Ni2DBuffer *parentBuffer; // [esp+40h] [ebp-4C0h] BYREF
  int a2a[2]; // [esp+44h] [ebp-4BCh] BYREF
  float v73[4]; // [esp+4Ch] [ebp-4B4h] BYREF
  NiFrustum v74; // [esp+5Ch] [ebp-4A4h] BYREF
  D3DPRESENT_PARAMETERS parameters; // [esp+78h] [ebp-488h] BYREF
  _BYTE v76[512]; // [esp+B0h] [ebp-450h] BYREF
  char v77[588]; // [esp+2B0h] [ebp-250h] BYREF

  this->member.width = a2; /*0x76a1f4*/
  this->member.height = a3; /*0x76a201*/
  this->member.flags = a4; /*0x76a20e*/
  this->member.deviceType = a8; /*0x76a21b*/
  this->member.frameBufferFormat = a9; /*0x76a228*/
  this->member.depthStencilFormat = a10; /*0x76a245*/
  this->member.presentationInterval = a11; /*0x76a252*/
  this->member.swapEffect = a12; /*0x76a25f*/
  a2a[1] = (int)a5; /*0x76a26c*/
  this->member.windowDevice = (UInt32)a5; /*0x76a270*/
  this->member.windowFocus = (UInt32)a6; /*0x76a276*/
  this->member.adapterType = a7; /*0x76a27c*/
  this->member.frameBufferMode = a13; /*0x76a282*/
  this->member.backBufferCount = a14; /*0x76a288*/
  this->member.refreshRate = a15; /*0x76a28e*/
  NiDX9AdapterDescArray_GetSingleton(); /*0x76a294*/
  this->member.adapterIdx = a7; /*0x76a299*/
  this->member.focusWindow = a6; /*0x76a29f*/
  p_d3dDevFlags = &this->member.d3dDevFlags; /*0x76a2a5*/
  this->member.deviceWindow = a5; /*0x76a2ac*/
  v17 = a8; /*0x76a2b2*/
  p_d3dDevType = &this->member.d3dDevType; /*0x76a2b9*/
  if ( !sub_7623D0(a8, &this->member.d3dDevType, &this->member.d3dDevFlags) ) /*0x76a2c1*/
    goto LABEL_2; /*0x76a2c1*/
  if ( (a4 & 0x40) != 0 ) /*0x76a301*/
    *p_d3dDevFlags |= 2u; /*0x76a303*/
  if ( (a4 & 0x20) != 0 ) /*0x76a308*/
    *p_d3dDevFlags |= 4u; /*0x76a30a*/
  adapterIdx = this->member.adapterIdx; /*0x76a317*/
  if ( adapterIdx >= *((unsigned __int16 *)g_NiDX9AdapterDescArray + 7) ) /*0x76a31f*/
    v21 = 0; /*0x76a329*/
  else
    v21 = *(_DWORD **)(*((_DWORD *)g_NiDX9AdapterDescArray + 2) + 4 * adapterIdx); /*0x76a324*/
  this->member.adapterDesc = v21; /*0x76a32d*/
  if ( !v21 )
  {
    HIDWORD(v64) = "Creation failed: Invalid Adapter";
    LODWORD(v64) = 0x100; /*0x76a33f*/
    strncpy_s(&unk_B3F828, v64, (const char *)0xFF, v69); /*0x76a349*/
    Shared_NoOpVirtual_60D0A0(v22); /*0x76a353*/
    return 0; /*0x76a35b*/
  }
  v23 = *p_d3dDevType == 1 ? v21[0x118] : v21[0x119];
  v24 = *(_DWORD *)(v23 + 4) != 0 ? (void *)v23 : 0;
  this->member.deviceDesc = v24; /*0x76a37e*/
  if ( !v24 )
  {
LABEL_2:
    HIDWORD(v63) = "Creation failed: Invalid 3D device type";
    LODWORD(v63) = 0x100; /*0x76a2d7*/
    strncpy_s(&unk_B3F828, v63, (const char *)0xFF, v69); /*0x76a2e1*/
    Shared_NoOpVirtual_60D0A0(v19); /*0x76a2eb*/
    return 0; /*0x76a62f*/
  }
  _memset((int)&parameters, 0, sizeof(parameters)); /*0x76a393*/
  while ( 1 )
  {
    Shared_NoOpVirtual_60D0A0(v25); /*0x76a3a5*/
    v26 = this->member.adapterIdx; /*0x76a3b4*/
    if ( v26 >= *((unsigned __int16 *)g_NiDX9AdapterDescArray + 7) ) /*0x76a3bf*/
      v27 = 0; /*0x76a3c9*/
    else
      v27 = *(_DWORD *)(*((_DWORD *)g_NiDX9AdapterDescArray + 2) + 4 * v26); /*0x76a3c4*/
    if ( *p_d3dDevType == 1 ) /*0x76a3ce*/
      v28 = *(_DWORD *)(v27 + 0x460); /*0x76a3d0*/
    else
      v28 = *(_DWORD *)(v27 + 0x464); /*0x76a3d8*/
    if ( !*(_DWORD *)(v28 + 4) || !v28 )
    {
      HIDWORD(v65) = "Creation failed: Requested device not valid";
      LODWORD(v65) = 0x100; /*0x76a3f2*/
      strncpy_s(&unk_B3F828, v65, (const char *)0xFF, v69); /*0x76a3fc*/
      Shared_NoOpVirtual_60D0A0(v29); /*0x76a406*/
      goto LABEL_36; /*0x76a40e*/
    }
    if ( NiDX9Renderer_BuildPresentParameters( /*0x76a471*/
           this,
           (unsigned int)this,
           v17,
           (int)this->member.deviceWindow,
           a2,
           a3,
           a4,
           a13,
           a9,
           a10,
           a14,
           a12,
           a15,
           a11,
           (int *)&parameters) )
    {
      break; /*0x76a471*/
    }
LABEL_36:
    if ( v17 == 4 )
    {
      HIDWORD(v67) = "Creation failed: Could not create reference device";
      LODWORD(v67) = 0x100; /*0x76a936*/
      strncpy_s(&unk_B3F828, v67, (const char *)0xFF, v69); /*0x76a940*/
      Shared_NoOpVirtual_60D0A0(v62); /*0x76a94a*/
      return 0; /*0x76a952*/
    }
    a8 = ++v17; /*0x76a5ce*/
    if ( v17 == 4 ) /*0x76a5d5*/
    {
      Shared_NoOpVirtual_60D0A0(v30); /*0x76a95c*/
      return 0; /*0x76a964*/
    }
    Shared_NoOpVirtual_60D0A0(v30); /*0x76a5e0*/
    p_d3dDevType = &this->member.d3dDevType; /*0x76a5e6*/
    if ( !sub_7623D0(v17, &this->member.d3dDevType, p_d3dDevFlags) )
    {
      sub_761A90("Creation failed: Invalid 3D device type");
      Shared_NoOpVirtual_60D0A0(v34); /*0x76a60d*/
      return 0; /*0x76a60d*/
    }
  }
  v31 = g_Direct3D9; /*0x76a47e*/
  BackBufferCount = parameters.BackBufferCount; /*0x76a483*/
  unk_B420E6 = 0; /*0x76a487*/
  a14 = BackBufferCount; /*0x76a490*/
  v33 = 0; /*0x76a49b*/
  if ( v31->lpVtbl->GetAdapterCount(v31) ) /*0x76a49d*/
  {
    while ( 1 ) /*0x76a4b0*/
    {
      g_Direct3D9->lpVtbl->GetAdapterIdentifier(g_Direct3D9, v33, 0, (D3DADAPTER_IDENTIFIER9 *)v76); /*0x76a4c6*/
      if ( !strcmp(v77, "NVIDIA NVPerfHUD") ) /*0x76a4db*/
        break; /*0x76a4db*/
      if ( ++v33 >= g_Direct3D9->lpVtbl->GetAdapterCount(g_Direct3D9) ) /*0x76a4f1*/
        goto LABEL_32; /*0x76a4f1*/
    }
    this->member.adapterIdx = v33; /*0x76a4f5*/
    this->member.d3dDevType = 2; /*0x76a4fb*/
    unk_B420E6 = 1; /*0x76a505*/
  }
LABEL_32:
  p_d3dDevFlags = &this->member.d3dDevFlags; /*0x76a50c*/
  v30 = g_Direct3D9->lpVtbl->CreateDevice( /*0x76a54b*/
          g_Direct3D9,
          this->member.adapterIdx,
          this->member.d3dDevType,
          this->member.focusWindow,
          this->member.d3dDevFlags,
          &parameters,
          &this->member.device);                // DX10OBSE deployed 2026-05-24: guarded hook config is armed locally (InstallHooks=1, validation/target-byte logging on, draw mirroring off). Log stream reopen bug is fixed; next OBSE launch should log Load/config/target validation/D3D9 CreateDevice/DX10 sidecar diagnostics from this callsite.
  this->member.unkA90 = 0x64 * parameters.BackBufferHeight / (0x64 * parameters.BackBufferWidth) != 0x4B; /*0x76a563*/
  if ( (int)v30 < 0 ) /*0x76a569*/
  {
    if ( a14 == parameters.BackBufferCount /*0x76a5b6*/
      || (Shared_NoOpVirtual_60D0A0(v30),
          (int)g_Direct3D9->lpVtbl->CreateDevice(
                 g_Direct3D9,
                 this->member.adapterIdx,
                 this->member.d3dDevType,
                 this->member.focusWindow,
                 *p_d3dDevFlags,
                 &parameters,
                 &this->member.device) < 0) )
    {
      v17 = a8; /*0x76a5b8*/
      goto LABEL_36; /*0x76a5b8*/
    }
  }
  if ( !this->member.device )
  {
    HIDWORD(v66) = "Creation failed: Could not create hardware device";
    LODWORD(v66) = 0x100; /*0x76a645*/
    strncpy_s(&unk_B3F828, v66, (const char *)0xFF, v69); /*0x76a64f*/
    Shared_NoOpVirtual_60D0A0(v36); /*0x76a659*/
    return 0; /*0x76a661*/
  }
  if ( !NiDX9Renderer_InitializeDeviceStateAndSamplerPresets(this, (int)&parameters) ) /*0x76a671*/
    return 0; /*0x76a671*/
  v37 = ~(unsigned __int8)(*p_d3dDevFlags >> 6); /*0x76a67f*/
  this->member.mixedVertexProcessing = (*p_d3dDevFlags & 0x80) != 0; /*0x76a681*/
  this->member.softwareVertexProcessing = v37 & 1; /*0x76a693*/
  device = this->member.device; /*0x76a699*/
  a2a[0] = 0; /*0x76a6a1*/
  parentBuffer = 0; /*0x76a6a9*/
  v39 = NiDX9ImplicitBufferData_Create(device, &parameters, (Ni2DBuffer **)a2a); /*0x76a6bc*/
  NiDX9ImplicitDepthStencilBufferData::Create(this->member.device, &parentBuffer); /*0x76a6c4*/
  v40 = NiRenderTargetGroup::Create(1u, (NiRenderer *)this); /*0x76a6cc*/
  v41 = a2a[0]; /*0x76a6d1*/
  this->member.defaultRTGroup = v40; /*0x76a6d8*/
  ((void (__thiscall *)(NiRenderTargetGroup *, int))v40->vtbl->AttachBuffer)(v40, v41); /*0x76a6e8*/
  this->member.defaultRTGroup->vtbl->AttachDepthStencilBuffer(this->member.defaultRTGroup, v70); /*0x76a6fa*/
  defaultRTGroup = this->member.defaultRTGroup; /*0x76a707*/
  if ( defaultRTGroup ) /*0x76a709*/
    InterlockedIncrement((volatile LONG *)&defaultRTGroup->members); /*0x76a70f*/
  sub_768980(&this->member.screenRTGroups, a2a[0], defaultRTGroup, 0); /*0x76a720*/
  v42 = this->member.defaultRTGroup; /*0x76a725*/
  this->member.currentRTGroup = v42; /*0x76a72d*/
  this->member.currentscreenRTGroup = v42; /*0x76a733*/
  if ( !NiDX9Renderer_InitializeTextureDefaults(this) ) /*0x76a739*/
  {
    Shared_NoOpVirtual_60D0A0(v43); /*0x76a747*/
    return 0; /*0x76a74f*/
  }
  this->member.renderState = (NiDX9RenderState *)NiDX9RenderState_constr((int)this, &this->member.caps, 1); /*0x76a764*/
  sub_778F60(this); /*0x76a76a*/
  v44 = (NiD3DShader *)FormHeapAlloc(0x70u); /*0x76a771*/
  if ( v44 ) /*0x76a77b*/
    v45 = (Ni2DBuffer *)NiD3DShader::NiD3DShader(v44); /*0x76a77f*/
  else
    v45 = 0; /*0x76a786*/
  NiSmartPointer_Set__((Ni2DBuffer **)&this->member.defaultShader, v45); /*0x76a791*/
  ((void (__thiscall *)(NiD3DShader *, NiDX9Renderer *))this->member.defaultShader->__vftable->SetRenderer)( /*0x76a79e*/
    this->member.defaultShader,
    this);
  v46 = (NiDX9VertexBufferManager *)FormHeapAlloc(0x100u); /*0x76a7a5*/
  if ( v46 ) /*0x76a7af*/
    v47 = NiDX9VertexBufferManager::NiDX9VertexBufferManager(v46, (int)this->member.device); /*0x76a7ba*/
  else
    v47 = 0; /*0x76a7c1*/
  this->member.vertexBufferMgr = v47; /*0x76a7c5*/
  v48 = (NiDX9IndexBufferManager *)FormHeapAlloc(0x4Cu); /*0x76a7cb*/
  if ( v48 ) /*0x76a7d5*/
    v49 = NiDX9IndexBufferManager::NiDX9IndexBufferManager(v48, (int)this->member.device); /*0x76a7e0*/
  else
    v49 = 0; /*0x76a7e7*/
  this->member.indexBufferMgr = v49; /*0x76a7eb*/
  v50 = (_DWORD *)FormHeapAlloc(0x10u); /*0x76a7f1*/
  if ( v50 ) /*0x76a7fb*/
    v51 = (NiDX9TextureManager *)sub_77ABF0(v50, (int)this); /*0x76a800*/
  else
    v51 = 0; /*0x76a807*/
  v52 = this->member.device; /*0x76a809*/
  this->member.textureMgr = v51; /*0x76a80f*/
  v53 = NiD3DGeometryGroupManager_Create(v52, this->member.vertexBufferMgr); /*0x76a81d*/
  vftable = this->__vftable; /*0x76a822*/
  this->member.geometryGroupMgr = v53; /*0x76a825*/
  v55 = vftable->super.GetFlags((NiRenderer *)this); /*0x76a833*/
  sub_778C80((_BYTE *)this->member.geometryGroupMgr, (v55 & 2) != 0); /*0x76a843*/
  v56 = (NiGeometryGroup *)(*(int (__thiscall **)(NiGeometryGroupManager *, int))(*(_DWORD *)this->member.geometryGroupMgr /*0x76a855*/
                                                                                + 4))(
                             this->member.geometryGroupMgr,
                             1);
  geometryGroupMgr = this->member.geometryGroupMgr; /*0x76a857*/
  this->member.unsharedGeometryGroup = v56; /*0x76a85d*/
  this->member.dynamicGeometryGroup = (NiGeometryGroup *)(*(int (__thiscall **)(NiGeometryGroupManager *, int))(*(_DWORD *)geometryGroupMgr + 4))( /*0x76a871*/
                                                           geometryGroupMgr,
                                                           2);
  v58 = (_DWORD *)FormHeapAlloc(0x240u); /*0x76a877*/
  if ( v58 ) /*0x76a881*/
    v59 = (NiDX9LightManager *)sub_7766E0(v58, (int)this->member.renderState, (int)this->member.device); /*0x76a893*/
  else
    v59 = 0; /*0x76a89a*/
  this->member.lightMgr = v59; /*0x76a89c*/
  if ( v39->PresentParams.MultiSampleType ) /*0x76a8a2*/
    ((void (__thiscall *)(NiDX9RenderState *, int))this->member.renderState->vtbl->func_0E)(this->member.renderState, 1); /*0x76a8b5*/
  NiFrustum::SetOrtho(&v74, 0); /*0x76a8bd*/
  v60 = this->__vftable; /*0x76a8c8*/
  v74.Bottom = kTerrainLODQuadRayDirectionZ; /*0x76a8cb*/
  SetupCamera = v60->super.SetupCamera; /*0x76a8cf*/
  v74.Left = v74.Bottom; /*0x76a8d5*/
  v74.Top = 1.0; /*0x76a8df*/
  v74.Right = 1.0; /*0x76a8e4*/
  v74.Near = kFaceEarNormalMatchRadius; /*0x76a8f3*/
  v74.Far = 1.0; /*0x76a906*/
  v73[0] = 0.0; /*0x76a913*/
  v73[3] = 0.0; /*0x76a917*/
  v73[1] = 1.0; /*0x76a91b*/
  v73[2] = 1.0; /*0x76a91f*/
  SetupCamera((NiRenderer *)this, &g_zeroNiPoint3, &stru_B258D0, &stru_B258DC, &rhs, &v74, v73); /*0x76a923*/
  return 1; /*0x76a617*/
}
