IOTask *__thiscall sub_4371A0(IOTask *this, int arg0, unsigned __int8 a2)
{
  sub_436500(this, a2);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  this->vtbl = &QueuedTexture::`vftable';
  *((_DWORD *)this + 0xA) = 0;
  if ( arg0 )
  {
    *((_DWORD *)this + 0xA) = arg0;
    InterlockedIncrement((volatile LONG *)(arg0 + 4));
  }
  this->members.unk0C = 5;
  return this;
}
