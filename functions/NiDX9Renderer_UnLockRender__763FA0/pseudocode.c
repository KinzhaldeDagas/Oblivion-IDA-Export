//
// DX11 retirement audit 2026-10-01: restricted bucket pass references can retire before the bucket callback returns, while its actual renderer owner remains live. At Present, independently verify/borrow the OS critical section; callback location alone does not prove this lock. Last-reference pass cleanup is a distinct7604D0 native pool operation, not a generic +4 NiRef decrement.
void __thiscall NiDX9Renderer::UnLockRender(NiDX9Renderer *this)
{
  if ( this->member.super.RendererLockCriticalSection.entryCount == 1 ) /*0x763faa*/
    this->__vftable->super.UnlockRenderer((NiRenderer *)this); /*0x763fb4*/
  if ( this->member.super.RendererLockCriticalSection.entryCount-- == 1 ) /*0x763fb6*/
    this->member.super.RendererLockCriticalSection.curThread = 0; /*0x763fc6*/
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->member.super.RendererLockCriticalSection); /*0x763fce*/
}
