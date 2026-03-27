void __thiscall sub_701B80(_DWORD *this)
{
  DWORD CurrentThreadId; // eax
  bool v3; // zf
  int v4; // eax
  int v5; // eax

  EnterCriticalSection(&stru_B3F780);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B3F7FC;
  v3 = dword_B3F700 == (_DWORD)this;
  dword_B3F7F8 = CurrentThreadId;
  if ( v3 )
    dword_B3F700 = *(this + 0xB);
  if ( (_DWORD *)dword_B3F704 == this )
    dword_B3F704 = *(this + 0xA);
  v4 = *(this + 0xA);
  if ( v4 )
    *(_DWORD *)(v4 + 0x2C) = *(this + 0xB);
  v5 = *(this + 0xB);
  if ( v5 )
    *(_DWORD *)(v5 + 0x28) = *(this + 0xA);
  v3 = dword_B3F7FC-- == 1;
  if ( v3 )
    dword_B3F7F8 = 0;
  LeaveCriticalSection(&stru_B3F780);
}
