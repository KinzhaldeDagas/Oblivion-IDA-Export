// Oblivion mode-3 cube-face path: own target type 0x18, position the cube camera at the source, render one face or all faces, and preserve the source cull bit.
bool __thiscall ShadowSceneNode_RenderMode3CubeFaceForSource(
        ShadowSceneNode_DecodedLayout *self,
        void *source,
        int unused,
        bool releasePreviousTarget)
{
  char v6; // al
  void **p_cubeCamera_124; // esi
  BSCubeMapCamera *v8; // eax
  Ni2DBuffer *v9; // eax
  _DWORD *v10; // eax
  BSRenderedTexture *DefaultRenderTarget; // eax
  BSRenderedTexture *cubeRenderTarget_120; // ebp
  volatile LONG *v13; // eax
  volatile LONG *v14; // ebp
  volatile LONG **v15; // edi
  volatile LONG *v16; // edi
  void **v17; // ebp
  unsigned int cubeFaceIndex_128; // eax
  Ni2DBuffer *v19; // esi
  #9279 *vftable; // edi
  Ni2DBuffer *v21; // esi
  BSRenderedTexture *v23; // [esp+14h] [ebp-14h]
  volatile LONG *v24; // [esp+14h] [ebp-14h]
  char sourcea; // [esp+2Ch] [ebp+4h]

  v6 = *((_BYTE *)source + 0x18); /*0x7c6341*/
  *((_WORD *)source + 0xC) &= ~1u; /*0x7c6344*/
  p_cubeCamera_124 = &self->cubeCamera_124; /*0x7c634c*/
  sourcea = v6 & 1; /*0x7c6352*/
  if ( !self->cubeCamera_124 ) /*0x7c6356*/
  {
    v8 = (BSCubeMapCamera *)FormHeapAlloc(0x150u); /*0x7c6361*/
    if ( v8 ) /*0x7c6377*/
      v9 = (Ni2DBuffer *)BSCubeMapCamera::BSCubeMapCamera(v8, 3); /*0x7c637d*/
    else
      v9 = 0; /*0x7c6384*/
    NiSmartPointer_Set__((Ni2DBuffer **)p_cubeCamera_124, v9); /*0x7c6391*/
  }
  *((_DWORD *)*p_cubeCamera_124 + 0x49) = 3;    // Select BSCubeMapCamera render mode 3. This is distinct from mode 0 used by special shadow object-list rendering. /*0x7c6398*/
  v10 = (char *)*p_cubeCamera_124 + 0x54; /*0x7c63aa*/
  *v10 = *((_DWORD *)source + 0x22); /*0x7c63ad*/
  v10[1] = *((_DWORD *)source + 0x23); /*0x7c63b5*/
  v10[2] = *((_DWORD *)source + 0x24); /*0x7c63be*/
  if ( self->cubeRenderTarget_120 ) /*0x7c63c1*/
  {
    if ( !releasePreviousTarget ) /*0x7c63d0*/
      goto LABEL_16; /*0x7c63d0*/
    BSTextureManager__ReturnRenderedTexture( /*0x7c63dd*/
      *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
      (BSRenderedTexture *)self->cubeRenderTarget_120);
  }
  DefaultRenderTarget = BSTextureManager_GetDefaultRenderTarget( /*0x7c63f1*/
                          *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
                          unk_B43104,
                          0x18);
  cubeRenderTarget_120 = (BSRenderedTexture *)self->cubeRenderTarget_120; /*0x7c63f6*/
  v23 = DefaultRenderTarget; /*0x7c63fe*/
  if ( cubeRenderTarget_120 != DefaultRenderTarget ) /*0x7c6402*/
  {
    if ( cubeRenderTarget_120 ) /*0x7c6406*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&cubeRenderTarget_120->members) ) /*0x7c640c*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))cubeRenderTarget_120->vtbl)(cubeRenderTarget_120, 1); /*0x7c6423*/
      DefaultRenderTarget = v23; /*0x7c6425*/
    }
    self->cubeRenderTarget_120 = DefaultRenderTarget;// Strong-own default rendered-target type 0x18 at ShadowSceneNode+0x120. /*0x7c642b*/
    if ( DefaultRenderTarget ) /*0x7c6431*/
      InterlockedIncrement((volatile LONG *)&DefaultRenderTarget->members); /*0x7c6437*/
  }
LABEL_16:
  v13 = (volatile LONG *)self->cubeRenderTarget_120; /*0x7c643d*/
  v14 = *((volatile LONG **)*p_cubeCamera_124 + 0x50); /*0x7c6445*/
  v15 = (volatile LONG **)((char *)*p_cubeCamera_124 + 0x140); /*0x7c644b*/
  v24 = v13; /*0x7c6453*/
  if ( v14 != v13 ) /*0x7c6457*/
  {
    if ( v14 ) /*0x7c645b*/
    {
      if ( !InterlockedDecrement(v14 + 1) ) /*0x7c6461*/
        (**(void (__thiscall ***)(void *, int))v14)((void *)v14, 1); /*0x7c6478*/
      v13 = v24; /*0x7c647a*/
    }
    *v15 = v13; /*0x7c6480*/
    if ( v13 ) /*0x7c6482*/
      InterlockedIncrement(v13 + 1); /*0x7c6488*/
  }
  v16 = *((volatile LONG **)*p_cubeCamera_124 + 0x52); /*0x7c6490*/
  v17 = (void **)((char *)*p_cubeCamera_124 + 0x148); /*0x7c6496*/
  if ( v16 != source ) /*0x7c649e*/
  {
    if ( v16 ) /*0x7c64a2*/
    {
      if ( !InterlockedDecrement(v16 + 1) ) /*0x7c64a8*/
        (**(void (__thiscall ***)(void *, int))v16)((void *)v16, 1); /*0x7c64be*/
    }
    *v17 = source; /*0x7c64c4*/
    InterlockedIncrement((volatile LONG *)source + 1); /*0x7c64c7*/
  }
  if ( releasePreviousTarget ) /*0x7c64d6*/
  {
    cubeFaceIndex_128 = 0xFFFFFFFF; /*0x7c64d8*/
  }
  else
  {
    cubeFaceIndex_128 = self->cubeFaceIndex_128;// Use ShadowSceneNode+0x128 as the current mode-3 cube face index when rendering incrementally. /*0x7c64dd*/
    self->cubeFaceIndex_128 = cubeFaceIndex_128 + 1;// Advance the persistent cube-face index; the function resets it after six faces. /*0x7c64e6*/
  }
  (*(void (__thiscall **)(void *, unsigned int))(*(_DWORD *)*p_cubeCamera_124 + 0x84))( /*0x7c64f7*/
    *p_cubeCamera_124,
    cubeFaceIndex_128);
  v19 = (Ni2DBuffer *)*p_cubeCamera_124; /*0x7c64f9*/
  vftable = v19[0x10].__vftable; /*0x7c64fb*/
  v21 = v19 + 0x10; /*0x7c6501*/
  if ( vftable ) /*0x7c6509*/
  {
    if ( !InterlockedDecrement((volatile LONG *)vftable + 1) ) /*0x7c650f*/
      (**(void (__thiscall ***)(#9279 *, int))vftable)(vftable, 1); /*0x7c6525*/
    v21->__vftable = 0; /*0x7c6527*/
  }
  if ( sourcea ) /*0x7c6532*/
    *((_WORD *)source + 0xC) |= 1u; /*0x7c6534*/
  else
    *((_WORD *)source + 0xC) &= ~1u; /*0x7c653b*/
  if ( (int)self->cubeFaceIndex_128 < 6 ) /*0x7c6548*/
    return 0; /*0x7c654a*/
  self->cubeFaceIndex_128 = 0;                  // After six incremental faces, reset ShadowSceneNode+0x128 to face zero. /*0x7c654e*/
  return 1; /*0x7c655a*/
}
