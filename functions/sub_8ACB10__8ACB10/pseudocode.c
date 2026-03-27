__m128 *__thiscall sub_8ACB10(__m128 *this, int a2)
{
  this->m128_i16[3] = 1;
  this->m128_i32[2] = (__int32)&hkEntityListener::`vftable';
  this->m128_i32[3] = (__int32)&hkPhantomListener::`vftable';
  *((_DWORD *)this + 0xC) = 0;
  this->m128_i32[0] = (__int32)&off_A97C08;
  this->m128_i32[2] = (__int32)off_A97BF4;
  this->m128_i32[3] = (__int32)off_A97BE0;
  *((_DWORD *)this + 0x1D) = 0;
  *((_DWORD *)this + 0x1E) = 0;
  *((_DWORD *)this + 0x1F) = 0x80000000;
  *((_DWORD *)this + 0x20) = 0;
  *((_DWORD *)this + 0x21) = 0;
  *((_DWORD *)this + 0x22) = 0x80000000;
  *((_DWORD *)this + 0x23) = 0;
  *((_DWORD *)this + 0x24) = 0;
  *((_DWORD *)this + 0x25) = 0x80000000;
  *((_DWORD *)this + 0x26) = 0;
  *((_DWORD *)this + 0x27) = 0;
  *((_DWORD *)this + 0x28) = 0x80000000;
  sub_8AC1E0(this, a2);
  return this;
}
