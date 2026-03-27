IOTask *__thiscall sub_437E20(IOTask *this, int arg0, unsigned __int8 a2)
{
  sub_436500(this, a2);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = arg0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  this->vtbl = &QueuedTree::`vftable';
  return this;
}
