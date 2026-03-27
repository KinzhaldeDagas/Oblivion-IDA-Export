float *__thiscall sub_715340(float *this)
{
  float *result; // eax
  float v3; // [esp+8h] [ebp-14h]
  float v4; // [esp+8h] [ebp-14h]
  float v5; // [esp+8h] [ebp-14h]
  int v6[4]; // [esp+Ch] [ebp-10h] BYREF

  v3 = *(this + 1) * *(this + 1) + *this * *this + *(this + 2) * *(this + 2) + *(this + 3) * *(this + 3);
  v4 = sqrt(v3);
  v5 = 1.0 / v4;
  result = (float *)sub_72F930(this, (int)v6, v5);
  *this = *result;
  *(this + 1) = result[1];
  *(this + 2) = result[2];
  *(this + 3) = result[3];
  return result;
}
