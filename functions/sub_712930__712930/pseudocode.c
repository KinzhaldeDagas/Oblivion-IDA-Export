void __thiscall sub_712930(_DWORD *this)
{
  DWORD CurrentThreadId; // eax

  EnterCriticalSection(&stru_B3FC00);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B3FC7C;
  dword_B3FC78 = CurrentThreadId;
  sub_8BCC50(this + 0x81);
  if ( dword_B3FC7C-- == 1 )
    dword_B3FC78 = 0;
  LeaveCriticalSection(&stru_B3FC00);
}
