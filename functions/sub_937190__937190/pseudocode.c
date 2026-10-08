const wchar_t *__thiscall sub_937190(__m128 *this, unsigned __int8 *a2, int a3, unsigned __int16 a4, float a5)
{
  const wchar_t *result; // eax
  unsigned __int16 v7; // ax
  char v8; // cl
  int v9; // eax
  __m128 v10; // xmm0
  double v11; // st7
  __m128 *v12; // eax
  int v13; // ecx
  __m128 v14; // xmm1
  int v15; // edx
  __m128 v16; // xmm0
  __m128 v17; // xmm0
  double v18; // st6
  __m128 *v19; // ebx
  __m128 v20; // xmm0
  __int16 v21; // ax
  int v22; // ecx
  int v23; // [esp+10h] [ebp-54h] BYREF
  int v24; // [esp+14h] [ebp-50h]
  const wchar_t *v25; // [esp+18h] [ebp-4Ch]
  float v26; // [esp+1Ch] [ebp-48h]
  float v27; // [esp+20h] [ebp-44h]
  __m128 v28; // [esp+24h] [ebp-40h] BYREF
  __m128 v29; // [esp+34h] [ebp-30h]
  float v30; // [esp+54h] [ebp-10h]
  float v31; // [esp+58h] [ebp-Ch]
  int v32; // [esp+5Ch] [ebp-8h]

  result = aP0; /*0x93719e*/
  v25 = aP0; /*0x9371a6*/
  do
  {
    v7 = *result; /*0x9371b0*/
    if ( (a4 & v7) == 0 )
    {
      v23 = a3; /*0x9371c6*/
      v8 = BYTE1(a3) & 0xF | BYTE1(a3) ^ v7; /*0x9371d3*/
      v9 = a2[0x21] - 1; /*0x9371d9*/
      BYTE1(v23) = v8; /*0x9371da*/
      if ( v9 < 0 )
      {
LABEL_7:
        sub_936CB0(this, &v28, (unsigned __int8 *)&v23); /*0x9371f6*/
        v10 = v29; /*0x937207*/
        if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_and_ps(v29, (__m128)xmmword_A372D0), *(this + 0xA))) & 7) == 7 )
        {
          v11 = -(v30 * v28.m128_f32[v32]) - *((float *)this + v32 + 0x18); /*0x937241*/
          v31 = v11; /*0x937245*/
          if ( v11 >= a5 - flt_AA1D50 )
          {
            if ( (unsigned __int8)v23 <= 6u
              && ((unsigned __int8)v23 > 2u
                ? (__m128 *)(v12 = *((__m128 **)this + 5), v10 = v28)
                : (v12 = *((__m128 **)this + 6)),
                  v13 = 0,
                  v14 = _mm_add_ps(
                          _mm_add_ps(
                            _mm_mul_ps(*v12, _mm_shuffle_ps(v10, v10, 0)),
                            _mm_mul_ps(v12[1], _mm_shuffle_ps(v10, v10, 0x55))),
                          _mm_add_ps(_mm_mul_ps(v12[2], _mm_shuffle_ps(v10, v10, 0xAA)), v12[3])),
                  a2[0x21]) )
            {
              v15 = 0; /*0x9372c0*/
              while ( 1 ) /*0x9372c2*/
              {
                if ( a2[4 * v13] <= 6u ) /*0x9372c6*/
                {
                  v16 = _mm_sub_ps(v14, *(__m128 *)(*((_DWORD *)this + 4) + v15 + 0x30)); /*0x9372dd*/
                  v17 = _mm_mul_ps(v16, v16); /*0x9372e0*/
                  v18 = *((float *)this + 0x2C) * *((float *)this + 0x2C) + flt_AA1D50; /*0x9372e3*/
                  v26 = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0] /*0x937303*/
                      + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
                  if ( v26 <= v18 ) /*0x937314*/
                    break; /*0x937314*/
                }
                ++v13; /*0x93731e*/
                v15 += 0x30; /*0x93731f*/
                if ( v13 >= a2[0x21] ) /*0x937324*/
                  goto LABEL_18; /*0x937324*/
              }
            }
            else
            {
LABEL_18:
              if ( a2[0x21] < 8u ) /*0x93732a*/
              {
                v24 = sub_936460(a2, this->m128_i32[0], this->m128_i32[1], &v23); /*0x937345*/
                if ( v24 >= 0 ) /*0x937349*/
                {
                  v19 = **((__m128 ***)this + 4); /*0x937359*/
                  if ( v32 > 2 ) /*0x93735b*/
                  {
                    if ( v32 > 6 ) /*0x937374*/
                      sub_936E10((__m128 **)this, v19, (int)&v23, &v28); /*0x937397*/
                    else
                      sub_936D70((int)this, v19, (unsigned __int8 *)&v23, &v28); /*0x937383*/
                  }
                  else
                  {
                    sub_936C10((__m128 **)this, v19, (unsigned __int8 *)&v23, &v28); /*0x93736a*/
                  }
                  if ( a2[0x21] <= 1u /*0x9373e2*/
                    || (v20 = _mm_mul_ps(*(__m128 *)(**((_DWORD **)this + 4) - 0x20), v19[1]),
                        v27 = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0]
                            + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]),
                        v27 > (double)*(float *)&SrcStr) )
                  {
                    v21 = (*(int (__thiscall **)(__int32, __int32, __int32, __int32, __m128 *))(*(_DWORD *)this->m128_i32[3] /*0x937403*/
                                                                                              + 8))(
                            this->m128_i32[3],
                            this->m128_i32[0],
                            this->m128_i32[1],
                            this->m128_i32[2],
                            v19);
                    v22 = v24; /*0x93740a*/
                    *(_WORD *)&a2[4 * v24 + 2] = v21; /*0x93740e*/
                    if ( v21 == (__int16)0xFFFF ) /*0x937413*/
                    {
                      sub_9363C0(a2, v22); /*0x937418*/
                    }
                    else
                    {
                      **((_DWORD **)this + 4) += 0x30; /*0x937422*/
                      HIWORD(v23) = *(_WORD *)&a2[4 * v22 + 2]; /*0x93742a*/
                      v19[2].m128_i16[0] = *(_WORD *)&a2[4 * v22 + 2]; /*0x937434*/
                      if ( (unsigned __int8)v23 <= 6u ) /*0x93743d*/
                        ++a2[0x20]; /*0x93743f*/
                    }
                  }
                  else
                  {
                    sub_9363C0(a2, v24); /*0x9373eb*/
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        while ( a2[4 * v9] != (_BYTE)v23 || a2[4 * v9 + 1] != v8 ) /*0x9371ed*/
        {
          if ( --v9 < 0 ) /*0x9371f4*/
            goto LABEL_7; /*0x9371f4*/
        }
      }
    }
    result = ++v25; /*0x937446*/
  }
  while ( (int)v25 < (int)&word_AA1D4E );
  return result; /*0x937458*/
}
