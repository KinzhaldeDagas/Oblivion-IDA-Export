unsigned __int16 *__thiscall sub_953580(unsigned __int16 *this, char a2)
{
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x953588*/
  if ( (a2 & 1) != 0 ) /*0x95358e*/
    (*(void (__thiscall **)(int, unsigned __int16 *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x9535a0*/
      unk_BA7D98,
      this,
      *(this + 2),
      0x12);
  return this; /*0x9535a5*/
}
