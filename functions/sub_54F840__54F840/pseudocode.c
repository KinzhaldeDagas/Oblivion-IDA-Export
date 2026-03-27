void __thiscall sub_54F840(_DWORD *this)
{
  DWORD CurrentThreadId; // eax

  EnterCriticalSection(&stru_B39C00);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B39C7C;
  dword_B39C78 = CurrentThreadId;
  NiTMap_Clear(this + 1);
  if ( dword_B39C7C-- == 1 )
    dword_B39C78 = 0;
  LeaveCriticalSection(&stru_B39C00);
}
