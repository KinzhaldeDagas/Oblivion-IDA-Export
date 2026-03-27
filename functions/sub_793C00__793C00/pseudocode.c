float *__thiscall sub_793C00(float *this, float *a2)
{
  float *result; // eax
  float v3; // [esp+4h] [ebp+4h]

  result = a2;
  *(this + 6) = *a2;
  v3 = a2[1];
  *(this + 7) = v3;
  *(this + 8) = v3 * (result[6] * dbl_A49310);
  *(this + 9) = result[6] * dbl_A3F418 * *(this + 6);
  *(this + 1) = result[6];
  return result;
}
