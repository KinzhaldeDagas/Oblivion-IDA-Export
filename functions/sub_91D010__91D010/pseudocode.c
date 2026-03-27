char *__thiscall sub_91D010(char *this, char a2)
{
  sub_91CE50(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(char *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this;
}
