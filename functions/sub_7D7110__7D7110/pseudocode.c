// Pop the current render-target group, then resume the preceding stack entry (or the default group) with kClear_NONE.
void __cdecl NiRenderer_PopRenderTargetGroupAndRestore()
{
  NiRenderTargetGroup *v0; // eax

  if ( NiRendererRenderTargetStackDepth ) /*0x7d7110*/
  {
    NiDX9Renderer_EndRenderTargetGroupLocked(renderer);// End the currently ready target group before changing stack ownership. /*0x7d711f*/
    NiRenderer_ReleaseTopRenderTargetGroup();   // Release and remove the current top stack entry. /*0x7d7124*/
    v0 = NiRenderer_PeekRenderTargetGroup();    // Read the newly exposed previous group after the pop. /*0x7d7129*/
    if ( !v0 ) /*0x7d7130*/
      v0 = renderer->__vftable->super.GetDefaultRTGroup((NiRenderer *)renderer); /*0x7d713d*/
    NiDX9Renderer_BeginRenderTargetGroupLocked(renderer, v0, kClear_NONE);// Resume the previous or default group without clearing it. /*0x7d7148*/
  }
}
