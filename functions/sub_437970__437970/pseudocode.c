IOTask *__thiscall sub_437970(IOTask *this, int arg0, unsigned __int8 a2)
{
  sub_436500(this, a2); /*0x437978*/
  *((_DWORD *)this + 6) = 0; /*0x437983*/
  *((_DWORD *)this + 7) = 0; /*0x437986*/
  this->vtbl = &QueuedHead::`vftable'; /*0x437989*/
  *((_DWORD *)this + 8) = arg0; /*0x43798f*/
  *((_DWORD *)this + 9) = 0; /*0x437992*/
  *((_DWORD *)this + 0xA) = 0; /*0x437995*/
  return this; /*0x43799a*/
}
