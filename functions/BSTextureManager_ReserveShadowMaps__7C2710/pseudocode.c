// Oblivion frustum-shadow pool reservation. Creates default render target type 0x17, attaches the shared shadow depth-stencil, and adds each texture to the unused shadowMaps list.
void __thiscall BSTextureManager__ReserveFrustumShadowTextures(
        BSTextureManager *this,
        NiDX9Renderer *renderer,
        unsigned int desiredCount)
{
  UInt32 numItems; // eax
  UInt32 v5; // ebx
  NiRenderTargetGroup *v6; // eax
  void (__thiscall ***v7)(_DWORD, int); // esi
  BSRenderedTexture *DefaultRenderTarget; // eax
  BSRenderedTexture *v9; // edi
  NiRenderTargetGroup *v10; // ebx
  void (__thiscall **p_AttachDepthStencilBuffer)(NiRenderTargetGroup *, void *); // esi
  void *ShadowDepthStencil; // eax
  BSRenderedTexture *v13; // [esp+14h] [ebp-10h] BYREF
  int v14; // [esp+20h] [ebp-4h]

  if ( !this->unk30.numItems ) /*0x7c2737*/
  {
    numItems = this->shadowMaps.numItems; /*0x7c2742*/
    if ( numItems <= desiredCount ) /*0x7c274b*/
    {
      if ( numItems < desiredCount ) /*0x7c27c0*/
      {
        desiredCount -= numItems; /*0x7c27c8*/
        do /*0x7c2848*/
        {
          DefaultRenderTarget = BSTextureManager_GetDefaultRenderTarget(this, renderer, 0x17);// Reserve a pooled default render target of type 0x17 for a frustum shadow map. /*0x7c27d5*/
          v9 = DefaultRenderTarget; /*0x7c27da*/
          v13 = DefaultRenderTarget; /*0x7c27de*/
          if ( DefaultRenderTarget ) /*0x7c27e2*/
            InterlockedIncrement((volatile LONG *)&DefaultRenderTarget->members); /*0x7c27e8*/
          v14 = 1; /*0x7c27f0*/
          v10 = BSRenderedTexture::UseTextureToRender(v9); /*0x7c27fd*/
          p_AttachDepthStencilBuffer = (void (__thiscall **)(NiRenderTargetGroup *, void *))&v10->vtbl->AttachDepthStencilBuffer; /*0x7c2803*/
          ShadowDepthStencil = BSTextureManager__GetOrCreateShadowDepthStencil(this);// Obtain the shared shadow depth-stencil sized for ShadowSurfaceRes. /*0x7c2806*/
          (*p_AttachDepthStencilBuffer)(v10, ShadowDepthStencil);// Attach the shared shadow depth-stencil to the newly reserved frustum shadow texture. /*0x7c2810*/
          NiTRefPointerList__AddTail(&this->shadowMaps.__vftable, (int *)&v13); /*0x7c281a*/
          v14 = 0xFFFFFFFF; /*0x7c2821*/
          if ( v9 ) /*0x7c2829*/
          {
            if ( !InterlockedDecrement((volatile LONG *)&v9->members) ) /*0x7c282f*/
              (*(void (__thiscall **)(BSRenderedTexture *, int))v9->vtbl)(v9, 1); /*0x7c2841*/
          }
          --desiredCount; /*0x7c2843*/
        }
        while ( desiredCount ); /*0x7c2848*/
      }
    }
    else
    {
      v5 = numItems - desiredCount; /*0x7c2752*/
      do /*0x7c27b9*/
      {
        NiTRefPointerList__RemoveHead((int ***)&this->shadowMaps, (int **)&desiredCount); /*0x7c275b*/
        v14 = 0; /*0x7c2764*/
        v6 = BSRenderedTexture::UseTextureToRender((BSRenderedTexture *)desiredCount); /*0x7c276c*/
        v6->vtbl->AttachDepthStencilBuffer(v6, 0); /*0x7c277a*/
        BSTextureManager__ReturnRenderedTexture(this, (BSRenderedTexture *)desiredCount); /*0x7c2783*/
        v14 = 0xFFFFFFFF; /*0x7c278e*/
        if ( desiredCount ) /*0x7c2796*/
        {
          v7 = (void (__thiscall ***)(_DWORD, int))desiredCount; /*0x7c2798*/
          if ( !InterlockedDecrement((volatile LONG *)(desiredCount + 4)) ) /*0x7c279e*/
            (**v7)(v7, 1); /*0x7c27b4*/
        }
        --v5; /*0x7c27b6*/
      }
      while ( v5 ); /*0x7c27b9*/
    }
  }
}
