void sub_6F96B0()
{
  DWORD CurrentThreadId; // eax

  EnterCriticalSection(&unk_B3F400); /*0x6f96b5*/
  CurrentThreadId = GetCurrentThreadId(); /*0x6f96bb*/
  ++unk_B3F47C; /*0x6f96c1*/
  unk_B3F478 = CurrentThreadId; /*0x6f96cd*/
  sub_739670(&off_B252E8); /*0x6f96d2*/
  if ( (unsigned __int16)word_B252F2 > 0x64u ) /*0x6f96df*/
    sub_6C4510((unsigned __int16 *)&off_B252E8, 0x64u); /*0x6f96e8*/
  if ( unk_B3F47C-- == 1 ) /*0x6f96ed*/
    unk_B3F478 = 0; /*0x6f96f6*/
  LeaveCriticalSection(&unk_B3F400); /*0x6f9705*/
}
