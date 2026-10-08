// Locked render-target-group end wrapper. Ends the current group, releases the renderer lock, and clears the target-ready state.
char __thiscall NiDX9Renderer_EndRenderTargetGroupLocked(NiDX9Renderer *this)
{
  if ( this->member.super.SceneState1 != 1 && this->member.super.SceneState2 != 1 /*0x7d6b2a*/
    || this->member.super.IsReady != 1
    || !this->__vftable->super.EndUsingRenderTargetGroup((NiRenderer *)this) )
  {
    return 0; /*0x7d6b1e*/
  }
  if ( this->member.super.RendererLockCriticalSection.entryCount == 1 ) /*0x7d6b37*/
    this->__vftable->super.UnlockRenderer((NiRenderer *)this); /*0x7d6b43*/
  if ( this->member.super.RendererLockCriticalSection.entryCount-- == 1 ) /*0x7d6b45*/
    this->member.super.RendererLockCriticalSection.curThread = 0; /*0x7d6b54*/
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->member.super.RendererLockCriticalSection); /*0x7d6b5c*/
  this->member.super.IsReady = 0; /*0x7d6b62*/
  return 1; /*0x7d6b20*/
}
