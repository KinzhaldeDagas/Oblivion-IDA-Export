void __thiscall NiDX9Renderer::~NiDX9Renderer(NiDX9Renderer *this)
{
  bool v2; // zf
  unsigned int i; // esi
  UInt32 j; // esi
  NiPixelData **DefaultTextureData; // edi
  Unk6F4 *unk6F4; // esi
  int v7; // ebp
  NiPixelData *v8; // ebp
  UInt32 v9; // eax
  UInt32 v10; // ecx
  int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // esi
  UInt32 m_numBuckets; // edx
  UInt32 v15; // eax
  NiTMap_Entry_void **m_buckets; // ecx
  NiTMap_Entry_void *v17; // eax
  NiTMap_Entry_void *v18; // ebp
  unsigned int data; // edi
  int v20; // eax
  UInt32 v21; // edx
  UInt32 v22; // eax
  NiTMap_Entry_void **v23; // ecx
  unsigned int v24; // esi
  UInt32 v25; // ecx
  UInt32 v26; // eax
  NiTMap_Entry_void **v27; // edx
  unsigned int *v28; // eax
  volatile LONG *v29; // esi
  int (__thiscall *v30)(unsigned int); // eax
  unsigned int v31; // edi
  unsigned int v32; // ecx
  int v33; // eax
  int v34; // ebp
  int v35; // edi
  int (__thiscall *v36)(volatile LONG *); // eax
  int v37; // eax
  int v38; // edi
  int v39; // ebp
  NiObject *unk89C; // esi
  NiDX9VertexBufferManager *vertexBufferMgr; // ecx
  NiDX9IndexBufferManager *indexBufferMgr; // ecx
  NiGeometryGroupManager *geometryGroupMgr; // ecx
  NiGeometryGroupManager *v44; // ecx
  NiDX9RenderState *renderState; // ecx
  NiDX9TextureManager *textureMgr; // ecx
  NiDX9LightManager *lightMgr; // esi
  unsigned int k; // ebp
  int v49; // esi
  IDirect3DDevice9 *device; // eax
  NiD3DShader *defaultShader; // esi
  NiTList_Entry *head; // edi
  NiTList_void *p_shaderInterfaces; // esi
  NiTList_Entry *v54; // eax
  NiTList_Entry *v55; // edi
  NiTList_void *p_atDisplayFrame; // esi
  NiTList_Entry *v57; // eax
  NiTexture *ClipperImage; // esi
  NiObject *v59; // esi
  UInt32 *p_unk874; // edi
  UInt32 v61; // esi
  UInt32 v62; // esi
  void *v63; // [esp+58h] [ebp-2Ch]
  void *v64; // [esp+5Ch] [ebp-28h]
  void *v65; // [esp+60h] [ebp-24h]
  void *v66; // [esp+64h] [ebp-20h]
  unsigned int v67; // [esp+78h] [ebp-Ch] BYREF
  int m; // [esp+7Ch] [ebp-8h] BYREF
  int v69; // [esp+80h] [ebp-4h] BYREF

  v2 = this->member.device == 0; /*0x76b5d6*/
  this->__vftable = (NiDX9RendererVtbl *)&NiDX9Renderer::`vftable'; /*0x76b5df*/
  if ( !v2 ) /*0x76b5e5*/
  {
    if ( this->member.renderState ) /*0x76b5e7*/
    {
      for ( i = 0; i < dword_B28CB0; ++i ) /*0x76b5f2*/
        ((void (__thiscall *)(NiDX9RenderState *, unsigned int, _DWORD))this->member.renderState->vtbl->SetTexture)( /*0x76b611*/
          this->member.renderState,
          i,
          0);
    }
    for ( j = 0; j < this->member.MaxStreams; ++j ) /*0x76b620*/
      this->member.device->lpVtbl->SetStreamSource(this->member.device, j, 0, 0, 0); /*0x76b646*/
    this->member.device->lpVtbl->SetIndices(this->member.device, 0); /*0x76b664*/
  }
  DefaultTextureData = this->member.DefaultTextureData; /*0x76b667*/
  unk6F4 = this->member.unk6F4; /*0x76b66d*/
  v67 = 4; /*0x76b673*/
  do /*0x76b6c9*/
  {
    v7 = 0x16; /*0x76b680*/
    do /*0x76b696*/
    {
      FormHeapFree(unk6F4->unk00); /*0x76b688*/
      unk6F4 = (Unk6F4 *)((char *)unk6F4 + 4); /*0x76b690*/
      --v7; /*0x76b693*/
    }
    while ( v7 ); /*0x76b696*/
    v8 = *DefaultTextureData; /*0x76b698*/
    if ( *DefaultTextureData ) /*0x76b698*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v8 + 1) ) /*0x76b6a2*/
      {
        if ( v8 ) /*0x76b6ae*/
          (**(void (__thiscall ***)(NiPixelData *, int))v8)(v8, 1); /*0x76b6b9*/
      }
      *DefaultTextureData = 0; /*0x76b6bb*/
    }
    ++DefaultTextureData; /*0x76b6c1*/
    --v67; /*0x76b6c4*/
  }
  while ( v67 ); /*0x76b6c9*/
  v9 = this->member.pad624[0]; /*0x76b6cb*/
  if ( v9 ) /*0x76b6d3*/
  {
    do /*0x76b6ea*/
    {
      v10 = *(_DWORD *)(v9 + 0xC); /*0x76b6d5*/
      v11 = unk_B42164; /*0x76b6da*/
      unk_B42164 = v9; /*0x76b6e0*/
      *(_DWORD *)(v9 + 0xC) = v11; /*0x76b6e5*/
      v9 = v10; /*0x76b6e8*/
    }
    while ( v10 ); /*0x76b6ea*/
  }
  this->member.pad624[0] = 0; /*0x76b6ee*/
  this->member.pad624[1] = 0; /*0x76b6f4*/
  v12 = unk_B42164; /*0x76b6fa*/
  if ( unk_B42164 ) /*0x76b6fa*/
  {
    do /*0x76b713*/
    {
      v13 = *(_DWORD *)(v12 + 0xC); /*0x76b703*/
      FormHeapFree(v12); /*0x76b707*/
      v12 = v13; /*0x76b711*/
    }
    while ( v13 ); /*0x76b713*/
  }
  unk_B42164 = 0; /*0x76b715*/
  m_numBuckets = this->member.PrePackObjects.m_numBuckets; /*0x76b71b*/
  v15 = 0; /*0x76b721*/
  if ( m_numBuckets ) /*0x76b725*/
  {
    m_buckets = this->member.PrePackObjects.m_buckets; /*0x76b72d*/
    while ( !*m_buckets ) /*0x76b732*/
    {
      ++v15; /*0x76b734*/
      ++m_buckets; /*0x76b737*/
      if ( v15 >= m_numBuckets ) /*0x76b73c*/
        goto LABEL_25; /*0x76b73c*/
    }
    v17 = this->member.PrePackObjects.m_buckets[v15]; /*0x76b754*/
  }
  else
  {
LABEL_25:
    v17 = 0; /*0x76b73e*/
  }
  v18 = v17; /*0x76b742*/
  while ( v18 ) /*0x76b744*/
  {
    data = (unsigned int)v18->data; /*0x76b74b*/
    if ( v18->next ) /*0x76b746*/
    {
      v18 = v18->next; /*0x76b750*/
    }
    else
    {
      v20 = (*((int (__thiscall **)(NiTMap_void *, void *))this->member.PrePackObjects.vtbl + 1))( /*0x76b76e*/
              &this->member.PrePackObjects,
              v18->key);
      v21 = this->member.PrePackObjects.m_numBuckets; /*0x76b770*/
      v22 = v20 + 1; /*0x76b773*/
      if ( v22 >= v21 ) /*0x76b778*/
      {
LABEL_34:
        v18 = 0; /*0x76b790*/
      }
      else
      {
        v23 = &this->member.PrePackObjects.m_buckets[v22]; /*0x76b77d*/
        while ( 1 ) /*0x76b780*/
        {
          v18 = *v23; /*0x76b780*/
          if ( *v23 ) /*0x76b780*/
            break; /*0x76b780*/
          ++v22; /*0x76b786*/
          ++v23; /*0x76b789*/
          if ( v22 >= v21 ) /*0x76b78e*/
            goto LABEL_34; /*0x76b78e*/
        }
      }
    }
    if ( data ) /*0x76b794*/
    {
      do /*0x76b7a6*/
      {
        v24 = *(_DWORD *)(data + 0x20); /*0x76b796*/
        FormHeapFree(data); /*0x76b79a*/
        data = v24; /*0x76b7a4*/
      }
      while ( v24 ); /*0x76b7a6*/
    }
  }
  sub_76B380(this); /*0x76b7ae*/
  sub_779010(); /*0x76b7b3*/
  NiDX9ResourceRegistry_ReleaseAll(); /*0x76b7b8*/
  NiTMap_Clear(&this->member.renderedTextures.vtbl); /*0x76b7c3*/
  NiTMap_Clear(&this->member.renderedCubeMaps.vtbl); /*0x76b7ce*/
  NiTMap_Clear(&this->member.dynamicTextures.vtbl); /*0x76b7d9*/
  sub_774250(); /*0x76b7df*/
  v25 = this->member.screenRTGroups.m_numBuckets; /*0x76b7e4*/
  v26 = 0; /*0x76b7ed*/
  if ( v25 ) /*0x76b7f1*/
  {
    v27 = this->member.screenRTGroups.m_buckets; /*0x76b7f9*/
    while ( !*v27 ) /*0x76b803*/
    {
      ++v26; /*0x76b809*/
      ++v27; /*0x76b80c*/
      if ( v26 >= v25 ) /*0x76b811*/
        goto LABEL_42; /*0x76b811*/
    }
    v28 = (unsigned int *)this->member.screenRTGroups.m_buckets[v26]; /*0x76bd2d*/
  }
  else
  {
LABEL_42:
    v28 = 0; /*0x76b813*/
  }
  m = (int)v28; /*0x76b817*/
  if ( v28 ) /*0x76b81b*/
  {
    do /*0x76b90b*/
    {
      v67 = 0; /*0x76b836*/
      sub_7B2600((unsigned int **)&this->member.screenRTGroups, (unsigned int **)&m, &v69, &v67); /*0x76b83e*/
      v29 = (volatile LONG *)v67; /*0x76b843*/
      if ( v67 ) /*0x76b849*/
      {
        v30 = *(int (__thiscall **)(unsigned int))(*(_DWORD *)v67 + 0x64); /*0x76b851*/
        v31 = 0; /*0x76b854*/
        v32 = v67; /*0x76b856*/
        v67 = 0; /*0x76b858*/
        if ( v30(v32) ) /*0x76b85c*/
        {
          do /*0x76b8b2*/
          {
            v33 = (*(int (__thiscall **)(volatile LONG *, unsigned int))(*v29 + 0x70))(v29, v31); /*0x76b86a*/
            v34 = v33; /*0x76b86c*/
            if ( v33 ) /*0x76b870*/
            {
              v35 = *(_DWORD *)(v33 + 0x10); /*0x76b872*/
              if ( v35 ) /*0x76b877*/
              {
                if ( !InterlockedDecrement((volatile LONG *)(v35 + 4)) ) /*0x76b87d*/
                  (**(void (__thiscall ***)(int, int))v35)(v35, 1); /*0x76b893*/
                *(_DWORD *)(v34 + 0x10) = 0; /*0x76b895*/
              }
            }
            v36 = *(int (__thiscall **)(volatile LONG *))(*v29 + 0x64); /*0x76b8a2*/
            v31 = ++v67; /*0x76b8a5*/
          }
          while ( v31 < v36(v29) ); /*0x76b8b2*/
        }
        v37 = (*(int (__thiscall **)(volatile LONG *))(*v29 + 0x74))(v29); /*0x76b8bb*/
        v38 = v37; /*0x76b8bd*/
        if ( v37 ) /*0x76b8c1*/
        {
          v39 = *(_DWORD *)(v37 + 0x10); /*0x76b8c3*/
          if ( v39 ) /*0x76b8c8*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v39 + 4)) ) /*0x76b8ce*/
              (**(void (__thiscall ***)(int, int))v39)(v39, 1); /*0x76b8e5*/
            *(_DWORD *)(v38 + 0x10) = 0; /*0x76b8e7*/
          }
        }
        if ( !InterlockedDecrement(v29 + 1) ) /*0x76b8f2*/
          (**(void (__thiscall ***)(volatile LONG *, int))v29)(v29, 1); /*0x76b904*/
      }
    }
    while ( m ); /*0x76b90b*/
  }
  NiTMap_Clear(&this->member.screenRTGroups.vtbl); /*0x76b917*/
  unk89C = this->member.unk89C; /*0x76b91c*/
  if ( unk89C ) /*0x76b926*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&unk89C->members) ) /*0x76b92c*/
      unk89C->__vftable->super.Destructor((NiRefObject *)unk89C, 1); /*0x76b942*/
    this->member.unk89C = 0; /*0x76b944*/
  }
  vertexBufferMgr = this->member.vertexBufferMgr; /*0x76b94a*/
  if ( vertexBufferMgr ) /*0x76b952*/
    (**(void (__thiscall ***)(NiDX9VertexBufferManager *, int))vertexBufferMgr)(vertexBufferMgr, 1); /*0x76b95a*/
  indexBufferMgr = this->member.indexBufferMgr; /*0x76b95c*/
  this->member.vertexBufferMgr = 0; /*0x76b964*/
  if ( indexBufferMgr ) /*0x76b96a*/
  {
    (**(void (__thiscall ***)(NiDX9IndexBufferManager *, int))indexBufferMgr)(indexBufferMgr, 1); /*0x76b972*/
    this->member.indexBufferMgr = 0; /*0x76b974*/
  }
  geometryGroupMgr = this->member.geometryGroupMgr; /*0x76b97a*/
  if ( geometryGroupMgr ) /*0x76b982*/
  {
    (*(void (__thiscall **)(NiGeometryGroupManager *, NiGeometryGroup *))(*(_DWORD *)geometryGroupMgr + 8))( /*0x76b990*/
      geometryGroupMgr,
      this->member.unsharedGeometryGroup);
    (*(void (__thiscall **)(NiGeometryGroupManager *, NiGeometryGroup *))(*(_DWORD *)this->member.geometryGroupMgr + 8))( /*0x76b9a4*/
      this->member.geometryGroupMgr,
      this->member.dynamicGeometryGroup);
    v44 = this->member.geometryGroupMgr; /*0x76b9a6*/
    if ( v44 ) /*0x76b9ae*/
      (**(void (__thiscall ***)(NiGeometryGroupManager *, int))v44)(v44, 1); /*0x76b9b6*/
    this->member.geometryGroupMgr = 0; /*0x76b9b8*/
  }
  renderState = this->member.renderState; /*0x76b9be*/
  if ( renderState ) /*0x76b9c6*/
    renderState->vtbl->super.Destructor((NiRefObject *)renderState, 1); /*0x76b9ce*/
  textureMgr = this->member.textureMgr; /*0x76b9d0*/
  this->member.renderState = 0; /*0x76b9d8*/
  if ( textureMgr ) /*0x76b9de*/
    (**(void (__thiscall ***)(NiDX9TextureManager *, int))textureMgr)(textureMgr, 1); /*0x76b9e6*/
  lightMgr = this->member.lightMgr; /*0x76b9e8*/
  this->member.textureMgr = 0; /*0x76b9f0*/
  if ( lightMgr ) /*0x76b9f6*/
  {
    sub_776780(lightMgr); /*0x76b9fa*/
    FormHeapFree((unsigned int)lightMgr); /*0x76ba00*/
  }
  this->member.lightMgr = 0; /*0x76ba08*/
  for ( k = 0; k < 0x100; ++k ) /*0x76ba0e*/
  {
    v49 = unk_B42170[k]; /*0x76ba10*/
    if ( v49 ) /*0x76ba18*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v49 + 4)) ) /*0x76ba1e*/
        (**(void (__thiscall ***)(int, int))v49)(v49, 1); /*0x76ba34*/
      unk_B42170[k] = 0; /*0x76ba36*/
    }
  }
  device = this->member.device; /*0x76ba47*/
  if ( device ) /*0x76ba4f*/
  {
    device->lpVtbl->Release(this->member.device); /*0x76ba57*/
    this->member.device = 0; /*0x76ba59*/
  }
  FormHeapFree(this->member.ScreenTextureVerts); /*0x76ba66*/
  FormHeapFree((unsigned int)this->member.ScreenTextureColors); /*0x76ba72*/
  FormHeapFree(this->member.ScreenTextureTexCoords); /*0x76ba7e*/
  FormHeapFree((unsigned int)this->member.ScreenTextureIndices); /*0x76ba8a*/
  sub_7640C0((int)this); /*0x76ba94*/
  sub_764130((int)this); /*0x76ba9b*/
  v66 = this->member.lostDeviceCallbacksRefcons.data; /*0x76baab*/
  this->member.lostDeviceCallbacksRefcons._vtbl = &NiTArray<void *>::`vftable'; /*0x76baac*/
  FormHeapFree((unsigned int)v66); /*0x76bab2*/
  v65 = this->member.lostDeviceCallbacks.data; /*0x76babd*/
  this->member.lostDeviceCallbacks._vtbl = &NiTArray<bool (__cdecl *)(void *)>::`vftable'; /*0x76babe*/
  FormHeapFree((unsigned int)v65); /*0x76bac8*/
  v64 = this->member.unkAA8.data; /*0x76bad3*/
  this->member.unkAA8._vtbl = &NiTArray<void *>::`vftable'; /*0x76bad4*/
  FormHeapFree((unsigned int)v64); /*0x76bada*/
  v63 = this->member.unkA98.data; /*0x76bae5*/
  this->member.unkA98._vtbl = &NiTArray<bool (__cdecl *)(bool,void *)>::`vftable'; /*0x76bae6*/
  FormHeapFree((unsigned int)v63); /*0x76baf0*/
  defaultShader = this->member.defaultShader; /*0x76baf5*/
  if ( defaultShader ) /*0x76bb00*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&defaultShader->member) ) /*0x76bb06*/
      defaultShader->__vftable->super.super.Destructor((NiRefObject *)defaultShader, 1); /*0x76bb1c*/
  }
  head = this->member.shaderInterfaces.head; /*0x76bb1e*/
  p_shaderInterfaces = &this->member.shaderInterfaces; /*0x76bb24*/
  this->member.shaderInterfaces.vtlb = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiD3DShaderInterface *>::`vftable'; /*0x76bb2e*/
  while ( head ) /*0x76bb34*/
  {
    v54 = head; /*0x76bb38*/
    head = head->next; /*0x76bb3a*/
    (*((void (__thiscall **)(NiTList_void *, NiTList_Entry *))p_shaderInterfaces->vtlb + 2))( /*0x76bb42*/
      &this->member.shaderInterfaces,
      v54);
  }
  this->member.shaderInterfaces.numItems = 0; /*0x76bb48*/
  this->member.shaderInterfaces.head = 0; /*0x76bb4b*/
  this->member.shaderInterfaces.end = 0; /*0x76bb4e*/
  p_shaderInterfaces->vtlb = &NiTListBase<NiTPointerAllocator<unsigned int>,NiD3DShaderInterface *>::`vftable'; /*0x76bb51*/
  v55 = this->member.atDisplayFrame.head; /*0x76bb57*/
  p_atDisplayFrame = &this->member.atDisplayFrame; /*0x76bb5f*/
  this->member.atDisplayFrame.vtlb = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiDX92DBufferData>>::`vftable'; /*0x76bb65*/
  while ( v55 ) /*0x76bb6b*/
  {
    v57 = v55; /*0x76bb72*/
    v55 = v55->next; /*0x76bb74*/
    (*((void (__thiscall **)(NiTList_void *, NiTList_Entry *))p_atDisplayFrame->vtlb + 2))( /*0x76bb7c*/
      &this->member.atDisplayFrame,
      v57);
  }
  this->member.atDisplayFrame.numItems = 0; /*0x76bb82*/
  this->member.atDisplayFrame.head = 0; /*0x76bb85*/
  this->member.atDisplayFrame.end = 0; /*0x76bb88*/
  p_atDisplayFrame->vtlb = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiDX92DBufferData>>::`vftable'; /*0x76bb8b*/
  ClipperImage = this->member.ClipperImage; /*0x76bb91*/
  if ( ClipperImage ) /*0x76bb99*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&ClipperImage->members) ) /*0x76bb9f*/
      ClipperImage->__vftable->super.super.Destructor((NiRefObject *)ClipperImage, 1); /*0x76bbb5*/
  }
  this->member.dynamicTextures.vtbl = &NiTPointerMap<NiDynamicTexture *,NiDX9DynamicTextureData *>::`vftable'; /*0x76bbbf*/
  NiTMap_Clear(&this->member.dynamicTextures.vtbl); /*0x76bbc5*/
  this->member.dynamicTextures.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiDynamicTexture *,NiDX9DynamicTextureData *>::`vftable'; /*0x76bbcc*/
  NiTMap_Clear(&this->member.dynamicTextures.vtbl); /*0x76bbd2*/
  FormHeapFree((unsigned int)this->member.dynamicTextures.m_buckets); /*0x76bbdb*/
  this->member.renderedCubeMaps.vtbl = &NiTPointerMap<NiRenderedCubeMap *,NiDX9RenderedCubeMapData *>::`vftable'; /*0x76bbeb*/
  NiTMap_Clear(&this->member.renderedCubeMaps.vtbl); /*0x76bbf1*/
  this->member.renderedCubeMaps.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiRenderedCubeMap *,NiDX9RenderedCubeMapData *>::`vftable'; /*0x76bbf8*/
  NiTMap_Clear(&this->member.renderedCubeMaps.vtbl); /*0x76bbfe*/
  FormHeapFree((unsigned int)this->member.renderedCubeMaps.m_buckets); /*0x76bc07*/
  this->member.renderedTextures.vtbl = &NiTPointerMap<NiRenderedTexture *,NiDX9RenderedTextureData *>::`vftable'; /*0x76bc17*/
  NiTMap_Clear(&this->member.renderedTextures.vtbl); /*0x76bc1d*/
  this->member.renderedTextures.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiRenderedTexture *,NiDX9RenderedTextureData *>::`vftable'; /*0x76bc24*/
  NiTMap_Clear(&this->member.renderedTextures.vtbl); /*0x76bc2a*/
  FormHeapFree((unsigned int)this->member.renderedTextures.m_buckets); /*0x76bc33*/
  v59 = this->member.unk89C; /*0x76bc38*/
  if ( v59 ) /*0x76bc43*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v59->members) ) /*0x76bc49*/
      v59->__vftable->super.Destructor((NiRefObject *)v59, 1); /*0x76bc5f*/
  }
  this->member.screenRTGroups.vtbl = &NiTPointerMap<HWND__ *,NiPointer<NiRenderTargetGroup>>::`vftable'; /*0x76bc69*/
  NiTMap_Clear(&this->member.screenRTGroups.vtbl); /*0x76bc6f*/
  this->member.screenRTGroups.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,HWND__ *,NiPointer<NiRenderTargetGroup>>::`vftable'; /*0x76bc76*/
  NiTMap_Clear(&this->member.screenRTGroups.vtbl); /*0x76bc7c*/
  FormHeapFree((unsigned int)this->member.screenRTGroups.m_buckets); /*0x76bc85*/
  p_unk874 = &this->member.unk874; /*0x76bc8d*/
  for ( m = 3; m >= 0; --m ) /*0x76bc93*/
  {
    v61 = p_unk874[0xFFFFFFFF]; /*0x76bca0*/
    p_unk874 += 0xFFFFFFFF; /*0x76bca3*/
    if ( v61 ) /*0x76bca8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v61 + 4)) ) /*0x76bcae*/
        (**(void (__thiscall ***)(UInt32, int))v61)(v61, 1); /*0x76bcc4*/
    }
  }
  v62 = this->member.pad624[4]; /*0x76bccd*/
  if ( v62 ) /*0x76bcd6*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v62 + 4)) ) /*0x76bcdc*/
      (**(void (__thiscall ***)(UInt32, int))v62)(v62, 1); /*0x76bcf2*/
  }
  this->member.PrePackObjects.vtbl = &NiTPointerMap<NiVBBlock *,NiDX9Renderer::PrePackObject *>::`vftable'; /*0x76bcfc*/
  NiTMap_Clear(&this->member.PrePackObjects.vtbl); /*0x76bd02*/
  this->member.PrePackObjects.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiVBBlock *,NiDX9Renderer::PrePackObject *>::`vftable'; /*0x76bd09*/
  NiTMap_Clear(&this->member.PrePackObjects.vtbl); /*0x76bd0f*/
  FormHeapFree((unsigned int)this->member.PrePackObjects.m_buckets); /*0x76bd18*/
  NiRenderer::~NiRenderer((NiRenderer *)this); /*0x76bd28*/
}
