unsigned __int16 *__thiscall sub_8D8420(unsigned __int16 *this, char a2)
{
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x8d8428*/
  if ( (a2 & 1) != 0 ) /*0x8d842e*/
    (*(void (__thiscall **)(int, unsigned __int16 *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8d8440*/
      unk_BA7D98,
      this,
      *(this + 2),
      0x1E);
  return this; /*0x8d8445*/
}
