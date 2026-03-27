double __thiscall sub_51AED0(float *this)
{
  float v2; // [esp+0h] [ebp-4h]

  v2 = *(this + 6) * *(this + 6) + *(this + 5) * *(this + 5) + *(this + 7) * *(this + 7);
  return (float)sqrt(v2);
}
