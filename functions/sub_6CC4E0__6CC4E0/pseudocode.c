float *__thiscall sub_6CC4E0(float *this)
{
  double v2; // st7

  sub_6EBA00(this);
  *(this + 7) = 0.0;
  v2 = flt_A79F00;
  *((_BYTE *)this + 0xC) = 0;
  *(this + 8) = v2;
  *((_BYTE *)this + 0xD) = 0;
  *((_BYTE *)this + 0xE) = 0;
  *(this + 5) = 0.0;
  *(this + 6) = 0.0;
  *(_DWORD *)this = &NiBlendInterpolator::`vftable';
  *((_BYTE *)this + 0xF) = 0xFF;
  *((_BYTE *)this + 0x10) = 0x80;
  *((_BYTE *)this + 0x11) = 0x80;
  *(this + 9) = -flt_A7DEB4;
  *(this + 0xA) = -flt_A7DEB4;
  *(this + 0xB) = -flt_A7DEB4;
  return this;
}
