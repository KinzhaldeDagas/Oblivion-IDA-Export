_DWORD *__thiscall sub_8BB3B0(_DWORD *this, char a2)
{
  *this = &off_A982A0;
  sub_8BB320((int)this);
  *this = &hkBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x17);
  return this;
}
