void sub_6F96B0()
{
  DWORD CurrentThreadId; // eax

  EnterCriticalSection(&stru_B3F400);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B3F47C;
  dword_B3F478 = CurrentThreadId;
  sub_739670(&off_B252E8);
  if ( (unsigned __int16)word_B252F2 > 0x64u )
    sub_6C4510((unsigned __int16 *)&off_B252E8, 0x64u);
  if ( dword_B3F47C-- == 1 )
    dword_B3F478 = 0;
  LeaveCriticalSection(&stru_B3F400);
}
