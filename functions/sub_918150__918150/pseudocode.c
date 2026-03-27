_DWORD *__thiscall sub_918150(_DWORD *this, char a2)
{
  *(this + 5) = &hkBaseObject::`vftable';
  *(this + 2) = &hkBaseObject::`vftable';
  *this = &hkBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(int, _DWORD *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      dword_BA7D98,
      this,
      *((unsigned __int16 *)this + 2),
      0x12);
  return this;
}
