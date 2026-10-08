IOTask *__thiscall sub_437890(IOTask *this, int arg0, unsigned __int8 a2)
{
  sub_436500(this, a2); /*0x43789a*/
  *((_DWORD *)this + 6) = 0; /*0x4378a5*/
  *((_DWORD *)this + 7) = 0; /*0x4378ac*/
  *((_DWORD *)this + 8) = 0; /*0x4378af*/
  *((_DWORD *)this + 9) = 0; /*0x4378b2*/
  this->vtbl = &QueuedKF::`vftable'; /*0x4378b5*/
  *((_DWORD *)this + 0xA) = 0; /*0x4378bb*/
  if ( arg0 ) /*0x4378be*/
  {
    *((_DWORD *)this + 0xA) = arg0; /*0x4378d2*/
    InterlockedIncrement((volatile LONG *)(arg0 + 0xC)); /*0x4378db*/
  }
  this->members.unk0C = 5; /*0x4378e2*/
  return this; /*0x4378e1*/
}
