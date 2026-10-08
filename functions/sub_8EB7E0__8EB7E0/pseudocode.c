// Sorts active surface constraints before recomputing the active-set solution.
int __cdecl hkSurfaceConstraintUtil_SortActiveConstraints(int a1)
{
  int v1; // edx
  int v2; // ecx
  int result; // eax
  __m128 **v4; // ebx
  __m128 **v5; // ecx
  __int32 v6; // eax
  __int32 v7; // edx
  __m128 v8; // xmm0
  float v9; // xmm1_4
  float v10; // xmm2_4
  __m128 v11; // xmm0
  _DWORD *v12; // esi
  __m128 *v13; // edx
  int v14; // [esp+10h] [ebp-20h]
  int v15; // [esp+14h] [ebp-1Ch]
  __m128 **v16; // [esp+18h] [ebp-18h]
  __m128 *v17; // [esp+28h] [ebp-8h]
  __m128 *v18; // [esp+2Ch] [ebp-4h]

  v1 = a1; /*0x8eb7e9*/
  v2 = *(_DWORD *)(a1 + 0x30); /*0x8eb7ec*/
  result = v2 - 1; /*0x8eb7f0*/
  if ( v2 - 1 > 0 ) /*0x8eb7f7*/
  {
    result = 1; /*0x8eb7fd*/
    v4 = (__m128 **)(a1 + 4); /*0x8eb802*/
    v15 = 1; /*0x8eb805*/
    v16 = (__m128 **)(a1 + 4); /*0x8eb809*/
    do /*0x8eb900*/
    {
      v14 = result; /*0x8eb812*/
      if ( result < v2 ) /*0x8eb816*/
      {
        v5 = v4 + 3; /*0x8eb81c*/
        do /*0x8eb8df*/
        {
          v6 = (*v4)[3].m128_i32[0]; /*0x8eb824*/
          v7 = (*v5)[3].m128_i32[0]; /*0x8eb827*/
          if ( v6 >= v7 ) /*0x8eb82c*/
          {
            if ( v6 != v7 /*0x8eb88b*/
              || (v8 = _mm_mul_ps((*v4)[1], (*v4)[1]),
                  v9 = _mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0],
                  v10 = _mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0],
                  v11 = _mm_mul_ps((*v5)[1], (*v5)[1]),
                  (float)(v10 + v9) >= (double)(float)(_mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]
                                                     + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0]
                                                             + v11.m128_f32[0]))) )
            {
              v12 = v4 + 0xFFFFFFFF; /*0x8eb88d*/
              v13 = v4[0xFFFFFFFF]; /*0x8eb892*/
              v17 = *v4; /*0x8eb89a*/
              v18 = v4[1]; /*0x8eb89e*/
              *v12 = v5[0xFFFFFFFF]; /*0x8eb8a9*/
              *v4 = *v5; /*0x8eb8ae*/
              v4 = v16; /*0x8eb8b4*/
              v12[2] = v5[1]; /*0x8eb8b8*/
              v5[0xFFFFFFFF] = v13; /*0x8eb8bb*/
              *v5 = v17; /*0x8eb8c1*/
              v5[1] = v18; /*0x8eb8c8*/
            }
          }
          v1 = a1; /*0x8eb8cf*/
          v5 += 3; /*0x8eb8d6*/
          ++v14; /*0x8eb8db*/
        }
        while ( v14 < *(_DWORD *)(a1 + 0x30) ); /*0x8eb8df*/
        result = v15; /*0x8eb8e5*/
      }
      v2 = *(_DWORD *)(v1 + 0x30); /*0x8eb8e9*/
      ++result; /*0x8eb8ec*/
      v4 += 3; /*0x8eb8ed*/
      v15 = result; /*0x8eb8f8*/
      v16 = v4; /*0x8eb8fc*/
    }
    while ( result - 1 < v2 - 1 ); /*0x8eb900*/
  }
  return result; /*0x8eb906*/
}
