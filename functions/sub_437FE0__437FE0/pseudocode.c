IOTask *__thiscall sub_437FE0(IOTask *this, int arg0, unsigned __int8 a2)
{
  sub_436500(this, a2); /*0x437fe8*/
  *((_DWORD *)this + 6) = 0; /*0x437ff3*/
  *((_DWORD *)this + 7) = 0; /*0x437ff6*/
  *((_DWORD *)this + 8) = arg0; /*0x437ff9*/
  *((_DWORD *)this + 9) = 0; /*0x437ffc*/
  *((_DWORD *)this + 0xA) = 0; /*0x437fff*/
  *((_DWORD *)this + 0xB) = 0; /*0x438002*/
  *((_DWORD *)this + 0xC) = 0; /*0x438005*/
  this->vtbl = &QueuedCreature::`vftable'; /*0x438008*/
  return this; /*0x438010*/
}
