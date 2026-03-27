IOTask *__thiscall sub_4BE040(IOTask *this, int a2, int a3)
{
  sub_436500(this, 0);
  *((_DWORD *)this + 6) = a2;
  this->vtbl = &ExteriorCellLoaderTask::`vftable';
  *((_DWORD *)this + 7) = a3;
  return this;
}
