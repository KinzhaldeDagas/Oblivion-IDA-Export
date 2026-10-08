// Returns sqrt(x*x + y*y + z*z) for the three-float NiPoint3 value. Fallout's related NiPoint3 helpers corroborate the engine type; behavior verified here.
double __thiscall NiPoint3_Length(float *this)
{
  float v2; // [esp+0h] [ebp-4h]

  v2 = *(this + 1) * *(this + 1) + *this * *this + *(this + 2) * *(this + 2); /*0x404ca9*/
  return (float)sqrt(v2); /*0x404cbb*/
}
