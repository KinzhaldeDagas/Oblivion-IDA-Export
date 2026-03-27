float *__thiscall sub_4BC290(unsigned __int16 *this, float *a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  double v6; // rt0
  int v7; // [esp+0h] [ebp-4h]

  v2 = *(this + 0x12);
  v3 = *(this + 0x13);
  v4 = *(this + 0x14);
  v7 = v2;
  v6 = dbl_A2FAA0;
  *a2 = (double)v7 * v6;
  a2[1] = (double)v3 * v6;
  a2[2] = v6 * (double)v4;
  return a2;
}
