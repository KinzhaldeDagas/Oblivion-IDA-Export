int sub_6EBF20()
{
  DWORD CurrentThreadId; // eax
  bool v1; // zf
  _DWORD *v2; // eax
  int v3; // ecx
  int v4; // esi

  EnterCriticalSection(&unk_B3EC80); /*0x6ebf25*/
  CurrentThreadId = GetCurrentThreadId(); /*0x6ebf2b*/
  ++unk_B3ECFC; /*0x6ebf31*/
  v1 = dword_B24FF0 == 0; /*0x6ebf38*/
  unk_B3ECF8 = CurrentThreadId; /*0x6ebf3f*/
  if ( v1 ) /*0x6ebf44*/
  {
    sub_6EBE50(&dword_B24FE8, dword_B24FF4); /*0x6ebf51*/
    dword_B24FF4 *= 2; /*0x6ebf5f*/
  }
  v2 = (_DWORD *)dword_B24FE8; /*0x6ebf6b*/
  v3 = dword_B24FF0 - 1; /*0x6ebf70*/
  v4 = *(_DWORD *)dword_B24FE8; /*0x6ebf74*/
  dword_B24FF0 = v3; /*0x6ebf76*/
  *v2 = v2[v3]; /*0x6ebf7f*/
  v1 = unk_B3ECFC-- == 1; /*0x6ebf81*/
  if ( v1 ) /*0x6ebf88*/
    unk_B3ECF8 = 0; /*0x6ebf8a*/
  LeaveCriticalSection(&unk_B3EC80); /*0x6ebf99*/
  return v4; /*0x6ebfa2*/
}
