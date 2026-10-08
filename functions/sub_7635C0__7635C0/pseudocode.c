bool __thiscall sub_7635C0(struct _RTL_CRITICAL_SECTION *this, NiTexture *a2)
{
  _RTL_CRITICAL_SECTION_0 *v3; // esi
  DWORD CurrentThreadId; // eax
  NiDX9TextureData *v6; // eax
  bool v7; // zf
  NiDX9TextureData *v8; // edi

  v3 = (_RTL_CRITICAL_SECTION_0 *)(this + 0x10); /*0x7635c4*/
  EnterCriticalSection((LPCRITICAL_SECTION)this + 0xC); /*0x7635cb*/
  CurrentThreadId = GetCurrentThreadId(); /*0x7635d1*/
  ++HIDWORD(v3[3].SpinCount); /*0x7635d7*/
  LODWORD(v3[3].SpinCount) = CurrentThreadId; /*0x7635db*/
  if ( a2->members.rendererData ) /*0x7635e2*/
    return 1; /*0x7635e9*/
  v6 = sub_774550(a2, (NiDX9Renderer *)this); /*0x7635f1*/
  v7 = HIDWORD(v3[3].SpinCount)-- == 1; /*0x7635f9*/
  v8 = v6; /*0x7635fd*/
  if ( v7 ) /*0x7635ff*/
    LODWORD(v3[3].SpinCount) = 0; /*0x763601*/
  LeaveCriticalSection(v3); /*0x763609*/
  return v8 != 0; /*0x7635e8*/
}
