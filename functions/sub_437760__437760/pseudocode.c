IOTask *__thiscall sub_437760(IOTask *this, int arg0, int a3, unsigned __int8 a2)
{
  sub_436500(this, a2); /*0x437768*/
  *((_DWORD *)this + 6) = 0; /*0x437777*/
  *((_DWORD *)this + 7) = 0; /*0x43777a*/
  this->vtbl = &QueuedMagicItem::`vftable'; /*0x43777d*/
  *((_DWORD *)this + 8) = arg0; /*0x437783*/
  *((_DWORD *)this + 9) = a3; /*0x437786*/
  return this; /*0x43778b*/
}
