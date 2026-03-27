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

  a4->m128_i32[0] = 0x7F7FFFFF;
  a4->m128_i32[1] = 0x7F7FFFFF;
  a4->m128_i32[2] = 0x7F7FFFFF;
  v4 = 0;
  a4->m128_i32[3] = 0;
  result = 0xFF7FFFFF;
  a4[1].m128_i32[0] = 0xFF7FFFFF;
  a4[1].m128_i32[1] = 0xFF7FFFFF;
  a4[1].m128_i32[2] = 0xFF7FFFFF;
  a4[1].m128_i32[3] = 0;
  v23 = this;
  v28 = 0;
  if ( *((int *)this + 0xA) > 0 )
  {
    v26 = 0;
    do
    {
      v6 = *((_DWORD *)this + 9);
      v7 = *(_DWORD *)(v6 + v26 + 0x18);
      v8 = (int *)(v26 + v6);
      v27 = v8;
      v25 = 0;
      if ( v7 > 0 )
      {
        while ( 1 )
        {
          v9 = (unsigned __int16 *)(v8[3] + v4 * v8[5]);
          v10 = *v8;
          v11 = v8[1];
          v24 = *v8;
          if ( *((_BYTE *)v8 + 0x10) == 1 )
          {
            v12 = (float *)(v10 + v11 * *v9);
            v13 = (float *)(v10 + v11 * v9[1]);
            v14 = v9[2];
          }
          else
          {
            v12 = (float *)(v10 + v11 * *(_DWORD *)v9);
            v13 = (float *)(v10 + v11 * *((_DWORD *)v9 + 1));
            v14 = *((_DWORD *)v9 + 2);
          }
          v15 = *v12;
          v16 = (float *)(v24 + v11 * v14);
          v30.m128_i32[3] = 0;
          v30.m128_f32[0] = v15 * v23[4];
          v30.m128_f32[1] = v23[5] * v12[1];
          v30.m128_f32[2] = v23[6] * v12[2];
          sub_88FCC0(&v33, a2, &v30);
          v17 = v33;
          *a4 = _mm_min_ps(*a4, v33);
          a4[1] = _mm_max_ps(a4[1], v17);
          v31.m128_f32[0] = *v13 * v23[4];
          v31.m128_i32[3] = 0;
          v31.m128_f32[1] = v23[5] * v13[1];
          v31.m128_f32[2] = v23[6] * v13[2];
          sub_88FCC0(&v34, a2, &v31);
          v18 = v34;
          *a4 = _mm_min_ps(*a4, v34);
          a4[1] = _mm_max_ps(a4[1], v18);
          v19 = *v16 * v23[4];
          v32.m128_i32[3] = 0;
          v32.m128_f32[0] = v19;
          v32.m128_f32[1] = v16[1] * v23[5];
          v32.m128_f32[2] = v16[2] * v23[6];
          sub_88FCC0(&v35, a2, &v32);
          v20 = v35;
          *a4 = _mm_min_ps(*a4, v35);
          a4[1] = _mm_max_ps(a4[1], v20);
          if ( ++v25 >= v27[6] )
            break;
          v4 = v25;
          v8 = v27;
        }
        this = v23;
        v4 = 0;
      }
      result = v28 + 1;
      v21 = ++v28 < *((_DWORD *)this + 0xA);
      v26 += 0x30;
    }
    while ( v21 );
  }
  *(float *)&v29 = a3 + *(this + 0xC);
  v22 = _mm_shuffle_ps((__m128)v29, (__m128)v29, 0);
  *a4 = _mm_sub_ps(*a4, v22);
  a4[1] = _mm_add_ps(a4[1], v22);
  return result;
}
