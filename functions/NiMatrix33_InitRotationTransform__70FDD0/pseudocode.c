void __thiscall NiMatrix33_InitRotationTransform(float *this, float a2)
{
  float v2; // [esp+0h] [ebp-8h]
  float v3; // [esp+4h] [ebp-4h]

  v2 = cos(a2);
  v3 = sin(a2);
  *this = v2;
  *(this + 1) = v3;
  *(this + 2) = 0.0;
  *(this + 3) = -v3;
  *(this + 4) = v2;
  *(this + 5) = 0.0;
  *(this + 6) = 0.0;
  *(this + 7) = 0.0;
  *(this + 8) = 1.0;
}
