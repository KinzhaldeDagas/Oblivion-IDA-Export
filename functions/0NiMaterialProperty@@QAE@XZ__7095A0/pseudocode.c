NiMaterialProperty *__thiscall NiMaterialProperty::NiMaterialProperty(NiMaterialProperty *this)
{
  double v2; // st6

  NiObjectNET::NiObjectNET((NiObjectNET *)this);
  *(_DWORD *)this = &NiMaterialProperty::`vftable';
  *((float *)this + 7) = 0.0;
  *((float *)this + 8) = 0.0;
  *((float *)this + 9) = 0.0;
  *((float *)this + 0xA) = 0.0;
  *((float *)this + 0xB) = 0.0;
  *((float *)this + 0xC) = 0.0;
  *((float *)this + 0xD) = 0.0;
  *((float *)this + 0xE) = 0.0;
  *((float *)this + 0xF) = 0.0;
  *((float *)this + 0x10) = 0.0;
  *((float *)this + 0x11) = 0.0;
  *((float *)this + 0x12) = 0.0;
  v2 = flt_A3D65C;
  *((float *)this + 9) = flt_A3D65C;
  *((float *)this + 8) = v2;
  *((float *)this + 7) = v2;
  *((float *)this + 0xC) = v2;
  *((float *)this + 0xB) = v2;
  *((float *)this + 0xA) = v2;
  *((float *)this + 0xF) = 0.0;
  *((float *)this + 0xE) = 0.0;
  *((float *)this + 0xD) = 0.0;
  *((float *)this + 0x12) = 0.0;
  *((float *)this + 0x11) = 0.0;
  *((float *)this + 0x10) = 0.0;
  *((float *)this + 0x13) = flt_A46B10;
  *((float *)this + 0x14) = 1.0;
  *((_DWORD *)this + 6) = InterlockedIncrement(&dword_B25AF4);
  *((_DWORD *)this + 0x15) = 1;
  *((_DWORD *)this + 0x16) = 0;
  return this;
}
