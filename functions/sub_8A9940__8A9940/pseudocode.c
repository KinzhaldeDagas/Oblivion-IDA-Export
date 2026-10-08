unsigned __int16 *__thiscall sub_8A9940(unsigned __int16 *this, char a2)
{
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x8a9948*/
  if ( (a2 & 1) != 0 ) /*0x8a994e*/
    (*(void (__thiscall **)(int, unsigned __int16 *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8a9960*/
      unk_BA7D98,
      this,
      *(this + 2),
      0x2B);
  return this; /*0x8a9965*/
}
