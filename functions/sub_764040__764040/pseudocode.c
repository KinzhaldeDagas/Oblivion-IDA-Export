void __thiscall sub_764040(NiDX9Renderer *this)
{
  bool v2; // zf
  void (__stdcall *v3)(LPCRITICAL_SECTION); // edi

  v2 = this->member.super.PrecacheCriticalSection.entryCount-- == 1;
  if ( v2 )
    this->member.super.PrecacheCriticalSection.curThread = 0;
  v3 = LeaveCriticalSection;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->member.super.PrecacheCriticalSection);
  if ( this->member.super.RendererLockCriticalSection.entryCount == 1 )
    this->__vftable->super.UnlockRenderer((NiRenderer *)this);
  v2 = this->member.super.RendererLockCriticalSection.entryCount-- == 1;
  if ( v2 )
    this->member.super.RendererLockCriticalSection.curThread = 0;
  v3((LPCRITICAL_SECTION)&this->member.super.RendererLockCriticalSection);
}
