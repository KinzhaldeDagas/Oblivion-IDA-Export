void __cdecl sub_75E370(NiD3DPass *a2)
{
  DWORD CurrentThreadId; // eax

  EnterCriticalSection(&unk_B41D80); /*0x75e375*/
  CurrentThreadId = GetCurrentThreadId(); /*0x75e37b*/
  ++unk_B41DFC; /*0x75e381*/
  unk_B41DF8 = CurrentThreadId; /*0x75e38c*/
  sub_73A5E0(&dword_B28C5C, &a2); /*0x75e39f*/
  if ( unk_B41DFC-- == 1 ) /*0x75e3a4*/
    unk_B41DF8 = 0; /*0x75e3ad*/
  LeaveCriticalSection(&unk_B41D80); /*0x75e3bc*/
}
