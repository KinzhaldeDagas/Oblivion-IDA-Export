char __thiscall sub_43FC20(TES *this, char a2)
{
  DWORD v2; // edi
  char result; // al
  DWORD CurrentThreadId; // eax

  if ( !byte_B350D5 || (nullsub_returnTrue_0arg(), result) )
  {
    nullsub_returnTrue_0arg();
    EnterCriticalSection(&CriticalSection);
    CurrentThreadId = GetCurrentThreadId();
    ++dword_B353FC;
    dword_B353F8 = CurrentThreadId;
    sub_55E390(1);
    sub_7B84E0();
    if ( dword_B35300 )
    {
      if ( this->unkA9 || a2 )
        sub_4A25F0((_DWORD *)dword_B35300);
    }
    MemoryHeap_FreeUnusedPagesStart(v2);
    sub_55E390(1);
    if ( dword_B353FC-- == 1 )
      dword_B353F8 = 0;
    LeaveCriticalSection(&CriticalSection);
    nullsub_returnTrue_0arg();
  }
  return result;
}
