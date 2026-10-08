_DWORD *__thiscall sub_910A40(__m128 *this, _DWORD *a2, int *a3)
{
  __m128 *v4; // ecx
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 *v8; // eax
  __m128 v9; // xmm1
  __m128 *v10; // ecx
  __m128 v11; // xmm2
  __m128 v12; // xmm3
  __m128 *v13; // eax
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __m128 v16; // xmm0
  int v17; // eax
  int v18; // ecx
  unsigned int v20; // [esp+18h] [ebp-C8h]
  int v21; // [esp+1Ch] [ebp-C4h]
  int v22; // [esp+1Ch] [ebp-C4h]
  __m128 v23; // [esp+20h] [ebp-C0h] BYREF
  __m128 v24; // [esp+30h] [ebp-B0h]
  __m128 v25; // [esp+40h] [ebp-A0h]
  int v26; // [esp+50h] [ebp-90h]
  int v27; // [esp+54h] [ebp-8Ch]
  __m128 v28; // [esp+60h] [ebp-80h] BYREF
  __m128 v29; // [esp+70h] [ebp-70h]
  __m128 v30; // [esp+80h] [ebp-60h] BYREF
  __m128 v31; // [esp+90h] [ebp-50h]
  __m128 v32; // [esp+A0h] [ebp-40h]
  __m128 v33; // [esp+B0h] [ebp-30h]
  __m128 v34; // [esp+C0h] [ebp-20h]

  sub_8F0F70((int)a2, a3, a2[0xA], 8); /*0x910a5f*/
  v4 = (__m128 *)a2[7]; /*0x910a64*/
  v5 = *v4; /*0x910a67*/
  v6 = v4[1]; /*0x910a6a*/
  v7 = v4[2]; /*0x910a6e*/
  v8 = this + 1; /*0x910a72*/
  v21 = 2; /*0x910a82*/
  do /*0x910ad4*/
  {
    *(__m128 *)((char *)v8 + (char *)&v28 - (char *)(this + 1)) = _mm_add_ps( /*0x910ac4*/
                                                                    _mm_add_ps(
                                                                      _mm_mul_ps(v5, _mm_shuffle_ps(*v8, *v8, 0)),
                                                                      _mm_mul_ps(v6, _mm_shuffle_ps(*v8, *v8, 0x55))),
                                                                    _mm_mul_ps(v7, _mm_shuffle_ps(*v8, *v8, 0xAA)));
    ++v8; /*0x910acc*/
    --v21; /*0x910ad0*/
  }
  while ( v21 ); /*0x910ad4*/
  v9 = v4[3]; /*0x910ad6*/
  v10 = (__m128 *)a2[8]; /*0x910ada*/
  v11 = v10[1]; /*0x910ae2*/
  v12 = v10[2]; /*0x910ae6*/
  v13 = this + 3; /*0x910aea*/
  v14 = _mm_add_ps(v28, v9); /*0x910af4*/
  v15 = *v10; /*0x910af7*/
  v28 = v14; /*0x910afc*/
  v22 = 6; /*0x910b05*/
  do /*0x910b54*/
  {
    *(__m128 *)((char *)v13 + (char *)&v30 - (char *)(this + 3)) = _mm_add_ps( /*0x910b44*/
                                                                     _mm_add_ps(
                                                                       _mm_mul_ps(v15, _mm_shuffle_ps(*v13, *v13, 0)),
                                                                       _mm_mul_ps(v11, _mm_shuffle_ps(*v13, *v13, 0x55))),
                                                                     _mm_mul_ps(v12, _mm_shuffle_ps(*v13, *v13, 0xAA)));
    ++v13; /*0x910b4c*/
    --v22; /*0x910b50*/
  }
  while ( v22 ); /*0x910b54*/
  v30 = _mm_add_ps(v30, v10[3]); /*0x910b65*/
  v24 = _mm_sub_ps( /*0x910ba9*/
          _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0xC9), _mm_shuffle_ps(v31, v31, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0xD2), _mm_shuffle_ps(v31, v31, 0xC9)));
  v23 = v29; /*0x910bae*/
  v25 = v31; /*0x910bb3*/
  sub_8F1310(&v23, (int)a2, (int)a3); /*0x910bb8*/
  v24 = _mm_xor_ps(v31, (__m128)xmmword_A965C0); /*0x910bcf*/
  v23 = v29; /*0x910bde*/
  v25 = v32; /*0x910bed*/
  sub_8F1310(&v23, (int)a2, (int)a3); /*0x910bf2*/
  v16 = _mm_mul_ps(_mm_sub_ps(v28, v30), v33); /*0x910c12*/
  *(float *)&v20 = _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0] /*0x910c2f*/
                 + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]);
  v23 = v28; /*0x910c37*/
  v24 = _mm_add_ps(v30, _mm_mul_ps(_mm_shuffle_ps((__m128)v20, (__m128)v20, 0), v33)); /*0x910c62*/
  v25 = v34; /*0x910c67*/
  sub_8F1790(&v23, (int)a2, (__m128 **)a3); /*0x910c6c*/
  v25 = _mm_sub_ps( /*0x910cad*/
          _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0xC9), _mm_shuffle_ps(v25, v25, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0xD2), _mm_shuffle_ps(v25, v25, 0xC9)));
  sub_8F1790(&v23, (int)a2, (__m128 **)a3); /*0x910cb2*/
  v17 = *((_DWORD *)this + 0x24); /*0x910cbf*/
  v18 = *((_DWORD *)this + 0x25); /*0x910cc5*/
  v23 = v28; /*0x910ccb*/
  v24 = v30; /*0x910cdd*/
  v26 = v17; /*0x910cec*/
  v27 = v18; /*0x910cf3*/
  v25 = v33; /*0x910cfa*/
  sub_8F1970(&v23, (int)a2, a3); /*0x910cff*/
  sub_8F0F20(*((_DWORD *)this + 0x26), *((_DWORD *)this + 0x27), (int)a3); /*0x910d13*/
  v23 = v28; /*0x910d23*/
  v24 = v30; /*0x910d35*/
  v25 = v33; /*0x910d44*/
  sub_8F1790(&v23, (int)a2, (__m128 **)a3); /*0x910d49*/
  return sub_8F0F50((int)a3); /*0x910d57*/
}
