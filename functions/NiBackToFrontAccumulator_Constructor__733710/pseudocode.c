NiObject *__thiscall NiBackToFrontAccumulator_Constructor(NiObject *this)
{
  NiAccumulator_Constructor(this); /*0x733713*/
  this->__vftable = (NiObjectVtbl *)&NiBackToFrontAccumulator::`vftable'; /*0x73371a*/
  *((_DWORD *)this + 6) = 0; /*0x733720*/
  *((_DWORD *)this + 4) = 0; /*0x733723*/
  *((_DWORD *)this + 5) = 0; /*0x733726*/
  *((_DWORD *)this + 3) = &NiTPointerList<NiGeometry *>::`vftable'; /*0x733729*/
  *((_DWORD *)this + 7) = 0; /*0x733730*/
  *((_DWORD *)this + 8) = 0; /*0x733733*/
  *((_DWORD *)this + 9) = 0; /*0x733736*/
  *((_DWORD *)this + 0xA) = 0; /*0x733739*/
  *((_DWORD *)this + 0xB) = 0; /*0x73373c*/
  return this; /*0x733741*/
}
