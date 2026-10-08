void __thiscall sub_7203F0(void *this, int a2)
{
  DWORD CurrentThreadId; // eax

  if ( byte_B256CC ) /*0x7203f0*/
  {
    EnterCriticalSection(&unk_B3FC00); /*0x720401*/
    CurrentThreadId = GetCurrentThreadId(); /*0x720407*/
    ++unk_B3FC7C; /*0x72040d*/
    unk_B3FC78 = CurrentThreadId; /*0x720414*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x5C))(this); /*0x720420*/
    if ( unk_B3FC7C-- == 1 ) /*0x720422*/
      unk_B3FC78 = 0; /*0x72042b*/
    LeaveCriticalSection(&unk_B3FC00); /*0x72043e*/
  }
}
