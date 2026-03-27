void (__thiscall ***__thiscall sub_4A1ED0(_DWORD **this, int a2, int a3))(_DWORD, signed int)
{
  DWORD CurrentThreadId; // eax
  void (__thiscall ***v6)(_DWORD, int); // esi
  int v8; // [esp+8h] [ebp-10h] BYREF
  unsigned int v9; // [esp+14h] [ebp-4h]

  v8 = 0;
  v9 = 0;
  EnterCriticalSection(&CriticalSection);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B353FC;
  dword_B353F8 = CurrentThreadId;
  sub_4A1AB0(*(this + 2), a2, &v8);
  if ( dword_B353FC-- == 1 )
    dword_B353F8 = 0;
  LeaveCriticalSection(&CriticalSection);
  v6 = (void (__thiscall ***)(_DWORD, int))v8;
  v9 = 0xFFFFFFFF;
  if ( v8 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
      (**v6)(v6, 1);
  }
  return v6;
}
