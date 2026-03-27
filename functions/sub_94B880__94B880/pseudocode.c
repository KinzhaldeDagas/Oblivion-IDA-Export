unsigned __int16 *__thiscall sub_94B880(unsigned __int16 *this, char a2)
{
  *(_DWORD *)this = &hkBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(int, unsigned __int16 *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      dword_BA7D98,
      this,
      *(this + 2),
      0x32);
  return this;
}
