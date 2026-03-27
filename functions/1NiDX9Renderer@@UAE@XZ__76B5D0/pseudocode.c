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

  v2 = this->member.device == 0;
  this->__vftable = (NiDX9RendererVtbl *)&NiDX9Renderer::`vftable';
  if ( !v2 )
  {
    if ( this->member.renderState )
    {
      for ( i = 0; i < dword_B28CB0; ++i )
        ((void (__thiscall *)(NiDX9RenderState *, unsigned int, _DWORD))this->member.renderState->vtbl->SetTexture)(
          this->member.renderState,
          i,
          0);
    }
    for ( j = 0; j < this->member.MaxStreams; ++j )
      this->member.device->lpVtbl->SetStreamSource(this->member.device, j, 0, 0, 0);
    this->member.device->lpVtbl->SetIndices(this->member.device, 0);
  }
  DefaultTextureData = this->member.DefaultTextureData;
  unk6F4 = this->member.unk6F4;
  v67 = 4;
  do
  {
    v7 = 0x16;
    do
    {
      FormHeapFree(unk6F4->unk00);
      unk6F4 = (Unk6F4 *)((char *)unk6F4 + 4);
      --v7;
    }
    while ( v7 );
    v8 = *DefaultTextureData;
    if ( *DefaultTextureData )
    {
      if ( !InterlockedDecrement((volatile LONG *)v8 + 1) )
      {
        if ( v8 )
          (**(void (__thiscall ***)(NiPixelData *, int))v8)(v8, 1);
      }
      *DefaultTextureData = 0;
    }
    ++DefaultTextureData;
    --v67;
  }
  while ( v67 );
  v9 = this->member.pad624[0];
  if ( v9 )
  {
    do
    {
      v10 = *(_DWORD *)(v9 + 0xC);
      v11 = dword_B42164;
      dword_B42164 = v9;
      *(_DWORD *)(v9 + 0xC) = v11;
      v9 = v10;
    }
    while ( v10 );
  }
  this->member.pad624[0] = 0;
  this->member.pad624[1] = 0;
  v12 = dword_B42164;
  if ( dword_B42164 )
  {
    do
    {
      v13 = *(_DWORD *)(v12 + 0xC);
      FormHeapFree(v12);
      v12 = v13;
    }
    while ( v13 );
  }
  dword_B42164 = 0;
  m_numBuckets = this->member.PrePackObjects.m_numBuckets;
  v15 = 0;
  if ( m_numBuckets )
  {
    m_buckets = this->member.PrePackObjects.m_buckets;
    while ( !*m_buckets )
    {
      ++v15;
      ++m_buckets;
      if ( v15 >= m_numBuckets )
        goto LABEL_25;
    }
    v17 = this->member.PrePackObjects.m_buckets[v15];
  }
  else
  {
LABEL_25:
    v17 = 0;
  }
  v18 = v17;
  while ( v18 )
  {
    data = (unsigned int)v18->data;
    if ( v18->next )
    {
      v18 = v18->next;
    }
    else
    {
      v20 = (*((int (__thiscall **)(NiTMap_void *, void *))this->member.PrePackObjects.vtbl + 1))(
              &this->member.PrePackObjects,
              v18->key);
      v21 = this->member.PrePackObjects.m_numBuckets;
      v22 = v20 + 1;
      if ( v22 >= v21 )
      {
LABEL_34:
        v18 = 0;
      }
      else
      {
        v23 = &this->member.PrePackObjects.m_buckets[v22];
        while ( 1 )
        {
          v18 = *v23;
          if ( *v23 )
            break;
          ++v22;
          ++v23;
          if ( v22 >= v21 )
            goto LABEL_34;
        }
      }
    }
    if ( data )
    {
      do
      {
        v24 = *(_DWORD *)(data + 0x20);
        FormHeapFree(data);
        data = v24;
      }
      while ( v24 );
    }
  }
  sub_76B380(this);
  sub_779010();
  sub_76DB00();
  NiTMap_Clear(&this->member.renderedTextures.vtbl);
  NiTMap_Clear(&this->member.renderedCubeMaps.vtbl);
  NiTMap_Clear(&this->member.dynamicTextures.vtbl);
  sub_774250();
  v25 = this->member.screenRTGroups.m_numBuckets;
  v26 = 0;
  if ( v25 )
  {
    v27 = this->member.screenRTGroups.m_buckets;
    while ( !*v27 )
    {
      ++v26;
      ++v27;
      if ( v26 >= v25 )
        goto LABEL_42;
    }
    v28 = (unsigned int *)this->member.screenRTGroups.m_buckets[v26];
  }
  else
  {
LABEL_42:
    v28 = 0;
  }
  m = (int)v28;
  if ( v28 )
  {
    do
    {
      v67 = 0;
      sub_7B2600(&this->member.screenRTGroups.vtbl, (unsigned int **)&m, &v69, &v67);
      v29 = (volatile LONG *)v67;
      if ( v67 )
      {
        v30 = *(int (__thiscall **)(unsigned int))(*(_DWORD *)v67 + 0x64);
        v31 = 0;
        v32 = v67;
        v67 = 0;
        if ( v30(v32) )
        {
          do
          {
            v33 = (*(int (__thiscall **)(volatile LONG *, unsigned int))(*v29 + 0x70))(v29, v31);
            v34 = v33;
            if ( v33 )
            {
              v35 = *(_DWORD *)(v33 + 0x10);
              if ( v35 )
              {
                if ( !InterlockedDecrement((volatile LONG *)(v35 + 4)) )
                  (**(void (__thiscall ***)(int, int))v35)(v35, 1);
                *(_DWORD *)(v34 + 0x10) = 0;
              }
            }
            v36 = *(int (__thiscall **)(volatile LONG *))(*v29 + 0x64);
            v31 = ++v67;
          }
          while ( v31 < v36(v29) );
        }
        v37 = (*(int (__thiscall **)(volatile LONG *))(*v29 + 0x74))(v29);
        v38 = v37;
        if ( v37 )
        {
          v39 = *(_DWORD *)(v37 + 0x10);
          if ( v39 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v39 + 4)) )
              (**(void (__thiscall ***)(int, int))v39)(v39, 1);
            *(_DWORD *)(v38 + 0x10) = 0;
          }
        }
        if ( !InterlockedDecrement(v29 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v29)(v29, 1);
      }
    }
    while ( m );
  }
  NiTMap_Clear(&this->member.screenRTGroups.vtbl);
  unk89C = this->member.unk89C;
  if ( unk89C )
  {
    if ( !InterlockedDecrement((volatile LONG *)&unk89C->members) )
      unk89C->__vftable->super.Destructor((NiRefObject *)unk89C, 1);
    this->member.unk89C = 0;
  }
  vertexBufferMgr = this->member.vertexBufferMgr;
  if ( vertexBufferMgr )
    (**(void (__thiscall ***)(NiDX9VertexBufferManager *, int))vertexBufferMgr)(vertexBufferMgr, 1);
  indexBufferMgr = this->member.indexBufferMgr;
  this->member.vertexBufferMgr = 0;
  if ( indexBufferMgr )
  {
    (**(void (__thiscall ***)(NiDX9IndexBufferManager *, int))indexBufferMgr)(indexBufferMgr, 1);
    this->member.indexBufferMgr = 0;
  }
  geometryGroupMgr = this->member.geometryGroupMgr;
  if ( geometryGroupMgr )
  {
    (*(void (__thiscall **)(NiGeometryGroupManager *, NiGeometryGroup *))(*(_DWORD *)geometryGroupMgr + 8))(
      geometryGroupMgr,
      this->member.unsharedGeometryGroup);
    (*(void (__thiscall **)(NiGeometryGroupManager *, NiGeometryGroup *))(*(_DWORD *)this->member.geometryGroupMgr + 8))(
      this->member.geometryGroupMgr,
      this->member.dynamicGeometryGroup);
    v44 = this->member.geometryGroupMgr;
    if ( v44 )
      (**(void (__thiscall ***)(NiGeometryGroupManager *, int))v44)(v44, 1);
    this->member.geometryGroupMgr = 0;
  }
  renderState = this->member.renderState;
  if ( renderState )
    renderState->vtbl->super.Destructor((NiRefObject *)renderState, 1);
  textureMgr = this->member.textureMgr;
  this->member.renderState = 0;
  if ( textureMgr )
    (**(void (__thiscall ***)(NiDX9TextureManager *, int))textureMgr)(textureMgr, 1);
  lightMgr = this->member.lightMgr;
  this->member.textureMgr = 0;
  if ( lightMgr )
  {
    sub_776780(lightMgr);
    FormHeapFree((unsigned int)lightMgr);
  }
  this->member.lightMgr = 0;
  for ( k = 0; k < 0x100; ++k )
  {
    v49 = dword_B42170[k];
    if ( v49 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v49 + 4)) )
        (**(void (__thiscall ***)(int, int))v49)(v49, 1);
      dword_B42170[k] = 0;
    }
  }
  device = this->member.device;
  if ( device )
  {
    device->lpVtbl->Release(this->member.device);
    this->member.device = 0;
  }
  FormHeapFree(this->member.ScreenTextureVerts);
  FormHeapFree((unsigned int)this->member.ScreenTextureColors);
  FormHeapFree(this->member.ScreenTextureTexCoords);
  FormHeapFree((unsigned int)this->member.ScreenTextureIndices);
  sub_7640C0((int)this);
  sub_764130((int)this);
  v66 = this->member.lostDeviceCallbacksRefcons.data;
  this->member.lostDeviceCallbacksRefcons._vtbl = &NiTArray<void *>::`vftable';
  FormHeapFree((unsigned int)v66);
  v65 = this->member.lostDeviceCallbacks.data;
  this->member.lostDeviceCallbacks._vtbl = &NiTArray<bool (__cdecl *)(void *)>::`vftable';
  FormHeapFree((unsigned int)v65);
  v64 = this->member.unkAA8.data;
  this->member.unkAA8._vtbl = &NiTArray<void *>::`vftable';
  FormHeapFree((unsigned int)v64);
  v63 = this->member.unkA98.data;
  this->member.unkA98._vtbl = &NiTArray<bool (__cdecl *)(bool,void *)>::`vftable';
  FormHeapFree((unsigned int)v63);
  defaultShader = this->member.defaultShader;
  if ( defaultShader )
  {
    if ( !InterlockedDecrement((volatile LONG *)&defaultShader->member) )
      defaultShader->__vftable->super.super.Destructor((NiRefObject *)defaultShader, 1);
  }
  head = this->member.shaderInterfaces.head;
  p_shaderInterfaces = &this->member.shaderInterfaces;
  this->member.shaderInterfaces.vtlb = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiD3DShaderInterface *>::`vftable';
  while ( head )
  {
    v54 = head;
    head = head->next;
    (*((void (__thiscall **)(NiTList_void *, NiTList_Entry *))p_shaderInterfaces->vtlb + 2))(
      &this->member.shaderInterfaces,
      v54);
  }
  this->member.shaderInterfaces.numItems = 0;
  this->member.shaderInterfaces.head = 0;
  this->member.shaderInterfaces.end = 0;
  p_shaderInterfaces->vtlb = &NiTListBase<NiTPointerAllocator<unsigned int>,NiD3DShaderInterface *>::`vftable';
  v55 = this->member.atDisplayFrame.head;
  p_atDisplayFrame = &this->member.atDisplayFrame;
  this->member.atDisplayFrame.vtlb = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiDX92DBufferData>>::`vftable';
  while ( v55 )
  {
    v57 = v55;
    v55 = v55->next;
    (*((void (__thiscall **)(NiTList_void *, NiTList_Entry *))p_atDisplayFrame->vtlb + 2))(
      &this->member.atDisplayFrame,
      v57);
  }
  this->member.atDisplayFrame.numItems = 0;
  this->member.atDisplayFrame.head = 0;
  this->member.atDisplayFrame.end = 0;
  p_atDisplayFrame->vtlb = &NiTListBase<NiTPointerAllocator<unsigned int>,NiPointer<NiDX92DBufferData>>::`vftable';
  ClipperImage = this->member.ClipperImage;
  if ( ClipperImage )
  {
    if ( !InterlockedDecrement((volatile LONG *)&ClipperImage->members) )
      ClipperImage->__vftable->super.super.Destructor((NiRefObject *)ClipperImage, 1);
  }
  this->member.dynamicTextures.vtbl = &NiTPointerMap<NiDynamicTexture *,NiDX9DynamicTextureData *>::`vftable';
  NiTMap_Clear(&this->member.dynamicTextures.vtbl);
  this->member.dynamicTextures.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiDynamicTexture *,NiDX9DynamicTextureData *>::`vftable';
  NiTMap_Clear(&this->member.dynamicTextures.vtbl);
  FormHeapFree((unsigned int)this->member.dynamicTextures.m_buckets);
  this->member.renderedCubeMaps.vtbl = &NiTPointerMap<NiRenderedCubeMap *,NiDX9RenderedCubeMapData *>::`vftable';
  NiTMap_Clear(&this->member.renderedCubeMaps.vtbl);
  this->member.renderedCubeMaps.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiRenderedCubeMap *,NiDX9RenderedCubeMapData *>::`vftable';
  NiTMap_Clear(&this->member.renderedCubeMaps.vtbl);
  FormHeapFree((unsigned int)this->member.renderedCubeMaps.m_buckets);
  this->member.renderedTextures.vtbl = &NiTPointerMap<NiRenderedTexture *,NiDX9RenderedTextureData *>::`vftable';
  NiTMap_Clear(&this->member.renderedTextures.vtbl);
  this->member.renderedTextures.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiRenderedTexture *,NiDX9RenderedTextureData *>::`vftable';
  NiTMap_Clear(&this->member.renderedTextures.vtbl);
  FormHeapFree((unsigned int)this->member.renderedTextures.m_buckets);
  v59 = this->member.unk89C;
  if ( v59 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v59->members) )
      v59->__vftable->super.Destructor((NiRefObject *)v59, 1);
  }
  this->member.screenRTGroups.vtbl = &NiTPointerMap<HWND__ *,NiPointer<NiRenderTargetGroup>>::`vftable';
  NiTMap_Clear(&this->member.screenRTGroups.vtbl);
  this->member.screenRTGroups.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,HWND__ *,NiPointer<NiRenderTargetGroup>>::`vftable';
  NiTMap_Clear(&this->member.screenRTGroups.vtbl);
  FormHeapFree((unsigned int)this->member.screenRTGroups.m_buckets);
  p_unk874 = &this->member.unk874;
  for ( m = 3; m >= 0; --m )
  {
    v61 = p_unk874[0xFFFFFFFF];
    p_unk874 += 0xFFFFFFFF;
    if ( v61 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v61 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))v61)(v61, 1);
    }
  }
  v62 = this->member.pad624[4];
  if ( v62 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v62 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v62)(v62, 1);
  }
  this->member.PrePackObjects.vtbl = &NiTPointerMap<NiVBBlock *,NiDX9Renderer::PrePackObject *>::`vftable';
  NiTMap_Clear(&this->member.PrePackObjects.vtbl);
  this->member.PrePackObjects.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiVBBlock *,NiDX9Renderer::PrePackObject *>::`vftable';
  NiTMap_Clear(&this->member.PrePackObjects.vtbl);
  FormHeapFree((unsigned int)this->member.PrePackObjects.m_buckets);
  NiRenderer::~NiRenderer((NiRenderer *)this);
}
