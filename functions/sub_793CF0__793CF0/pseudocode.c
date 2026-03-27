float *__thiscall sub_793CF0(float *this)
{
  double v1; // st7
  double v3; // st6
  double v4; // st6
  float v5[13]; // [esp+4h] [ebp-9Ch] BYREF
  float v6[13]; // [esp+38h] [ebp-68h] BYREF
  float v7[13]; // [esp+6Ch] [ebp-34h] BYREF

  v1 = flt_A3D65C;
  *(this + 0x1C) = flt_A3D65C;
  v3 = flt_A524B0;
  v6[0] = v3;
  v6[1] = v3;
  *this = 0.0;
  v6[2] = v3;
  *(this + 0xE) = 0.0;
  v4 = flt_A3D9A4;
  *(this + 0x1D) = 0.0;
  v6[3] = v4;
  *(this + 0x1E) = 0.0;
  v6[4] = v4;
  v6[5] = v4;
  v6[6] = 0.0;
  v6[7] = 0.0;
  v6[8] = 0.0;
  v6[9] = 0.0;
  v6[0xA] = 0.0;
  v6[0xB] = 0.0;
  v6[0xC] = 0.0;
  qmemcpy(this + 1, v6, 0x34u);
  v5[0] = 1.0;
  v5[1] = 1.0;
  v5[2] = 1.0;
  v7[0] = 1.0;
  v7[1] = 1.0;
  v7[2] = 1.0;
  v5[3] = v1;
  v5[4] = v5[3];
  v5[5] = v5[3];
  v7[3] = v5[3];
  v7[4] = v5[3];
  v7[5] = v5[3];
  v5[6] = 0.0;
  v5[7] = 0.0;
  v5[8] = 0.0;
  v5[9] = 0.0;
  v5[0xA] = 0.0;
  v5[0xB] = 0.0;
  v5[0xC] = 0.0;
  qmemcpy(this + 0xF, v5, 0x34u);
  v7[6] = 0.0;
  v7[7] = 0.0;
  v7[8] = 0.0;
  v7[9] = 0.0;
  v7[0xA] = 0.0;
  v7[0xB] = 0.0;
  v7[0xC] = 0.0;
  qmemcpy(this + 0x1F, v7, 0x34u);
  return this;
}
