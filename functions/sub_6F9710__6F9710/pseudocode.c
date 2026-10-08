void __cdecl sub_6F9710(int a1)
{
  DWORD CurrentThreadId; // eax
  int v2; // esi
  unsigned int v3; // edi

  EnterCriticalSection(&unk_B3F400); /*0x6f9737*/
  CurrentThreadId = GetCurrentThreadId(); /*0x6f973d*/
  v2 = a1; /*0x6f9743*/
  ++unk_B3F47C; /*0x6f9747*/
  unk_B3F478 = CurrentThreadId; /*0x6f9750*/
  a1 = v2; /*0x6f9755*/
  if ( v2 ) /*0x6f9759*/
    InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6f975f*/
  v3 = (unsigned __int16)word_B252F2; /*0x6f9765*/
  if ( v3 >= (unsigned __int16)word_B252F0 ) /*0x6f977d*/
    sub_6C4510((unsigned __int16 *)&off_B252E8, v3 + (unsigned __int16)word_B252F6); /*0x6f978e*/
  sub_6F95E0(&off_B252E8, v3, &a1); /*0x6f979e*/
  if ( v2 ) /*0x6f97ad*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x6f97b3*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x6f97c5*/
  }
  if ( unk_B3F47C-- == 1 ) /*0x6f97c7*/
    unk_B3F478 = 0; /*0x6f97d0*/
  LeaveCriticalSection(&unk_B3F400); /*0x6f97df*/
}
