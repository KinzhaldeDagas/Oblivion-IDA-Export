_WORD *__thiscall sub_9554E0(_WORD *this, int a2, int a3, int a4)
{
  _WORD *result; // eax
  __int32 v5; // edx
  __m128 *v6; // ecx
  __m128 v7; // xmm0
  float v8; // xmm2_4
  float v9; // xmm5_4
  __m128 v10; // xmm0

  result = this; /*0x9554e9*/
  *(this + 3) = 1; /*0x9554eb*/
  *(_DWORD *)this = &off_AA352C; /*0x9554f1*/
  *((_DWORD *)this + 0x10) = 0x3F000000; /*0x9554f7*/
  *((_DWORD *)this + 0x12) = 0x3F800000; /*0x9554fe*/
  *((_DWORD *)this + 0x18) = 4; /*0x955505*/
  *((_DWORD *)this + 0x11) = 0x3E4CCCCD; /*0x955511*/
  *((_DWORD *)this + 0x14) = 0x3E4CCCCD; /*0x955514*/
  *((_DWORD *)this + 0x15) = 0x3E4CCCCD; /*0x955517*/
  *((_DWORD *)this + 0x16) = 0x3D4CCCCD; /*0x95551a*/
  *((_DWORD *)this + 0x17) = 0; /*0x955521*/
  unk_BA9810 = 0x3F800000; /*0x955536*/
  unk_BA9814 = 0; /*0x955540*/
  unk_BA9818 = 0; /*0x95554a*/
  unk_BA981C = 0; /*0x955554*/
  unk_BA9830 = 0; /*0x95555e*/
  unk_BA9834 = 0x3F800000; /*0x955568*/
  unk_BA9838 = 0; /*0x955572*/
  unk_BA983C = 0; /*0x95557c*/
  unk_BA9850 = 0; /*0x955586*/
  unk_BA9854 = 0; /*0x955590*/
  unk_BA9858 = 0x3F800000; /*0x95559a*/
  unk_BA985C = 0; /*0x9555a4*/
  unk_BA9820 = 0; /*0x9555ae*/
  unk_BA9840 = 0; /*0x9555b8*/
  unk_BA9860 = 0; /*0x9555c2*/
  unk_BA9870 = 0; /*0x9555cc*/
  unk_BA9874 = 0x3F800000; /*0x9555d6*/
  unk_BA9878 = 0x3F800000; /*0x9555e0*/
  unk_BA987C = 0; /*0x9555ea*/
  unk_BA9890 = 0x3F800000; /*0x9555f4*/
  unk_BA9894 = 0; /*0x9555fe*/
  unk_BA9898 = 0x3F800000; /*0x955608*/
  unk_BA989C = 0; /*0x955612*/
  unk_BA98B0 = 0x3F800000; /*0x95561c*/
  unk_BA98B4 = 0x3F800000; /*0x955626*/
  unk_BA98B8 = 0; /*0x955630*/
  unk_BA98BC = 0; /*0x95563a*/
  unk_BA9880 = 0x3E4CCCCD; /*0x955644*/
  unk_BA98A0 = 0x3E4CCCCD; /*0x95564a*/
  unk_BA98C0 = 0x3E4CCCCD; /*0x955650*/
  unk_BA98D0 = 0; /*0x955656*/
  unk_BA98D4 = 0x3F800000; /*0x955660*/
  unk_BA98D8 = 0xBF800000; /*0x95566a*/
  unk_BA98DC = 0; /*0x955674*/
  unk_BA98F0 = 0x3F800000; /*0x95567e*/
  unk_BA98F4 = 0; /*0x955688*/
  unk_BA98F8 = 0xBF800000; /*0x955692*/
  unk_BA98FC = 0; /*0x95569c*/
  unk_BA9910 = 0x3F800000; /*0x9556a6*/
  unk_BA9914 = 0xBF800000; /*0x9556b0*/
  unk_BA9918 = 0; /*0x9556ba*/
  unk_BA991C = 0; /*0x9556c4*/
  unk_BA98E0 = 0x3E800000; /*0x9556ce*/
  unk_BA9900 = 0x3E800000; /*0x9556d8*/
  unk_BA9920 = 0x3E800000; /*0x9556e2*/
  unk_BA9930 = 0x3F800000; /*0x9556ec*/
  unk_BA9934 = 0x3F800000; /*0x9556f6*/
  unk_BA9938 = 0x3F800000; /*0x955700*/
  unk_BA993C = 0; /*0x95570a*/
  unk_BA9950 = 0x3F800000; /*0x955714*/
  unk_BA9954 = 0x3F800000; /*0x95571e*/
  unk_BA9958 = 0xBF800000; /*0x955728*/
  unk_BA995C = 0; /*0x955732*/
  unk_BA9970 = 0x3F800000; /*0x95573c*/
  unk_BA9974 = 0xBF800000; /*0x955746*/
  unk_BA9978 = 0xBF800000; /*0x955750*/
  unk_BA997C = 0; /*0x95575a*/
  unk_BA9990 = 0x3F800000; /*0x955764*/
  unk_BA9994 = 0xBF800000; /*0x95576e*/
  unk_BA9998 = 0xBF800000; /*0x955778*/
  unk_BA999C = 0; /*0x955782*/
  unk_BA9940 = 0x3E99999A; /*0x95578c*/
  unk_BA9960 = 0x3EA3D70A; /*0x955796*/
  unk_BA9980 = 0x3EA3D70A; /*0x9557a0*/
  unk_BA99A0 = 0x3EAE147B; /*0x9557aa*/
  v5 = 0; /*0x9557b4*/
  v6 = (__m128 *)&unk_BA9810; /*0x9557c4*/
  do /*0x95583a*/
  {
    v7 = _mm_mul_ps(*v6, *v6); /*0x9557d6*/
    v7.m128_f32[0] = _mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0] /*0x9557ee*/
                   + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]);
    v8 = 1.0 / fsqrt(v7.m128_f32[0]); /*0x955801*/
    v9 = 3.0 - (float)((float)(v7.m128_f32[0] * v8) * v8); /*0x955811*/
    v10 = (__m128)0x3F000000u; /*0x955815*/
    v10.m128_f32[0] = (float)(0.5 * v8) * v9; /*0x95581c*/
    *v6 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), *v6); /*0x95582a*/
    v6[1].m128_i32[1] = v5; /*0x95582d*/
    v6 += 2; /*0x955830*/
    ++v5; /*0x955833*/
  }
  while ( (int)v6 < (int)unk_BA99B0 ); /*0x95583a*/
  *((_DWORD *)result + 0x10) = *(_DWORD *)a2; /*0x955841*/
  *((_DWORD *)result + 0x11) = *(_DWORD *)(a2 + 4); /*0x955847*/
  *((_DWORD *)result + 0x12) = *(_DWORD *)(a2 + 8); /*0x95584d*/
  *((_OWORD *)result + 5) = *(_OWORD *)(a2 + 0x10); /*0x955857*/
  *((_DWORD *)result + 0x18) = *(_DWORD *)(a2 + 0x20); /*0x95585e*/
  *((_DWORD *)result + 4) = a3; /*0x955864*/
  *((_DWORD *)result + 2) = a4; /*0x955867*/
  *((_DWORD *)result + 3) = 0; /*0x95586a*/
  return result; /*0x955871*/
}
