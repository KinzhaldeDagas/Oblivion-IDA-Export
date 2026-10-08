unsigned __int16 *__thiscall sub_928200(unsigned __int16 *this, char a2)
{
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x928208*/
  if ( (a2 & 1) != 0 ) /*0x92820e*/
    (*(void (__thiscall **)(int, unsigned __int16 *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x928220*/
      unk_BA7D98,
      this,
      *(this + 2),
      0x29);
  return this; /*0x928225*/
}
