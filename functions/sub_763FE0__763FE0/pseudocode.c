DWORD __thiscall sub_763FE0(NiDX9Renderer *this)
{
  void (__stdcall *v1)(LPCRITICAL_SECTION); // ebx
  CriticalSectionRender *p_RendererLockCriticalSection; // esi
  DWORD (__stdcall *v4)(); // ebp
  DWORD result; // eax

  v1 = EnterCriticalSection; /*0x763fe1*/
  p_RendererLockCriticalSection = &this->member.super.RendererLockCriticalSection; /*0x763fec*/
  EnterCriticalSection((LPCRITICAL_SECTION)&this->member.super.RendererLockCriticalSection); /*0x763ff3*/
  v4 = GetCurrentThreadId; /*0x763ff5*/
  p_RendererLockCriticalSection->curThread = GetCurrentThreadId(); /*0x763ffd*/
  ++p_RendererLockCriticalSection->entryCount; /*0x764005*/
  if ( this->member.super.RendererLockCriticalSection.entryCount == 1 ) /*0x76400e*/
    this->__vftable->super.LockRenderer((NiRenderer *)this); /*0x76401a*/
  v1((LPCRITICAL_SECTION)&this->member.super.PrecacheCriticalSection); /*0x764023*/
  result = v4(); /*0x764025*/
  ++this->member.super.PrecacheCriticalSection.entryCount; /*0x764027*/
  this->member.super.PrecacheCriticalSection.curThread = result; /*0x76402c*/
  return result; /*0x76402b*/
}
