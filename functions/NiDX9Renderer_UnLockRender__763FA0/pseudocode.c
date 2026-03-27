void __thiscall NiDX9Renderer::UnLockRender(NiDX9Renderer *this)
{
  if ( this->member.super.RendererLockCriticalSection.entryCount == 1 )
    this->__vftable->super.UnlockRenderer((NiRenderer *)this);
  if ( this->member.super.RendererLockCriticalSection.entryCount-- == 1 )
    this->member.super.RendererLockCriticalSection.curThread = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->member.super.RendererLockCriticalSection);
}
