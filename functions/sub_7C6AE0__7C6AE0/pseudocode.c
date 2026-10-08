// Find or create a native full-list ShadowSceneLight for a backing NiLight. The third argument is the proved trackBackingPosition boolean, not a ShadowSceneLight pointer or admission selector.
// local variable allocation has failed, the output may be wrong!
ShadowSceneLight_DecodedLayout *__thiscall ShadowSceneNode_FindOrCreateFullLightForSource(
        ShadowSceneNode_DecodedLayout *self,
        void *backingLight,
        bool trackBackingPosition)
{
  ShadowSceneNode_DecodedLayout *v3; // ebp
  ShadowSceneLight_DecodedLayout *FullLightBySource; // esi
  ShadowSceneLight *v5; // eax
  BSTextureManager *v6; // ecx
  BSRenderedTexture *DefaultRenderTarget; // ebx
  NiRenderTargetGroup *v8; // ebp
  void (__thiscall **p_AttachDepthStencilBuffer)(NiRenderTargetGroup *, int); // edi
  int v10; // eax

  v3 = self; /*0x7c6b05*/
  FullLightBySource = ShadowSceneNode_FindFullLightBySource(self, backingLight); /*0x7c6b15*/
  if ( FullLightBySource ) /*0x7c6b19*/
  {
    FullLightBySource->trackBackingPosition_104 = trackBackingPosition;// Update trackBackingPosition on an existing full-list entry. /*0x7c6b1f*/
  }
  else
  {
    v5 = (ShadowSceneLight *)FormHeapAlloc(0x220u); /*0x7c6b2f*/
    if ( v5 ) /*0x7c6b45*/
      FullLightBySource = (ShadowSceneLight_DecodedLayout *)ShadowSceneLight::ShadowSceneLight(v5);// Constructor callsite for an ordinary source-light full-list entry; immediate setup writes +0x104, +0x100, list ownership, and optionally +0x114 only. /*0x7c6b4e*/
    else
      FullLightBySource = 0; /*0x7c6b52*/
    FullLightBySource->trackBackingPosition_104 = trackBackingPosition;// Store trackBackingPosition before binding a newly constructed entry's backing light. /*0x7c6b58*/
    ShadowSceneLight_SetBackingLight(FullLightBySource, backingLight);// SetBackingLight seeds cached source position immediately when trackBackingPosition is true. /*0x7c6b68*/
    *(_DWORD *)&trackBackingPosition = FullLightBySource; /*0x7c6b71*/
    InterlockedIncrement((volatile LONG *)&FullLightBySource->base_000[4]); /*0x7c6b75*/
    NiTRefPointerList__AddTail(&v3->fullListVtable_E4, (int *)&trackBackingPosition); /*0x7c6b8e*/
    if ( !InterlockedDecrement((volatile LONG *)&FullLightBySource->base_000[4]) ) /*0x7c6b98*/
      (**(void (__thiscall ***)(ShadowSceneLight_DecodedLayout *, int))FullLightBySource->base_000)( /*0x7c6baa*/
        FullLightBySource,
        1);
    if ( FullLightBySource->perSourceProjectorMode_F4 ) /*0x7c6bac*/
    {
      v6 = *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7]; /*0x7c6bbc*/
      if ( FullLightBySource->specialCubeDispatch_F5 ) /*0x7c6bb5*/
      {
        DefaultRenderTarget = BSTextureManager_GetDefaultRenderTarget(v6, unk_B43104, 0x16); /*0x7c6bd1*/
        v8 = BSRenderedTexture::UseTextureToRender(DefaultRenderTarget); /*0x7c6be0*/
        p_AttachDepthStencilBuffer = (void (__thiscall **)(NiRenderTargetGroup *, int))&v8->vtbl->AttachDepthStencilBuffer; /*0x7c6be5*/
        v10 = BSTextureManager__GetOrCreateShadowDepthStencil(*(int **)&OB_RendererGlobalState_010201A0[0xB7]); /*0x7c6be8*/
        (*p_AttachDepthStencilBuffer)(v8, v10); /*0x7c6bf2*/
        v3 = self; /*0x7c6bf4*/
      }
      else
      {
        DefaultRenderTarget = (BSRenderedTexture *)BSTextureManager__BorrowFrustumShadowTexture(v6); /*0x7c6bff*/
      }
      ShadowSceneLight_SetShadowMap(FullLightBySource, DefaultRenderTarget); /*0x7c6c04*/
    }
  }
  ShadowSceneNode_ReconcileSourceLightReceivers(v3, FullLightBySource);// Every find/create call concludes by reconciling the source light's receiver associations; this is full-light lifecycle, not direct caster admission. /*0x7c6c0c*/
  return FullLightBySource; /*0x7c6c13*/
}
