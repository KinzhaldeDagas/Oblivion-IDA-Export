int __cdecl sub_951B40(int a1, float a2, float a3, float *a4)
{
  double v4; // st7
  double v5; // st6
  int result; // eax
  int v7; // [esp+4h] [ebp+4h]
  int v8; // [esp+4h] [ebp+4h]

  v4 = a3 - a2; /*0x951b48*/
  v7 = (0x3039 - 0x3E39B193 * a1) & 0x7FFFFFFF; /*0x951b62*/
  v5 = ((double)v7 * flt_A9AFE8 + a2) * v4; /*0x951b87*/
  v8 = (0x3039 - 0x3E39B193 * v7) & 0x7FFFFFFF; /*0x951b89*/
  *a4 = v5; /*0x951b93*/
  result = (0x3039 - 0x3E39B193 * v8) & 0x7FFFFFFF; /*0x951baa*/
  a4[1] = ((double)v8 * flt_A9AFE8 + a2) * v4; /*0x951bb5*/
  a4[2] = ((double)result * flt_A9AFE8 + a2) * v4; /*0x951bc8*/
  return result; /*0x951bcd*/
}
