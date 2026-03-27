int sub_75E2E0()
{
  DWORD CurrentThreadId; // eax
  bool v1; // zf
  _DWORD *v2; // eax
  int v3; // ecx
  int v4; // esi

  EnterCriticalSection(&stru_B41D80);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B41DFC;
  v1 = dword_B28C64 == 0;
  dword_B41DF8 = CurrentThreadId;
  if ( v1 )
  {
    sub_75E240(&dword_B28C5C, dword_B28C68);
    dword_B28C68 *= 2;
  }
  v2 = (_DWORD *)dword_B28C5C;
  v3 = dword_B28C64 - 1;
  v4 = *(_DWORD *)dword_B28C5C;
  dword_B28C64 = v3;
  *v2 = v2[v3];
  v1 = dword_B41DFC-- == 1;
  if ( v1 )
    dword_B41DF8 = 0;
  LeaveCriticalSection(&stru_B41D80);
  return v4;
}
