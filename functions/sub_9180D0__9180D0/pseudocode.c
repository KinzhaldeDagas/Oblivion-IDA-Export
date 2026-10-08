unsigned __int16 *__thiscall sub_9180D0(unsigned __int16 *this, char a2)
{
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x9180d8*/
  if ( (a2 & 1) != 0 ) /*0x9180de*/
    (*(void (__thiscall **)(int, unsigned __int16 *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x9180f0*/
      unk_BA7D98,
      this,
      *(this + 2),
      0x17);
  return this; /*0x9180f5*/
}
