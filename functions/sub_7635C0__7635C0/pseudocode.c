bool __thiscall sub_7635C0(struct _RTL_CRITICAL_SECTION *this, NiTexture *a2)
{
  _RTL_CRITICAL_SECTION_0 *v3; // esi
  DWORD CurrentThreadId; // eax
  NiDX9TextureData *v6; // eax
  bool v7; // zf
  NiDX9TextureData *v8; // edi

  v3 = (_RTL_CRITICAL_SECTION_0 *)(this + 0x10);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 0xC);
  CurrentThreadId = GetCurrentThreadId();
  ++HIDWORD(v3[3].SpinCount);
  LODWORD(v3[3].SpinCount) = CurrentThreadId;
  if ( a2->members.rendererData )
    return 1;
  v6 = sub_774550(a2, (NiDX9Renderer *)this);
  v7 = HIDWORD(v3[3].SpinCount)-- == 1;
  v8 = v6;
  if ( v7 )
    LODWORD(v3[3].SpinCount) = 0;
  LeaveCriticalSection(v3);
  return v8 != 0;
}
