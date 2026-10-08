_DWORD *__thiscall sub_536060(_DWORD *this, int a2)
{
  _DWORD v4[8]; // [esp-4h] [ebp-20h] BYREF

  v4[3] = this; /*0x536086*/
  *this = &bhkEntityListener::`vftable'; /*0x53608d*/
  v4[7] = 0; /*0x536096*/
  v4[4] = v4; /*0x53609e*/
  sub_532DF0(this + 3, 0); /*0x5360a8*/
  *(this + 1) = a2; /*0x5360b1*/
  *((_BYTE *)this + 8) = 1; /*0x5360b4*/
  return this; /*0x5360ba*/
}
