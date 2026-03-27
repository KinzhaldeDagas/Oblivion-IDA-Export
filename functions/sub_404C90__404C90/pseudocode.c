double __thiscall sub_404C90(float *this)
{
  float v2; // [esp+0h] [ebp-4h]

  v2 = *(this + 1) * *(this + 1) + *this * *this + *(this + 2) * *(this + 2);
  return (float)sqrt(v2);
}
