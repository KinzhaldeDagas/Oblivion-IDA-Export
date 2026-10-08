IOTask *__thiscall sub_437C30(IOTask *this, int arg0, unsigned __int8 a2)
{
  sub_436500(this, a2); /*0x437c38*/
  *((_DWORD *)this + 6) = 0; /*0x437c43*/
  *((_DWORD *)this + 7) = 0; /*0x437c46*/
  this->vtbl = &QueuedReference::`vftable'; /*0x437c49*/
  *((_DWORD *)this + 8) = arg0; /*0x437c4f*/
  *((_DWORD *)this + 9) = 0; /*0x437c52*/
  *((_DWORD *)this + 0xA) = 0; /*0x437c55*/
  *((_DWORD *)this + 0xB) = 0; /*0x437c58*/
  *((_DWORD *)this + 0xC) = 0; /*0x437c5b*/
  return this; /*0x437c60*/
}
