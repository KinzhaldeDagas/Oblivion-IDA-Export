void __thiscall sub_6FFC60(_DWORD *this)
{
  DWORD CurrentThreadId; // eax
  int v3; // esi

  EnterCriticalSection(&stru_B3F600);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B3F67C;
  dword_B3F678 = CurrentThreadId;
  LOWORD(CurrentThreadId) = *((_WORD *)this + 0xA) - 1;
  v3 = (unsigned __int16)CurrentThreadId;
  if ( (__int16)CurrentThreadId >= 0 )
  {
    do
      sub_6FF480(this, v3--);
    while ( (__int16)v3 >= 0 );
  }
  FormHeapFree(*(this + 4));
  *(this + 4) = 0;
  *((_WORD *)this + 0xB) = 0;
  *((_WORD *)this + 0xA) = 0;
  if ( dword_B3F67C-- == 1 )
    dword_B3F678 = 0;
  LeaveCriticalSection(&stru_B3F600);
}
