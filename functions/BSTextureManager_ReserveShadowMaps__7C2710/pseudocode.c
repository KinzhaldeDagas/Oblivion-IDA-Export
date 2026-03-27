BSRenderedTexture *__thiscall BSTextureManager_ReserveShadowMaps(
        BSTextureManager *this,
        NiDX9Renderer *a2,
        BSRenderedTexture *a3)
{
  BSRenderedTexture *result; // eax
  int v5; // ebx
  NiRenderTargetGroup *v6; // eax
  BSRenderedTexture *v7; // esi
  BSRenderedTexture *DefaultRenderTarget; // eax
  BSRenderedTexture *v9; // edi
  NiRenderTargetGroup *v10; // ebx
  void (__thiscall **p_AttachDepthStencilBuffer)(NiRenderTargetGroup *, int); // esi
  int v12; // eax
  BSRenderedTexture *v13; // [esp+14h] [ebp-10h] BYREF
  int v14; // [esp+20h] [ebp-4h]

  result = (BSRenderedTexture *)this->unk30.numItems;
  if ( !result )
  {
    result = (BSRenderedTexture *)this->shadowMaps.numItems;
    if ( result <= a3 )
    {
      if ( result < a3 )
      {
        a3 = (BSRenderedTexture *)((char *)a3 - (int)result);
        do
        {
          DefaultRenderTarget = BSTextureManager_GetDefaultRenderTarget(this, a2, 0x17);
          v9 = DefaultRenderTarget;
          v13 = DefaultRenderTarget;
          if ( DefaultRenderTarget )
            InterlockedIncrement((volatile LONG *)&DefaultRenderTarget->members);
          v14 = 1;
          v10 = BSRenderedTexture::UseTextureToRender(v9);
          p_AttachDepthStencilBuffer = (void (__thiscall **)(NiRenderTargetGroup *, int))&v10->vtbl->AttachDepthStencilBuffer;
          v12 = sub_7C1360((int *)this);
          (*p_AttachDepthStencilBuffer)(v10, v12);
          result = (BSRenderedTexture *)sub_7C16B0(&this->shadowMaps.__vftable, (int *)&v13);
          v14 = 0xFFFFFFFF;
          if ( v9 )
          {
            result = (BSRenderedTexture *)InterlockedDecrement((volatile LONG *)&v9->members);
            if ( !result )
              result = (BSRenderedTexture *)(*(int (__thiscall **)(BSRenderedTexture *, int))v9->vtbl)(v9, 1);
          }
          a3 = (BSRenderedTexture *)((char *)a3 + 0xFFFFFFFF);
        }
        while ( a3 );
      }
    }
    else
    {
      v5 = (char *)result - (char *)a3;
      do
      {
        sub_7C1740((int **)&this->shadowMaps, &a3);
        v14 = 0;
        v6 = BSRenderedTexture::UseTextureToRender(a3);
        v6->vtbl->AttachDepthStencilBuffer(v6, 0);
        sub_7C1EE0(this, a3);
        result = a3;
        v14 = 0xFFFFFFFF;
        if ( a3 )
        {
          v7 = a3;
          result = (BSRenderedTexture *)InterlockedDecrement((volatile LONG *)&a3->members);
          if ( !result )
            result = (BSRenderedTexture *)(*(int (__thiscall **)(BSRenderedTexture *, int))v7->vtbl)(v7, 1);
        }
        --v5;
      }
      while ( v5 );
    }
  }
  return result;
}
