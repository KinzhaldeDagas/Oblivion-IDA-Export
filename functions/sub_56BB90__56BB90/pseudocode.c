int sub_56BB90()
{
  DWORD CurrentThreadId; // eax
  bool v1; // zf
  _DWORD *v2; // eax
  int v3; // ecx
  int v4; // esi

  EnterCriticalSection(&stru_B3A600);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B3A67C;
  v1 = dword_B12BA4 == 0;
  dword_B3A678 = CurrentThreadId;
  if ( v1 )
  {
    sub_56BA20(&dword_B12B9C, dword_B12BA8);
    dword_B12BA8 *= 2;
  }
  v2 = (_DWORD *)dword_B12B9C;
  v3 = dword_B12BA4 - 1;
  v4 = *(_DWORD *)dword_B12B9C;
  dword_B12BA4 = v3;
  *v2 = v2[v3];
  v1 = dword_B3A67C-- == 1;
  if ( v1 )
    dword_B3A678 = 0;
  LeaveCriticalSection(&stru_B3A600);
  return v4;
}
