void __cdecl sub_75E370(NiD3DPass *a2)
{
  DWORD CurrentThreadId; // eax

  EnterCriticalSection(&stru_B41D80);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B41DFC;
  dword_B41DF8 = CurrentThreadId;
  sub_73A5E0(&dword_B28C5C, &a2);
  if ( dword_B41DFC-- == 1 )
    dword_B41DF8 = 0;
  LeaveCriticalSection(&stru_B41D80);
}
