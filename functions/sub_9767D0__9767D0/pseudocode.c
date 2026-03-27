float *__thiscall sub_9767D0(
        float *this,
        int a2,
        float *a3,
        float *a4,
        float *a5,
        float a6,
        float a7,
        float a8,
        int a9)
{
  double v10; // st7
  double v11; // st7
  float v13; // [esp+14h] [ebp-Ch]
  float v14; // [esp+14h] [ebp-Ch]
  float v15; // [esp+18h] [ebp-8h]
  float v16; // [esp+18h] [ebp-8h]
  float v17; // [esp+1Ch] [ebp-4h]
  float v18; // [esp+1Ch] [ebp-4h]

  sub_96F0E0(this, a6, a7, a8, a9);
  *(_DWORD *)this = &NiSphereTriIntersector::`vftable';
  *((_DWORD *)this + 0xE) = a2;
  *(this + 0xF) = *a3;
  *(this + 0x10) = a3[1];
  *(this + 0x11) = a3[2];
  v13 = *a4 - *a3;
  v15 = a4[1] - a3[1];
  v10 = a4[2] - a3[2];
  *(this + 0x12) = v13;
  *(this + 0x13) = v15;
  v17 = v10;
  *(this + 0x14) = v17;
  v14 = *a5 - *a3;
  v16 = a5[1] - a3[1];
  v11 = a5[2] - a3[2];
  *(this + 0x15) = v14;
  *(this + 0x16) = v16;
  v18 = v11;
  *(this + 0x17) = v18;
  *(this + 0x18) = 1.0 / (*(float *)(a2 + 0x10) * *(float *)(a2 + 0x10));
  *(this + 0x19) = flt_A7DEB4;
  *(this + 0x1A) = flt_A7DEB4;
  return this;
}
