ShadowSceneLight *__thiscall sub_7C6AE0(_DWORD *this, int a2, ShadowSceneLight *a3)
{
  _DWORD *v3; // ebp
  ShadowSceneLight *v4; // esi
  ShadowSceneLight *v5; // eax
  BSTextureManager *v6; // ecx
  BSRenderedTexture *DefaultRenderTarget; // ebx
  NiRenderTargetGroup *v8; // ebp
  void (__thiscall **p_AttachDepthStencilBuffer)(NiRenderTargetGroup *, int); // edi
  int v10; // eax

  v3 = this;
  v4 = (ShadowSceneLight *)sub_7C6230(this, a2);
  if ( v4 )
  {
    *((_BYTE *)v4 + 0x104) = (_BYTE)a3;
  }
  else
  {
    v5 = (ShadowSceneLight *)FormHeapAlloc(0x220u);
    if ( v5 )
      v4 = ShadowSceneLight::ShadowSceneLight(v5);
    else
      v4 = 0;
    *((_BYTE *)v4 + 0x104) = (_BYTE)a3;
    sub_7D3400(v4, a2);
    a3 = v4;
    InterlockedIncrement((volatile LONG *)v4 + 1);
    sub_7C16B0(v3 + 0x39, (int *)&a3);
    if ( !InterlockedDecrement((volatile LONG *)v4 + 1) )
      (**(void (__thiscall ***)(ShadowSceneLight *, int))v4)(v4, 1);
    if ( *((_BYTE *)v4 + 0xF4) )
    {
      v6 = g_textureManager;
      if ( *((_BYTE *)v4 + 0xF5) )
      {
        DefaultRenderTarget = BSTextureManager_GetDefaultRenderTarget(v6, dword_B43104, 0x16);
        v8 = BSRenderedTexture::UseTextureToRender(DefaultRenderTarget);
        p_AttachDepthStencilBuffer = (void (__thiscall **)(NiRenderTargetGroup *, int))&v8->vtbl->AttachDepthStencilBuffer;
        v10 = sub_7C1360((int *)g_textureManager);
        (*p_AttachDepthStencilBuffer)(v8, v10);
        v3 = this;
      }
      else
      {
        DefaultRenderTarget = (BSRenderedTexture *)BSTextureManager_FetchShadowMap(v6);
      }
      sub_499310(v4, (int)DefaultRenderTarget);
    }
  }
  sub_7C5F60(v3, (int)v4);
  return v4;
}
