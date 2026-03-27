DWORD __thiscall sub_763FE0(NiDX9Renderer *this)
{
  void (__stdcall *v1)(LPCRITICAL_SECTION); // ebx
  CriticalSectionRender *p_RendererLockCriticalSection; // esi
  DWORD (__stdcall *v4)(); // ebp
  DWORD result; // eax

  v1 = EnterCriticalSection;
  p_RendererLockCriticalSection = &this->member.super.RendererLockCriticalSection;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->member.super.RendererLockCriticalSection);
  v4 = GetCurrentThreadId;
  p_RendererLockCriticalSection->curThread = GetCurrentThreadId();
  ++p_RendererLockCriticalSection->entryCount;
  if ( this->member.super.RendererLockCriticalSection.entryCount == 1 )
    this->__vftable->super.LockRenderer((NiRenderer *)this);
  v1((LPCRITICAL_SECTION)&this->member.super.PrecacheCriticalSection);
  result = v4();
  ++this->member.super.PrecacheCriticalSection.entryCount;
  this->member.super.PrecacheCriticalSection.curThread = result;
  return result;
}
