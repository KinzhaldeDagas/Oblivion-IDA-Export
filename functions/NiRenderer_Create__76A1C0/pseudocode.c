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
  void *v30; // ecx
  int v31; // eax
  UInt32 RendererHint; // edx
  UInt32 v33; // ebx
  void *v34; // ecx
  void *v36; // ecx
  char v37; // dl
  IDirect3DDevice9 *device; // edx
  NiDX9ImplicitBufferData *v39; // edi
  NiRenderTargetGroup *NewRenderTargetGroup; // eax
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
  Ni2DBuffer *v71; // [esp+40h] [ebp-4C0h] BYREF
  int a2a[2]; // [esp+44h] [ebp-4BCh] BYREF
  float v73[4]; // [esp+4Ch] [ebp-4B4h] BYREF
  NiFrustum v74; // [esp+5Ch] [ebp-4A4h] BYREF
  NiPixelFormat v75[8]; // [esp+78h] [ebp-488h] BYREF
  char v76[588]; // [esp+2B0h] [ebp-250h] BYREF

  this->member.width = a2;
  this->member.height = a3;
  this->member.flags = a4;
  this->member.deviceType = a8;
  this->member.frameBufferFormat = a9;
  this->member.depthStencilFormat = a10;
  this->member.presentationInterval = a11;
  this->member.swapEffect = a12;
  a2a[1] = (int)a5;
  this->member.windowDevice = (UInt32)a5;
  this->member.windowFocus = (UInt32)a6;
  this->member.adapterType = a7;
  this->member.frameBufferMode = a13;
  this->member.backBufferCount = a14;
  this->member.refreshRate = a15;
  sub_763DE0();
  this->member.adapterIdx = a7;
  this->member.focusWindow = a6;
  p_d3dDevFlags = &this->member.d3dDevFlags;
  this->member.deviceWindow = a5;
  v17 = a8;
  p_d3dDevType = &this->member.d3dDevType;
  if ( !sub_7623D0(a8, &this->member.d3dDevType, &this->member.d3dDevFlags) )
    goto LABEL_2;
  if ( (a4 & 0x40) != 0 )
    *p_d3dDevFlags |= 2u;
  if ( (a4 & 0x20) != 0 )
    *p_d3dDevFlags |= 4u;
  adapterIdx = this->member.adapterIdx;
  if ( adapterIdx >= *(unsigned __int16 *)(dword_B42160 + 0xE) )
    v21 = 0;
  else
    v21 = *(_DWORD **)(*(_DWORD *)(dword_B42160 + 8) + 4 * adapterIdx);
  this->member.adapterDesc = v21;
  if ( !v21 )
  {
    HIDWORD(v64) = "Creation failed: Invalid Adapter";
    LODWORD(v64) = 0x100;
    strncpy_s(&byte_B3F828, v64, (const char *)0xFF, v69);
    TESTexture::ClearComponentReferences(v22);
    return 0;
  }
  v23 = *p_d3dDevType == 1 ? v21[0x118] : v21[0x119];
  v24 = *(_DWORD *)(v23 + 4) != 0 ? (void *)v23 : 0;
  this->member.deviceDesc = v24;
  if ( !v24 )
  {
LABEL_2:
    HIDWORD(v63) = "Creation failed: Invalid 3D device type";
    LODWORD(v63) = 0x100;
    strncpy_s(&byte_B3F828, v63, (const char *)0xFF, v69);
    TESTexture::ClearComponentReferences(v19);
    return 0;
  }
  _memset(v75, 0, 0x38);
  while ( 1 )
  {
    TESTexture::ClearComponentReferences(v25);
    v26 = this->member.adapterIdx;
    if ( v26 >= *(unsigned __int16 *)(dword_B42160 + 0xE) )
      v27 = 0;
    else
      v27 = *(_DWORD *)(*(_DWORD *)(dword_B42160 + 8) + 4 * v26);
    if ( *p_d3dDevType == 1 )
      v28 = *(_DWORD *)(v27 + 0x460);
    else
      v28 = *(_DWORD *)(v27 + 0x464);
    if ( !*(_DWORD *)(v28 + 4) || !v28 )
    {
      HIDWORD(v65) = "Creation failed: Requested device not valid";
      LODWORD(v65) = 0x100;
      strncpy_s(&byte_B3F828, v65, (const char *)0xFF, v69);
      TESTexture::ClearComponentReferences(v29);
      goto LABEL_36;
    }
    if ( sub_761E60(
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
           (int *)v75) )
    {
      break;
    }
LABEL_36:
    if ( v17 == 4 )
    {
      HIDWORD(v67) = "Creation failed: Could not create reference device";
      LODWORD(v67) = 0x100;
      strncpy_s(&byte_B3F828, v67, (const char *)0xFF, v69);
      TESTexture::ClearComponentReferences(v62);
      return 0;
    }
    a8 = ++v17;
    if ( v17 == 4 )
    {
      TESTexture::ClearComponentReferences(v30);
      return 0;
    }
    TESTexture::ClearComponentReferences(v30);
    p_d3dDevType = &this->member.d3dDevType;
    if ( !sub_7623D0(v17, &this->member.d3dDevType, p_d3dDevFlags) )
    {
      sub_761A90("Creation failed: Invalid 3D device type");
      TESTexture::ClearComponentReferences(v34);
      return 0;
    }
  }
  v31 = dword_B42154;
  RendererHint = v75[0].RendererHint;
  byte_B420E6 = 0;
  a14 = RendererHint;
  v33 = 0;
  if ( (*(int (__stdcall **)(int))(*(_DWORD *)v31 + 0x10))(v31) )
  {
    while ( 1 )
    {
      (*(void (__stdcall **)(int, UInt32, _DWORD, NiComponentSpec *))(*(_DWORD *)dword_B42154 + 0x14))(
        dword_B42154,
        v33,
        0,
        &v75[0].Components[3]);
      if ( !strcmp(v76, "NVIDIA NVPerfHUD") )
        break;
      if ( ++v33 >= (*(int (__stdcall **)(int))(*(_DWORD *)dword_B42154 + 0x10))(dword_B42154) )
        goto LABEL_32;
    }
    this->member.adapterIdx = v33;
    this->member.d3dDevType = 2;
    byte_B420E6 = 1;
  }
LABEL_32:
  p_d3dDevFlags = &this->member.d3dDevFlags;
  v30 = (void *)(*(int (__stdcall **)(int, UInt32, UInt32, HANDLE, UInt32, NiPixelFormat *, IDirect3DDevice9 **))(*(_DWORD *)dword_B42154 + 0x40))(
                  dword_B42154,
                  this->member.adapterIdx,
                  this->member.d3dDevType,
                  this->member.focusWindow,
                  this->member.d3dDevFlags,
                  v75,
                  &this->member.device);
  this->member.unkA90 = 0x64 * v75[0].eFormat / (unsigned int)(0x64 * *(_DWORD *)&v75[0].BitsPerPixel) != 0x4B;
  if ( (int)v30 < 0 )
  {
    if ( a14 == v75[0].RendererHint
      || (TESTexture::ClearComponentReferences(v30),
          (*(int (__stdcall **)(int, UInt32, UInt32, HANDLE, UInt32, NiPixelFormat *, IDirect3DDevice9 **))(*(_DWORD *)dword_B42154 + 0x40))(
            dword_B42154,
            this->member.adapterIdx,
            this->member.d3dDevType,
            this->member.focusWindow,
            *p_d3dDevFlags,
            v75,
            &this->member.device) < 0) )
    {
      v17 = a8;
      goto LABEL_36;
    }
  }
  if ( !this->member.device )
  {
    HIDWORD(v66) = "Creation failed: Could not create hardware device";
    LODWORD(v66) = 0x100;
    strncpy_s(&byte_B3F828, v66, (const char *)0xFF, v69);
    TESTexture::ClearComponentReferences(v36);
    return 0;
  }
  if ( !sub_762110(this, (int)v75) )
    return 0;
  v37 = ~(unsigned __int8)(*p_d3dDevFlags >> 6);
  this->member.mixedVertexProcessing = (*p_d3dDevFlags & 0x80) != 0;
  this->member.softwareVertexProcessing = v37 & 1;
  device = this->member.device;
  a2a[0] = 0;
  v71 = 0;
  v39 = NiDX9ImplicitBufferData::NiDX9ImplicitBufferData((int)device, v75, (_DWORD **)a2a);
  NiDX9DepthStencilBufferData_Create((int)this->member.device, &v71);
  NewRenderTargetGroup = CreateNewRenderTargetGroup(1u, (NiRenderer *)this);
  v41 = a2a[0];
  this->member.defaultRTGroup = NewRenderTargetGroup;
  ((void (__thiscall *)(NiRenderTargetGroup *, int))NewRenderTargetGroup->vtbl->AttachBuffer)(NewRenderTargetGroup, v41);
  this->member.defaultRTGroup->vtbl->AttachDepthStencilBuffer(this->member.defaultRTGroup, v70);
  defaultRTGroup = this->member.defaultRTGroup;
  if ( defaultRTGroup )
    InterlockedIncrement((volatile LONG *)&defaultRTGroup->members);
  sub_768980(&this->member.screenRTGroups, a2a[0], defaultRTGroup, 0);
  v42 = this->member.defaultRTGroup;
  this->member.currentRTGroup = v42;
  this->member.currentscreenRTGroup = v42;
  if ( !sub_768C10(this) )
  {
    TESTexture::ClearComponentReferences(v43);
    return 0;
  }
  this->member.renderState = (NiDX9RenderState *)NiDX9RenderState_constr((int)this, &this->member.caps, 1);
  sub_778F60(this);
  v44 = (NiD3DShader *)FormHeapAlloc(0x70u);
  if ( v44 )
    v45 = (Ni2DBuffer *)NiD3DShader::NiD3DShader(v44);
  else
    v45 = 0;
  NiSmartPointer_Set__((Ni2DBuffer **)&this->member.defaultShader, v45);
  ((void (__thiscall *)(NiD3DShader *, NiDX9Renderer *))this->member.defaultShader->__vftable->SetRenderer)(
    this->member.defaultShader,
    this);
  v46 = (NiDX9VertexBufferManager *)FormHeapAlloc(0x100u);
  if ( v46 )
    v47 = NiDX9VertexBufferManager::NiDX9VertexBufferManager(v46, (int)this->member.device);
  else
    v47 = 0;
  this->member.vertexBufferMgr = v47;
  v48 = (NiDX9IndexBufferManager *)FormHeapAlloc(0x4Cu);
  if ( v48 )
    v49 = NiDX9IndexBufferManager::NiDX9IndexBufferManager(v48, (int)this->member.device);
  else
    v49 = 0;
  this->member.indexBufferMgr = v49;
  v50 = (_DWORD *)FormHeapAlloc(0x10u);
  if ( v50 )
    v51 = (NiDX9TextureManager *)sub_77ABF0(v50, (int)this);
  else
    v51 = 0;
  v52 = this->member.device;
  this->member.textureMgr = v51;
  v53 = NiD3DGeometryGroupManager::NiD3DGeometryGroupManager((int)v52, (int)this->member.vertexBufferMgr);
  vftable = this->__vftable;
  this->member.geometryGroupMgr = v53;
  v55 = vftable->super.GetFlags((NiRenderer *)this);
  sub_778C80((_BYTE *)this->member.geometryGroupMgr, (v55 & 2) != 0);
  v56 = (NiGeometryGroup *)(*(int (__thiscall **)(NiGeometryGroupManager *, int))(*(_DWORD *)this->member.geometryGroupMgr
                                                                                + 4))(
                             this->member.geometryGroupMgr,
                             1);
  geometryGroupMgr = this->member.geometryGroupMgr;
  this->member.unsharedGeometryGroup = v56;
  this->member.dynamicGeometryGroup = (NiGeometryGroup *)(*(int (__thiscall **)(NiGeometryGroupManager *, int))(*(_DWORD *)geometryGroupMgr + 4))(
                                                           geometryGroupMgr,
                                                           2);
  v58 = (_DWORD *)FormHeapAlloc(0x240u);
  if ( v58 )
    v59 = (NiDX9LightManager *)sub_7766E0(v58, (int)this->member.renderState, (int)this->member.device);
  else
    v59 = 0;
  this->member.lightMgr = v59;
  if ( v39->PresentParams.BackBufferCount )
    ((void (__thiscall *)(NiDX9RenderState *, int))this->member.renderState->vtbl->func_0E)(this->member.renderState, 1);
  NiFrustum::SetOrtho(&v74, 0);
  v60 = this->__vftable;
  v74.Bottom = flt_A30634;
  SetupCamera = v60->super.SetupCamera;
  v74.Left = v74.Bottom;
  v74.Top = 1.0;
  v74.Right = 1.0;
  v74.Near = flt_A2FAAC;
  v74.Far = 1.0;
  v73[0] = 0.0;
  v73[3] = 0.0;
  v73[1] = 1.0;
  v73[2] = 1.0;
  SetupCamera(
    (NiRenderer *)this,
    (NiPoint3 *)&Vector3_InitValue_,
    (NiPoint3 *)&dword_B258D0,
    (NiPoint3 *)&dword_B258DC,
    (NiPoint3 *)&dword_B258E8,
    &v74,
    v73);
  return 1;
}
