_DWORD *__thiscall sub_8F7EF0(_DWORD *this, char a2)
{
  sub_8F7C70(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x1C);
  return this;
}
