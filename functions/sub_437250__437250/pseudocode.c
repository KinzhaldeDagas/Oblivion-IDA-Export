IOTask *__thiscall sub_437250(IOTask *this, const char *arg0, unsigned __int8 a2, void *a4, char a5, char a6, char a7)
{
  IOTask *result; // eax

  sub_436500(this, a2); /*0x43727e*/
  *((_DWORD *)this + 6) = 0; /*0x437285*/
  *((_DWORD *)this + 7) = 0; /*0x437288*/
  *((_DWORD *)this + 8) = 0; /*0x43728b*/
  *((_DWORD *)this + 9) = 0; /*0x43728e*/
  this->vtbl = &QueuedModel::`vftable'; /*0x437291*/
  *((_DWORD *)this + 0xA) = 0; /*0x43729b*/
  *((_DWORD *)this + 0xC) = a4; /*0x4372a6*/
  *((_DWORD *)this + 0xB) = 0; /*0x4372b1*/
  *((_BYTE *)this + 0x34) = 0; /*0x4372b4*/
  sub_434600(this, arg0); /*0x4372b7*/
  sub_434CB0((int **)this, 0, 1); /*0x4372c1*/
  if ( a5 ) /*0x4372ca*/
    *((_BYTE *)this + 0x34) |= 4u; /*0x4372cc*/
  else
    *((_BYTE *)this + 0x34) &= ~4u; /*0x4372d2*/
  if ( a6 ) /*0x4372da*/
    *((_BYTE *)this + 0x34) |= 1u; /*0x4372dc*/
  else
    *((_BYTE *)this + 0x34) &= ~1u; /*0x4372e2*/
  result = this; /*0x4372ea*/
  if ( a7 ) /*0x4372ec*/
    *((_BYTE *)this + 0x34) |= 2u; /*0x4372ee*/
  else
    *((_BYTE *)this + 0x34) &= ~2u; /*0x437306*/
  return result; /*0x4372f2*/
}
