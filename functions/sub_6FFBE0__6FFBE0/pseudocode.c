char __thiscall sub_6FFBE0(_WORD *this, unsigned __int16 a2)
{
  DWORD CurrentThreadId; // eax
  bool v4; // zf

  EnterCriticalSection(&unk_B3F600); /*0x6ffbe8*/
  CurrentThreadId = GetCurrentThreadId(); /*0x6ffbee*/
  ++unk_B3F67C; /*0x6ffbf4*/
  unk_B3F678 = CurrentThreadId; /*0x6ffbfb*/
  if ( a2 >= *(this + 0xA) ) /*0x6ffc08*/
  {
    v4 = unk_B3F67C-- == 1; /*0x6ffc36*/
    if ( v4 ) /*0x6ffc3d*/
      unk_B3F678 = 0; /*0x6ffc3f*/
    LeaveCriticalSection(&unk_B3F600); /*0x6ffc4e*/
    return 0; /*0x6ffc54*/
  }
  else
  {
    sub_6FF480(this, a2); /*0x6ffc0d*/
    v4 = unk_B3F67C-- == 1; /*0x6ffc12*/
    if ( v4 ) /*0x6ffc19*/
      unk_B3F678 = 0; /*0x6ffc1b*/
    LeaveCriticalSection(&unk_B3F600); /*0x6ffc2a*/
    return 1; /*0x6ffc30*/
  }
}
