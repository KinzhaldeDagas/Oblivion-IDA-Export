float *__thiscall sub_775F60(float *this, float *a2, float a3)
{
  int v4; // edx
  int v5; // ecx

  *a2 = *this; /*0x775f66*/
  v4 = *((_DWORD *)this + 1); /*0x775f68*/
  v5 = *((_DWORD *)this + 2); /*0x775f6b*/
  *((_DWORD *)a2 + 1) = v4; /*0x775f6e*/
  *((_DWORD *)a2 + 2) = v5; /*0x775f71*/
  *a2 = *a2 * a3; /*0x775f80*/
  a2[1] = a3 * a2[1]; /*0x775f87*/
  a2[2] = a3 * a2[2]; /*0x775f8d*/
  return a2; /*0x775f90*/
}
