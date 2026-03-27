float *__cdecl sub_95A280(float *a1, float a2, float *a3)
{
  int v4; // ecx
  double v5; // st7

  v4 = *((_DWORD *)a3 + 1);
  *a1 = *a3;
  v5 = *a1;
  *((_DWORD *)a1 + 1) = v4;
  *a1 = v5 * a2;
  a1[1] = a2 * a1[1];
  return a1;
}
