unsigned __int16 *__thiscall sub_8E9FE0(unsigned __int16 *this, char a2)
{
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x8e9fe8*/
  if ( (a2 & 1) != 0 ) /*0x8e9fee*/
    (*(void (__thiscall **)(int, unsigned __int16 *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8ea000*/
      unk_BA7D98,
      this,
      *(this + 2),
      0x28);
  return this; /*0x8ea005*/
}
