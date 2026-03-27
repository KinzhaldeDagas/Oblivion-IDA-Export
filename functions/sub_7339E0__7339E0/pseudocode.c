int __thiscall sub_7339E0(int this, int a2, int a3)
{
  _RTL_CRITICAL_SECTION_0 *v4; // esi
  DWORD CurrentThreadId; // eax
  bool v6; // zf
  int v8; // edi
  int v9; // eax

  v4 = (_RTL_CRITICAL_SECTION_0 *)(this + 0x80);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x80));
  CurrentThreadId = GetCurrentThreadId();
  ++HIDWORD(v4[3].SpinCount);
  LODWORD(v4[3].SpinCount) = CurrentThreadId;
  sub_712930((_DWORD *)(this + 0x100));
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 0x100) + 4))(this + 0x100, a2);
  if ( *(_DWORD *)(this + 0x310) != 1 )
  {
    v6 = HIDWORD(v4[3].SpinCount)-- == 1;
    if ( v6 )
      LODWORD(v4[3].SpinCount) = 0;
LABEL_4:
    LeaveCriticalSection(v4);
    return 0;
  }
  v8 = **(_DWORD **)(this + 0x308);
  if ( !v8 || (v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8)) == 0 )
  {
LABEL_9:
    v6 = HIDWORD(v4[3].SpinCount)-- == 1;
    if ( v6 )
      LODWORD(v4[3].SpinCount) = 0;
    goto LABEL_4;
  }
  while ( (char *)v9 != dword_B3FAD4 )
  {
    v9 = *(_DWORD *)(v9 + 4);
    if ( !v9 )
      goto LABEL_9;
  }
  v6 = HIDWORD(v4[3].SpinCount)-- == 1;
  if ( v6 )
    LODWORD(v4[3].SpinCount) = 0;
  LeaveCriticalSection(v4);
  return v8;
}
