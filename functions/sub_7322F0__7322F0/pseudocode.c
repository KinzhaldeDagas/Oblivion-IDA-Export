void __thiscall sub_7322F0(_DWORD *this)
{
  DWORD CurrentThreadId; // eax
  bool v3; // zf

  EnterCriticalSection(&stru_B40080);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B400FC;
  v3 = dword_B40000 == 0;
  dword_B400F8 = CurrentThreadId;
  if ( v3 )
    dword_B40000 = (int)this;
  if ( dword_B40004 )
  {
    *(_DWORD *)(dword_B40004 + 0x20) = this;
    *(this + 7) = dword_B40004;
  }
  else
  {
    *(this + 7) = 0;
  }
  dword_B40004 = (int)this;
  *(this + 8) = 0;
  v3 = dword_B400FC-- == 1;
  if ( v3 )
    dword_B400F8 = 0;
  LeaveCriticalSection(&stru_B40080);
}
