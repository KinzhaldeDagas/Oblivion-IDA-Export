unsigned __int16 *__thiscall sub_926E10(unsigned __int16 *this, char a2)
{
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x926e18*/
  if ( (a2 & 1) != 0 ) /*0x926e1e*/
    (*(void (__thiscall **)(int, unsigned __int16 *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x926e30*/
      unk_BA7D98,
      this,
      *(this + 2),
      5);
  return this; /*0x926e35*/
}
