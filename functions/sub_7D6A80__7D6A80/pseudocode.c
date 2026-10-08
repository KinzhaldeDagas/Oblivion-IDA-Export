// Locked render-target-group begin wrapper. Locks the renderer, invokes BeginUsingRenderTargetGroup with clear flags, and marks the renderer target ready on success.
char __thiscall NiDX9Renderer_BeginRenderTargetGroupLocked(
        NiDX9Renderer *this,
        NiRenderTargetGroup *targetGroup,
        ClearFlags clearFlags)
{
  char result; // al

  if ( this->member.super.SceneState1 != 1 && this->member.super.SceneState2 != 1 || this->member.super.IsReady ) /*0x7d6a98*/
    return 0; /*0x7d6aa1*/
  if ( targetGroup ) /*0x7d6aae*/
  {
    NiDX9Renderer::LockRender(this); /*0x7d6ac5*/
    result = this->__vftable->super.BeginUsingRenderTargetGroup((NiRenderer *)this, targetGroup, clearFlags); /*0x7d6ada*/
    if ( result ) /*0x7d6ae0*/
    {
      this->member.super.IsReady = 1; /*0x7d6ae4*/
    }
    else
    {
      NiDX9Renderer::UnLockRender(this); /*0x7d6af1*/
      return 0; /*0x7d6af6*/
    }
  }
  else
  {
    Shared_NoOpVirtual_60D0A0(this); /*0x7d6ab5*/
    return 0; /*0x7d6abe*/
  }
  return result; /*0x7d6aa3*/
}
