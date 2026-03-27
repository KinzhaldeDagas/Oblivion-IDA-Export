char __thiscall sub_6FFBE0(_WORD *this, unsigned __int16 a2)
{
  DWORD CurrentThreadId; // eax
  bool v4; // zf

  EnterCriticalSection(&stru_B3F600);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B3F67C;
  dword_B3F678 = CurrentThreadId;
  if ( a2 >= *(this + 0xA) )
  {
    v4 = dword_B3F67C-- == 1;
    if ( v4 )
      dword_B3F678 = 0;
    LeaveCriticalSection(&stru_B3F600);
    return 0;
  }
  else
  {
    sub_6FF480(this, a2);
    v4 = dword_B3F67C-- == 1;
    if ( v4 )
      dword_B3F678 = 0;
    LeaveCriticalSection(&stru_B3F600);
    return 1;
  }
}
