void __cdecl sub_6F9710(int a1)
{
  DWORD CurrentThreadId; // eax
  int v2; // esi
  unsigned int v3; // edi

  EnterCriticalSection(&stru_B3F400);
  CurrentThreadId = GetCurrentThreadId();
  v2 = a1;
  ++dword_B3F47C;
  dword_B3F478 = CurrentThreadId;
  a1 = v2;
  if ( v2 )
    InterlockedIncrement((volatile LONG *)(v2 + 4));
  v3 = (unsigned __int16)word_B252F2;
  if ( v3 >= (unsigned __int16)word_B252F0 )
    sub_6C4510((unsigned __int16 *)&off_B252E8, v3 + (unsigned __int16)word_B252F6);
  sub_6F95E0(&off_B252E8, v3, &a1);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  if ( dword_B3F47C-- == 1 )
    dword_B3F478 = 0;
  LeaveCriticalSection(&stru_B3F400);
}
