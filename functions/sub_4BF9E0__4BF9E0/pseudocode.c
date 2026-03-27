float *__thiscall sub_4BF9E0(float *this, float *a2, float *a3)
{
  float *result; // eax
  float v4; // [esp+0h] [ebp-Ch]
  float v5; // [esp+4h] [ebp-8h]
  float v6; // [esp+8h] [ebp-4h]
  float v7; // [esp+14h] [ebp+8h]
  float v8; // [esp+14h] [ebp+8h]
  float v9; // [esp+14h] [ebp+8h]

  v4 = a3[2] * *(this + 1) - a3[1] * *(this + 2);
  v5 = *(this + 2) * *a3 - *this * a3[2];
  v6 = a3[1] * *this - *a3 * *(this + 1);
  v7 = v5 * v5 + v4 * v4 + v6 * v6;
  v8 = sqrt(v7);
  result = a2;
  if ( v8 <= (double)flt_A372CC )
  {
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
  }
  else
  {
    v9 = 1.0 / v8;
    *a2 = v9 * v4;
    a2[1] = v9 * v5;
    a2[2] = v9 * v6;
  }
  return result;
}
