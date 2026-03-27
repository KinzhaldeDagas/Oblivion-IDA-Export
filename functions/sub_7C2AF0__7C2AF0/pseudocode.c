IOTask *__thiscall sub_7C2AF0(IOTask *this, const char *a2)
{
  sub_436FA0(this, 2u);
  this->vtbl = &GrassLoadTask::`vftable';
  NiStream::NiStream((NiStream *)((char *)this + 0x28));
  *((_DWORD *)this + 0xA) = &BSStream::`vftable';
  *((_DWORD *)this + 0x12D) = 0;
  *((_DWORD *)this + 0x12C) = 0;
  sub_434600(this, a2);
  sub_434CB0((int **)this, 0, 1);
  return this;
}
