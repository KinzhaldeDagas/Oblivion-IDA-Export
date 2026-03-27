void __thiscall sub_70FD80(float *this, float a2)
{
  float v2; // [esp+0h] [ebp-8h]
  float v3; // [esp+4h] [ebp-4h]

  v2 = cos(a2);
  v3 = sin(a2);
  *this = v2;
  *(this + 1) = 0.0;
  *(this + 2) = -v3;
  *(this + 3) = 0.0;
  *(this + 4) = 1.0;
  *(this + 5) = 0.0;
  *(this + 7) = 0.0;
  *(this + 6) = v3;
  *(this + 8) = v2;
}
