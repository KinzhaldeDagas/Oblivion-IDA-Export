void __thiscall BSImageSpaceShader::RenderShader(
        BSImageSpaceShader *this,
        NiScreenElements *a2,
        BSRenderedTexture *a3,
        BSRenderedTexture *a4,
        UInt8 a5)
{
  NiRenderTargetGroup *v6; // eax
  NiRefObjectVtbl **Unk07C; // esi
  NiRefObjectVtbl **vtbl; // edi
  NiDX9Renderer *v9; // ecx

  if ( a5 == 1 )
  {
    StartUsingRenderTarget(0, kClear_NONE);
  }
  else
  {
    if ( a4->vtbl )
      v6 = BSRenderedTexture::UseTextureToRender((BSRenderedTexture *)a4->vtbl);
    else
      v6 = 0;
    StartUsingRenderTarget(v6, kClear_NONE);
  }
  Unk07C = (NiRefObjectVtbl **)this->member.Unk07C;
  vtbl = a3->vtbl;
  if ( Unk07C != a3->vtbl )
  {
    if ( Unk07C )
    {
      if ( !InterlockedDecrement((volatile LONG *)Unk07C + 1) )
        (*Unk07C)->Destructor(Unk07C, 1);
    }
    this->member.Unk07C = (BSRenderedTexture *)vtbl;
    if ( vtbl )
      InterlockedIncrement((volatile LONG *)vtbl + 1);
  }
  v9 = g_Renderer;
  if ( (g_Renderer->member.super.SceneState1 == 1 || v9->member.super.SceneState2 == 1) && v9->member.super.IsReady == 1 )
    v9->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v9, 0);
  sub_709C60(a2);
  sub_7D7110();
}
