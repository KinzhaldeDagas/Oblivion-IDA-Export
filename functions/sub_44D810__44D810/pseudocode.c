int *sub_44D810()
{
  DWORD CurrentThreadId; // eax
  int *v1; // esi

  EnterCriticalSection(&stru_B33F00);
  CurrentThreadId = GetCurrentThreadId();
  v1 = (int *)dword_B33EAC;
  ++dword_B33F7C;
  dword_B33F78 = CurrentThreadId;
  if ( !v1 )
  {
    sub_44D770();
    v1 = (int *)dword_B33EAC;
  }
  dword_B33EAC = *v1;
  v1[2] = 0;
  *v1 = 0;
  v1[1] = 0;
  if ( dword_B33F7C-- == 1 )
    dword_B33F78 = 0;
  LeaveCriticalSection(&stru_B33F00);
  return v1;
}
