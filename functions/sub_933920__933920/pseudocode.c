void __thiscall sub_933920(int *this, int a2, int a3, int a4)
{
  __m128 *v4; // eax
  __m128 v5; // xmm3
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  __m128 v8; // xmm4
  __m128 v9; // xmm1
  __m128 v10; // xmm2
  __m128 v11; // xmm5
  __m128 v12; // xmm5
  __m128 v13; // xmm2
  float v14; // xmm7_4
  __m128 v15; // xmm5
  __m128 v16; // xmm0
  __m128 v17; // xmm6
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  __m128 v20; // xmm0
  double v21; // st7
  int *v22; // esi
  int v23; // ecx
  _DWORD *v24; // edx
  int v25; // edi
  int v26; // edx
  _DWORD *v27; // eax
  int v28; // eax
  _DWORD *v29; // ecx
  int v30; // edi
  int v31; // ecx
  _DWORD *v32; // edx
  int v33; // edi
  int v34; // edx
  _DWORD *v35; // eax
  float v36; // [esp+18h] [ebp-38h]
  int v37; // [esp+18h] [ebp-38h]
  int v38; // [esp+1Ch] [ebp-34h]
  float v39; // [esp+20h] [ebp-30h]
  int v40; // [esp+20h] [ebp-30h]
  int v41; // [esp+24h] [ebp-2Ch]
  __m128 *v42; // [esp+28h] [ebp-28h]
  float v43; // [esp+28h] [ebp-28h]
  int v44; // [esp+2Ch] [ebp-24h]
  __m128 *v45; // [esp+30h] [ebp-20h]
  int v46; // [esp+30h] [ebp-20h]
  int v47; // [esp+34h] [ebp-1Ch]
  int v48; // [esp+38h] [ebp-18h]
  int v49; // [esp+3Ch] [ebp-14h]
  __int64 v50; // [esp+40h] [ebp-10h]

  *(this + 2) = 0;
  v42 = (__m128 *)(*this + 0x10 * a3);
  v4 = (__m128 *)(*this + 0x10 * a2);
  v5 = _mm_sub_ps(*v42, *v4);
  v6 = _mm_mul_ps(v5, v5);
  v7 = _mm_add_ps(_mm_shuffle_ps(v6, v6, 0x4E), v6);
  v36 = v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 0xB1).m128_f32[0];
  v45 = (__m128 *)(0x10 * a4 + *this);
  v8 = _mm_sub_ps(*v45, *v42);
  v9 = _mm_mul_ps(v8, v8);
  v10 = _mm_add_ps(_mm_shuffle_ps(v9, v9, 0x4E), v9);
  v39 = v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 0xB1).m128_f32[0];
  v11 = _mm_sub_ps(*v4, *v45);
  v12 = _mm_mul_ps(v11, v11);
  v13 = _mm_add_ps(_mm_shuffle_ps(v12, v12, 0x4E), v12);
  v43 = v13.m128_f32[0] + _mm_shuffle_ps(v13, v13, 0xB1).m128_f32[0];
  v6.m128_f32[0] = _mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]);
  v13.m128_f32[0] = fsqrt(v6.m128_f32[0]);
  v14 = 3.0 - (float)((float)(v6.m128_f32[0] * (float)(1.0 / v13.m128_f32[0])) * (float)(1.0 / v13.m128_f32[0]));
  v15 = (__m128)0x3F000000u;
  v16 = (__m128)0x3F000000u;
  v16.m128_f32[0] = 0.5 * (float)(1.0 / v13.m128_f32[0]);
  v17 = v16;
  v17.m128_f32[0] = v16.m128_f32[0] * v14;
  v18 = _mm_shuffle_ps(v9, v9, 0xAA);
  v18.m128_f32[0] = v18.m128_f32[0] + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]);
  HIWORD(v50) = v18.m128_i16[3];
  *(float *)&v50 = 1.0 / fsqrt(v18.m128_f32[0]);
  v15.m128_f32[0] = (float)(0.5 * *(float *)&v50)
                  * (float)(3.0 - (float)((float)(v18.m128_f32[0] * *(float *)&v50) * *(float *)&v50));
  v19 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v8), _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v5));
  v20 = _mm_mul_ps(v19, v19);
  if ( (float)(_mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0])) >= (double)flt_A372CC )
  {
    LOWORD(v46) = a2;
    LOWORD(v50) = a2;
    v22 = this + 1;
    LOWORD(v37) = a4;
    LOWORD(v48) = a4;
    LOWORD(v40) = a3;
    HIWORD(v46) = 1;
    LOWORD(v47) = 2;
    LOWORD(v44) = 5;
    HIWORD(v40) = 3;
    LOWORD(v41) = 4;
    HIWORD(v37) = 2;
    LOWORD(v38) = 1;
    HIWORD(v48) = 5;
    LOWORD(v49) = 0;
    *(_DWORD *)((char *)&v50 + 2) = 0x30004;
    if ( *(this + 2) == (*(this + 3) & 0x3FFFFFFF) )
      sub_8A6EE0((const void **)v22, 8);
    v23 = v22[1];
    v24 = (_DWORD *)*v22;
    v24[2 * v23] = v46;
    v24[2 * v23 + 1] = v47;
    v25 = v22[1] + 1;
    v22[1] = v25;
    if ( v25 == (v22[2] & 0x3FFFFFFF) )
      sub_8A6EE0((const void **)v22, 8);
    v26 = v22[1];
    v27 = (_DWORD *)*v22;
    v27[2 * v26] = (unsigned __int16)a3;
    v27[2 * v26 + 1] = v44;
    if ( ++v22[1] == (v22[2] & 0x3FFFFFFF) )
      sub_8A6EE0((const void **)v22, 8);
    v28 = v22[1];
    v29 = (_DWORD *)*v22;
    v29[2 * v28] = v40;
    v29[2 * v28 + 1] = v41;
    v30 = v22[1] + 1;
    v22[1] = v30;
    if ( v30 == (v22[2] & 0x3FFFFFFF) )
      sub_8A6EE0((const void **)v22, 8);
    v31 = v22[1];
    v32 = (_DWORD *)*v22;
    v32[2 * v31] = v37;
    v32[2 * v31 + 1] = v38;
    v33 = v22[1] + 1;
    v22[1] = v33;
    if ( v33 == (v22[2] & 0x3FFFFFFF) )
      sub_8A6EE0((const void **)v22, 8);
    v34 = v22[1];
    v35 = (_DWORD *)*v22;
    v35[2 * v34] = v48;
    v35[2 * v34 + 1] = v49;
    if ( ++v22[1] == (v22[2] & 0x3FFFFFFF) )
      sub_8A6EE0((const void **)v22, 8);
    *(_QWORD *)(*v22 + 8 * v22[1]++) = v50;
  }
  else
  {
    if ( v39 <= (double)v43 )
      v21 = v43;
    else
      v21 = v39;
    if ( v36 > v21 )
      v21 = v36;
    if ( v36 == v21 )
    {
      sub_933870(this, a2, a3);
    }
    else if ( v39 == v21 )
    {
      sub_933870(this, a3, a4);
    }
    else if ( v43 == v21 )
    {
      sub_933870(this, a4, a2);
    }
  }
}
