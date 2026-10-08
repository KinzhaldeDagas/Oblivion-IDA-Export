signed int __thiscall sub_958C20(_DWORD *this, int a2, int a3, int a4, __int32 *a5)
{
  _DWORD **v5; // edx
  int v6; // esi
  int v7; // edi
  int v8; // eax
  _DWORD *v9; // ecx
  __m128 *v10; // edx
  double v11; // st7
  __m128 *v12; // ecx
  __m128 *v13; // edi
  __m128 *v14; // eax
  __m128 v15; // xmm0
  __m128 v16; // xmm1
  __m128 v17; // xmm1
  __m128 v18; // xmm0
  float v19; // xmm2_4
  float v20; // xmm3_4
  __m128 v21; // xmm0
  __m128 v22; // xmm0
  __m128 v23; // xmm0
  int v24; // eax
  int v25; // eax
  _DWORD *v26; // edx
  int v27; // eax
  _DWORD *v28; // edx
  int v30; // [esp+14h] [ebp-2Ch]
  int v31; // [esp+28h] [ebp-18h]
  _DWORD *v32; // [esp+2Ch] [ebp-14h]
  float v33; // [esp+30h] [ebp-10h]

  v5 = (_DWORD **)a2; /*0x958c29*/
  v6 = a4; /*0x958c2e*/
  v7 = *(_DWORD *)(a2 + 4); /*0x958c32*/
  v8 = 0; /*0x958c35*/
  v32 = this; /*0x958c39*/
  if ( v7 <= 0 )
  {
LABEL_9:
    v25 = 0; /*0x958de0*/
    if ( (int)*(this + 4) > 0 ) /*0x958de7*/
    {
      v26 = this + 0x3ED; /*0x958de9*/
      do /*0x958dff*/
      {
        *v26 = 0; /*0x958df0*/
        ++v25; /*0x958df9*/
        v26 += 0x14; /*0x958dfa*/
      }
      while ( v25 < *(this + 4) ); /*0x958dff*/
    }
    v27 = 0; /*0x958e04*/
    if ( (int)*(this + 2) > 0 ) /*0x958e08*/
    {
      v28 = this + 0x14; /*0x958e0a*/
      do /*0x958e1f*/
      {
        *v28 = 0; /*0x958e10*/
        ++v27; /*0x958e19*/
        v28 += 0x10; /*0x958e1a*/
      }
      while ( v27 < *(this + 2) ); /*0x958e1f*/
    }
    return a4 == v6 ? 0 : 2;
  }
  else
  {
    while ( v6 )
    {
      v9 = *v5; /*0x958c4b*/
      v10 = (__m128 *)(*v5)[v8]; /*0x958c4d*/
      v31 = v8 + 1; /*0x958c55*/
      v30 = v8 + 1 >= v7 ? *v9 : v9[v8 + 1];
      v10[2].m128_i32[0] = (__int32)v10; /*0x958c6b*/
      v11 = *(float *)&SrcStr; /*0x958c6e*/
      v10[3].m128_i32[0] = (__int32)v10; /*0x958c74*/
      v10[4].m128_i32[0] = (__int32)v10; /*0x958c77*/
      v10[2].m128_i32[2] = (__int32)&v10[3].m128_i32[1]; /*0x958c7d*/
      v10[3].m128_i32[2] = (__int32)&v10[1].m128_i32[1]; /*0x958c83*/
      v10[1].m128_i32[2] = (__int32)&v10[2].m128_i32[1]; /*0x958c89*/
      v10[1].m128_i32[1] = **(_DWORD **)(v6 + 4); /*0x958c91*/
      v10[2].m128_i32[1] = *(_DWORD *)v6; /*0x958c95*/
      v10[3].m128_i32[1] = *a5; /*0x958c9c*/
      *(_DWORD *)(v6 + 8) = (char *)v10 + 0x14; /*0x958ca2*/
      v10[1].m128_i32[3] = v6; /*0x958ca5*/
      *(_DWORD *)(v30 + 0x2C) = (char *)v10 + 0x34; /*0x958ca8*/
      v12 = (__m128 *)v10[2].m128_i32[1]; /*0x958cab*/
      v13 = (__m128 *)v10[1].m128_i32[1]; /*0x958cad*/
      v14 = (__m128 *)v10[3].m128_i32[1]; /*0x958caf*/
      v10[3].m128_i32[3] = v30 + 0x24; /*0x958cb4*/
      v15 = _mm_sub_ps(*v13, *v12); /*0x958cc0*/
      v16 = _mm_sub_ps(*v12, *v14); /*0x958cc3*/
      v17 = _mm_sub_ps( /*0x958ce8*/
              _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0xC9), _mm_shuffle_ps(v16, v16, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0xD2), _mm_shuffle_ps(v16, v16, 0xC9)));
      v18 = _mm_mul_ps(v17, v17); /*0x958cee*/
      *v10 = v17; /*0x958d15*/
      if ( (float)(_mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0] /*0x958d1d*/
                 + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0])) == v11 )
        break; /*0x958d1d*/
      v19 = _mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0]; /*0x958d2a*/
      v20 = _mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0]; /*0x958d31*/
      v33 = 1.0 / fsqrt(v20 + v19); /*0x958d45*/
      v21 = (__m128)0x3F000000u; /*0x958d72*/
      v21.m128_f32[0] = (float)(0.5 * v33) * (float)(3.0 - (float)((float)((float)(v20 + v19) * v33) * v33)); /*0x958d7c*/
      v22 = _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v17); /*0x958d8a*/
      *v10 = v22; /*0x958d8d*/
      v23 = _mm_mul_ps(v22, *v13); /*0x958d93*/
      v10[1].m128_f32[0] = _mm_shuffle_ps(v23, v23, 0xAA).m128_f32[0] /*0x958db8*/
                         + (float)(_mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0]);
      v24 = **(_DWORD **)(v6 + 4); /*0x958dbe*/
      v6 = *(_DWORD *)(v24 + 0x30); /*0x958dc0*/
      v5 = (_DWORD **)a2; /*0x958dc3*/
      *(_DWORD *)(v24 + 0x30) = 0; /*0x958dc6*/
      v8 = v31; /*0x958dcd*/
      v7 = *(_DWORD *)(a2 + 4); /*0x958dd1*/
      if ( v31 >= v7 ) /*0x958dd6*/
      {
        this = v32; /*0x958ddc*/
        goto LABEL_9; /*0x958ddc*/
      }
    }
    return 2; /*0x958e3a*/
  }
}
