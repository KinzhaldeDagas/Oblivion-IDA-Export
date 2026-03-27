_DWORD *__thiscall sub_536060(_DWORD *this, int a2)
{
  _DWORD v4[8]; // [esp-4h] [ebp-20h] BYREF

  v4[3] = this;
  *this = &bhkEntityListener::`vftable';
  v4[7] = 0;
  v4[4] = v4;
  sub_532DF0(this + 3, 0);
  *(this + 1) = a2;
  *((_BYTE *)this + 8) = 1;
  return this;
}
