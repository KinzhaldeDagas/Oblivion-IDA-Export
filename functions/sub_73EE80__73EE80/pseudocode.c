NiObject *__thiscall sub_73EE80(NiObject *this)
{
  sub_728770(this);
  *((_DWORD *)this + 0x11) = 0;
  *((_WORD *)this + 0x24) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 0x15) = 0;
  *((_DWORD *)this + 0x16) = 0;
  *((_BYTE *)this + 0x40) = 0;
  *((_WORD *)this + 0x17) = *((_WORD *)this + 0x17) & 0xFFF | 0x8000;
  this->__vftable = (NiObjectVtbl *)&NiParticlesData::`vftable';
  return this;
}
