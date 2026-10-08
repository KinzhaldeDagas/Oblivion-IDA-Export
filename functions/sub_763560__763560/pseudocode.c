bool __thiscall OB_NiDX9Renderer_CreateSourceTexture_010201A0(struct _RTL_CRITICAL_SECTION *this, NiSourceTexture *a2)
{
  _RTL_CRITICAL_SECTION_0 *v3; // esi
  DWORD CurrentThreadId; // eax
  void *rendererData; // edi

  v3 = (_RTL_CRITICAL_SECTION_0 *)(this + 0x10); /*0x763565*/
  EnterCriticalSection((LPCRITICAL_SECTION)this + 0xC); /*0x76356c*/
  CurrentThreadId = GetCurrentThreadId(); /*0x763572*/
  ++HIDWORD(v3[3].SpinCount); /*0x763578*/
  LODWORD(v3[3].SpinCount) = CurrentThreadId; /*0x76357c*/
  rendererData = a2->members.super.rendererData; /*0x763583*/
  if ( !rendererData ) /*0x763588*/
    rendererData = OB_NiDX9SourceTextureData_CreateFromSourceTexture_010201A0(a2, (NiDX9Renderer *)this); /*0x763594*/
  if ( HIDWORD(v3[3].SpinCount)-- == 1 ) /*0x763596*/
    LODWORD(v3[3].SpinCount) = 0; /*0x76359c*/
  LeaveCriticalSection(v3); /*0x7635a4*/
  return rendererData != 0; /*0x7635ac*/
}
