int __thiscall sub_929F50(float *this, __m128 *a2, float a3, __m128 *a4)
{
  int v4; // esi
  int result; // eax
  int v6; // eax
  int v7; // edx
  int *v8; // eax
  unsigned __int16 *v9; // edx
  int v10; // edi
  int v11; // ecx
  float *v12; // eax
  float *v13; // esi
  int v14; // edi
  double v15; // st7
  float *v16; // edi
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  double v19; // st7
  __m128 v20; // xmm0
  bool v21; // cc
  __m128 v22; // xmm0
  float *v23; // [esp+18h] [ebp-78h]
  int v24; // [esp+1Ch] [ebp-74h]
  int v25; // [esp+20h] [ebp-70h]
  int v26; // [esp+24h] [ebp-6Ch]
  int *v27; // [esp+28h] [ebp-68h]
  int v28; // [esp+2Ch] [ebp-64h]
  unsigned int v29; // [esp+2Ch] [ebp-64h]
  __m128 v30; // [esp+30h] [ebp-60h] BYREF
  __m128 v31; // [esp+40h] [ebp-50h] BYREF
  __m128 v32; // [esp+50h] [ebp-40h] BYREF
  __m128 v33; // [esp+60h] [ebp-30h] BYREF
  __m128 v34; // [esp+70h] [ebp-20h] BYREF
  __m128 v35; // [esp+80h] [ebp-10h] BYREF

  a4->m128_i32[0] = 0x7F7FFFFF; /*0x929f65*/
  a4->m128_i32[1] = 0x7F7FFFFF; /*0x929f67*/
  a4->m128_i32[2] = 0x7F7FFFFF; /*0x929f6a*/
  v4 = 0; /*0x929f6e*/
  a4->m128_i32[3] = 0; /*0x929f70*/
  result = 0xFF7FFFFF; /*0x929f73*/
  a4[1].m128_i32[0] = 0xFF7FFFFF; /*0x929f78*/
  a4[1].m128_i32[1] = 0xFF7FFFFF; /*0x929f7b*/
  a4[1].m128_u64[1] = 0xFF7FFFFFLL; /*0x929f7e*/
  v23 = this; /*0x929f88*/
  v28 = 0; /*0x929f8c*/
  if ( *((int *)this + 0xA) > 0 ) /*0x929f90*/
  {
    v26 = 0; /*0x929f96*/
    do /*0x92a149*/
    {
      v6 = *((_DWORD *)this + 9); /*0x929fa0*/
      v7 = *(_DWORD *)(v6 + v26 + 0x18); /*0x929fa7*/
      v8 = (int *)(v26 + v6); /*0x929fab*/
      v27 = v8; /*0x929faf*/
      v25 = 0; /*0x929fb3*/
      if ( v7 > 0 ) /*0x929fb7*/
      {
        while ( 1 ) /*0x929fd3*/
        {
          v9 = (unsigned __int16 *)(v8[3] + v4 * v8[5]); /*0x929fd3*/
          v10 = *v8; /*0x929fd5*/
          v11 = v8[1]; /*0x929fda*/
          v24 = *v8; /*0x929fdd*/
          if ( *((_BYTE *)v8 + 0x10) == 1 ) /*0x929fe1*/
          {
            v12 = (float *)(v10 + v11 * *v9); /*0x929ff0*/
            v13 = (float *)(v10 + v11 * v9[1]); /*0x929ff2*/
            v14 = v9[2]; /*0x929ff4*/
          }
          else
          {
            v12 = (float *)(v10 + v11 * *(_DWORD *)v9); /*0x92a005*/
            v13 = (float *)(v10 + v11 * *((_DWORD *)v9 + 1)); /*0x92a007*/
            v14 = *((_DWORD *)v9 + 2); /*0x92a009*/
          }
          v15 = *v12; /*0x92a00c*/
          v16 = (float *)(v24 + v11 * v14); /*0x92a011*/
          v30.m128_i32[3] = 0; /*0x92a019*/
          v30.m128_f32[0] = v15 * v23[4]; /*0x92a024*/
          v30.m128_f32[1] = v23[5] * v12[1]; /*0x92a02e*/
          v30.m128_f32[2] = v23[6] * v12[2]; /*0x92a045*/
          hkTransform_TransformPosition(&v33, a2, &v30); /*0x92a049*/
          v17 = v33; /*0x92a04e*/
          *a4 = _mm_min_ps(*a4, v33); /*0x92a05d*/
          a4[1] = _mm_max_ps(a4[1], v17); /*0x92a067*/
          v31.m128_f32[0] = *v13 * v23[4]; /*0x92a079*/
          v31.m128_i32[3] = 0; /*0x92a07d*/
          v31.m128_f32[1] = v23[5] * v13[1]; /*0x92a08b*/
          v31.m128_f32[2] = v23[6] * v13[2]; /*0x92a099*/
          hkTransform_TransformPosition(&v34, a2, &v31); /*0x92a09d*/
          v18 = v34; /*0x92a0a2*/
          *a4 = _mm_min_ps(*a4, v34); /*0x92a0b1*/
          a4[1] = _mm_max_ps(a4[1], v18); /*0x92a0bb*/
          v19 = *v16 * v23[4]; /*0x92a0c1*/
          v32.m128_i32[3] = 0; /*0x92a0cb*/
          v32.m128_f32[0] = v19; /*0x92a0d3*/
          v32.m128_f32[1] = v16[1] * v23[5]; /*0x92a0dd*/
          v32.m128_f32[2] = v16[2] * v23[6]; /*0x92a0ed*/
          hkTransform_TransformPosition(&v35, a2, &v32); /*0x92a0f1*/
          v20 = v35; /*0x92a0f6*/
          *a4 = _mm_min_ps(*a4, v35); /*0x92a10c*/
          a4[1] = _mm_max_ps(a4[1], v20); /*0x92a116*/
          if ( ++v25 >= v27[6] ) /*0x92a124*/
            break; /*0x92a124*/
          v4 = v25; /*0x929fbf*/
          v8 = v27; /*0x929fc3*/
        }
        this = v23; /*0x92a12a*/
        v4 = 0; /*0x92a12e*/
      }
      result = v28 + 1; /*0x92a13b*/
      v21 = ++v28 < *((_DWORD *)this + 0xA); /*0x92a13f*/
      v26 += 0x30; /*0x92a145*/
    }
    while ( v21 ); /*0x92a149*/
  }
  *(float *)&v29 = a3 + *(this + 0xC); /*0x92a15a*/
  v22 = _mm_shuffle_ps((__m128)v29, (__m128)v29, 0); /*0x92a164*/
  *a4 = _mm_sub_ps(*a4, v22); /*0x92a16b*/
  a4[1] = _mm_add_ps(a4[1], v22); /*0x92a175*/
  return result; /*0x92a179*/
}
