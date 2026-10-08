void __thiscall sub_712930(_DWORD *this)
{
  DWORD CurrentThreadId; // eax

  EnterCriticalSection(&unk_B3FC00); /*0x712938*/
  CurrentThreadId = GetCurrentThreadId(); /*0x71293e*/
  ++unk_B3FC7C; /*0x712944*/
  unk_B3FC78 = CurrentThreadId; /*0x712951*/
  sub_8BCC50(this + 0x81); /*0x712956*/
  if ( unk_B3FC7C-- == 1 ) /*0x71295b*/
    unk_B3FC78 = 0; /*0x712965*/
  LeaveCriticalSection(&unk_B3FC00); /*0x712974*/
}
