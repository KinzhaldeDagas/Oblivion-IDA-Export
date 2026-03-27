__m128 *__thiscall sub_8E1060(__m128 *this, unsigned __int16 *a2, __m128 *a3)
{
  double v3; // st7
  int v4; // edx
  int v5; // esi
  __m128 v6; // xmm2
  int v7; // edi
  double v8; // st6
  int v9; // ecx
  __m128 v11; // xmm0
  double v12; // st5
  float v13; // [esp+18h] [ebp-18h]
  int v14; // [esp+1Ch] [ebp-14h]
  __m128 v15; // [esp+20h] [ebp-10h]

  v3 = fConstant_1 / *((float *)this + 0xC);
  v4 = *((_DWORD *)this + 0x13);
  v5 = *((_DWORD *)this + 0x16);
  v6 = *(this + 1);
  v15.m128_i32[3] = 0;
  v7 = *((_DWORD *)this + 0x19);
  v15.m128_f32[0] = (double)*(unsigned __int16 *)(v4 + 4 * a2[4]) * v3;
  v8 = fConstant_1 / *((float *)this + 0xD);
  v15.m128_f32[1] = (double)*(unsigned __int16 *)(v5 + 4 * *a2) * v8;
  v13 = fConstant_1 / *((float *)this + 0xE);
  v9 = *(unsigned __int16 *)(v7 + 4 * a2[3]);
  v15.m128_f32[2] = (double)*(unsigned __int16 *)(v7 + 4 * a2[1]) * v13;
  v11 = v15;
  v12 = (double)*(unsigned __int16 *)(v4 + 4 * a2[5]);
  v14 = *(unsigned __int16 *)(v5 + 4 * a2[2]);
  v15.m128_i32[3] = 0;
  *a3 = _mm_sub_ps(v11, v6);
  v15.m128_f32[0] = v12 * v3;
  v15.m128_f32[1] = (double)v14 * v8;
  v15.m128_f32[2] = (double)v9 * v13;
  a3[1] = _mm_sub_ps(v15, v6);
  return a3;
}
