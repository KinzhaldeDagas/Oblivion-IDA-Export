float *__cdecl sub_95A280(float *a1, float a2, float *a3)
{
  int v4; // ecx
  double v5; // st7

  v4 = *((_DWORD *)a3 + 1); /*0x95a28a*/
  *a1 = *a3; /*0x95a28d*/
  v5 = *a1; /*0x95a28f*/
  *((_DWORD *)a1 + 1) = v4; /*0x95a295*/
  *a1 = v5 * a2; /*0x95a29e*/
  a1[1] = a2 * a1[1]; /*0x95a2a3*/
  return a1; /*0x95a2a6*/
}
