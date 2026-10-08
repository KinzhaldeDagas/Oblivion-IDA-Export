float *__thiscall sub_4BFB30(float *this, float *a2, float *a3)
{
  int v4; // edx
  int v5; // ecx

  *a2 = *this; /*0x4bfb36*/
  a2[1] = *(this + 1); /*0x4bfb3b*/
  v4 = *((_DWORD *)this + 2); /*0x4bfb3e*/
  v5 = *((_DWORD *)this + 3); /*0x4bfb41*/
  *((_DWORD *)a2 + 2) = v4; /*0x4bfb44*/
  *((_DWORD *)a2 + 3) = v5; /*0x4bfb47*/
  *a2 = *a2 + *a3; /*0x4bfb52*/
  a2[1] = a3[1] + a2[1]; /*0x4bfb5a*/
  a2[2] = a3[2] + a2[2]; /*0x4bfb63*/
  a2[3] = a3[3] + a2[3]; /*0x4bfb6c*/
  return a2; /*0x4bfb6f*/
}
