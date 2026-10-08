int __thiscall sub_9296C0(float *this, __m128 *a2, float a3, __m128 *a4)
{
  int v4; // ebx
  int result; // eax
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  int v9; // [esp+Ch] [ebp-14h]
  unsigned int v10; // [esp+Ch] [ebp-14h]
  __m128 v11; // [esp+10h] [ebp-10h] BYREF

  a4->m128_i32[0] = 0x7F7FFFFF; /*0x9296d3*/
  a4->m128_i32[1] = 0x7F7FFFFF; /*0x9296d5*/
  a4->m128_i32[2] = 0x7F7FFFFF; /*0x9296d8*/
  v4 = 0; /*0x9296db*/
  a4->m128_i32[3] = 0; /*0x9296dd*/
  result = 0xFF7FFFFF; /*0x9296e0*/
  a4[1].m128_i32[0] = 0xFF7FFFFF; /*0x9296e5*/
  a4[1].m128_i32[1] = 0xFF7FFFFF; /*0x9296e8*/
  a4[1].m128_i32[2] = 0xFF7FFFFF; /*0x9296ec*/
  a4[1].m128_i32[3] = 0; /*0x9296f1*/
  if ( *((int *)this + 5) > 0 ) /*0x9296f7*/
  {
    v9 = 0; /*0x9296f9*/
    do /*0x929741*/
    {
      hkTransform_TransformPosition(&v11, a2, (__m128 *)(v9 + *((_DWORD *)this + 4))); /*0x929712*/
      v7 = v11; /*0x929717*/
      *a4 = _mm_min_ps(*a4, v11); /*0x929726*/
      a4[1] = _mm_max_ps(a4[1], v7); /*0x929730*/
      result = *((_DWORD *)this + 5); /*0x929734*/
      ++v4; /*0x929737*/
      v9 += 0x10; /*0x92973d*/
    }
    while ( v4 < result ); /*0x929741*/
  }
  *(float *)&v10 = a3 + *(this + 0xD); /*0x92974d*/
  v8 = _mm_shuffle_ps((__m128)v10, (__m128)v10, 0); /*0x929757*/
  *a4 = _mm_sub_ps(*a4, v8); /*0x92975e*/
  a4[1] = _mm_add_ps(a4[1], v8); /*0x929768*/
  return result; /*0x92976c*/
}
