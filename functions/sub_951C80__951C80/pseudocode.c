int __thiscall sub_951C80(float *this, int a2, int a3, _OWORD *a4, float a5, int a6, int a7, int a8, int a9)
{
  __int128 v9; // xmm0

  *(_OWORD *)this = *a4; /*0x951c98*/
  *((_OWORD *)this + 1) = a4[1]; /*0x951c9f*/
  *((_OWORD *)this + 2) = a4[2]; /*0x951ca7*/
  v9 = a4[3]; /*0x951cab*/
  *(this + 0x14) = a5 * a5; /*0x951caf*/
  *((_DWORD *)this + 0x15) = a2; /*0x951cb5*/
  *((_DWORD *)this + 0x16) = a3; /*0x951cc2*/
  *((_OWORD *)this + 3) = v9; /*0x951cc8*/
  *((_DWORD *)this + 0x18) = a6; /*0x951cd2*/
  *((_DWORD *)this + 0x19) = a7; /*0x951cd8*/
  *((__m128 *)this + 4) = _mm_shuffle_ps((__m128)LODWORD(a5), (__m128)LODWORD(a5), 0); /*0x951ce2*/
  *(this + 0x17) = 0.0; /*0x951ce6*/
  *((_DWORD *)this + 0x1A) = a8; /*0x951ced*/
  *((_DWORD *)this + 0x1B) = a9; /*0x951cf0*/
  return a9; /*0x951cf3*/
}
