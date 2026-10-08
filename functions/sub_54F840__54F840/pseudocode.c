void __thiscall sub_54F840(_DWORD *this)
{
  DWORD CurrentThreadId; // eax

  EnterCriticalSection(&unk_B39C00); /*0x54f848*/
  CurrentThreadId = GetCurrentThreadId(); /*0x54f84e*/
  ++unk_B39C7C; /*0x54f854*/
  unk_B39C78 = CurrentThreadId; /*0x54f85e*/
  NiTMap_Clear(this + 1); /*0x54f863*/
  if ( unk_B39C7C-- == 1 ) /*0x54f868*/
    unk_B39C78 = 0; /*0x54f872*/
  LeaveCriticalSection(&unk_B39C00); /*0x54f881*/
}
