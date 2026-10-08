IOTask *__thiscall sub_4371A0(IOTask *this, int arg0, unsigned __int8 a2)
{
  sub_436500(this, a2); /*0x4371d0*/
  *((_DWORD *)this + 6) = 0; /*0x4371d7*/
  *((_DWORD *)this + 7) = 0; /*0x4371da*/
  *((_DWORD *)this + 8) = 0; /*0x4371dd*/
  *((_DWORD *)this + 9) = 0; /*0x4371e0*/
  this->vtbl = &QueuedTexture::`vftable'; /*0x4371e3*/
  *((_DWORD *)this + 0xA) = 0; /*0x4371ed*/
  if ( arg0 ) /*0x4371fd*/
  {
    *((_DWORD *)this + 0xA) = arg0; /*0x437221*/
    InterlockedIncrement((volatile LONG *)(arg0 + 4)); /*0x43722a*/
  }
  this->members.unk0C = 5; /*0x437230*/
  return this; /*0x437239*/
}
