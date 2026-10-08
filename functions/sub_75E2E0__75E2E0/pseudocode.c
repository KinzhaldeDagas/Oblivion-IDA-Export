int sub_75E2E0()
{
  DWORD CurrentThreadId; // eax
  bool v1; // zf
  _DWORD *v2; // eax
  int v3; // ecx
  int v4; // esi

  EnterCriticalSection(&unk_B41D80); /*0x75e2e5*/
  CurrentThreadId = GetCurrentThreadId(); /*0x75e2eb*/
  ++unk_B41DFC; /*0x75e2f1*/
  v1 = dword_B28C64 == 0; /*0x75e2f8*/
  unk_B41DF8 = CurrentThreadId; /*0x75e2ff*/
  if ( v1 ) /*0x75e304*/
  {
    sub_75E240(&dword_B28C5C, dword_B28C68); /*0x75e311*/
    dword_B28C68 *= 2; /*0x75e31f*/
  }
  v2 = (_DWORD *)dword_B28C5C; /*0x75e32b*/
  v3 = dword_B28C64 - 1; /*0x75e330*/
  v4 = *(_DWORD *)dword_B28C5C; /*0x75e334*/
  dword_B28C64 = v3; /*0x75e336*/
  *v2 = v2[v3]; /*0x75e33f*/
  v1 = unk_B41DFC-- == 1; /*0x75e341*/
  if ( v1 ) /*0x75e348*/
    unk_B41DF8 = 0; /*0x75e34a*/
  LeaveCriticalSection(&unk_B41D80); /*0x75e359*/
  return v4; /*0x75e362*/
}
