char __thiscall sub_7D6B00(NiDX9Renderer *this)
{
  if ( this->member.super.SceneState1 != 1 && this->member.super.SceneState2 != 1
    || this->member.super.IsReady != 1
    || !this->__vftable->super.EndUsingRenderTargetGroup((NiRenderer *)this) )
  {
    return 0;
  }
  if ( this->member.super.RendererLockCriticalSection.entryCount == 1 )
    this->__vftable->super.UnlockRenderer((NiRenderer *)this);
  if ( this->member.super.RendererLockCriticalSection.entryCount-- == 1 )
    this->member.super.RendererLockCriticalSection.curThread = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->member.super.RendererLockCriticalSection);
  this->member.super.IsReady = 0;
  return 1;
}
