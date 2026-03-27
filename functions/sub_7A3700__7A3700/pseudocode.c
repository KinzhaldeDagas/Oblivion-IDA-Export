float *__thiscall sub_7A3700(float *this, int a2)
{
  double v3; // st7
  float v5; // [esp+10h] [ebp-10h]
  float v6; // [esp+24h] [ebp+4h]

  sub_78ECF0(this);
  *(this + 4) = 1.0;
  *(this + 5) = 1.0;
  *(this + 6) = flt_A30634;
  *(_DWORD *)this = &CTreeEngine::`vftable';
  *(this + 7) = 0.0;
  sub_78EAF0(this + 8);
  *((_BYTE *)this + 0x21) = 1;
  sub_7A8620((int)(this + 9));
  *(this + 0x16) = 0.0;
  *(this + 0x17) = 0.0;
  *(this + 0x19) = 0.0;
  *(this + 0x1A) = 0.0;
  *(this + 0x1B) = 0.0;
  *((_DWORD *)this + 0x1C) = 6;
  *(this + 0x1E) = 0.0;
  *(this + 0x1F) = 0.0;
  *(this + 0x20) = 0.0;
  sub_7A5B10(this + 0x21);
  *(this + 0x37) = flt_A3D65C;
  *(this + 0x38) = 1.0;
  v3 = flt_A3744C;
  *(this + 0x35) = 0.0;
  *(this + 0x39) = v3;
  *((_BYTE *)this + 0xD8) = 0;
  *((_DWORD *)this + 0x3C) = 1;
  *(this + 0x3A) = 0.0;
  *(this + 0x3B) = flt_A43328;
  sub_7A8480(this + 0x3D);
  *(this + 0x43) = flt_A41304;
  *((_DWORD *)this + 0x17) = a2;
  v5 = *(this + 0x3E) + *(this + 0x3E);
  v6 = *(this + 0x3D) * dbl_A73DD8;
  *(this + 0x40) = -v6;
  *(this + 0x41) = v6;
  *(this + 0x42) = v5;
  return this;
}
