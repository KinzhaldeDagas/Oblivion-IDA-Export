unsigned __int16 *__thiscall sub_9558A0(unsigned __int16 *this, char a2)
{
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x9558a8*/
  if ( (a2 & 1) != 0 ) /*0x9558ae*/
    (*(void (__thiscall **)(int, unsigned __int16 *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x9558c0*/
      unk_BA7D98,
      this,
      *(this + 2),
      0x25);
  return this; /*0x9558c5*/
}
