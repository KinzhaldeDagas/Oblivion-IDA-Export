void __thiscall sub_4A1F90(_DWORD **this, int a2, int a3)
{
  DWORD CurrentThreadId; // eax
  int v6[3]; // [esp-4h] [ebp-Ch] BYREF

  EnterCriticalSection(&CriticalSection);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B353FC;
  dword_B353F8 = CurrentThreadId;
  v6[2] = (int)v6;
  v6[0] = a3;
  if ( a3 )
    InterlockedIncrement((volatile LONG *)(a3 + 4));
  sub_6AA3B0(*(this + 2), a2, v6[0], v6[1]);
  if ( dword_B353FC-- == 1 )
    dword_B353F8 = 0;
  LeaveCriticalSection(&CriticalSection);
}
