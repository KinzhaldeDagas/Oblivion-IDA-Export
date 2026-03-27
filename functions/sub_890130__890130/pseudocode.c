float *__thiscall sub_890130(float *this, _OWORD *a2, float a3, float a4)
{
  double v4; // st6
  float v6; // [esp+Ch] [ebp-10h]
  float v7; // [esp+10h] [ebp-Ch]

  *(_DWORD *)this = &bhkCharacterListener::`vftable';
  *((_OWORD *)this + 1) = *a2;
  v6 = cos(a3);
  *(this + 8) = v6;
  *(this + 1) = 0.0;
  *(this + 0x16) = a4;
  *((_DWORD *)this + 9) = 0x1F;
  v4 = flt_A96588;
  *(this + 0xA) = 0.0;
  *(this + 0x15) = v4;
  *((_OWORD *)this + 3) = 0;
  *(this + 0x14) = v4;
  *((_BYTE *)this + 0x60) = 0;
  *(this + 0x19) = 0.0;
  *((_BYTE *)this + 0x61) = 0;
  v7 = sin(a3);
  *(this + 0x17) = a4 / v7 * v6;
  return this;
}
