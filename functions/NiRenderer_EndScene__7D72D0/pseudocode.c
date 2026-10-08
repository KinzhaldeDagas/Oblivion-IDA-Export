// Oblivion EndScene wrapper: drain the complete render-target stack, end the active group, and end the D3D scene only when this wrapper owned SceneState2.
char NiRenderer_EndScene()
{
  NiDX9Renderer *v0; // esi
  char result; // al

  v0 = renderer; /*0x7d72d1*/
  result = NiRenderer_DrainRenderTargetGroupStack();// Drain all strong-owned target-stack entries and end the currently ready group before optional D3D EndScene ownership handling. /*0x7d72d7*/
  if ( v0->member.super.SceneState2 == 1 && !v0->member.super.SceneState1 ) /*0x7d72e5*/
  {
    result = v0->__vftable->super.EndScene((NiRenderer *)v0); /*0x7d72f8*/
    if ( result ) /*0x7d72fc*/
      v0->member.super.SceneState2 = 0; /*0x7d72fe*/
  }
  return result; /*0x7d7308*/
}
