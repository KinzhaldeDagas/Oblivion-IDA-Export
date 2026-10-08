unsigned __int16 *__thiscall sub_950D50(unsigned __int16 *this, char a2)
{
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x950d58*/
  if ( (a2 & 1) != 0 ) /*0x950d5e*/
    (*(void (__thiscall **)(int, unsigned __int16 *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x950d70*/
      unk_BA7D98,
      this,
      *(this + 2),
      0x24);
  return this; /*0x950d75*/
}
