IOTask *__thiscall sub_4BCA90(IOTask *this, unsigned __int8 a2, int a3, int a4)
{
  sub_436FA0(this, a2);
  this->vtbl = &DistantLODLoaderTask::`vftable';
  *((_DWORD *)this + 0xA) = a3;
  *((_DWORD *)this + 0xB) = a4;
  return this;
}
