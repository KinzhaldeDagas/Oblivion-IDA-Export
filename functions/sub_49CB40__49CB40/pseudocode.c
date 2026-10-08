BSRenderedTexture *sub_49CB40()
{
  NiDX9Renderer *v0; // eax
  BSTextureManager *v1; // ecx
  BSRenderedTexture *DefaultRenderTarget; // esi
  NiDX9Renderer *v3; // ecx
  NiRenderTargetGroup *v4; // eax
  float v6[4]; // [esp+8h] [ebp-20h] BYREF
  float v7[4]; // [esp+18h] [ebp-10h] BYREF

  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x49cb46*/
  v0 = unk_B43104; /*0x49cb4d*/
  v6[0] = 0.0; /*0x49cb52*/
  v1 = *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4]; /*0x49cb56*/
  v6[1] = 0.0; /*0x49cb5c*/
  v6[2] = 0.0; /*0x49cb63*/
  v6[3] = 0.0; /*0x49cb69*/
  DefaultRenderTarget = BSTextureManager_GetDefaultRenderTarget(v1, v0, 7); /*0x49cb7e*/
  ((void (__thiscall *)(NiDX9Renderer *, float *))unk_B43104->__vftable->super.GetClearColor)(unk_B43104, v6); /*0x49cb85*/
  v3 = unk_B43104; /*0x49cb8d*/
  v7[0] = kHeadBodyNormalMatchRadius; /*0x49cb93*/
  v7[1] = v7[0]; /*0x49cb97*/
  v7[2] = v7[0]; /*0x49cb9f*/
  v7[3] = 1.0; /*0x49cba6*/
  ((void (__thiscall *)(NiDX9Renderer *, float *))v3->__vftable->super.SetClearColor4)(v3, v7); /*0x49cbaf*/
  v4 = BSRenderedTexture::UseTextureToRender(DefaultRenderTarget); /*0x49cbb3*/
  NiRenderer_BeginScene(kClear_ALL, v4); /*0x49cbbb*/
  NiRenderer_EndScene(); /*0x49cbc3*/
  ((void (__thiscall *)(NiDX9Renderer *, float *))unk_B43104->__vftable->super.SetClearColor4)(unk_B43104, v6); /*0x49cbd8*/
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x49cbdc*/
  return DefaultRenderTarget; /*0x49cbe6*/
}
