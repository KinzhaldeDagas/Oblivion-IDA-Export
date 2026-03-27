bool __thiscall sub_77AE10(_DWORD **this, NiObject *a2, int a3, int a4)
{
  _RTL_CRITICAL_SECTION_0 *p_SourceDataCriticalSection; // esi
  DWORD CurrentThreadId; // eax
  NiDX9SourceTextureData *m_uiRefCount; // edi
  NiSourceTexture *v9; // eax
  bool v10; // zf
  int v11; // eax

  if ( !a2 )
    return 0;
  p_SourceDataCriticalSection = (_RTL_CRITICAL_SECTION_0 *)&g_Renderer->member.super.SourceDataCriticalSection;
  EnterCriticalSection(p_SourceDataCriticalSection);
  CurrentThreadId = GetCurrentThreadId();
  ++HIDWORD(p_SourceDataCriticalSection[3].SpinCount);
  LODWORD(p_SourceDataCriticalSection[3].SpinCount) = CurrentThreadId;
  m_uiRefCount = (NiDX9SourceTextureData *)a2[4].members.m_uiRefCount;
  if ( m_uiRefCount )
    goto LABEL_6;
  v9 = (NiSourceTexture *)NiRTTI_Cast((BSStringT *)dword_B3F95C, a2);
  if ( v9 )
  {
    m_uiRefCount = sub_761270(v9, (NiDX9Renderer *)*(this + 3));
LABEL_6:
    v10 = HIDWORD(p_SourceDataCriticalSection[3].SpinCount)-- == 1;
    if ( v10 )
      LODWORD(p_SourceDataCriticalSection[3].SpinCount) = 0;
    LeaveCriticalSection(p_SourceDataCriticalSection);
    v11 = (*((int (__thiscall **)(NiDX9SourceTextureData *))m_uiRefCount->vtbl + 6))(m_uiRefCount);
    return !v11 && (v11 = (*((int (__thiscall **)(NiDX9SourceTextureData *))m_uiRefCount->vtbl + 8))(m_uiRefCount)) == 0
        || (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x14))(v11) != 0;
  }
  v10 = HIDWORD(p_SourceDataCriticalSection[3].SpinCount)-- == 1;
  if ( v10 )
    LODWORD(p_SourceDataCriticalSection[3].SpinCount) = 0;
  LeaveCriticalSection(p_SourceDataCriticalSection);
  return 0;
}
