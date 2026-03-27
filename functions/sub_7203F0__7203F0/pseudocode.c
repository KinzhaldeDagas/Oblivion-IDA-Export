void __thiscall sub_7203F0(void *this, int a2)
{
  DWORD CurrentThreadId; // eax

  if ( byte_B256CC )
  {
    EnterCriticalSection(&stru_B3FC00);
    CurrentThreadId = GetCurrentThreadId();
    ++dword_B3FC7C;
    dword_B3FC78 = CurrentThreadId;
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x5C))(this);
    if ( dword_B3FC7C-- == 1 )
      dword_B3FC78 = 0;
    LeaveCriticalSection(&stru_B3FC00);
  }
}
