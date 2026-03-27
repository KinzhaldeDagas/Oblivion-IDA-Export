_DWORD *__thiscall sub_943620(_DWORD *this, char a2)
{
  *(this + 2) = 0;
  *this = &hkBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(int, _DWORD *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      dword_BA7D98,
      this,
      *((unsigned __int16 *)this + 2),
      0x25);
  return this;
}
