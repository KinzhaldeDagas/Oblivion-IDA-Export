void __thiscall sub_937470(__m128 *this, unsigned __int8 *a2, unsigned __int8 *a3, float a4)
{
  int v4; // eax
  int v6; // ecx
  __m128 *v7; // eax
  __m128 v8; // xmm0
  int v9; // ecx
  __m128 v10; // xmm1
  int v11; // edx
  __m128 v12; // xmm0
  __m128 v13; // xmm0
  double v14; // st6
  __m128 *v15; // ebx
  __m128 v16; // xmm0
  int v17; // ecx
  __int16 v18; // ax
  char v19; // [esp+17h] [ebp-49h] BYREF
  float v20; // [esp+18h] [ebp-48h]
  float v21; // [esp+1Ch] [ebp-44h]
  __m128 v22[3]; // [esp+20h] [ebp-40h] BYREF
  float v23; // [esp+54h] [ebp-Ch]
  int v24; // [esp+58h] [ebp-8h]
  int v25; // [esp+5Ch] [ebp-4h]

  v4 = a2[0x21] - 1; /*0x937486*/
  if ( v4 < 0 )
  {
LABEL_5:
    v6 = a3[1]; /*0x9374a5*/
    v24 = *a3; /*0x9374b0*/
    v25 = v6; /*0x9374b9*/
    if ( *sub_936810(this, &v19, v22) && a4 * flt_A3F478 <= v23 )
    {
      if ( *a3 <= 6u
        && (*a3 > 2u ? (v7 = *((__m128 **)this + 5), v8 = v22[0]) : (v7 = *((__m128 **)this + 6), v8 = v22[1]),
            v9 = 0,
            v10 = _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(*v7, _mm_shuffle_ps(v8, v8, 0)),
                      _mm_mul_ps(v7[1], _mm_shuffle_ps(v8, v8, 0x55))),
                    _mm_add_ps(_mm_mul_ps(v7[2], _mm_shuffle_ps(v8, v8, 0xAA)), v7[3])),
            a2[0x21]) )
      {
        v11 = 0; /*0x937548*/
        while ( 1 ) /*0x937550*/
        {
          if ( a2[4 * v9] <= 6u ) /*0x937554*/
          {
            v12 = _mm_sub_ps(v10, *(__m128 *)(*((_DWORD *)this + 4) + v11 + 0x30)); /*0x93756b*/
            v13 = _mm_mul_ps(v12, v12); /*0x93756e*/
            v14 = *((float *)this + 0x2C) * *((float *)this + 0x2C) + flt_AA1D50; /*0x937571*/
            v20 = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0] /*0x937591*/
                + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]);
            if ( v20 <= v14 ) /*0x9375a2*/
              break; /*0x9375a2*/
          }
          ++v9; /*0x9375ac*/
          v11 += 0x30; /*0x9375ad*/
          if ( v9 >= a2[0x21] ) /*0x9375b2*/
            goto LABEL_16; /*0x9375b2*/
        }
      }
      else
      {
LABEL_16:
        if ( a2[0x21] < 8u ) /*0x9375b8*/
        {
          v20 = COERCE_FLOAT(sub_936460(a2, this->m128_i32[0], this->m128_i32[1], a3)); /*0x9375cf*/
          if ( v20 >= 0.0 ) /*0x9375d3*/
          {
            v15 = **((__m128 ***)this + 4); /*0x9375dc*/
            if ( v24 > 2 ) /*0x9375e5*/
            {
              if ( v24 > 6 ) /*0x9375fd*/
                sub_936E10((__m128 **)this, v15, (int)a3, v22); /*0x93761e*/
              else
                sub_936D70((int)this, v15, a3, v22); /*0x93760b*/
            }
            else
            {
              sub_936C10((__m128 **)this, v15, a3, v22); /*0x9375f3*/
            }
            if ( a2[0x21] <= 1u /*0x937669*/
              || (v16 = _mm_mul_ps(*(__m128 *)(**((_DWORD **)this + 4) - 0x20), v15[1]),
                  v21 = _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]),
                  v21 > (double)*(float *)&SrcStr) )
            {
              v18 = (*(int (__thiscall **)(__int32, __int32, __int32, __int32, __m128 *))(*(_DWORD *)this->m128_i32[3] /*0x937691*/
                                                                                        + 8))(
                      this->m128_i32[3],
                      this->m128_i32[0],
                      this->m128_i32[1],
                      this->m128_i32[2],
                      v15);
              v17 = LODWORD(v20); /*0x937698*/
              *(_WORD *)&a2[4 * LODWORD(v20) + 2] = v18; /*0x93769c*/
              if ( v18 != (__int16)0xFFFF ) /*0x9376a1*/
              {
                **((_DWORD **)this + 4) += 0x30; /*0x9376ae*/
                *((_WORD *)a3 + 1) = *(_WORD *)&a2[4 * v17 + 2]; /*0x9376b5*/
                v15[2].m128_i16[0] = *(_WORD *)&a2[4 * v17 + 2]; /*0x9376be*/
                if ( *a3 <= 6u ) /*0x9376c5*/
                  ++a2[0x20]; /*0x9376c7*/
                return; /*0x9376c7*/
              }
            }
            else
            {
              v17 = LODWORD(v20); /*0x93766b*/
            }
            sub_9363C0(a2, v17); /*0x937672*/
          }
        }
      }
    }
  }
  else
  {
    while ( a2[4 * v4] != *a3 || a2[4 * v4 + 1] != a3[1] ) /*0x93749c*/
    {
      if ( --v4 < 0 ) /*0x9374a3*/
        goto LABEL_5; /*0x9374a3*/
    }
  }
}
