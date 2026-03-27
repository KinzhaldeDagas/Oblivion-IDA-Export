_DWORD *__thiscall sub_90D810(_DWORD *this, char a2)
{
  *this = &off_A9C990;
  sub_940E30(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      6);
  return this;
}
