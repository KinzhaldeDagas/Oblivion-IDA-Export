unsigned __int16 *__thiscall sub_9575C0(unsigned __int16 *this, char a2)
{
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x9575c8*/
  if ( (a2 & 1) != 0 ) /*0x9575ce*/
    (*(void (__thiscall **)(int, unsigned __int16 *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x9575e0*/
      unk_BA7D98,
      this,
      *(this + 2),
      0x1B);
  return this; /*0x9575e5*/
}
