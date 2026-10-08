IOTask *__thiscall sub_437430(IOTask *this, int arg0, unsigned __int8 a2)
{
  sub_436500(this, a2); /*0x43743a*/
  *((_DWORD *)this + 6) = 0; /*0x437445*/
  *((_DWORD *)this + 7) = 0; /*0x43744c*/
  *((_DWORD *)this + 8) = 0; /*0x43744f*/
  *((_DWORD *)this + 9) = 0; /*0x437452*/
  this->vtbl = &QueuedModel::`vftable'; /*0x437455*/
  *((_DWORD *)this + 0xA) = 0; /*0x43745b*/
  if ( arg0 ) /*0x43745e*/
  {
    *((_DWORD *)this + 0xA) = arg0; /*0x437472*/
    InterlockedIncrement((volatile LONG *)(arg0 + 4)); /*0x43747b*/
  }
  this->members.unk0C = 5; /*0x437482*/
  return this; /*0x437481*/
}
