void __cdecl sub_76DB60(int a1)
{
  DWORD CurrentThreadId; // eax
  _DWORD *v2; // esi
  int v3; // ecx

  EnterCriticalSection(&stru_B42680);
  CurrentThreadId = GetCurrentThreadId();
  v2 = (_DWORD *)dword_B294F4;
  ++dword_B426FC;
  dword_B426F8 = CurrentThreadId;
  while ( v2 )
  {
    v3 = v2[2];
    v2 = (_DWORD *)*v2;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x30))(v3, a1);
  }
  if ( dword_B426FC-- == 1 )
    dword_B426F8 = 0;
  LeaveCriticalSection(&stru_B42680);
}
