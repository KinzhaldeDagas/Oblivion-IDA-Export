void __thiscall sub_732370(_DWORD *this)
{
  DWORD CurrentThreadId; // eax
  bool v3; // zf
  int v4; // eax
  int v5; // eax

  EnterCriticalSection(&stru_B40080);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B400FC;
  v3 = dword_B40000 == (_DWORD)this;
  dword_B400F8 = CurrentThreadId;
  if ( v3 )
    dword_B40000 = *(this + 8);
  if ( (_DWORD *)dword_B40004 == this )
    dword_B40004 = *(this + 7);
  v4 = *(this + 7);
  if ( v4 )
    *(_DWORD *)(v4 + 0x20) = *(this + 8);
  v5 = *(this + 8);
  if ( v5 )
    *(_DWORD *)(v5 + 0x1C) = *(this + 7);
  v3 = dword_B400FC-- == 1;
  if ( v3 )
    dword_B400F8 = 0;
  LeaveCriticalSection(&stru_B40080);
}
