_DWORD *__thiscall sub_8ABCB0(_DWORD *this, char a2)
{
  sub_8DE8B0(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x2E);
  return this;
}
