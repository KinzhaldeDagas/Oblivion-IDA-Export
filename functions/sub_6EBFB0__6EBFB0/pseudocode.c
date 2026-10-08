void __cdecl sub_6EBFB0(NiD3DPass *a2)
{
  DWORD CurrentThreadId; // eax

  EnterCriticalSection(&unk_B3EC80); /*0x6ebfb5*/
  CurrentThreadId = GetCurrentThreadId(); /*0x6ebfbb*/
  ++unk_B3ECFC; /*0x6ebfc1*/
  unk_B3ECF8 = CurrentThreadId; /*0x6ebfcc*/
  sub_73A5E0(&dword_B24FE8, &a2); /*0x6ebfdf*/
  if ( unk_B3ECFC-- == 1 ) /*0x6ebfe4*/
    unk_B3ECF8 = 0; /*0x6ebfed*/
  LeaveCriticalSection(&unk_B3EC80); /*0x6ebffc*/
}
