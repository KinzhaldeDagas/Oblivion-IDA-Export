void __stdcall sub_44D880(_DWORD *a1)
{
  bool v1; // zf

  EnterCriticalSection(&stru_B33F00);
  dword_B33F78 = GetCurrentThreadId();
  ++dword_B33F7C;
  a1[1] = 0;
  *a1 = dword_B33EAC;
  v1 = dword_B33F7C-- == 1;
  dword_B33EAC = (int)a1;
  if ( v1 )
    dword_B33F78 = 0;
  LeaveCriticalSection(&stru_B33F00);
}
