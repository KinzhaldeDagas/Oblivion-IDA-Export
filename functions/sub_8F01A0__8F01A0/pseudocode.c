__m128 *__thiscall sub_8F01A0(__m128 *this, __m128 *a2)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  double v6; // st7
  double v7; // st6
  unsigned int v9; // [esp+Ch] [ebp-14h]
  __m128 v10; // [esp+10h] [ebp-10h]

  this->m128_i16[3] = 1;
  this->m128_i32[2] = 0;
  this->m128_i32[0] = (__int32)&off_A9B0EC;
  *(unsigned __int64 *)((char *)&this->m128_u64[1] + 4) = a2[1].m128_u64[0];
  v3 = (double)a2[1].m128_i32[1] - fConstant_1;
  v4 = a2[1].m128_f32[3] - a2[1].m128_f32[2];
  *((float *)this + 0x14) = (double)a2[1].m128_i32[0] - fConstant_1;
  *((float *)this + 0x15) = v4;
  *((float *)this + 0x16) = v3;
  *((_DWORD *)this + 0x17) = 0;
  *(this + 5) = _mm_mul_ps(*(this + 5), *a2);
  if ( a2[1].m128_f32[2] <= (double)a2[1].m128_f32[3] )
  {
    *((float *)this + 5) = (a2[1].m128_f32[2] + a2[1].m128_f32[3]) * a2->m128_f32[1] * flt_A3D65C;
  }
  else
  {
    *((_DWORD *)this + 5) = 0xBF800000;
    *((_DWORD *)this + 0x15) = 0xBF800000;
  }
  v5 = fConstant_1;
  *(this + 2) = *a2;
  v6 = v5 / a2->m128_f32[2];
  v7 = fConstant_1 / a2->m128_f32[1];
  *((float *)this + 0xC) = fConstant_1 / a2->m128_f32[0];
  *((float *)this + 0xD) = v7;
  *((float *)this + 0xE) = v6;
  *((_DWORD *)this + 0xF) = 0;
  *(float *)&v9 = sub_92B470();
  v10 = _mm_mul_ps(_mm_shuffle_ps((__m128)v9, (__m128)v9, 0), *(this + 2));
  v10.m128_i32[1] = 0;
  *(this + 4) = v10;
  return this;
}
