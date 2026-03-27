float *__cdecl sub_4BFBD0(float *a1, float a2, float *a3)
{
  int v4; // ecx

  *a1 = *a3;
  a1[1] = a3[1];
  v4 = *((_DWORD *)a3 + 3);
  a1[2] = a3[2];
  *((_DWORD *)a1 + 3) = v4;
  *a1 = *a1 * a2;
  a1[1] = a2 * a1[1];
  a1[2] = a1[2] * a2;
  a1[3] = a2 * a1[3];
  return a1;
}
