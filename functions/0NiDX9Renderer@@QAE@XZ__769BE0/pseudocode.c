NiDX9Renderer *__thiscall NiDX9Renderer::NiDX9Renderer(NiDX9Renderer *this)
{
  NiTMap_Entry_void **v2; // eax
  NiTMap_Entry_void **v3; // eax
  NiTMap_Entry_void **v4; // eax
  NiTMap_Entry_void **v5; // eax
  NiTMap_Entry_void **v6; // eax
  UInt32 v8; // [esp-38h] [ebp-44h]
  UInt32 v9; // [esp-28h] [ebp-34h]
  UInt32 v10; // [esp-18h] [ebp-24h]
  UInt32 v11; // [esp-8h] [ebp-14h]
  UInt32 v12; // [esp-8h] [ebp-14h]

  NiRenderer::NiRenderer((NiRenderer *)this);
  this->__vftable = (NiDX9RendererVtbl *)&NiDX9Renderer::`vftable';
  this->member.PrePackObjects.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiVBBlock *,NiDX9Renderer::PrePackObject *>::`vftable';
  this->member.PrePackObjects.m_numBuckets = 0x25;
  this->member.PrePackObjects.m_numItems = 0;
  v2 = (NiTMap_Entry_void **)FormHeapAlloc(0x94u);
  v11 = 4 * this->member.PrePackObjects.m_numBuckets;
  this->member.PrePackObjects.m_buckets = v2;
  _memset(v2, 0, v11);
  this->member.PrePackObjects.vtbl = &NiTPointerMap<NiVBBlock *,NiDX9Renderer::PrePackObject *>::`vftable';
  this->member.pad624[4] = 0;
  this->member.DefaultTextureData[0] = 0;
  this->member.DefaultTextureData[1] = 0;
  this->member.DefaultTextureData[2] = 0;
  this->member.DefaultTextureData[3] = 0;
  this->member.screenRTGroups.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,HWND__ *,NiPointer<NiRenderTargetGroup>>::`vftable';
  this->member.screenRTGroups.m_numBuckets = 0x25;
  this->member.screenRTGroups.m_numItems = 0;
  v3 = (NiTMap_Entry_void **)FormHeapAlloc(0x94u);
  v10 = 4 * this->member.screenRTGroups.m_numBuckets;
  this->member.screenRTGroups.m_buckets = v3;
  _memset(v3, 0, v10);
  this->member.screenRTGroups.vtbl = &NiTPointerMap<HWND__ *,NiPointer<NiRenderTargetGroup>>::`vftable';
  this->member.unk89C = 0;
  this->member.renderedTextures.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiRenderedTexture *,NiDX9RenderedTextureData *>::`vftable';
  this->member.renderedTextures.m_numBuckets = 0x25;
  this->member.renderedTextures.m_numItems = 0;
  v4 = (NiTMap_Entry_void **)FormHeapAlloc(0x94u);
  v9 = 4 * this->member.renderedTextures.m_numBuckets;
  this->member.renderedTextures.m_buckets = v4;
  _memset(v4, 0, v9);
  this->member.renderedTextures.vtbl = &NiTPointerMap<NiRenderedTexture *,NiDX9RenderedTextureData *>::`vftable';
  this->member.renderedCubeMaps.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiRenderedCubeMap *,NiDX9RenderedCubeMapData *>::`vftable';
  this->member.renderedCubeMaps.m_numBuckets = 0x25;
  this->member.renderedCubeMaps.m_numItems = 0;
  v5 = (NiTMap_Entry_void **)FormHeapAlloc(0x94u);
  v8 = 4 * this->member.renderedCubeMaps.m_numBuckets;
  this->member.renderedCubeMaps.m_buckets = v5;
  _memset(v5, 0, v8);
  this->member.renderedCubeMaps.vtbl = &NiTPointerMap<NiRenderedCubeMap *,NiDX9RenderedCubeMapData *>::`vftable';
  this->member.dynamicTextures.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiDynamicTexture *,NiDX9DynamicTextureData *>::`vftable';
  this->member.dynamicTextures.m_numBuckets = 0x25;
  this->member.dynamicTextures.m_numItems = 0;
  v6 = (NiTMap_Entry_void **)FormHeapAlloc(0x94u);
  v12 = 4 * this->member.dynamicTextures.m_numBuckets;
  this->member.dynamicTextures.m_buckets = v6;
  _memset(v6, 0, v12);
  this->member.dynamicTextures.vtbl = &NiTPointerMap<NiDynamicTexture *,NiDX9DynamicTextureData *>::`vftable';
  this->member.ClipperImage = 0;
  this->member.atDisplayFrame.numItems = 0;
  this->member.atDisplayFrame.head = 0;
  this->member.atDisplayFrame.end = 0;
  this->member.atDisplayFrame.vtlb = &NiTPointerList<NiPointer<NiDX92DBufferData>>::`vftable';
  this->member.shaderInterfaces.numItems = 0;
  this->member.shaderInterfaces.head = 0;
  this->member.shaderInterfaces.end = 0;
  this->member.shaderInterfaces.vtlb = &NiTPointerList<NiD3DShaderInterface *>::`vftable';
  this->member.Unk914 = 0;
  this->member.Unk918 = 0;
  this->member.Unk91C = 0;
  this->member.Unk920 = 0;
  this->member.Unk924 = 0;
  this->member.Unk928 = 0;
  this->member.Unk92C = 0;
  this->member.Unk930 = 0;
  this->member.Unk934 = 0;
  this->member.Unk938 = 0;
  this->member.defaultShader = 0;
  this->member.unkA98._vtbl = &NiTArray<bool (__cdecl *)(bool,void *)>::`vftable';
  this->member.unkA98.capacity = 0;
  this->member.unkA98.end = 0;
  this->member.unkA98.numObjs = 0;
  this->member.unkA98.data = 0;
  this->member.unkA98.growSize = 1;
  this->member.unkAA8.capacity = 0;
  this->member.unkAA8.growSize = 1;
  this->member.unkAA8.end = 0;
  this->member.unkAA8.numObjs = 0;
  this->member.unkAA8.data = 0;
  this->member.unkAA8._vtbl = &NiTArray<void *>::`vftable';
  this->member.lostDeviceCallbacks._vtbl = &NiTArray<bool (__cdecl *)(void *)>::`vftable';
  this->member.lostDeviceCallbacks.capacity = 0;
  this->member.lostDeviceCallbacks.growSize = 1;
  this->member.lostDeviceCallbacks.end = 0;
  this->member.lostDeviceCallbacks.numObjs = 0;
  this->member.lostDeviceCallbacks.data = 0;
  this->member.lostDeviceCallbacksRefcons._vtbl = &NiTArray<void *>::`vftable';
  this->member.lostDeviceCallbacksRefcons.capacity = 0;
  this->member.lostDeviceCallbacksRefcons.growSize = 1;
  this->member.lostDeviceCallbacksRefcons.end = 0;
  this->member.lostDeviceCallbacksRefcons.numObjs = 0;
  this->member.lostDeviceCallbacksRefcons.data = 0;
  sub_7641A0((float *)this);
  return this;
}
