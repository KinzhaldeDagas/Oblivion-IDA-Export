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

  v3 = *(this + 3);
  *(float *)&v25 = -*(float *)(v3 + 0x14);
  v4 = *(__m128 **)(v3 + 0x10);
  v5 = v4[4];
  v6 = v4[3];
  v42 = _mm_add_ps(_mm_shuffle_ps((__m128)v25, (__m128)v25, 0), *a2);
  v43 = _mm_add_ps(_mm_shuffle_ps((__m128)*(unsigned int *)(v3 + 0x14), (__m128)*(unsigned int *)(v3 + 0x14), 0), a2[1]);
  v7 = _mm_add_ps(_mm_mul_ps(_mm_add_ps(v42, v5), v6), (__m128)xmmword_A97DD0);
  v8 = (unsigned __int16)((unsigned __int32)v7.m128_i32[2] >> 6);
  v41 = _mm_add_ps(_mm_mul_ps(_mm_add_ps(v43, v5), v6), (__m128)xmmword_A97DD0);
  v9 = (unsigned __int16)((unsigned __int32)v7.m128_i32[0] >> 6);
  v33 = (unsigned __int16)((unsigned __int32)v41.m128_i32[2] >> 6);
  v10 = (unsigned __int16)((unsigned __int32)v41.m128_i32[0] >> 6);
  v11 = v4->m128_i32[3] - 1;
  v30 = (float *)v4;
  v28 = v9;
  v36 = v8;
  v40 = v10;
  if ( v9 < v11 || v10 < v11 )
  {
    v12 = v4[1].m128_i32[0] - 1;
    if ( v8 < v12 || v33 < v12 )
    {
      if ( v9 >= v11 )
      {
        v28 = 0;
        v9 = 0;
      }
      if ( v8 >= v12 )
      {
        v36 = 0;
        v8 = 0;
      }
      if ( v10 >= v11 )
      {
        v10 = v4->m128_i32[3] - 2;
        v40 = v10;
      }
      if ( v33 >= v12 )
        v33 = v4[1].m128_i32[0] - 2;
      v26 = *(_DWORD *)(a3 + 4);
      if ( *((_BYTE *)this + 0x10) )
      {
        v35 = 1;
        v34 = 1;
        v37 = v9;
        if ( v9 > v10 )
          goto LABEL_32;
        do
        {
          v39 = v8;
          if ( v8 <= v33 )
          {
            v13 = 2 * (v37 + (v8 << 0xF));
            do
            {
              if ( *(_DWORD *)(a3 + 4) == (*(_DWORD *)(a3 + 8) & 0x3FFFFFFF) )
                sub_8A6EE0((const void **)a3, 4);
              *(_DWORD *)(*(_DWORD *)a3 + 4 * *(_DWORD *)(a3 + 4)) = v13;
              v14 = *(_DWORD *)(a3 + 4) + 1;
              v15 = *(_DWORD *)(a3 + 8) & 0x3FFFFFFF;
              *(_DWORD *)(a3 + 4) = v14;
              if ( v14 == v15 )
                sub_8A6EE0((const void **)a3, 4);
              *(_DWORD *)(*(_DWORD *)a3 + 4 * (*(_DWORD *)(a3 + 4))++) = v13 | 1;
              if ( v35 || v34 )
              {
                v16 = ((double (__thiscall *)(float *, unsigned int, unsigned int))*(_DWORD *)(*(_DWORD *)v30 + 0x24))(
                        v30,
                        v37,
                        v39)
                    * v30[9];
                if ( v42.m128_f32[1] < v16 )
                  v35 = 0;
                if ( v43.m128_f32[1] > v16 )
                  v34 = 0;
              }
              v13 += 0x10000;
              ++v39;
            }
            while ( v39 <= v33 );
            v9 = v28;
            v4 = (__m128 *)v30;
            v10 = v40;
            v8 = v36;
          }
          ++v37;
        }
        while ( v37 <= v10 );
        if ( v35 || v34 )
        {
LABEL_32:
          v29 = v9;
          v31 = v10 + 1;
          if ( v9 <= v10 + 1 )
          {
            do
            {
              v17 = ((double (__thiscall *)(__m128 *, unsigned int, unsigned int))*(_DWORD *)(v4->m128_i32[0] + 0x24))(
                      v4,
                      v29,
                      v33 + 1)
                  * v4[2].m128_f32[1];
              if ( v42.m128_f32[1] < v17 )
                v35 = 0;
              if ( v43.m128_f32[1] > v17 )
                v34 = 0;
              ++v29;
            }
            while ( v29 <= v31 );
            v8 = v36;
          }
          for ( ; v8 <= v33 + 1; ++v8 )
          {
            v18 = ((double (__thiscall *)(__m128 *, unsigned int, unsigned int))*(_DWORD *)(v4->m128_i32[0] + 0x24))(
                    v4,
                    v31,
                    v8)
                * v4[2].m128_f32[1];
            if ( v42.m128_f32[1] < v18 )
              v35 = 0;
            if ( v43.m128_f32[1] > v18 )
              v34 = 0;
          }
          if ( v35 || (LOBYTE(v10) = v34) != 0 )
          {
            v10 = *(_DWORD *)(a3 + 8) & 0x3FFFFFFF;
            if ( (int)v10 < v26 )
            {
              v19 = 2 * v10;
              if ( v26 >= v19 )
                v19 = v26;
              LOBYTE(v10) = sub_8A6E40((const void **)a3, v19, 4);
            }
            *(_DWORD *)(a3 + 4) = v26;
          }
        }
      }
      else
      {
        for ( i = v9; v9 <= v10; i = v9 )
        {
          if ( v8 <= v33 )
          {
            v20 = 2 * (v9 + (v8 << 0xF));
            v27 = v33 - v8 + 1;
            do
            {
              if ( *(_DWORD *)(a3 + 4) == (*(_DWORD *)(a3 + 8) & 0x3FFFFFFF) )
                sub_8A6EE0((const void **)a3, 4);
              *(_DWORD *)(*(_DWORD *)a3 + 4 * *(_DWORD *)(a3 + 4)) = v20;
              v21 = *(_DWORD *)(a3 + 8);
              v22 = *(_DWORD *)(a3 + 4) + 1;
              *(_DWORD *)(a3 + 4) = v22;
              if ( v22 == (v21 & 0x3FFFFFFF) )
                sub_8A6EE0((const void **)a3, 4);
              *(_DWORD *)(*(_DWORD *)a3 + 4 * *(_DWORD *)(a3 + 4)) = v20 | 1;
              v20 += 0x10000;
              v23 = v27 == 1;
              ++*(_DWORD *)(a3 + 4);
              --v27;
            }
            while ( !v23 );
            v9 = i;
            v10 = v40;
            v8 = v36;
          }
          ++v9;
        }
      }
    }
  }
  return v10;
}
