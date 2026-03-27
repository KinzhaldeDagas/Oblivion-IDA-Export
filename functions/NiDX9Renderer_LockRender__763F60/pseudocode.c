int __thiscall NiDX9Renderer::LockRender(NiDX9Renderer *this)
{
  CriticalSectionRender *p_RendererLockCriticalSection; // esi
  int result; // eax

  p_RendererLockCriticalSection = &this->member.super.RendererLockCriticalSection;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->member.super.RendererLockCriticalSection);
  p_RendererLockCriticalSection->curThread = GetCurrentThreadId();
  result = 1;
  ++p_RendererLockCriticalSection->entryCount;
  if ( this->member.super.RendererLockCriticalSection.entryCount == 1 )
    this->__vftable->super.LockRenderer((NiRenderer *)this);
  return result;
}
