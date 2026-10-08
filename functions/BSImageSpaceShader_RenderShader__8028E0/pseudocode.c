// MoonSugarEffect decode: BSImageSpaceShader::RenderShader stores source BSRenderedTexture at +0x7C and renders a NiScreenElements full-screen quad.
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

  if ( a5 == 1 ) /*0x8028ed*/
  {
    NiRenderer_PushAndBeginRenderTargetGroup(0, kClear_NONE); /*0x8028f3*/
  }
  else
  {
    if ( a4->vtbl ) /*0x8028f9*/
      v6 = BSRenderedTexture::UseTextureToRender((BSRenderedTexture *)a4->vtbl); /*0x8028ff*/
    else
      v6 = 0; /*0x802906*/
    NiRenderer_PushAndBeginRenderTargetGroup(v6, kClear_NONE); /*0x80290b*/
  }
  Unk07C = (NiRefObjectVtbl **)this->member.Unk07C; /*0x802918*/
  vtbl = a3->vtbl; /*0x80291c*/
  if ( Unk07C != a3->vtbl ) /*0x802920*/
  {
    if ( Unk07C ) /*0x802924*/
    {
      if ( !InterlockedDecrement((volatile LONG *)Unk07C + 1) ) /*0x80292a*/
        (*Unk07C)->Destructor(Unk07C, 1); /*0x80293f*/
    }
    this->member.Unk07C = (BSRenderedTexture *)vtbl; /*0x802943*/
    if ( vtbl ) /*0x802946*/
      InterlockedIncrement((volatile LONG *)vtbl + 1); /*0x80294c*/
  }
  v9 = renderer; /*0x802952*/
  if ( (renderer->member.super.SceneState1 == 1 || v9->member.super.SceneState2 == 1) && v9->member.super.IsReady == 1 ) /*0x802970*/
    v9->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v9, 0); /*0x80297c*/
  sub_709C60(a2); /*0x802989*/
  NiRenderer_PopRenderTargetGroupAndRestore(); /*0x80298e*/
}
