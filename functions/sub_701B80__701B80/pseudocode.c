void __thiscall sub_701B80(_DWORD *this)
{
  DWORD CurrentThreadId; // eax
  bool v3; // zf
  int v4; // eax
  int v5; // eax

  EnterCriticalSection(&unk_B3F780); /*0x701b88*/
  CurrentThreadId = GetCurrentThreadId(); /*0x701b8e*/
  ++unk_B3F7FC; /*0x701b99*/
  v3 = unk_B3F700 == (_DWORD)this; /*0x701b9f*/
  unk_B3F7F8 = CurrentThreadId; /*0x701ba5*/
  if ( v3 ) /*0x701baa*/
    unk_B3F700 = *(this + 0xB); /*0x701baf*/
  if ( (_DWORD *)unk_B3F704 == this ) /*0x701bba*/
    unk_B3F704 = *(this + 0xA); /*0x701bbf*/
  v4 = *(this + 0xA); /*0x701bc5*/
  if ( v4 ) /*0x701bca*/
    *(_DWORD *)(v4 + 0x2C) = *(this + 0xB); /*0x701bcf*/
  v5 = *(this + 0xB); /*0x701bd2*/
  if ( v5 ) /*0x701bd7*/
    *(_DWORD *)(v5 + 0x28) = *(this + 0xA); /*0x701bdc*/
  v3 = unk_B3F7FC-- == 1; /*0x701bdf*/
  if ( v3 ) /*0x701be6*/
    unk_B3F7F8 = 0; /*0x701be8*/
  LeaveCriticalSection(&unk_B3F780); /*0x701bf7*/
}
