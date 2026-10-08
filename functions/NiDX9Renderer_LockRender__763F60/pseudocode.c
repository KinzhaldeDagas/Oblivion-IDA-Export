//
// Verified rendering-lock scope for restricted DX11 bucket audit: Win32 CRITICAL_SECTION is renderer+80; curThread at renderer+F8, entryCount at+FC. EnterCriticalSection precedes GetCurrentThreadId/store and native entry-count increment. First entry dispatches renderer vtable+128; authoritative NiDX9Renderer table A88EA4 resolves this to60D0A0 (no-op), as does unlock slot+12C. Existing render-lock ownership is not by itself proof of scene graph lifetime or all native pool/writer exclusion; those must be established separately before enabling bucket replacement.
int __thiscall NiDX9Renderer::LockRender(NiDX9Renderer *this)
{
  CriticalSectionRender *p_RendererLockCriticalSection; // esi
  int result; // eax

  p_RendererLockCriticalSection = &this->member.super.RendererLockCriticalSection; /*0x763f64*/
  EnterCriticalSection((LPCRITICAL_SECTION)&this->member.super.RendererLockCriticalSection); /*0x763f6b*/
  p_RendererLockCriticalSection->curThread = GetCurrentThreadId(); /*0x763f77*/
  result = 1; /*0x763f7a*/
  ++p_RendererLockCriticalSection->entryCount; /*0x763f7f*/
  if ( this->member.super.RendererLockCriticalSection.entryCount == 1 ) /*0x763f88*/
    this->__vftable->super.LockRenderer((NiRenderer *)this); /*0x763f96*/
  return result; /*0x763f95*/
}
