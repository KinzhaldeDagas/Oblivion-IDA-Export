// positive sp value has been detected, the output may be wrong!
int __usercall def_91FFAB@<eax>(
        char *a1@<edx>,
        __m128 *a2@<ecx>,
        int a3@<ebp>,
        __m128 *a4@<edi>,
        __m128 *a5@<esi>,
        int a6,
        int a7,
        int a8)
{
  int v8; // eax
  __m128 v9; // xmm0
  double v10; // st7
  float *v11; // eax
  __m128 v12; // xmm0
  double v13; // st7
  float *v14; // ebx
  __m128 v15; // xmm0
  float *v16; // ebx
  double v17; // st7
  int v18; // eax
  __m128 v19; // xmm0
  float *v20; // eax
  float v23; // [esp+10h] [ebp+10h]
  int v25; // [esp+14h] [ebp+14h]
  int v27; // [esp+18h] [ebp+18h]

  while ( 2 )
  {
    v8 = *a1;
    switch ( *a1 )
    {
      case 0:
      case 1:
      case 7:
      case 8:
        return a6;
      case 2:
        if ( a7 > *(_DWORD *)(a3 + 0x10) )
          return a6;
        ++a6;
        v9 = _mm_add_ps(
               _mm_add_ps(_mm_mul_ps(a5[2], a2[1]), _mm_mul_ps(a4[2], a2[2])),
               _mm_mul_ps(_mm_sub_ps(a5[1], a4[1]), *a2));
        ++a7;
        v23 = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0]
            + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]);
        ++a8;
        if ( *(float *)&SrcStr >= (double)v23 )
          v10 = v23;
        else
          v10 = *(float *)&SrcStr;
        v11 = *(float **)(a3 + 0x14);
        *v11 = v10;
        *(_DWORD *)(a3 + 0x14) = v11 + 1;
        a2 += 3;
        a1 += (unsigned __int8)a1[1];
        continue;
      case 3:
        if ( a8 > *(_DWORD *)(a3 + 0x10) )
          return a6;
        a6 += 2;
        a8 += 2;
        v12 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(a5[2], a2[1]), _mm_mul_ps(a4[2], a2[2])),
                _mm_mul_ps(_mm_sub_ps(a5[1], a4[1]), *a2));
        *(float *)&v25 = _mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0]
                       + (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]);
        a7 += 2;
        if ( *(float *)&SrcStr >= (double)*(float *)&v25 )
          v13 = *(float *)&v25;
        else
          v13 = *(float *)&SrcStr;
        v14 = *(float **)(a3 + 0x14);
        *v14 = v13;
        v15 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(a5[2], a2[4]), _mm_mul_ps(a4[2], a2[5])),
                _mm_mul_ps(_mm_sub_ps(a5[1], a4[1]), a2[3]));
        *(float *)&v27 = _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0]
                       + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]);
        v16 = v14 + 1;
        if ( *(float *)&SrcStr >= (double)*(float *)&v27 )
          v17 = *(float *)&v27;
        else
          v17 = *(float *)&SrcStr;
        *v16 = v17;
        v18 = (unsigned __int8)a1[1];
        a2 += 6;
        *(_DWORD *)(a3 + 0x14) = v16 + 1;
        a1 += v18;
        continue;
      case 4:
      case 9:
      case 0xA:
        do
        {
          a1 += (unsigned __int8)a1[1];
          a2 += 2;
        }
        while ( *a1 == v8 );
        continue;
      case 5:
      case 6:
      case 0xB:
        do
        {
          a1 += (unsigned __int8)a1[1];
          a2 += 3;
        }
        while ( *a1 == v8 );
        continue;
      case 0xC:
        a2 += 2;
        a1 += (unsigned __int8)a1[1];
        continue;
      case 0xD:
        if ( a7 <= *(_DWORD *)(a3 + 0x10) )
        {
          ++a6;
          v19 = _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(a5[2], a2[1]), _mm_mul_ps(a4[2], a2[2])),
                  _mm_mul_ps(_mm_sub_ps(a5[1], a4[1]), *a2));
          ++a7;
          v20 = *(float **)(a3 + 0x14);
          ++a8;
          *v20 = _mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0]);
          *(_DWORD *)(a3 + 0x14) = v20 + 1;
          a2 += 3;
LABEL_22:
          a1 += (unsigned __int8)a1[1];
          continue;
        }
        return a6;
      case 0xE:
      case 0xF:
      case 0x10:
        goto LABEL_22;
      default:
        continue;
    }
  }
}
