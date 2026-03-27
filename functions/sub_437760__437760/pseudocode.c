IOTask *__thiscall sub_437760(IOTask *this, int arg0, int a3, unsigned __int8 a2)
{
  sub_436500(this, a2);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  this->vtbl = &QueuedMagicItem::`vftable';
  *((_DWORD *)this + 8) = arg0;
  *((_DWORD *)this + 9) = a3;
  return this;
}
