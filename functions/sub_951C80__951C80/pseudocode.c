int __thiscall sub_951C80(float *this, int a2, int a3, _OWORD *a4, unsigned int a5, int a6, int a7, int a8, int a9)
{
  __int128 v9; // xmm0

  *(_OWORD *)this = *a4;
  *((_OWORD *)this + 1) = a4[1];
  *((_OWORD *)this + 2) = a4[2];
  v9 = a4[3];
  *(this + 0x14) = *(float *)&a5 * *(float *)&a5;
  *((_DWORD *)this + 0x15) = a2;
  *((_DWORD *)this + 0x16) = a3;
  *((_OWORD *)this + 3) = v9;
  *((_DWORD *)this + 0x18) = a6;
  *((_DWORD *)this + 0x19) = a7;
  *((__m128 *)this + 4) = _mm_shuffle_ps((__m128)a5, (__m128)a5, 0);
  *(this + 0x17) = 0.0;
  *((_DWORD *)this + 0x1A) = a8;
  *((_DWORD *)this + 0x1B) = a9;
  return a9;
}
