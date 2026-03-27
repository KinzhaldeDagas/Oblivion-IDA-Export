int __cdecl sub_951B40(int a1, float a2, float a3, float *a4)
{
  double v4; // st7
  double v5; // st6
  int result; // eax
  int v7; // [esp+4h] [ebp+4h]
  int v8; // [esp+4h] [ebp+4h]

  v4 = a3 - a2;
  v7 = (0x3039 - 0x3E39B193 * a1) & 0x7FFFFFFF;
  v5 = ((double)v7 * flt_A9AFE8 + a2) * v4;
  v8 = (0x3039 - 0x3E39B193 * v7) & 0x7FFFFFFF;
  *a4 = v5;
  result = (0x3039 - 0x3E39B193 * v8) & 0x7FFFFFFF;
  a4[1] = ((double)v8 * flt_A9AFE8 + a2) * v4;
  a4[2] = ((double)result * flt_A9AFE8 + a2) * v4;
  return result;
}
