int sub_6EBF20()
{
  DWORD CurrentThreadId; // eax
  bool v1; // zf
  _DWORD *v2; // eax
  int v3; // ecx
  int v4; // esi

  EnterCriticalSection(&stru_B3EC80);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B3ECFC;
  v1 = dword_B24FF0 == 0;
  dword_B3ECF8 = CurrentThreadId;
  if ( v1 )
  {
    sub_6EBE50(&dword_B24FE8, dword_B24FF4);
    dword_B24FF4 *= 2;
  }
  v2 = (_DWORD *)dword_B24FE8;
  v3 = dword_B24FF0 - 1;
  v4 = *(_DWORD *)dword_B24FE8;
  dword_B24FF0 = v3;
  *v2 = v2[v3];
  v1 = dword_B3ECFC-- == 1;
  if ( v1 )
    dword_B3ECF8 = 0;
  LeaveCriticalSection(&stru_B3EC80);
  return v4;
}
