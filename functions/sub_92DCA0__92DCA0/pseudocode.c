int __cdecl sub_92DCA0(float a1, int a2, int *a3)
{
  int v3; // edi
  float *v4; // edx
  int v5; // ebx
  float *v6; // esi
  float *v7; // ecx
  __m128 v8; // xmm0
  int v9; // edi
  float *v10; // esi
  __m128 v11; // xmm0
  int v12; // esi
  int result; // eax
  int v14; // eax
  float *i; // [esp+Ch] [ebp-34h]
  float *v16; // [esp+10h] [ebp-30h]
  float v17; // [esp+14h] [ebp-2Ch]
  __m128 v18; // [esp+20h] [ebp-20h]
  __m128 v19; // [esp+30h] [ebp-10h]

  v3 = a2; /*0x92dcac*/
  v4 = *(float **)a2; /*0x92dcaf*/
  v5 = *(_DWORD *)(a2 + 4) - 1; /*0x92dcb4*/
  v6 = *(float **)a2; /*0x92dcb5*/
  v16 = *(float **)a2; /*0x92dcb7*/
  if ( v5 >= 0 ) /*0x92dcbb*/
  {
    v7 = v6 + 0xFFFFFFFC; /*0x92dcc1*/
    for ( i = v6 + 0xFFFFFFFC; ; v7 = i ) /*0x92dcc4*/
    {
      for ( ; (unsigned int)v7 >= *(_DWORD *)v3; v7 += 0xFFFFFFFC ) /*0x92dcd2*/
      {
        v17 = *v4 - flt_A34BA0; /*0x92dce0*/
        if ( *v7 < (double)v17 ) /*0x92dcef*/
          break; /*0x92dcef*/
        v18.m128_f32[0] = *v7 - *v4; /*0x92dcf9*/
        v18.m128_f32[1] = v7[1] - v4[1]; /*0x92dd03*/
        v18.m128_f32[2] = v7[2] - v4[2]; /*0x92dd0d*/
        v18.m128_f32[3] = v7[3] - v4[3]; /*0x92dd17*/
        v8 = _mm_mul_ps(v18, v18); /*0x92dd20*/
        if ( (float)(_mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0] /*0x92dd49*/
                   + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0])) < (double)a1 )
        {
          v9 = v5 - 1; /*0x92dd70*/
          if ( v5 - 1 >= 0 ) /*0x92dd75*/
          {
            v10 = v4 + 6; /*0x92dd77*/
            do /*0x92dde2*/
            {
              v19.m128_f32[0] = *v7 - v10[0xFFFFFFFE]; /*0x92dd89*/
              v19.m128_f32[1] = v7[1] - v10[0xFFFFFFFF]; /*0x92dd93*/
              v19.m128_f32[2] = v7[2] - *v10; /*0x92dd9c*/
              v19.m128_f32[3] = v7[3] - v10[1]; /*0x92dda6*/
              v11 = _mm_mul_ps(v19, v19); /*0x92ddaf*/
              if ( (float)(_mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0] /*0x92ddd8*/
                         + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0])) >= (double)a1 )
                break; /*0x92ddd8*/
              v4 += 4; /*0x92ddda*/
              v10 += 4; /*0x92dddd*/
              --v5; /*0x92dde0*/
              --v9; /*0x92dde1*/
            }
            while ( v9 >= 0 ); /*0x92dde2*/
          }
          v3 = a2; /*0x92dde4*/
          goto LABEL_14; /*0x92dde4*/
        }
      }
      v16 = v6 + 4; /*0x92dd63*/
      i += 4; /*0x92dd67*/
      *(_OWORD *)v6 = *(_OWORD *)v4; /*0x92dd6b*/
LABEL_14:
      v6 = v16; /*0x92dde7*/
      v4 += 4; /*0x92ddeb*/
      if ( --v5 < 0 ) /*0x92ddef*/
        break; /*0x92ddef*/
    }
  }
  v12 = ((int)v6 - *(_DWORD *)v3) >> 4; /*0x92ddfc*/
  *a3 = v12; /*0x92ddff*/
  result = *(_DWORD *)(v3 + 8) & 0x3FFFFFFF; /*0x92de04*/
  if ( result < v12 ) /*0x92de0b*/
  {
    v14 = 2 * result; /*0x92de0d*/
    if ( v12 >= v14 ) /*0x92de11*/
      v14 = v12; /*0x92de13*/
    result = sub_8A6E40((const void **)v3, v14, 0x10); /*0x92de19*/
  }
  *(_DWORD *)(v3 + 4) = v12; /*0x92de21*/
  return result; /*0x92de24*/
}
