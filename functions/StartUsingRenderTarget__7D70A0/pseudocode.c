// Renderer target-stack transition. Ends the current target if necessary, begins the supplied group with clear flags, and pushes it on the render-target ownership stack.
int __cdecl StartUsingRenderTarget(NiRenderTargetGroup *a1, ClearFlags clearFlags)
{
  NiDX9Renderer *v2; // esi
  NiRenderTargetGroup *v3; // edi
  NiRenderTargetGroup *v4; // eax
  int result; // eax

  v2 = renderer; /*0x7d70a1*/
  v3 = a1; /*0x7d70a8*/
  if ( !a1 ) /*0x7d70ae*/
    v3 = v2->__vftable->super.GetDefaultRTGroup((NiRenderer *)v2); /*0x7d70b9*/
  if ( v2->member.super.IsReady )               // If another target group is ready, end it before beginning the new stack entry. /*0x7d70bb*/
    NiDX9Renderer_EndRenderTargetGroupLocked(v2); /*0x7d70c6*/
  v4 = v3; /*0x7d70cd*/
  if ( !v3 ) /*0x7d70cf*/
    v4 = renderer->__vftable->super.GetDefaultRTGroup((NiRenderer *)renderer); /*0x7d70dc*/
  NiDX9Renderer_BeginRenderTargetGroupLocked(renderer, v4, clearFlags);// Begin the selected render-target group with the caller's clear flags. /*0x7d70ea*/
  result = NiRendererRenderTargetStackDepth; /*0x7d70ef*/
  if ( (unsigned int)NiRendererRenderTargetStackDepth < 0xA )// The global render-target ownership stack accepts at most ten entries. /*0x7d70f7*/
  {
    result = (int)NiSmartPointer_Set__((Ni2DBuffer **)(4 * result + 0xB45D78), (Ni2DBuffer *)v3);// Strong-own the selected group in the next stack slot. /*0x7d7101*/
    ++NiRendererRenderTargetStackDepth; /*0x7d7106*/
  }
  return result; /*0x7d710d*/
}
