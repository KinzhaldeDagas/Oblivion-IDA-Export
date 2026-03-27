float *__cdecl sub_761AE0(float *a1, float *a2, float *a3, float a4)
{
  *a1 = *a2 * a4;
  a1[1] = a2[3] * a4;
  a1[2] = a2[6] * a4;
  a1[4] = a2[1] * a4;
  a1[5] = a2[4] * a4;
  a1[6] = a2[7] * a4;
  a1[8] = a2[2] * a4;
  a1[9] = a2[5] * a4;
  a1[0xA] = a4 * a2[8];
  a1[0xC] = *a3 - CameraWorldTranslate;
  a1[0xD] = a3[1] - flt_B3F930;
  a1[0xE] = a3[2] - flt_B3F934;
  return a1;
}
