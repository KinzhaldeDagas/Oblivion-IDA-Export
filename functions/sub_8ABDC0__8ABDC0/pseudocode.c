void __thiscall sub_8ABDC0(int this, __m128 *a2, __m128 *a3, float a4)
{
  __m128 *v4; // edx
  __m128 *v6; // edi
  __int32 v7; // eax
  int v8; // ecx
  bool v9; // zf
  int v10; // ecx
  __m128 *v11; // eax
  __m128 v12; // xmm3
  __m128 v13; // xmm2
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __m128 v16; // xmm0
  int v17; // eax
  int v18; // [esp+Ch] [ebp-8h]
  unsigned int v19; // [esp+10h] [ebp-4h]

  v4 = a2; /*0x8abdc9*/
  *a3 = a2[1]; /*0x8abdd5*/
  v6 = a3 + 1; /*0x8abde1*/
  a3->m128_f32[3] = a3->m128_f32[3] - *(float *)(this + 0x58); /*0x8abde7*/
  a3[2].m128_i32[0] = *(_DWORD *)(this + 0x38); /*0x8abded*/
  a3[2].m128_i32[3] = *(_DWORD *)(this + 0x34); /*0x8abdf3*/
  *(unsigned __int64 *)((char *)a3[2].m128_u64 + 4) = *(_QWORD *)(this + 0x50); /*0x8abdf9*/
  a3[1] = 0; /*0x8abe02*/
  a3[3].m128_i32[0] = 0; /*0x8abe05*/
  v7 = a2[2].m128_i32[2]; /*0x8abe0c*/
  if ( *(_BYTE *)(v7 + 0x18) == 1 ) /*0x8abe13*/
  {
    v8 = *(_DWORD *)(v7 + 0x10); /*0x8abe19*/
    v9 = v7 + v8 == 0; /*0x8abe1c*/
    v10 = v7 + v8; /*0x8abe1c*/
    v18 = v10; /*0x8abe1e*/
    if ( !v9 ) /*0x8abe22*/
    {
      if ( *(_BYTE *)(v10 + 0x92) ) /*0x8abe28*/
      {
        sub_8ABCE0((_DWORD *)v10, a2, a3 + 1); /*0x8abe34*/
        v10 = v18; /*0x8abe39*/
      }
      else
      {
        v11 = *(__m128 **)(v10 + 0x50); /*0x8abe3f*/
        v12 = _mm_shuffle_ps((__m128)v11[6].m128_u32[3], (__m128)v11[6].m128_u32[3], 0); /*0x8abe63*/
        v13 = _mm_mul_ps(v12, _mm_sub_ps(v11[6], v11[5])); /*0x8abe6b*/
        v14 = _mm_mul_ps(v12, v11[0xA]); /*0x8abe7f*/
        v15 = _mm_sub_ps(*a2, v11[6]); /*0x8abe85*/
        *v6 = _mm_sub_ps( /*0x8abead*/
                _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xC9), _mm_shuffle_ps(v15, v15, 0xD2)),
                _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xD2), _mm_shuffle_ps(v15, v15, 0xC9)));
        *v6 = _mm_add_ps(*v6, v13); /*0x8abeb6*/
      }
      v16 = _mm_mul_ps(*v6, *a3); /*0x8abebf*/
      a3->m128_f32[3] = a3->m128_f32[3] /*0x8abeea*/
                      - (float)(_mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0]
                              + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]))
                      * a4;
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v10 + 0x50) + 8))(*(_DWORD *)(v10 + 0x50)) == 7 ) /*0x8abef8*/
        a3[3].m128_i32[0] = 2; /*0x8abefa*/
      v17 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v18 + 0x50) + 8))(*(_DWORD *)(v18 + 0x50)); /*0x8abf0a*/
      v4 = a2; /*0x8abf10*/
      if ( v17 == 6 ) /*0x8abf13*/
        a3[3].m128_i32[0] = 1; /*0x8abf15*/
    }
  }
  if ( a3->m128_f32[3] < (double)flt_A97BD8 ) /*0x8abf2a*/
  {
    *(float *)&v19 = -(*(float *)(this + 0xA8) * a3->m128_f32[3]); /*0x8abf3b*/
    *v6 = _mm_add_ps(*v6, _mm_mul_ps(_mm_shuffle_ps((__m128)v19, (__m128)v19, 0), v4[1])); /*0x8abf55*/
    a3->m128_i32[3] = 0; /*0x8abf58*/
  }
}
