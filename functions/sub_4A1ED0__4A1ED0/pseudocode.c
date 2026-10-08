void (__thiscall ***__thiscall sub_4A1ED0(_DWORD **this, int a2, int a3))(_DWORD, signed int)
{
  DWORD CurrentThreadId; // eax
  void (__thiscall ***v6)(_DWORD, int); // esi
  int v8; // [esp+8h] [ebp-10h] BYREF
  unsigned int v9; // [esp+14h] [ebp-4h]

  v8 = 0; /*0x4a1ef4*/
  v9 = 0; /*0x4a1f01*/
  EnterCriticalSection(&MEMORY[0xB35380]); /*0x4a1f09*/
  CurrentThreadId = GetCurrentThreadId(); /*0x4a1f0f*/
  ++unk_B353FC; /*0x4a1f19*/
  unk_B353F8 = CurrentThreadId; /*0x4a1f20*/
  sub_4A1AB0(*(this + 2), a2, &v8); /*0x4a1f2e*/
  if ( unk_B353FC-- == 1 ) /*0x4a1f33*/
    unk_B353F8 = 0; /*0x4a1f3c*/
  LeaveCriticalSection(&MEMORY[0xB35380]); /*0x4a1f4b*/
  v6 = (void (__thiscall ***)(_DWORD, int))v8; /*0x4a1f51*/
  v9 = 0xFFFFFFFF; /*0x4a1f57*/
  if ( v8 ) /*0x4a1f5f*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x4a1f65*/
      (**v6)(v6, 1); /*0x4a1f77*/
  }
  return v6; /*0x4a1f7b*/
}
