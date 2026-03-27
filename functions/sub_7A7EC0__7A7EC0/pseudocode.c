float *__thiscall sub_7A7EC0(unsigned __int8 *this, float *a2)
{
  float *result; // eax
  int v3; // ecx
  double v4; // rt0
  int v5; // [esp+0h] [ebp-4h]
  int v6; // [esp+8h] [ebp+4h]

  v5 = *(this + 0x14);
  result = a2;
  v6 = *(this + 0x15);
  v3 = *(this + 0x16);
  v4 = dbl_A3DDD8;
  *result = (double)v5 / v4;
  result[1] = (double)v6 / v4;
  result[2] = (double)v3 / v4;
  return result;
}
