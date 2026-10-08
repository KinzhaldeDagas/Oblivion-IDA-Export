int __thiscall sub_8C4CA0(__m128 *this, __m128 *a2, float a3, __m128 *a4)
{
  double v4; // st7
  unsigned int v6; // ebx
  double v7; // st5
  int result; // eax
  float *v9; // eax
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  __m128 v12; // xmm0
  unsigned int v13; // [esp+18h] [ebp-38h]
  int v14; // [esp+1Ch] [ebp-34h]
  __m128 v15; // [esp+20h] [ebp-30h] BYREF
  __m128 v16; // [esp+30h] [ebp-20h] BYREF

  v4 = flt_A99378; /*0x8c4cb4*/
  a4->m128_f32[0] = flt_A99378; /*0x8c4cc2*/
  a4->m128_f32[1] = v4; /*0x8c4cc5*/
  a4->m128_f32[2] = v4; /*0x8c4cca*/
  v6 = 0; /*0x8c4cd3*/
  a4->m128_f32[3] = 0.0; /*0x8c4cd5*/
  v7 = flt_A3B888; /*0x8c4cd8*/
  a4[1].m128_f32[0] = flt_A3B888; /*0x8c4cde*/
  a4[1].m128_f32[1] = v7; /*0x8c4ce1*/
  a4[1].m128_f32[2] = v7; /*0x8c4ce4*/
  a4[1].m128_f32[3] = 0.0; /*0x8c4ce9*/
  v15.m128_f32[3] = 0.0; /*0x8c4cec*/
  v15.m128_f32[0] = v4; /*0x8c4cf2*/
  v15.m128_f32[1] = v15.m128_f32[0]; /*0x8c4cf6*/
  v15.m128_f32[2] = v15.m128_f32[0]; /*0x8c4cfa*/
  *a4 = v15; /*0x8c4d03*/
  v15.m128_f32[0] = v7; /*0x8c4d06*/
  v15.m128_f32[1] = v15.m128_f32[0]; /*0x8c4d0a*/
  v15.m128_f32[2] = v15.m128_f32[0]; /*0x8c4d0e*/
  v15.m128_f32[3] = 0.0; /*0x8c4d12*/
  a4[1] = v15; /*0x8c4d1b*/
  result = *((_DWORD *)this + 4); /*0x8c4d1f*/
  if ( *(_DWORD *)(result + 0xC) ) /*0x8c4d22*/
  {
    v14 = 0; /*0x8c4d27*/
    do /*0x8c4d91*/
    {
      v9 = (float *)(v14 + *(_DWORD *)(result + 0x18)); /*0x8c4d2e*/
      v10 = *(this + 2); /*0x8c4d38*/
      v15.m128_f32[0] = *v9; /*0x8c4d3c*/
      v15.m128_f32[1] = v9[1]; /*0x8c4d48*/
      v15.m128_f32[2] = v9[2]; /*0x8c4d54*/
      v15 = _mm_mul_ps(v10, v15); /*0x8c4d60*/
      hkTransform_TransformPosition(&v16, a2, &v15); /*0x8c4d65*/
      v11 = v16; /*0x8c4d6a*/
      v14 += 0xC; /*0x8c4d72*/
      *a4 = _mm_min_ps(*a4, v16); /*0x8c4d7a*/
      a4[1] = _mm_max_ps(a4[1], v11); /*0x8c4d84*/
      result = *((_DWORD *)this + 4); /*0x8c4d88*/
      ++v6; /*0x8c4d8b*/
    }
    while ( v6 < *(_DWORD *)(result + 0xC) ); /*0x8c4d91*/
  }
  *(float *)&v13 = *((float *)this + 0xC) + a3; /*0x8c4da1*/
  v12 = _mm_shuffle_ps((__m128)v13, (__m128)v13, 0); /*0x8c4dab*/
  *a4 = _mm_sub_ps(*a4, v12); /*0x8c4db2*/
  a4[1] = _mm_add_ps(a4[1], v12); /*0x8c4dbc*/
  return result; /*0x8c4dc0*/
}
