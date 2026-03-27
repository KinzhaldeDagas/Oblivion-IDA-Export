_DWORD *__thiscall sub_918E10(_DWORD *this, char a2)
{
  *this = &off_A9D270;
  *(this + 2) = &off_A9D258;
  *(this + 8) = off_A9D250;
  sub_948D90(this + 0xA);
  sub_949180(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this;
}
