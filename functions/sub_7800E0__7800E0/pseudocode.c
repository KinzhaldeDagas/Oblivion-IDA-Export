int __thiscall sub_7800E0(void *this)
{
  unsigned int i; // ebx
  unsigned int j; // edi
  unsigned int k; // edi
  int result; // eax

  for ( i = 0; i < dword_B28CB0; ++i )
  {
    for ( j = 0; j < 8; ++j )
      (*(void (__thiscall **)(void *, unsigned int, unsigned int))(*(_DWORD *)this + 0xC0))(this, i, j);
    for ( k = 0; k < 5; ++k )
      result = (*(int (__thiscall **)(void *, unsigned int, int))(*(_DWORD *)this + 0xD8))(this, i, dword_B427CC[k]);
  }
  return result;
}
