void __thiscall sub_7135C0(_DWORD *this)
{
  DWORD CurrentThreadId; // eax

  EnterCriticalSection(&unk_B3FC00); /*0x7135c8*/
  CurrentThreadId = GetCurrentThreadId(); /*0x7135ce*/
  ++unk_B3FC7C; /*0x7135d4*/
  unk_B3FC78 = CurrentThreadId; /*0x7135e1*/
  sub_8BCC50(this + 0x7B); /*0x7135e6*/
  *(this + 0x8B) = 0; /*0x7135ed*/
  *(this + 0x8F) = 0; /*0x7135f3*/
  *(this + 0x8C) = 0; /*0x7135f9*/
  *(this + 0x90) = 0; /*0x7135ff*/
  if ( unk_B3FC7C-- == 1 ) /*0x713605*/
    unk_B3FC78 = 0; /*0x71360f*/
  LeaveCriticalSection(&unk_B3FC00); /*0x713619*/
}
