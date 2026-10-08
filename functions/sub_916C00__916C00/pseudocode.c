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

  v3 = *(this + 0xC); /*0x916c0a*/
  v4 = 4 * (_DWORD)*(this + 0xD); /*0x916c20*/
  v5 = 0; /*0x916c23*/
  v6 = _mm_shuffle_ps((__m128)0xFF7FFFFF, (__m128)0xFF7FFFFF, 0); /*0x916c27*/
  v7 = v3; /*0x916c2b*/
  if ( v4 > 0 ) /*0x916c2d*/
  {
    v8 = _mm_shuffle_ps((__m128)a2[2], (__m128)a2[2], 0); /*0x916c5c*/
    v9 = _mm_shuffle_ps((__m128)a2[1], (__m128)a2[1], 0); /*0x916c60*/
    v10 = _mm_shuffle_ps((__m128)*a2, (__m128)*a2, 0); /*0x916c64*/
    v11 = 3; /*0x916c68*/
    do /*0x916d57*/
    {
      v12 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v10, *v7), _mm_mul_ps(v9, v7[1])), _mm_mul_ps(v8, v7[2])); /*0x916c93*/
      v13 = _mm_movemask_ps(_mm_cmplt_ps(v6, v12)); /*0x916c9d*/
      if ( v13 ) /*0x916ca7*/
      {
        switch ( v13 ) /*0x916cb9*/
        {
          case 1: /*0x916cb9*/
            goto LABEL_8;
          case 2: /*0x916cb9*/
            goto LABEL_11;
          case 4: /*0x916cb9*/
            goto LABEL_13;
          case 8: /*0x916cb9*/
            goto LABEL_14;
          case 0xD: /*0x916cb9*/
            goto LABEL_6;
          case 0xE: /*0x916cb9*/
            goto LABEL_9;
          default:
            if ( v12.m128_f32[0] <= (double)v12.m128_f32[1] ) /*0x916ccd*/
            {
LABEL_9:
              if ( v12.m128_f32[1] > (double)v12.m128_f32[2] ) /*0x916d03*/
              {
                if ( v12.m128_f32[1] > (double)v12.m128_f32[3] ) /*0x916d12*/
                {
LABEL_11:
                  v14 = v12.m128_f32[1]; /*0x916d14*/
                  v5 = v11 - 2; /*0x916d18*/
                  goto LABEL_15; /*0x916d1b*/
                }
                goto LABEL_14; /*0x916d12*/
              }
            }
            else
            {
LABEL_6:
              if ( v12.m128_f32[0] > (double)v12.m128_f32[2] ) /*0x916cdc*/
              {
                if ( v12.m128_f32[0] > (double)v12.m128_f32[3] ) /*0x916ceb*/
                {
LABEL_8:
                  v14 = v12.m128_f32[0]; /*0x916ced*/
                  v5 = v11 - 3; /*0x916cf1*/
                  goto LABEL_15; /*0x916cf4*/
                }
                goto LABEL_14; /*0x916ceb*/
              }
            }
            if ( v12.m128_f32[2] > (double)v12.m128_f32[3] ) /*0x916d2a*/
            {
LABEL_13:
              v14 = v12.m128_f32[2]; /*0x916d2c*/
              v5 = v11 - 1; /*0x916d30*/
              goto LABEL_15; /*0x916d33*/
            }
LABEL_14:
            v14 = v12.m128_f32[3]; /*0x916d35*/
            v5 = v11; /*0x916d39*/
LABEL_15:
            *(float *)&v18 = v14; /*0x916d3b*/
            v6 = _mm_shuffle_ps((__m128)v18, (__m128)v18, 0); /*0x916d49*/
            break; /*0x916d49*/
        }
      }
      v11 += 4; /*0x916d4c*/
      v7 += 3; /*0x916d52*/
    }
    while ( v11 - 3 < v4 ); /*0x916d57*/
  }
  v15 = &v3[3 * (v5 >> 2)]; /*0x916d6b*/
  v16 = v5 & 3; /*0x916d6f*/
  *a3 = v15->m128_i32[v16]; /*0x916d75*/
  a3[1] = v15[1].m128_i32[v16]; /*0x916d7b*/
  a3[2] = v15[2].m128_i32[v16]; /*0x916d82*/
  result = v5 | 0x3F000000; /*0x916d85*/
  a3[3] = result; /*0x916d8b*/
  return result; /*0x916d8a*/
}
