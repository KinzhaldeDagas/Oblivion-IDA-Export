IOTask *__thiscall sub_437F00(IOTask *this, int arg0, unsigned __int8 a2)
{
  sub_436500(this, a2); /*0x437f08*/
  *((_DWORD *)this + 6) = 0; /*0x437f13*/
  *((_DWORD *)this + 7) = 0; /*0x437f16*/
  *((_DWORD *)this + 8) = arg0; /*0x437f19*/
  *((_DWORD *)this + 9) = 0; /*0x437f1c*/
  *((_DWORD *)this + 0xA) = 0; /*0x437f1f*/
  *((_DWORD *)this + 0xB) = 0; /*0x437f22*/
  *((_DWORD *)this + 0xC) = 0; /*0x437f25*/
  this->vtbl = &QueuedCharacter::`vftable'; /*0x437f28*/
  *((_DWORD *)this + 0xE) = 0; /*0x437f2e*/
  *((_DWORD *)this + 0xF) = 0; /*0x437f31*/
  return this; /*0x437f36*/
}
