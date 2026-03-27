int __thiscall sub_77AC90(_DWORD **this, int a2, _BYTE *a3, bool *a4, bool *a5)
{
  _RTL_CRITICAL_SECTION_0 *p_SourceDataCriticalSection; // edi
  DWORD CurrentThreadId; // eax
  NiDX9SourceTextureData *v9; // esi
  NiSourceTexture *v10; // eax
  bool v11; // zf
  int v12; // eax
  int v13; // eax
  bool v14; // al
  int v15; // eax
  int v16; // edi

  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  if ( !a2 )
    return 0;
  p_SourceDataCriticalSection = (_RTL_CRITICAL_SECTION_0 *)&g_Renderer->member.super.SourceDataCriticalSection;
  EnterCriticalSection(p_SourceDataCriticalSection);
  CurrentThreadId = GetCurrentThreadId();
  ++HIDWORD(p_SourceDataCriticalSection[3].SpinCount);
  LODWORD(p_SourceDataCriticalSection[3].SpinCount) = CurrentThreadId;
  v9 = *(NiDX9SourceTextureData **)(a2 + 0x24);
  if ( v9 )
    goto LABEL_6;
  v10 = (NiSourceTexture *)NiRTTI_Cast((BSStringT *)dword_B3F95C, (NiObject *)a2);
  if ( v10 )
  {
    v9 = sub_761270(v10, (NiDX9Renderer *)*(this + 3));
    *a3 = 1;
LABEL_6:
    v11 = HIDWORD(p_SourceDataCriticalSection[3].SpinCount)-- == 1;
    if ( v11 )
      LODWORD(p_SourceDataCriticalSection[3].SpinCount) = 0;
    LeaveCriticalSection(p_SourceDataCriticalSection);
    v12 = (*((int (__thiscall **)(NiDX9SourceTextureData *))v9->vtbl + 1))(v9);
    v14 = 1;
    if ( v12 )
    {
      if ( ((v12 - 1) & v12) == 0 )
      {
        v13 = (*((int (__thiscall **)(NiDX9SourceTextureData *))v9->vtbl + 2))(v9);
        if ( v13 )
        {
          if ( ((v13 - 1) & v13) == 0 )
            v14 = 0;
        }
      }
    }
    *a5 = v14;
    v15 = (*((int (__thiscall **)(NiDX9SourceTextureData *))v9->vtbl + 6))(v9);
    if ( v15 )
      return (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x14))(v15);
    v15 = (*((int (__thiscall **)(NiDX9SourceTextureData *))v9->vtbl + 8))(v9);
    if ( v15 )
      return (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x14))(v15);
    v16 = (*((int (__thiscall **)(NiDX9SourceTextureData *))v9->vtbl + 7))(v9);
    if ( v16 )
    {
      if ( (*((int (__thiscall **)(NiDX9SourceTextureData *))v9->vtbl + 5))(v9) )
      {
        if ( !*(_BYTE *)(a2 + 0x40) )
          (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 0x28))(v16);
      }
      else
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 0x28))(v16);
        *a3 = 1;
      }
    }
    *a4 = (unsigned int)(*((int (__thiscall **)(NiDX9SourceTextureData *))v9->vtbl + 4))(v9) > 1;
    return (*((int (__thiscall **)(NiDX9SourceTextureData *))v9->vtbl + 5))(v9);
  }
  v11 = HIDWORD(p_SourceDataCriticalSection[3].SpinCount)-- == 1;
  if ( v11 )
    LODWORD(p_SourceDataCriticalSection[3].SpinCount) = 0;
  LeaveCriticalSection(p_SourceDataCriticalSection);
  return 0;
}
