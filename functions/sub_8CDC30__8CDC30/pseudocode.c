int *__thiscall sub_8CDC30(int *this, char a2)
{
  sub_8CDAA0(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x2E);
  return this;
}
