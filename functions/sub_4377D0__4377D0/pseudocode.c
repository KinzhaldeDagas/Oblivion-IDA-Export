IOTask *__thiscall sub_4377D0(IOTask *this, const char *arg0, unsigned __int8 a2)
{
  sub_436500(this, a2); /*0x4377fe*/
  *((_DWORD *)this + 6) = 0; /*0x437805*/
  *((_DWORD *)this + 7) = 0; /*0x437808*/
  *((_DWORD *)this + 8) = 0; /*0x43780b*/
  *((_DWORD *)this + 9) = 0; /*0x43780e*/
  this->vtbl = &QueuedKF::`vftable'; /*0x437811*/
  *((_DWORD *)this + 0xA) = 0; /*0x43781b*/
  *((_BYTE *)this + 0x2C) = 0; /*0x43782a*/
  sub_434600(this, arg0); /*0x43782d*/
  sub_434CB0((char **)this, 0, 1); /*0x437837*/
  return this; /*0x43783e*/
}
