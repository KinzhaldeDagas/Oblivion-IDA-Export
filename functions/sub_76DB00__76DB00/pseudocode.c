void sub_76DB00()
{
  DWORD CurrentThreadId; // eax
  _DWORD *v1; // esi
  int v2; // ecx

  EnterCriticalSection(&stru_B42680);
  CurrentThreadId = GetCurrentThreadId();
  v1 = (_DWORD *)dword_B294F4;
  ++dword_B426FC;
  dword_B426F8 = CurrentThreadId;
  while ( v1 )
  {
    v2 = v1[2];
    v1 = (_DWORD *)*v1;
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 0x2C))(v2);
  }
  if ( dword_B426FC-- == 1 )
    dword_B426F8 = 0;
  LeaveCriticalSection(&stru_B42680);
}
