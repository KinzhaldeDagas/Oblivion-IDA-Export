_DWORD *__thiscall sub_8F62A0(_DWORD *this, char a2)
{
  sub_8F5FA0(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x12);
  return this;
}
