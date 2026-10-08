bool __thiscall sub_77AE10(_DWORD **this, NiObject *a2, int a3, int a4)
{
  _RTL_CRITICAL_SECTION_0 *p_SourceDataCriticalSection; // esi
  DWORD CurrentThreadId; // eax
  UInt32 m_uiRefCount; // edi
  NiSourceTexture *v9; // eax
  bool v10; // zf
  int v11; // eax

  if ( !a2 ) /*0x77ae1a*/
    return 0; /*0x77ae20*/
  p_SourceDataCriticalSection = (_RTL_CRITICAL_SECTION_0 *)&renderer->member.super.SourceDataCriticalSection; /*0x77ae2a*/
  EnterCriticalSection(p_SourceDataCriticalSection); /*0x77ae31*/
  CurrentThreadId = GetCurrentThreadId(); /*0x77ae37*/
  ++HIDWORD(p_SourceDataCriticalSection[3].SpinCount); /*0x77ae3d*/
  LODWORD(p_SourceDataCriticalSection[3].SpinCount) = CurrentThreadId; /*0x77ae41*/
  m_uiRefCount = a2[4].members.m_uiRefCount; /*0x77ae44*/
  if ( m_uiRefCount ) /*0x77ae49*/
    goto LABEL_6; /*0x77ae49*/
  v9 = (NiSourceTexture *)NiRTTI_Cast((BSStringT *)stru_B3F95C, a2); /*0x77ae51*/
  if ( v9 ) /*0x77ae5b*/
  {
    m_uiRefCount = (UInt32)OB_NiDX9SourceTextureData_CreateFromSourceTexture_010201A0(v9, (NiDX9Renderer *)*(this + 3)); /*0x77ae6a*/
LABEL_6:
    v10 = HIDWORD(p_SourceDataCriticalSection[3].SpinCount)-- == 1; /*0x77ae6c*/
    if ( v10 ) /*0x77ae70*/
      LODWORD(p_SourceDataCriticalSection[3].SpinCount) = 0; /*0x77ae72*/
    LeaveCriticalSection(p_SourceDataCriticalSection); /*0x77ae7a*/
    v11 = (*(int (__thiscall **)(UInt32))(*(_DWORD *)m_uiRefCount + 0x18))(m_uiRefCount); /*0x77ae87*/
    return !v11 && (v11 = (*(int (__thiscall **)(UInt32))(*(_DWORD *)m_uiRefCount + 0x20))(m_uiRefCount)) == 0 /*0x77aeac*/
        || (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x14))(v11) != 0;
  }
  v10 = HIDWORD(p_SourceDataCriticalSection[3].SpinCount)-- == 1; /*0x77aeaf*/
  if ( v10 ) /*0x77aeb3*/
    LODWORD(p_SourceDataCriticalSection[3].SpinCount) = 0; /*0x77aeb5*/
  LeaveCriticalSection(p_SourceDataCriticalSection); /*0x77aebd*/
  return 0; /*0x77ae1c*/
}
