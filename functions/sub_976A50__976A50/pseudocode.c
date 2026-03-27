float *__thiscall sub_976A50(float *this, float *a2, float a3)
{
  float v4; // [esp+0h] [ebp-Ch]
  float v5; // [esp+4h] [ebp-8h]
  float v6; // [esp+8h] [ebp-4h]

  v4 = *(this + 3) * a3;
  v5 = *(this + 4) * a3;
  v6 = a3 * *(this + 5);
  *a2 = *this + v4;
  a2[1] = *(this + 1) + v5;
  a2[2] = *(this + 2) + v6;
  return a2;
}
