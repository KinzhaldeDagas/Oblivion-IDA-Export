NiObject *__thiscall sub_73EE80(NiObject *this)
{
  sub_728770(this); /*0x73ee83*/
  *((_DWORD *)this + 0x11) = 0; /*0x73ee8a*/
  *((_WORD *)this + 0x24) = 0; /*0x73ee8d*/
  *((_DWORD *)this + 0x13) = 0; /*0x73ee91*/
  *((_DWORD *)this + 0x14) = 0; /*0x73ee94*/
  *((_DWORD *)this + 0x15) = 0; /*0x73ee97*/
  *((_DWORD *)this + 0x16) = 0; /*0x73ee9a*/
  *((_BYTE *)this + 0x40) = 0; /*0x73ee9d*/
  *((_WORD *)this + 0x17) = *((_WORD *)this + 0x17) & 0xFFF | 0x8000; /*0x73eeac*/
  this->__vftable = (NiObjectVtbl *)&NiParticlesData::`vftable'; /*0x73eeb0*/
  return this; /*0x73eeb8*/
}
