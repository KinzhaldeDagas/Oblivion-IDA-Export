BSRenderedTexture *sub_49CB40()
{
  NiDX9Renderer *v0; // eax
  BSTextureManager *v1; // ecx
  BSRenderedTexture *DefaultRenderTarget; // esi
  NiDX9Renderer *v3; // ecx
  NiRenderTargetGroup *v4; // eax
  float v6[4]; // [esp+8h] [ebp-20h] BYREF
  float v7[4]; // [esp+18h] [ebp-10h] BYREF

  nullsub_returnTrue_0arg();
  v0 = dword_B43104;
  v6[0] = 0.0;
  v1 = g_textureManager;
  v6[1] = 0.0;
  v6[2] = 0.0;
  v6[3] = 0.0;
  DefaultRenderTarget = BSTextureManager_GetDefaultRenderTarget(v1, v0, 7);
  ((void (__thiscall *)(NiDX9Renderer *, float *))dword_B43104->__vftable->super.GetClearColor)(dword_B43104, v6);
  v3 = dword_B43104;
  v7[0] = flt_A3D65C;
  v7[1] = v7[0];
  v7[2] = v7[0];
  v7[3] = 1.0;
  ((void (__thiscall *)(NiDX9Renderer *, float *))v3->__vftable->super.SetClearColor4)(v3, v7);
  v4 = BSRenderedTexture::UseTextureToRender(DefaultRenderTarget);
  NiRenderer_BeginScene(kClear_ALL, v4);
  NiRenderer_EndScene();
  ((void (__thiscall *)(NiDX9Renderer *, float *))dword_B43104->__vftable->super.SetClearColor4)(dword_B43104, v6);
  nullsub_returnTrue_0arg();
  return DefaultRenderTarget;
}
