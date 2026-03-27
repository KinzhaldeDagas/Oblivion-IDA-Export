_WORD *__thiscall sub_9554E0(_WORD *this, int a2, int a3, int a4)
{
  _WORD *result; // eax
  __int32 v5; // edx
  __m128 *v6; // ecx
  __m128 v7; // xmm0
  float v8; // xmm2_4
  float v9; // xmm5_4
  __m128 v10; // xmm0

  result = this;
  *(this + 3) = 1;
  *(_DWORD *)this = &off_AA352C;
  *((_DWORD *)this + 0x10) = 0x3F000000;
  *((_DWORD *)this + 0x12) = 0x3F800000;
  *((_DWORD *)this + 0x18) = 4;
  *((_DWORD *)this + 0x11) = 0x3E4CCCCD;
  *((_DWORD *)this + 0x14) = 0x3E4CCCCD;
  *((_DWORD *)this + 0x15) = 0x3E4CCCCD;
  *((_DWORD *)this + 0x16) = 0x3D4CCCCD;
  *((_DWORD *)this + 0x17) = 0;
  dword_BA9810 = 0x3F800000;
  dword_BA9814 = 0;
  dword_BA9818 = 0;
  dword_BA981C = 0;
  dword_BA9830 = 0;
  dword_BA9834 = 0x3F800000;
  dword_BA9838 = 0;
  dword_BA983C = 0;
  dword_BA9850 = 0;
  dword_BA9854 = 0;
  dword_BA9858 = 0x3F800000;
  dword_BA985C = 0;
  dword_BA9820 = 0;
  dword_BA9840 = 0;
  dword_BA9860 = 0;
  dword_BA9870 = 0;
  dword_BA9874 = 0x3F800000;
  dword_BA9878 = 0x3F800000;
  dword_BA987C = 0;
  dword_BA9890 = 0x3F800000;
  dword_BA9894 = 0;
  dword_BA9898 = 0x3F800000;
  dword_BA989C = 0;
  dword_BA98B0 = 0x3F800000;
  dword_BA98B4 = 0x3F800000;
  dword_BA98B8 = 0;
  dword_BA98BC = 0;
  dword_BA9880 = 0x3E4CCCCD;
  dword_BA98A0 = 0x3E4CCCCD;
  dword_BA98C0 = 0x3E4CCCCD;
  dword_BA98D0 = 0;
  dword_BA98D4 = 0x3F800000;
  dword_BA98D8 = 0xBF800000;
  dword_BA98DC = 0;
  dword_BA98F0 = 0x3F800000;
  dword_BA98F4 = 0;
  dword_BA98F8 = 0xBF800000;
  dword_BA98FC = 0;
  dword_BA9910 = 0x3F800000;
  dword_BA9914 = 0xBF800000;
  dword_BA9918 = 0;
  dword_BA991C = 0;
  dword_BA98E0 = 0x3E800000;
  dword_BA9900 = 0x3E800000;
  dword_BA9920 = 0x3E800000;
  dword_BA9930 = 0x3F800000;
  dword_BA9934 = 0x3F800000;
  dword_BA9938 = 0x3F800000;
  dword_BA993C = 0;
  dword_BA9950 = 0x3F800000;
  dword_BA9954 = 0x3F800000;
  dword_BA9958 = 0xBF800000;
  dword_BA995C = 0;
  dword_BA9970 = 0x3F800000;
  dword_BA9974 = 0xBF800000;
  dword_BA9978 = 0xBF800000;
  dword_BA997C = 0;
  dword_BA9990 = 0x3F800000;
  dword_BA9994 = 0xBF800000;
  dword_BA9998 = 0xBF800000;
  dword_BA999C = 0;
  dword_BA9940 = 0x3E99999A;
  dword_BA9960 = 0x3EA3D70A;
  dword_BA9980 = 0x3EA3D70A;
  dword_BA99A0 = 0x3EAE147B;
  v5 = 0;
  v6 = (__m128 *)&dword_BA9810;
  do
  {
    v7 = _mm_mul_ps(*v6, *v6);
    v7.m128_f32[0] = _mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0]
                   + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]);
    v8 = 1.0 / fsqrt(v7.m128_f32[0]);
    v9 = 3.0 - (float)((float)(v7.m128_f32[0] * v8) * v8);
    v10 = (__m128)0x3F000000u;
    v10.m128_f32[0] = (float)(0.5 * v8) * v9;
    *v6 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), *v6);
    v6[1].m128_i32[1] = v5;
    v6 += 2;
    ++v5;
  }
  while ( (int)v6 < (int)xmmword_BA99B0 );
  *((_DWORD *)result + 0x10) = *(_DWORD *)a2;
  *((_DWORD *)result + 0x11) = *(_DWORD *)(a2 + 4);
  *((_DWORD *)result + 0x12) = *(_DWORD *)(a2 + 8);
  *((_OWORD *)result + 5) = *(_OWORD *)(a2 + 0x10);
  *((_DWORD *)result + 0x18) = *(_DWORD *)(a2 + 0x20);
  *((_DWORD *)result + 4) = a3;
  *((_DWORD *)result + 2) = a4;
  *((_DWORD *)result + 3) = 0;
  return result;
}
