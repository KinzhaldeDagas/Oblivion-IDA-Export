int __thiscall sub_916C00(__m128 **this, unsigned int *a2, _DWORD *a3)
{
  __m128 *v3; // ebx
  int v4; // edi
  int v5; // eax
  __m128 v6; // xmm4
  __m128 *v7; // esi
  __m128 v8; // xmm1
  __m128 v9; // xmm2
  __m128 v10; // xmm3
  int v11; // ecx
  __m128 v12; // xmm0
  int v13; // edx
  double v14; // st7
  __m128 *v15; // ecx
  int v16; // edx
  int result; // eax
  unsigned int v18; // [esp+Ch] [ebp-14h]

  v3 = *(this + 0xC);
  v4 = 4 * (_DWORD)*(this + 0xD);
  v5 = 0;
  v6 = _mm_shuffle_ps((__m128)0xFF7FFFFF, (__m128)0xFF7FFFFF, 0);
  v7 = v3;
  if ( v4 > 0 )
  {
    v8 = _mm_shuffle_ps((__m128)a2[2], (__m128)a2[2], 0);
    v9 = _mm_shuffle_ps((__m128)a2[1], (__m128)a2[1], 0);
    v10 = _mm_shuffle_ps((__m128)*a2, (__m128)*a2, 0);
    v11 = 3;
    do
    {
      v12 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v10, *v7), _mm_mul_ps(v9, v7[1])), _mm_mul_ps(v8, v7[2]));
      v13 = _mm_movemask_ps(_mm_cmplt_ps(v6, v12));
      if ( v13 )
      {
        switch ( v13 )
        {
          case 1:
            goto LABEL_8;
          case 2:
            goto LABEL_11;
          case 4:
            goto LABEL_13;
          case 8:
            goto LABEL_14;
          case 0xD:
            goto LABEL_6;
          case 0xE:
            goto LABEL_9;
          default:
            if ( v12.m128_f32[0] <= (double)v12.m128_f32[1] )
            {
LABEL_9:
              if ( v12.m128_f32[1] > (double)v12.m128_f32[2] )
              {
                if ( v12.m128_f32[1] > (double)v12.m128_f32[3] )
                {
LABEL_11:
                  v14 = v12.m128_f32[1];
                  v5 = v11 - 2;
                  goto LABEL_15;
                }
                goto LABEL_14;
              }
            }
            else
            {
LABEL_6:
              if ( v12.m128_f32[0] > (double)v12.m128_f32[2] )
              {
                if ( v12.m128_f32[0] > (double)v12.m128_f32[3] )
                {
LABEL_8:
                  v14 = v12.m128_f32[0];
                  v5 = v11 - 3;
                  goto LABEL_15;
                }
                goto LABEL_14;
              }
            }
            if ( v12.m128_f32[2] > (double)v12.m128_f32[3] )
            {
LABEL_13:
              v14 = v12.m128_f32[2];
              v5 = v11 - 1;
              goto LABEL_15;
            }
LABEL_14:
            v14 = v12.m128_f32[3];
            v5 = v11;
LABEL_15:
            *(float *)&v18 = v14;
            v6 = _mm_shuffle_ps((__m128)v18, (__m128)v18, 0);
            break;
        }
      }
      v11 += 4;
      v7 += 3;
    }
    while ( v11 - 3 < v4 );
  }
  v15 = &v3[3 * (v5 >> 2)];
  v16 = v5 & 3;
  *a3 = v15->m128_i32[v16];
  a3[1] = v15[1].m128_i32[v16];
  a3[2] = v15[2].m128_i32[v16];
  result = v5 | 0x3F000000;
  a3[3] = result;
  return result;
}
