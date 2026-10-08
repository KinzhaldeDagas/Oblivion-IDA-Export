unsigned __int16 *__thiscall sub_94B880(unsigned __int16 *this, char a2)
{
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x94b888*/
  if ( (a2 & 1) != 0 ) /*0x94b88e*/
    (*(void (__thiscall **)(int, unsigned __int16 *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x94b8a0*/
      unk_BA7D98,
      this,
      *(this + 2),
      0x32);
  return this; /*0x94b8a5*/
}
