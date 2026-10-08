int __thiscall sub_77FEC0(void *this)
{
  unsigned int i; // esi
  int result; // eax

  for ( i = 0; i < 0x100; ++i ) /*0x77fec4*/
    result = (*(int (__thiscall **)(void *, unsigned int))(*(_DWORD *)this + 0x5C))(this, i); /*0x77fece*/
  return result; /*0x77fedb*/
}
