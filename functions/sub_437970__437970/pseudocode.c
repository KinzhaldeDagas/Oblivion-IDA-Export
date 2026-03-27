IOTask *__thiscall sub_437970(IOTask *this, int arg0, unsigned __int8 a2)
{
  sub_436500(this, a2);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  this->vtbl = &QueuedHead::`vftable';
  *((_DWORD *)this + 8) = arg0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 0xA) = 0;
  return this;
}
