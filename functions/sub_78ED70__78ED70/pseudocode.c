void __thiscall sub_78ED70(float *this)
{
  float v1; // [esp+4h] [ebp-4h]
  float v2; // [esp+4h] [ebp-4h]
  float v3; // [esp+4h] [ebp-4h]

  v1 = *(this + 1) * *(this + 1) + *this * *this + *(this + 2) * *(this + 2);
  v2 = sqrt(v1);
  v3 = 1.0 / v2;
  *this = *this * v3;
  *(this + 1) = v3 * *(this + 1);
  *(this + 2) = v3 * *(this + 2);
}
