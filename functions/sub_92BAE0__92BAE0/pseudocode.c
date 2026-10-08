char *__cdecl sub_92BAE0(char *a1, __m128 *a2, _DWORD *a3, unsigned __int64 a4, __m128 *a5, const void **a6)
{
  char v6; // cl
  __int32 v7; // ebx
  __m128 v8; // xmm0
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  double v11; // st7
  __m128 v12; // xmm0
  char *v13; // eax
  int v14; // edx
  int v15; // ecx
  bool v16; // zf
  __m128 v17; // xmm0
  char *v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  char v23; // [esp+1Bh] [ebp-35h]
  int v24; // [esp+1Ch] [ebp-34h]
  float v25; // [esp+20h] [ebp-30h]
  float v26; // [esp+24h] [ebp-2Ch]
  float v27; // [esp+28h] [ebp-28h]
  __m128 v28; // [esp+30h] [ebp-20h] BYREF
  int v29; // [esp+40h] [ebp-10h]
  int v30; // [esp+44h] [ebp-Ch]
  int v31; // [esp+48h] [ebp-8h]

  v6 = 0; /*0x92baf2*/
  v7 = 0; /*0x92baf4*/
  v23 = 0; /*0x92baf8*/
  v25 = 3.4028235e38; /*0x92bafc*/
  if ( (int)a3[1] > 0 ) /*0x92bb04*/
  {
    v24 = 0; /*0x92bb0d*/
    do /*0x92bd01*/
    {
      if ( v7 != (_DWORD)a4 && v7 != HIDWORD(a4) ) /*0x92bb1f*/
      {
        v8 = _mm_mul_ps(*(__m128 *)(v24 + *a3), *a2); /*0x92bb35*/
        v26 = _mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0] /*0x92bb5e*/
            + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]);
        if ( v26 > (double)flt_A7E738 ) /*0x92bbb3*/
        {
          a5->m128_i32[3] = 0x3F800000; /*0x92bbbc*/
          v9 = _mm_mul_ps(*(__m128 *)(*a3 + v24), *a5); /*0x92bbd0*/
          v10 = _mm_add_ps(_mm_shuffle_ps(v9, v9, 0x4E), v9); /*0x92bbda*/
          v11 = -(float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 0xB1).m128_f32[0]) / fabs(v26); /*0x92bbff*/
          if ( v11 < v25 + flt_A79DB4 && !sub_92B760(a3, a4, v7, &v28) ) /*0x92bc2a*/
          {
            v23 = 1; /*0x92bc3e*/
            v27 = v11; /*0x92bc01*/
            if ( fabs(v27 - v25) >= flt_A79DB4 ) /*0x92bc54*/
            {
              v16 = ((unsigned int)a6[2] & 0x3FFFFFFF) == 0; /*0x92bca0*/
              a6[1] = 0; /*0x92bca7*/
              if ( v16 ) /*0x92bcae*/
                sub_8A6EE0(a6, 0x20); /*0x92bcb3*/
              v17 = v28; /*0x92bcc0*/
              v18 = (char *)*a6 + 0x20 * (_DWORD)a6[1]; /*0x92bcca*/
              v19 = v29; /*0x92bccc*/
              a6[1] = (char *)a6[1] + 1; /*0x92bcd1*/
              v20 = v30; /*0x92bcd4*/
              *((_DWORD *)v18 + 4) = v19; /*0x92bcd8*/
              v21 = v31; /*0x92bcdb*/
              *(__m128 *)v18 = v17; /*0x92bcdf*/
              *((_DWORD *)v18 + 5) = v20; /*0x92bce2*/
              *((_DWORD *)v18 + 6) = v21; /*0x92bce5*/
              v25 = v11; /*0x92bcec*/
            }
            else
            {
              if ( a6[1] == (const void *)((unsigned int)a6[2] & 0x3FFFFFFF) ) /*0x92bc64*/
                sub_8A6EE0(a6, 0x20); /*0x92bc69*/
              v12 = v28; /*0x92bc76*/
              v13 = (char *)*a6 + 0x20 * (_DWORD)a6[1]; /*0x92bc80*/
              v14 = v30; /*0x92bc82*/
              a6[1] = (char *)a6[1] + 1; /*0x92bc87*/
              *((_DWORD *)v13 + 4) = v29; /*0x92bc8e*/
              v15 = v31; /*0x92bc91*/
              *(__m128 *)v13 = v12; /*0x92bc95*/
              *((_DWORD *)v13 + 5) = v14; /*0x92bc98*/
              *((_DWORD *)v13 + 6) = v15; /*0x92bc9b*/
            }
          }
        }
      }
      ++v7; /*0x92bcf7*/
      v24 += 0x10; /*0x92bcfd*/
    }
    while ( v7 < a3[1] ); /*0x92bd01*/
    v6 = v23; /*0x92bd07*/
  }
  *a1 = v6; /*0x92bd10*/
  return a1; /*0x92bd0e*/
}
