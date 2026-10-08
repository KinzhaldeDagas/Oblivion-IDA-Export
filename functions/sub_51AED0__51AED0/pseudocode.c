// TESAnimGroup movement magnitude. Computes sqrt(x*x + y*y + z*z) from movement vector floats; used by Animate In Place warning path.
double __thiscall sub_51AED0(float *this)
{
  float v2; // [esp+0h] [ebp-4h]

  v2 = *(this + 6) * *(this + 6) + *(this + 5) * *(this + 5) + *(this + 7) * *(this + 7); /*0x51aeea*/
  return (float)sqrt(v2); /*0x51aefc*/
}
