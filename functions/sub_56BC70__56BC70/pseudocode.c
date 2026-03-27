bool __thiscall sub_56BC70(float *this, float a2)
{
  float v3; // [esp+4h] [ebp+4h]

  v3 = a2 + *(this + 4);
  *(this + 4) = v3;
  return *(this + 2) >= (double)v3;
}
