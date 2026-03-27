void __cdecl sub_6EBFB0(NiD3DPass *a2)
{
  DWORD CurrentThreadId; // eax

  EnterCriticalSection(&stru_B3EC80);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B3ECFC;
  dword_B3ECF8 = CurrentThreadId;
  sub_73A5E0(&dword_B24FE8, &a2);
  if ( dword_B3ECFC-- == 1 )
    dword_B3ECF8 = 0;
  LeaveCriticalSection(&stru_B3EC80);
}
