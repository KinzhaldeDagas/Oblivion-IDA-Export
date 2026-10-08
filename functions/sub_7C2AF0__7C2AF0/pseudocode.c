IOTask *__thiscall sub_7C2AF0(IOTask *this, const char *a2)
{
  sub_436FA0(this, 2u); /*0x7c2b1b*/
  this->vtbl = &GrassLoadTask::`vftable'; /*0x7c2b2d*/
  NiStream::NiStream((NiStream *)((char *)this + 0x28)); /*0x7c2b33*/
  *((_DWORD *)this + 0xA) = &BSStream::`vftable'; /*0x7c2b38*/
  *((_DWORD *)this + 0x12D) = 0; /*0x7c2b3e*/
  *((_DWORD *)this + 0x12C) = 0; /*0x7c2b48*/
  sub_434600(this, a2); /*0x7c2b5e*/
  sub_434CB0((char **)this, 0, 1); /*0x7c2b69*/
  return this; /*0x7c2b70*/
}
