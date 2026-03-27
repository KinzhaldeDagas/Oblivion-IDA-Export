IOTask *__thiscall sub_4377D0(IOTask *this, const char *arg0, unsigned __int8 a2)
{
  sub_436500(this, a2);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  this->vtbl = &QueuedKF::`vftable';
  *((_DWORD *)this + 0xA) = 0;
  *((_BYTE *)this + 0x2C) = 0;
  sub_434600(this, arg0);
  sub_434CB0((int **)this, 0, 1);
  return this;
}
