LONG __thiscall sub_43AD60(volatile LONG *this)
{
  int v2; // eax
  int v3; // eax
  IOManager *v4; // edi
  int v6[4]; // [esp-4h] [ebp-10h] BYREF

  v2 = *((_DWORD *)this + 9); /*0x43ad64*/
  if ( v2 ) /*0x43ad6a*/
  {
    sub_4A1F90((_DWORD **)unk_B35300, v2, *((_DWORD *)this + 0xA)); /*0x43ad77*/
  }
  else
  {
    v3 = *((_DWORD *)this + 8); /*0x43ad7e*/
    if ( v3 ) /*0x43ad83*/
      (*(void (__thiscall **)(UInt32, int, _DWORD))(*(_DWORD *)unk_B35300 + 8))(unk_B35300, v3, *((_DWORD *)this + 0xA)); /*0x43ad95*/
  }
  (*(void (__thiscall **)(volatile LONG *))(*this + 0x28))(this); /*0x43ad9e*/
  v4 = MEMORY[0xB33A10]; /*0x43ada0*/
  v6[0] = (int)this; /*0x43ada9*/
  v6[3] = (int)v6; /*0x43adab*/
  InterlockedIncrement(this + 2); /*0x43adb3*/
  return sub_43A5F0(&v4->members.taskQueue->vtbl, v6[0]); /*0x43adc1*/
}
