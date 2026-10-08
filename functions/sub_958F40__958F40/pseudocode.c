__m128 *__thiscall sub_958F40(_DWORD *this, __m128 *a2)
{
  __m128 *v2; // esi
  __int32 v3; // ebx
  int v4; // edi
  char *v5; // ecx
  __m128 v6; // xmm2
  __m128 v7; // xmm0
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  int v10; // edx
  float v12; // [esp+14h] [ebp-Ch]
  bool v13; // [esp+18h] [ebp-8h]

  sub_9589E0(this); /*0x958f4c*/
  v2 = a2; /*0x958f51*/
  v3 = 0; /*0x958f54*/
  v13 = 0; /*0x958f56*/
  do /*0x959074*/
  {
    if ( v13 ) /*0x958f66*/
      break; /*0x958f66*/
    v2[4].m128_i32[1] = 3; /*0x958f6c*/
    v4 = 0; /*0x958f73*/
    v5 = &v2[1].m128_i8[4]; /*0x958f75*/
    while ( 1 ) /*0x958f7a*/
    {
      if ( v5 != (char *)v3 ) /*0x958f7a*/
      {
        v6 = *(__m128 *)*(_DWORD *)v5; /*0x958f82*/
        v7 = _mm_sub_ps(*(__m128 *)**((_DWORD **)v5 + 1), v6); /*0x958f8d*/
        v8 = _mm_mul_ps(v7, v7); /*0x958f93*/
        v9 = _mm_mul_ps( /*0x958fdf*/
               _mm_sub_ps(
                 _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0xC9), _mm_shuffle_ps(*v2, *v2, 0xD2)),
                 _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0xD2), _mm_shuffle_ps(*v2, *v2, 0xC9))),
               v6);
        v12 = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0] /*0x958ffc*/
            + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]);
        if ( (float)(_mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0] /*0x95901b*/
                   + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]))
           * flt_AA3874 > fabs(v12) * v12 )
        {
          v10 = *(_DWORD *)(*((_DWORD *)v5 + 2) + 0xC); /*0x959020*/
          if ( a2[1].m128_f32[0] <= (double)*(float *)&SrcStr /*0x95904a*/
            || a2[1].m128_f32[0] * flt_A37450 <= *(float *)(v10 + 0x10) )
          {
            break; /*0x95904a*/
          }
        }
      }
      ++v4; /*0x95904c*/
      v5 += 0x10; /*0x95904d*/
      if ( v4 >= 3 ) /*0x959053*/
        goto LABEL_11; /*0x959053*/
    }
    v3 = v2[v4 + 1].m128_i32[3]; /*0x959063*/
    v2 = *(__m128 **)(*((_DWORD *)v5 + 2) + 0xC); /*0x95906a*/
    v13 = *(_DWORD *)(v10 + 0x44) == 3; /*0x95906c*/
LABEL_11:
    ;
  }
  while ( v4 != 3 ); /*0x959074*/
  return v2; /*0x95907a*/
}
