float *__stdcall sub_60CFE0(float *a1, int a2, int a3)
{
  float y; // edx
  float z; // ecx

  y = g_zeroNiPoint3.y; /*0x60cfea*/
  *a1 = g_zeroNiPoint3.x; /*0x60cff0*/
  z = g_zeroNiPoint3.z; /*0x60cff2*/
  a1[1] = y; /*0x60cff8*/
  a1[2] = z; /*0x60cffb*/
  return a1; /*0x60cffe*/
}
