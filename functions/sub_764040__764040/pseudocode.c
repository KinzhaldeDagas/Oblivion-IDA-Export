void __thiscall sub_764040(NiDX9Renderer *this)
{
  bool v2; // zf
  void (__stdcall *v3)(LPCRITICAL_SECTION); // edi

  v2 = this->member.super.PrecacheCriticalSection.entryCount-- == 1; /*0x764043*/
  if ( v2 ) /*0x764051*/
    this->member.super.PrecacheCriticalSection.curThread = 0; /*0x764053*/
  v3 = LeaveCriticalSection; /*0x76405a*/
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->member.super.PrecacheCriticalSection); /*0x764061*/
  if ( this->member.super.RendererLockCriticalSection.entryCount == 1 ) /*0x76406a*/
    this->__vftable->super.UnlockRenderer((NiRenderer *)this); /*0x764076*/
  v2 = this->member.super.RendererLockCriticalSection.entryCount-- == 1; /*0x764078*/
  if ( v2 ) /*0x764085*/
    this->member.super.RendererLockCriticalSection.curThread = 0; /*0x764087*/
  v3((LPCRITICAL_SECTION)&this->member.super.RendererLockCriticalSection); /*0x76408f*/
}
