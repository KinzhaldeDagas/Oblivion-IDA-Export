NiObject *__thiscall sub_728770(NiObject *this)
{
  NiObject_constr(this);
  *((_WORD *)this + 0x17) = 0;
  *((_WORD *)this + 4) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 0xA) = 0;
  *((_WORD *)this + 0x16) = 0;
  *((_BYTE *)this + 0x30) = 0;
  *((_BYTE *)this + 0x31) = 0;
  this->__vftable = (NiObjectVtbl *)&NiGeometryData::`vftable';
  *((_DWORD *)this + 0xD) = 0;
  *((_WORD *)this + 0x17) &= 0xFFFu;
  *((_BYTE *)this + 0x3C) = 0;
  *((_BYTE *)this + 0x3D) = 0;
  *((_DWORD *)this + 0xE) = 0;
  return this;
}
