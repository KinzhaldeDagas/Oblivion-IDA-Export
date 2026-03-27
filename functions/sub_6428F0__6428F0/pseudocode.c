IOTask *__thiscall sub_6428F0(IOTask *this, Actor *a2, Actor *a3, const char *a4)
{
  sub_436FA0(this, 0);
  *((_DWORD *)this + 0xC) = a2;
  this->vtbl = &LipTask::`vftable';
  *((_DWORD *)this + 0xA) = a3;
  *((_DWORD *)this + 0xB) = 0;
  sub_434600(this, a4);
  sub_434CB0((int **)this, 4, 0);
  return this;
}
