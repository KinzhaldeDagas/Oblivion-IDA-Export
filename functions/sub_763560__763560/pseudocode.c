bool __thiscall sub_763560(struct _RTL_CRITICAL_SECTION *this, NiSourceTexture *a2)
{
  _RTL_CRITICAL_SECTION_0 *v3; // esi
  DWORD CurrentThreadId; // eax
  NiDX9SourceTextureData *rendererData; // edi

  v3 = (_RTL_CRITICAL_SECTION_0 *)(this + 0x10);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 0xC);
  CurrentThreadId = GetCurrentThreadId();
  ++HIDWORD(v3[3].SpinCount);
  LODWORD(v3[3].SpinCount) = CurrentThreadId;
  rendererData = (NiDX9SourceTextureData *)a2->members.super.rendererData;
  if ( !rendererData )
    rendererData = sub_761270(a2, (NiDX9Renderer *)this);
  if ( HIDWORD(v3[3].SpinCount)-- == 1 )
    LODWORD(v3[3].SpinCount) = 0;
  LeaveCriticalSection(v3);
  return rendererData != 0;
}
