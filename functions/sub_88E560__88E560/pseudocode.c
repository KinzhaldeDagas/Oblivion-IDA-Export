__m128 *__thiscall sub_88E560(__m128 *this, int a2)
{
  sub_8CDCB0((char *)this, (_OWORD *)(a2 + 0x20), *(_DWORD *)a2); /*0x88e595*/
  this->m128_i32[0] = (__int32)&hkAvoidBox::`vftable'; /*0x88e59c*/
  *((_DWORD *)this + 0x28) = 0; /*0x88e5a6*/
  *((_DWORD *)this + 0x29) = 0; /*0x88e5ac*/
  *((_DWORD *)this + 0x2A) = 0x80000000; /*0x88e5b2*/
  *((_DWORD *)this + 0x2C) = 0; /*0x88e5bc*/
  *((_DWORD *)this + 0x2B) = 0; /*0x88e5c9*/
  *((_BYTE *)this + 0xFC) = 0; /*0x88e5cf*/
  *((_BYTE *)this + 0xFD) = 1; /*0x88e5d5*/
  sub_88E310(this); /*0x88e5dc*/
  return this; /*0x88e5e3*/
}
