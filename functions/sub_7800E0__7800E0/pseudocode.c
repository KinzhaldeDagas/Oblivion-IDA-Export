int __thiscall sub_7800E0(void *this)
{
  unsigned int i; // ebx
  unsigned int j; // edi
  unsigned int k; // edi
  int result; // eax

  for ( i = 0; i < dword_B28CB0; ++i ) /*0x7800e3*/
  {
    for ( j = 0; j < 8; ++j ) /*0x7800f0*/
      (*(void (__thiscall **)(void *, unsigned int, unsigned int))(*(_DWORD *)this + 0xC0))(this, i, j); /*0x7800fe*/
    for ( k = 0; k < 5; ++k ) /*0x780108*/
      result = (*(int (__thiscall **)(void *, unsigned int, int))(*(_DWORD *)this + 0xD8))(this, i, unk_B427CC[k]); /*0x780122*/
  }
  return result; /*0x780138*/
}
