int __thiscall sub_7339E0(int this, int a2, int a3)
{
  _RTL_CRITICAL_SECTION_0 *v4; // esi
  DWORD CurrentThreadId; // eax
  bool v6; // zf
  int v8; // edi
  NiRTTI *v9; // eax

  v4 = (_RTL_CRITICAL_SECTION_0 *)(this + 0x80); /*0x7339e5*/
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x80)); /*0x7339ec*/
  CurrentThreadId = GetCurrentThreadId(); /*0x7339f2*/
  ++HIDWORD(v4[3].SpinCount); /*0x7339f8*/
  LODWORD(v4[3].SpinCount) = CurrentThreadId; /*0x733a04*/
  sub_712930((_DWORD *)(this + 0x100)); /*0x733a07*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 0x100) + 4))(this + 0x100, a2); /*0x733a18*/
  if ( *(_DWORD *)(this + 0x310) != 1 ) /*0x733a21*/
  {
    v6 = HIDWORD(v4[3].SpinCount)-- == 1; /*0x733a23*/
    if ( v6 ) /*0x733a27*/
      LODWORD(v4[3].SpinCount) = 0; /*0x733a29*/
LABEL_4:
    LeaveCriticalSection(v4); /*0x733a30*/
    return 0; /*0x733a3c*/
  }
  v8 = **(_DWORD **)(this + 0x308); /*0x733a45*/
  if ( !v8 || (v9 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8)) == 0 ) /*0x733a58*/
  {
LABEL_9:
    v6 = HIDWORD(v4[3].SpinCount)-- == 1; /*0x733a6e*/
    if ( v6 ) /*0x733a72*/
      LODWORD(v4[3].SpinCount) = 0; /*0x733a74*/
    goto LABEL_4; /*0x733a74*/
  }
  while ( v9 != &stru_B3FAD4 ) /*0x733a65*/
  {
    v9 = v9->parent; /*0x733a67*/
    if ( !v9 ) /*0x733a6c*/
      goto LABEL_9; /*0x733a6c*/
  }
  v6 = HIDWORD(v4[3].SpinCount)-- == 1; /*0x733a86*/
  if ( v6 ) /*0x733a8a*/
    LODWORD(v4[3].SpinCount) = 0; /*0x733a8c*/
  LeaveCriticalSection(v4); /*0x733a90*/
  return v8; /*0x733a37*/
}
