int *__thiscall sub_478730(int *this, int a2, _DWORD *a3)
{
  _memset(this, 0, 0x154);
  _memset(dword_B33C80, 0, 0x100);
  *(this + 0x54) = a2;
  if ( a3 )
    sub_478070(this, a3);
  return this;
}
