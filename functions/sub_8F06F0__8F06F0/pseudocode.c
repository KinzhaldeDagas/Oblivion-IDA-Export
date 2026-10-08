char __thiscall sub_8F06F0(_DWORD *this, __m128 *a2, int a3)
{
  int v3; // eax
  __m128 *v4; // edi
  __m128 v5; // xmm3
  __m128 v6; // xmm2
  __m128 v7; // xmm1
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // esi
  int v13; // ebx
  int v14; // eax
  int v15; // ecx
  double v16; // st7
  double v17; // st7
  double v18; // st7
  int v19; // eax
  int v20; // edi
  int v21; // edx
  int v22; // eax
  bool v23; // zf
  unsigned int v25; // [esp+18h] [ebp-68h]
  signed int v26; // [esp+18h] [ebp-68h]
  int v27; // [esp+18h] [ebp-68h]
  unsigned int v28; // [esp+1Ch] [ebp-64h]
  unsigned int v29; // [esp+1Ch] [ebp-64h]
  float *v30; // [esp+20h] [ebp-60h]
  unsigned int v31; // [esp+20h] [ebp-60h]
  unsigned int i; // [esp+20h] [ebp-60h]
  unsigned int v33; // [esp+24h] [ebp-5Ch]
  char v34; // [esp+28h] [ebp-58h]
  char v35; // [esp+2Ch] [ebp-54h]
  unsigned int v36; // [esp+30h] [ebp-50h]
  unsigned int v37; // [esp+34h] [ebp-4Ch]
  unsigned int v39; // [esp+38h] [ebp-48h]
  unsigned int v40; // [esp+3Ch] [ebp-44h]
  __m128 v41; // [esp+40h] [ebp-40h]
  __m128 v42; // [esp+50h] [ebp-30h]
  __m128 v43; // [esp+60h] [ebp-20h]

  v3 = *(this + 3); /*0x8f0709*/
  *(float *)&v25 = -*(float *)(v3 + 0x14); /*0x8f0724*/
  v4 = *(__m128 **)(v3 + 0x10); /*0x8f072f*/
  v5 = v4[4]; /*0x8f0739*/
  v6 = v4[3]; /*0x8f074e*/
  v42 = _mm_add_ps(_mm_shuffle_ps((__m128)v25, (__m128)v25, 0), *a2); /*0x8f0752*/
  v43 = _mm_add_ps(_mm_shuffle_ps((__m128)*(unsigned int *)(v3 + 0x14), (__m128)*(unsigned int *)(v3 + 0x14), 0), a2[1]); /*0x8f075d*/
  v7 = _mm_add_ps(_mm_mul_ps(_mm_add_ps(v42, v5), v6), (__m128)xmmword_A97DD0); /*0x8f0762*/
  v8 = (unsigned __int16)((unsigned __int32)v7.m128_i32[2] >> 6); /*0x8f0775*/
  v41 = _mm_add_ps(_mm_mul_ps(_mm_add_ps(v43, v5), v6), (__m128)xmmword_A97DD0); /*0x8f0781*/
  v9 = (unsigned __int16)((unsigned __int32)v7.m128_i32[0] >> 6); /*0x8f0790*/
  v33 = (unsigned __int16)((unsigned __int32)v41.m128_i32[2] >> 6); /*0x8f079d*/
  v10 = (unsigned __int16)((unsigned __int32)v41.m128_i32[0] >> 6); /*0x8f07a4*/
  v11 = v4->m128_i32[3] - 1; /*0x8f07a7*/
  v30 = (float *)v4; /*0x8f07aa*/
  v28 = v9; /*0x8f07ae*/
  v36 = v8; /*0x8f07b2*/
  v40 = v10; /*0x8f07b6*/
  if ( v9 < v11 || v10 < v11 ) /*0x8f07be*/
  {
    v12 = v4[1].m128_i32[0] - 1; /*0x8f07c7*/
    if ( v8 < v12 || v33 < v12 ) /*0x8f07d0*/
    {
      if ( v9 >= v11 ) /*0x8f07d8*/
      {
        v28 = 0; /*0x8f07da*/
        v9 = 0; /*0x8f07e2*/
      }
      if ( v8 >= v12 ) /*0x8f07e8*/
      {
        v36 = 0; /*0x8f07ea*/
        v8 = 0; /*0x8f07f2*/
      }
      if ( v10 >= v11 ) /*0x8f07f8*/
      {
        v10 = v4->m128_i32[3] - 2; /*0x8f07fd*/
        v40 = v10; /*0x8f0800*/
      }
      if ( v33 >= v12 ) /*0x8f0808*/
        v33 = v4[1].m128_i32[0] - 2; /*0x8f0810*/
      v26 = *(_DWORD *)(a3 + 4); /*0x8f081a*/
      if ( *((_BYTE *)this + 0x10) ) /*0x8f0822*/
      {
        v35 = 1; /*0x8f082e*/
        v34 = 1; /*0x8f0833*/
        v37 = v9; /*0x8f0838*/
        if ( v9 > v10 ) /*0x8f083c*/
          goto LABEL_32; /*0x8f083c*/
        do /*0x8f093b*/
        {
          v39 = v8; /*0x8f0846*/
          if ( v8 <= v33 ) /*0x8f084a*/
          {
            v13 = 2 * (v37 + (v8 << 0xF)); /*0x8f0859*/
            do /*0x8f091a*/
            {
              if ( *(_DWORD *)(a3 + 4) == (*(_DWORD *)(a3 + 8) & 0x3FFFFFFF) ) /*0x8f086d*/
                sub_8A6EE0((const void **)a3, 4); /*0x8f0872*/
              *(_DWORD *)(*(_DWORD *)a3 + 4 * *(_DWORD *)(a3 + 4)) = v13; /*0x8f087f*/
              v14 = *(_DWORD *)(a3 + 4) + 1; /*0x8f088b*/
              v15 = *(_DWORD *)(a3 + 8) & 0x3FFFFFFF; /*0x8f088d*/
              *(_DWORD *)(a3 + 4) = v14; /*0x8f0898*/
              if ( v14 == v15 ) /*0x8f089b*/
                sub_8A6EE0((const void **)a3, 4); /*0x8f08a0*/
              *(_DWORD *)(*(_DWORD *)a3 + 4 * (*(_DWORD *)(a3 + 4))++) = v13 | 1; /*0x8f08ad*/
              if ( v35 || v34 ) /*0x8f08c5*/
              {
                v16 = ((double (__thiscall *)(float *, unsigned int, unsigned int))*(_DWORD *)(*(_DWORD *)v30 + 0x24))( /*0x8f08dc*/
                        v30,
                        v37,
                        v39)
                    * v30[9];
                if ( v42.m128_f32[1] < v16 ) /*0x8f08ea*/
                  v35 = 0; /*0x8f08ec*/
                if ( v43.m128_f32[1] > v16 ) /*0x8f08fe*/
                  v34 = 0; /*0x8f0900*/
              }
              v13 += 0x10000; /*0x8f090e*/
              ++v39; /*0x8f0916*/
            }
            while ( v39 <= v33 ); /*0x8f091a*/
            v9 = v28; /*0x8f0920*/
            v4 = (__m128 *)v30; /*0x8f0924*/
            v10 = v40; /*0x8f0928*/
            v8 = v36; /*0x8f092c*/
          }
          ++v37; /*0x8f0937*/
        }
        while ( v37 <= v10 ); /*0x8f093b*/
        if ( v35 || v34 ) /*0x8f094f*/
        {
LABEL_32:
          v29 = v9; /*0x8f0958*/
          v31 = v10 + 1; /*0x8f095c*/
          if ( v9 <= v10 + 1 ) /*0x8f0960*/
          {
            do /*0x8f09ac*/
            {
              v17 = ((double (__thiscall *)(__m128 *, unsigned int, unsigned int))*(_DWORD *)(v4->m128_i32[0] + 0x24))( /*0x8f0974*/
                      v4,
                      v29,
                      v33 + 1)
                  * v4[2].m128_f32[1];
              if ( v42.m128_f32[1] < v17 ) /*0x8f0982*/
                v35 = 0; /*0x8f0984*/
              if ( v43.m128_f32[1] > v17 ) /*0x8f0996*/
                v34 = 0; /*0x8f0998*/
              ++v29; /*0x8f09a8*/
            }
            while ( v29 <= v31 ); /*0x8f09ac*/
            v8 = v36; /*0x8f09ae*/
          }
          for ( ; v8 <= v33 + 1; ++v8 ) /*0x8f09bd*/
          {
            v18 = ((double (__thiscall *)(__m128 *, unsigned int, unsigned int))*(_DWORD *)(v4->m128_i32[0] + 0x24))( /*0x8f09cd*/
                    v4,
                    v31,
                    v8)
                * v4[2].m128_f32[1];
            if ( v42.m128_f32[1] < v18 ) /*0x8f09db*/
              v35 = 0; /*0x8f09dd*/
            if ( v43.m128_f32[1] > v18 ) /*0x8f09ef*/
              v34 = 0; /*0x8f09f1*/
          }
          if ( v35 || (LOBYTE(v10) = v34) != 0 ) /*0x8f0a0d*/
          {
            v10 = *(_DWORD *)(a3 + 8) & 0x3FFFFFFF; /*0x8f0a1a*/
            if ( (int)v10 < v26 ) /*0x8f0a21*/
            {
              v19 = 2 * v10; /*0x8f0a23*/
              if ( v26 >= v19 ) /*0x8f0a27*/
                v19 = v26; /*0x8f0a29*/
              LOBYTE(v10) = sub_8A6E40((const void **)a3, v19, 4); /*0x8f0a2f*/
            }
            *(_DWORD *)(a3 + 4) = v26; /*0x8f0a3b*/
          }
        }
      }
      else
      {
        for ( i = v9; v9 <= v10; i = v9 ) /*0x8f0a56*/
        {
          if ( v8 <= v33 ) /*0x8f0a66*/
          {
            v20 = 2 * (v9 + (v8 << 0xF)); /*0x8f0a77*/
            v27 = v33 - v8 + 1; /*0x8f0a7a*/
            do /*0x8f0ae7*/
            {
              if ( *(_DWORD *)(a3 + 4) == (*(_DWORD *)(a3 + 8) & 0x3FFFFFFF) ) /*0x8f0a8e*/
                sub_8A6EE0((const void **)a3, 4); /*0x8f0a93*/
              *(_DWORD *)(*(_DWORD *)a3 + 4 * *(_DWORD *)(a3 + 4)) = v20; /*0x8f0aa0*/
              v21 = *(_DWORD *)(a3 + 8); /*0x8f0aa6*/
              v22 = *(_DWORD *)(a3 + 4) + 1; /*0x8f0aaa*/
              *(_DWORD *)(a3 + 4) = v22; /*0x8f0aac*/
              if ( v22 == (v21 & 0x3FFFFFFF) ) /*0x8f0abc*/
                sub_8A6EE0((const void **)a3, 4); /*0x8f0ac1*/
              *(_DWORD *)(*(_DWORD *)a3 + 4 * *(_DWORD *)(a3 + 4)) = v20 | 1; /*0x8f0ace*/
              v20 += 0x10000; /*0x8f0ad9*/
              v23 = v27 == 1; /*0x8f0adf*/
              ++*(_DWORD *)(a3 + 4); /*0x8f0ae0*/
              --v27; /*0x8f0ae3*/
            }
            while ( !v23 ); /*0x8f0ae7*/
            v9 = i; /*0x8f0ae9*/
            v10 = v40; /*0x8f0aed*/
            v8 = v36; /*0x8f0af1*/
          }
          ++v9; /*0x8f0af5*/
        }
      }
    }
  }
  return v10; /*0x8f0a4a*/
}
