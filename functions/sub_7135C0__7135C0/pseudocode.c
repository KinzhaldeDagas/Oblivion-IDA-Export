void __thiscall sub_7135C0(_DWORD *this)
{
  DWORD CurrentThreadId; // eax

  EnterCriticalSection(&stru_B3FC00);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B3FC7C;
  dword_B3FC78 = CurrentThreadId;
  sub_8BCC50(this + 0x7B);
  *(this + 0x8B) = 0;
  *(this + 0x8F) = 0;
  *(this + 0x8C) = 0;
  *(this + 0x90) = 0;
  if ( dword_B3FC7C-- == 1 )
    dword_B3FC78 = 0;
  LeaveCriticalSection(&stru_B3FC00);
}
