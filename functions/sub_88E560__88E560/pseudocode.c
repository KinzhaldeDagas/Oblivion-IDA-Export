__m128 *__thiscall sub_88E560(__m128 *this, int a2)
{
  sub_8CDCB0((char *)this, (_OWORD *)(a2 + 0x20), *(_DWORD *)a2);
  this->m128_i32[0] = (__int32)&hkAvoidBox::`vftable';
  *((_DWORD *)this + 0x28) = 0;
  *((_DWORD *)this + 0x29) = 0;
  *((_DWORD *)this + 0x2A) = 0x80000000;
  *((_DWORD *)this + 0x2C) = 0;
  *((_DWORD *)this + 0x2B) = 0;
  *((_BYTE *)this + 0xFC) = 0;
  *((_BYTE *)this + 0xFD) = 1;
  sub_88E310(this);
  return this;
}
