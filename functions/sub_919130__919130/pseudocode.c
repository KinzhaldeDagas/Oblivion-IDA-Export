_DWORD *__thiscall sub_919130(_DWORD *this, char a2)
{
  *this = &off_A9D2A0;
  *(this + 2) = &off_A9D288;
  *(this + 8) = off_A9D280;
  sub_918F80((int)this);
  sub_949180(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this;
}
