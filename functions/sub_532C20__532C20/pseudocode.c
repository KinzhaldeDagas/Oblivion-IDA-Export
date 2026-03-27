float *__cdecl sub_532C20(float a1, float *a2, float *a3)
{
  float v4; // [esp+0h] [ebp-8h]
  float v5; // [esp+4h] [ebp-4h]

  v5 = cos(a1);
  v4 = sin(a1);
  *a2 = v4;
  *a3 = v5;
  return a2;
}
