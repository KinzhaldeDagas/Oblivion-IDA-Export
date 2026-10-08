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
  float v22; // [esp+10h] [ebp+10h]
  int v23; // [esp+14h] [ebp+14h]
  int v24; // [esp+18h] [ebp+18h]

  while ( 2 ) /*0x91ffa3*/
  {
    v8 = *a1; /*0x91ffa3*/
    switch ( *a1 ) /*0x91ffab*/
    {
      case 0: /*0x91ffab*/
      case 1: /*0x91ffab*/
      case 7: /*0x91ffab*/
      case 8: /*0x91ffab*/
        return a6;
      case 2: /*0x91ffab*/
        if ( a7 > *(_DWORD *)(a3 + 0x10) ) /*0x91ffdd*/
          return a6; /*0x91ffdd*/
        ++a6; /*0x920016*/
        v9 = _mm_add_ps( /*0x920029*/
               _mm_add_ps(_mm_mul_ps(a5[2], a2[1]), _mm_mul_ps(a4[2], a2[2])),
               _mm_mul_ps(_mm_sub_ps(a5[1], a4[1]), *a2));
        ++a7; /*0x92002c*/
        v22 = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0] /*0x92004a*/
            + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]);
        ++a8; /*0x920052*/
        if ( *(float *)&SrcStr >= (double)v22 ) /*0x92005b*/
          v10 = v22; /*0x920065*/
        else
          v10 = *(float *)&SrcStr; /*0x92005d*/
        v11 = *(float **)(a3 + 0x14); /*0x920069*/
        *v11 = v10; /*0x92006c*/
        *(_DWORD *)(a3 + 0x14) = v11 + 1; /*0x920071*/
        a2 += 3; /*0x920078*/
        a1 += (unsigned __int8)a1[1]; /*0x92007b*/
        continue; /*0x92007d*/
      case 3: /*0x91ffab*/
        if ( a8 > *(_DWORD *)(a3 + 0x10) ) /*0x920089*/
          return a6; /*0x920089*/
        a6 += 2; /*0x9200c4*/
        a8 += 2; /*0x9200d1*/
        v12 = _mm_add_ps( /*0x9200df*/
                _mm_add_ps(_mm_mul_ps(a5[2], a2[1]), _mm_mul_ps(a4[2], a2[2])),
                _mm_mul_ps(_mm_sub_ps(a5[1], a4[1]), *a2));
        *(float *)&v23 = _mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0] /*0x9200fe*/
                       + (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]);
        a7 += 2; /*0x920106*/
        if ( *(float *)&SrcStr >= (double)*(float *)&v23 ) /*0x92010f*/
          v13 = *(float *)&v23; /*0x920119*/
        else
          v13 = *(float *)&SrcStr; /*0x920111*/
        v14 = *(float **)(a3 + 0x14); /*0x92011d*/
        *v14 = v13; /*0x920120*/
        v15 = _mm_add_ps( /*0x920156*/
                _mm_add_ps(_mm_mul_ps(a5[2], a2[4]), _mm_mul_ps(a4[2], a2[5])),
                _mm_mul_ps(_mm_sub_ps(a5[1], a4[1]), a2[3]));
        *(float *)&v24 = _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0] /*0x920173*/
                       + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]);
        v16 = v14 + 1; /*0x92017b*/
        if ( *(float *)&SrcStr >= (double)*(float *)&v24 ) /*0x920183*/
          v17 = *(float *)&v24; /*0x92018d*/
        else
          v17 = *(float *)&SrcStr; /*0x920185*/
        *v16 = v17; /*0x920191*/
        v18 = (unsigned __int8)a1[1]; /*0x920193*/
        a2 += 6; /*0x92019a*/
        *(_DWORD *)(a3 + 0x14) = v16 + 1; /*0x92019d*/
        a1 += v18; /*0x9201a0*/
        continue; /*0x9201a2*/
      case 4: /*0x91ffab*/
      case 9: /*0x91ffab*/
      case 0xA: /*0x91ffab*/
        do /*0x91ffc0*/
        {
          a1 += (unsigned __int8)a1[1]; /*0x91ffb2*/
          a2 += 2; /*0x91ffbb*/
        }
        while ( *a1 == v8 ); /*0x91ffc0*/
        continue; /*0x91ffc0*/
      case 5: /*0x91ffab*/
      case 6: /*0x91ffab*/
      case 0xB: /*0x91ffab*/
        do /*0x91ffd2*/
        {
          a1 += (unsigned __int8)a1[1]; /*0x91ffc4*/
          a2 += 3; /*0x91ffcd*/
        }
        while ( *a1 == v8 ); /*0x91ffd2*/
        continue; /*0x91ffd2*/
      case 0xC: /*0x91ffab*/
        a2 += 2; /*0x9201ab*/
        a1 += (unsigned __int8)a1[1]; /*0x9201ae*/
        continue; /*0x9201b0*/
      case 0xD: /*0x91ffab*/
        if ( a7 <= *(_DWORD *)(a3 + 0x10) ) /*0x9201bc*/
        {
          ++a6; /*0x9201ef*/
          v19 = _mm_add_ps( /*0x920202*/
                  _mm_add_ps(_mm_mul_ps(a5[2], a2[1]), _mm_mul_ps(a4[2], a2[2])),
                  _mm_mul_ps(_mm_sub_ps(a5[1], a4[1]), *a2));
          ++a7; /*0x920205*/
          v20 = *(float **)(a3 + 0x14); /*0x920227*/
          ++a8; /*0x92022a*/
          *v20 = _mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0] /*0x920232*/
               + (float)(_mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0]);
          *(_DWORD *)(a3 + 0x14) = v20 + 1; /*0x920237*/
          a2 += 3; /*0x92023a*/
LABEL_22:
          a1 += (unsigned __int8)a1[1]; /*0x92023d*/
          continue; /*0x920243*/
        }
        return a6;
      case 0xE: /*0x91ffab*/
      case 0xF: /*0x91ffab*/
      case 0x10: /*0x91ffab*/
        goto LABEL_22;
      default:
        continue;
    }
  }
}
