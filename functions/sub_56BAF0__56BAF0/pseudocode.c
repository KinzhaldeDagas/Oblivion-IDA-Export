void __cdecl sub_56BAF0(NiD3DPass *a2)
{
  DWORD CurrentThreadId; // eax

  EnterCriticalSection(&stru_B3A600);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B3A67C;
  dword_B3A678 = CurrentThreadId;
  sub_73A5E0(&dword_B12B9C, &a2);
  if ( dword_B3A67C-- == 1 )
    dword_B3A678 = 0;
  LeaveCriticalSection(&stru_B3A600);
}
