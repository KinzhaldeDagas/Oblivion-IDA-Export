void __thiscall sub_6FFC60(_DWORD *this)
{
  DWORD CurrentThreadId; // eax
  int v3; // esi

  EnterCriticalSection(&unk_B3F600); /*0x6ffc6a*/
  CurrentThreadId = GetCurrentThreadId(); /*0x6ffc70*/
  ++unk_B3F67C; /*0x6ffc76*/
  unk_B3F678 = CurrentThreadId; /*0x6ffc7d*/
  LOWORD(CurrentThreadId) = *((_WORD *)this + 0xA) - 1; /*0x6ffc86*/
  v3 = (unsigned __int16)CurrentThreadId; /*0x6ffc8a*/
  if ( (__int16)CurrentThreadId >= 0 ) /*0x6ffc92*/
  {
    do /*0x6ffca2*/
      sub_6FF480(this, v3--); /*0x6ffc97*/
    while ( (__int16)v3 >= 0 ); /*0x6ffca2*/
  }
  FormHeapFree(*(this + 4)); /*0x6ffca8*/
  *(this + 4) = 0; /*0x6ffcb0*/
  *((_WORD *)this + 0xB) = 0; /*0x6ffcb3*/
  *((_WORD *)this + 0xA) = 0; /*0x6ffcb7*/
  if ( unk_B3F67C-- == 1 ) /*0x6ffcbb*/
    unk_B3F678 = 0; /*0x6ffcc4*/
  LeaveCriticalSection(&unk_B3F600); /*0x6ffccf*/
}
