IOTask *__thiscall sub_436FA0(IOTask *this, unsigned __int8 a2)
{
  sub_436500(this, a2); /*0x436fa8*/
  *((_DWORD *)this + 6) = 0; /*0x436faf*/
  *((_DWORD *)this + 7) = 0; /*0x436fb2*/
  *((_DWORD *)this + 8) = 0; /*0x436fb5*/
  *((_DWORD *)this + 9) = 0; /*0x436fb8*/
  this->vtbl = &QueuedFileEntry::`vftable'; /*0x436fbb*/
  return this; /*0x436fc3*/
}
