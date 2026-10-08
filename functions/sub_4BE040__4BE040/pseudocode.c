IOTask *__thiscall sub_4BE040(IOTask *this, int a2, int a3)
{
  sub_436500(this, 0); /*0x4be045*/
  *((_DWORD *)this + 6) = a2; /*0x4be052*/
  this->vtbl = &ExteriorCellLoaderTask::`vftable'; /*0x4be055*/
  *((_DWORD *)this + 7) = a3; /*0x4be05b*/
  return this; /*0x4be060*/
}
