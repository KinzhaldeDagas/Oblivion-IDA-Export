NiDX9Renderer *__thiscall NiDX9Renderer::NiDX9Renderer(NiDX9Renderer *this)
{
  NiTMap_Entry_void **v2; // eax
  NiTMap_Entry_void **v3; // eax
  NiTMap_Entry_void **v4; // eax
  NiTMap_Entry_void **v5; // eax
  NiTMap_Entry_void **v6; // eax
  unsigned int v8; // [esp-38h] [ebp-44h]
  unsigned int v9; // [esp-28h] [ebp-34h]
  unsigned int v10; // [esp-18h] [ebp-24h]
  unsigned int v11; // [esp-8h] [ebp-14h]
  unsigned int v12; // [esp-8h] [ebp-14h]

  NiRenderer::NiRenderer((NiRenderer *)this); /*0x769be5*/
  this->__vftable = (NiDX9RendererVtbl *)&NiDX9Renderer::`vftable'; /*0x769bff*/
  this->member.PrePackObjects.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiVBBlock *,NiDX9Renderer::PrePackObject *>::`vftable'; /*0x769c05*/
  this->member.PrePackObjects.m_numBuckets = 0x25; /*0x769c0f*/
  this->member.PrePackObjects.m_numItems = 0; /*0x769c15*/
  v2 = (NiTMap_Entry_void **)FormHeapAlloc(0x94u); /*0x769c20*/
  v11 = 4 * this->member.PrePackObjects.m_numBuckets; /*0x769c2f*/
  this->member.PrePackObjects.m_buckets = v2; /*0x769c32*/
  _memset((int)v2, 0, v11); /*0x769c38*/
  this->member.PrePackObjects.vtbl = &NiTPointerMap<NiVBBlock *,NiDX9Renderer::PrePackObject *>::`vftable'; /*0x769c3d*/
  this->member.pad624[4] = 0; /*0x769c47*/
  this->member.DefaultTextureData[0] = 0; /*0x769c4f*/
  this->member.DefaultTextureData[1] = 0; /*0x769c55*/
  this->member.DefaultTextureData[2] = 0; /*0x769c5b*/
  this->member.DefaultTextureData[3] = 0; /*0x769c61*/
  this->member.screenRTGroups.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,HWND__ *,NiPointer<NiRenderTargetGroup>>::`vftable'; /*0x769c75*/
  this->member.screenRTGroups.m_numBuckets = 0x25; /*0x769c7f*/
  this->member.screenRTGroups.m_numItems = 0; /*0x769c85*/
  v3 = (NiTMap_Entry_void **)FormHeapAlloc(0x94u); /*0x769c90*/
  v10 = 4 * this->member.screenRTGroups.m_numBuckets; /*0x769c9f*/
  this->member.screenRTGroups.m_buckets = v3; /*0x769ca2*/
  _memset((int)v3, 0, v10); /*0x769ca8*/
  this->member.screenRTGroups.vtbl = &NiTPointerMap<HWND__ *,NiPointer<NiRenderTargetGroup>>::`vftable'; /*0x769cbb*/
  this->member.unk89C = 0; /*0x769cc5*/
  this->member.renderedTextures.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiRenderedTexture *,NiDX9RenderedTextureData *>::`vftable'; /*0x769ccb*/
  this->member.renderedTextures.m_numBuckets = 0x25; /*0x769cd5*/
  this->member.renderedTextures.m_numItems = 0; /*0x769cdb*/
  v4 = (NiTMap_Entry_void **)FormHeapAlloc(0x94u); /*0x769ce6*/
  v9 = 4 * this->member.renderedTextures.m_numBuckets; /*0x769cf5*/
  this->member.renderedTextures.m_buckets = v4; /*0x769cf8*/
  _memset((int)v4, 0, v9); /*0x769cfe*/
  this->member.renderedTextures.vtbl = &NiTPointerMap<NiRenderedTexture *,NiDX9RenderedTextureData *>::`vftable'; /*0x769d03*/
  this->member.renderedCubeMaps.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiRenderedCubeMap *,NiDX9RenderedCubeMapData *>::`vftable'; /*0x769d0d*/
  this->member.renderedCubeMaps.m_numBuckets = 0x25; /*0x769d17*/
  this->member.renderedCubeMaps.m_numItems = 0; /*0x769d1d*/
  v5 = (NiTMap_Entry_void **)FormHeapAlloc(0x94u); /*0x769d36*/
  v8 = 4 * this->member.renderedCubeMaps.m_numBuckets; /*0x769d45*/
  this->member.renderedCubeMaps.m_buckets = v5; /*0x769d48*/
  _memset((int)v5, 0, v8); /*0x769d4e*/
  this->member.renderedCubeMaps.vtbl = &NiTPointerMap<NiRenderedCubeMap *,NiDX9RenderedCubeMapData *>::`vftable'; /*0x769d64*/
  this->member.dynamicTextures.vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiDynamicTexture *,NiDX9DynamicTextureData *>::`vftable'; /*0x769d6e*/
  this->member.dynamicTextures.m_numBuckets = 0x25; /*0x769d78*/
  this->member.dynamicTextures.m_numItems = 0; /*0x769d7e*/
  v6 = (NiTMap_Entry_void **)FormHeapAlloc(0x94u); /*0x769d89*/
  v12 = 4 * this->member.dynamicTextures.m_numBuckets; /*0x769d98*/
  this->member.dynamicTextures.m_buckets = v6; /*0x769d9b*/
  _memset((int)v6, 0, v12); /*0x769da1*/
  this->member.dynamicTextures.vtbl = &NiTPointerMap<NiDynamicTexture *,NiDX9DynamicTextureData *>::`vftable'; /*0x769da6*/
  this->member.ClipperImage = 0; /*0x769db0*/
  this->member.atDisplayFrame.numItems = 0; /*0x769db6*/
  this->member.atDisplayFrame.head = 0; /*0x769dbc*/
  this->member.atDisplayFrame.end = 0; /*0x769dc2*/
  this->member.atDisplayFrame.vtlb = &NiTPointerList<NiPointer<NiDX92DBufferData>>::`vftable'; /*0x769dc8*/
  this->member.shaderInterfaces.numItems = 0; /*0x769dd2*/
  this->member.shaderInterfaces.head = 0; /*0x769dd8*/
  this->member.shaderInterfaces.end = 0; /*0x769dde*/
  this->member.shaderInterfaces.vtlb = &NiTPointerList<NiD3DShaderInterface *>::`vftable'; /*0x769de4*/
  this->member.Unk914 = 0; /*0x769dee*/
  this->member.Unk918 = 0; /*0x769df4*/
  this->member.Unk91C = 0; /*0x769dfa*/
  this->member.Unk920 = 0; /*0x769e00*/
  this->member.Unk924 = 0; /*0x769e06*/
  this->member.Unk928 = 0; /*0x769e0c*/
  this->member.Unk92C = 0; /*0x769e12*/
  this->member.Unk930 = 0; /*0x769e18*/
  this->member.Unk934 = 0; /*0x769e1e*/
  this->member.Unk938 = 0; /*0x769e24*/
  this->member.defaultShader = 0; /*0x769e2a*/
  this->member.unkA98._vtbl = &NiTArray<bool (__cdecl *)(bool,void *)>::`vftable'; /*0x769e30*/
  this->member.unkA98.capacity = 0; /*0x769e3a*/
  this->member.unkA98.end = 0; /*0x769e41*/
  this->member.unkA98.numObjs = 0; /*0x769e48*/
  this->member.unkA98.data = 0; /*0x769e4f*/
  this->member.unkA98.growSize = 1; /*0x769e5a*/
  this->member.unkAA8.capacity = 0; /*0x769e61*/
  this->member.unkAA8.growSize = 1; /*0x769e68*/
  this->member.unkAA8.end = 0; /*0x769e6f*/
  this->member.unkAA8.numObjs = 0; /*0x769e76*/
  this->member.unkAA8.data = 0; /*0x769e7d*/
  this->member.unkAA8._vtbl = &NiTArray<void *>::`vftable'; /*0x769e88*/
  this->member.lostDeviceCallbacks._vtbl = &NiTArray<bool (__cdecl *)(void *)>::`vftable'; /*0x769e91*/
  this->member.lostDeviceCallbacks.capacity = 0; /*0x769e9b*/
  this->member.lostDeviceCallbacks.growSize = 1; /*0x769ea2*/
  this->member.lostDeviceCallbacks.end = 0; /*0x769ea9*/
  this->member.lostDeviceCallbacks.numObjs = 0; /*0x769eb0*/
  this->member.lostDeviceCallbacks.data = 0; /*0x769eb7*/
  this->member.lostDeviceCallbacksRefcons._vtbl = &NiTArray<void *>::`vftable'; /*0x769ebd*/
  this->member.lostDeviceCallbacksRefcons.capacity = 0; /*0x769ec5*/
  this->member.lostDeviceCallbacksRefcons.growSize = 1; /*0x769ecc*/
  this->member.lostDeviceCallbacksRefcons.end = 0; /*0x769ed3*/
  this->member.lostDeviceCallbacksRefcons.numObjs = 0; /*0x769eda*/
  this->member.lostDeviceCallbacksRefcons.data = 0; /*0x769ee1*/
  NiDX9Renderer_InitializeStateDefaults(this); /*0x769ee7*/
  return this; /*0x769eec*/
}
