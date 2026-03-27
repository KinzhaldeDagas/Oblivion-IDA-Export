float *__cdecl sub_6BF480(int a1, float *a2, float *a3, float *a4)
{
  double v4; // st7
  float v6; // [esp+0h] [ebp-Ch]
  float v7; // [esp+4h] [ebp-8h]
  float v8; // [esp+8h] [ebp-4h]

  v6 = a3[1] - a2[1];
  v7 = a3[2] - a2[2];
  v4 = a3[3] - a2[3];
  *a4 = v6;
  a4[1] = v7;
  v8 = v4;
  a4[2] = v8;
  return a4;
}
