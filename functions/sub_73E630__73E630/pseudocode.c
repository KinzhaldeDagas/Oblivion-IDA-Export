NiObject *__thiscall sub_73E630(NiObject *this)
{
  float v2; // edx
  float v3; // edx

  sub_738760(this);
  this->__vftable = (NiObjectVtbl *)&NiScreenLODData::`vftable';
  *((float *)this + 2) = Vector3_InitValue_;
  *((float *)this + 3) = *(&Vector3_InitValue_ + 1);
  v2 = dword_B3F9B0;
  *((float *)this + 5) = 0.0;
  *((float *)this + 4) = v2;
  *((float *)this + 6) = Vector3_InitValue_;
  *((float *)this + 7) = *(&Vector3_InitValue_ + 1);
  v3 = dword_B3F9B0;
  *((float *)this + 9) = 0.0;
  *((float *)this + 8) = v3;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  return this;
}
