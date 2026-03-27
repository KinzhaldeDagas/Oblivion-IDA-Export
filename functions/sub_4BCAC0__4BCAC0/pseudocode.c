IOTask *__thiscall sub_4BCAC0(IOTask *this, const char *a2, unsigned __int8 a3, int a4, int a5)
{
  sub_436FA0(this, a3);
  *((_DWORD *)this + 0xA) = a4;
  this->vtbl = &DistantLODLoaderTask::`vftable';
  *((_DWORD *)this + 0xB) = a5;
  sub_434600(this, a2);
  sub_434CB0((int **)this, 0, 0);
  return this;
}
