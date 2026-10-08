void __thiscall sub_7C5D00(_DWORD *this, _BYTE *a2)
{
  char v3; // bl
  DWORD CurrentThreadId; // eax
  _DWORD *v5; // esi
  void *v6; // ecx

  if ( a2 ) /*0x7c5d0a*/
  {
    if ( (a2[0x18] & 1) == 0 ) /*0x7c5d10*/
    {
      v3 = 0; /*0x7c5d13*/
      if ( unk_B43384 ) /*0x7c5d15*/
      {
        EnterCriticalSection(&unk_B43400); /*0x7c5d22*/
        CurrentThreadId = GetCurrentThreadId(); /*0x7c5d28*/
        ++unk_B4347C; /*0x7c5d2e*/
        unk_B43478 = CurrentThreadId; /*0x7c5d35*/
        v3 = 1; /*0x7c5d3a*/
      }
      v5 = (_DWORD *)*(this + 0x3A); /*0x7c5d3c*/
      while ( v5 ) /*0x7c5d44*/
      {
        v6 = (void *)v5[2]; /*0x7c5d46*/
        v5 = (_DWORD *)*v5; /*0x7c5d4e*/
        if ( v6 ) /*0x7c5d50*/
          ShadowSceneLight_AddToScene(v6, a2); /*0x7c5d53*/
      }
      if ( v3 ) /*0x7c5d5f*/
      {
        if ( unk_B4347C-- == 1 ) /*0x7c5d61*/
          unk_B43478 = 0; /*0x7c5d6a*/
        LeaveCriticalSection(&unk_B43400); /*0x7c5d7e*/
      }
    }
  }
}
