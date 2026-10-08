float *__cdecl sub_4BFBD0(float *a1, float a2, float *a3)
{
  int v4; // ecx

  *a1 = *a3; /*0x4bfbda*/
  a1[1] = a3[1]; /*0x4bfbdf*/
  v4 = *((_DWORD *)a3 + 3); /*0x4bfbe5*/
  a1[2] = a3[2]; /*0x4bfbe8*/
  *((_DWORD *)a1 + 3) = v4; /*0x4bfbeb*/
  *a1 = *a1 * a2; /*0x4bfbfa*/
  a1[1] = a2 * a1[1]; /*0x4bfc01*/
  a1[2] = a1[2] * a2; /*0x4bfc09*/
  a1[3] = a2 * a1[3]; /*0x4bfc0f*/
  return a1; /*0x4bfc12*/
}
