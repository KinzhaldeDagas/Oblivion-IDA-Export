__m128 *__thiscall sub_8B9CA0(__m128 *this, int a2)
{
  float v4[7]; // [esp+10h] [ebp-20h]

  sub_8ACB10(this, a2);
  v4[0] = 0.0;
  v4[1] = 0.0;
  this->m128_i32[0] = (__int32)&ahkCharacterProxy::`vftable'{for `ahkCharacterProxy'};
  this->m128_i32[2] = (__int32)&ahkCharacterProxy::`vftable'{for `hkEntityListener'};
  v4[2] = 1.0;
  this->m128_i32[3] = (__int32)&ahkCharacterProxy::`vftable'{for `hkPhantomListener'};
  *((_DWORD *)this + 0x2C) = 0;
  v4[3] = 0.0;
  *(this + 4) = *(__m128 *)v4;
  return this;
}
