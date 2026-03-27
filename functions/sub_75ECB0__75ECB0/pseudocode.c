NiObject *__thiscall sub_75ECB0(NiObject *this, float a2, char a3, char a4, int a5)
{
  float v6; // edx

  NiObject_constr(this);
  *((float *)this + 2) = a2;
  *((_BYTE *)this + 0xC) = a3;
  this->__vftable = (NiObjectVtbl *)&NiPSysCollider::`vftable';
  *((_BYTE *)this + 0xD) = a4;
  *((_DWORD *)this + 4) = a5;
  *((float *)this + 5) = Vector3_InitValue_;
  *((float *)this + 6) = *(&Vector3_InitValue_ + 1);
  v6 = dword_B3F9B0;
  *((float *)this + 8) = 0.0;
  *((_DWORD *)this + 9) = 0;
  *((float *)this + 7) = v6;
  *((_DWORD *)this + 0xA) = 0;
  return this;
}
