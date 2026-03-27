long double __thiscall sub_958080(float *this, int a2)
{
  float v4; // [esp+14h] [ebp-18h]

  v4 = sub_957F30(this, a2);
  return sub_957E30(this, a2)
       + (*(float *)(a2 + 0x38) - *(float *)(a2 + 0x20)) * *(float *)(a2 + 0x10) * *(this + 3)
       + (double)*(int *)(a2 + 0x30) * *(float *)(a2 + 0x1C) * *(this + 2) * flt_A31E2C
       + v4;
}
