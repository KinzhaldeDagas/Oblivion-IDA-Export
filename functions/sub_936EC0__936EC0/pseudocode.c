const wchar_t *__thiscall sub_936EC0(__m128 *this, unsigned __int8 *a2, int a3, unsigned __int16 a4, float a5)
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
  __m128 v28[3]; // [esp+24h] [ebp-40h] BYREF
  float v29; // [esp+54h] [ebp-10h]
  float v30; // [esp+58h] [ebp-Ch]
  int v31; // [esp+5Ch] [ebp-8h]

  result = aP0; /*0x936ece*/
  v25 = aP0; /*0x936ed6*/
  do
  {
    v7 = *result; /*0x936ee0*/
    if ( (a4 & v7) == 0 )
    {
      v23 = a3; /*0x936ef6*/
      v8 = BYTE1(a3) & 0xF | BYTE1(a3) ^ v7; /*0x936f03*/
      v9 = a2[0x21] - 1; /*0x936f09*/
      BYTE1(v23) = v8; /*0x936f0a*/
      if ( v9 < 0 )
      {
LABEL_7:
        sub_936B70(this, v28, (unsigned __int8 *)&v23); /*0x936f26*/
        v10 = v28[0]; /*0x936f37*/
        if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_and_ps(v28[0], (__m128)xmmword_A372D0), *(this + 9))) & 7) == 7 )
        {
          v11 = v29 * v28[0].m128_f32[v31] - *((float *)this + v31 + 0x18); /*0x936f6f*/
          v30 = v11; /*0x936f73*/
          if ( v11 >= a5 - flt_AA1D50 )
          {
            if ( (unsigned __int8)v23 <= 6u
              && ((unsigned __int8)v23 > 2u
                ? (v12 = *((__m128 **)this + 5))
                : (__m128 *)(v12 = *((__m128 **)this + 6), v10 = v28[1]),
                  v13 = 0,
                  v14 = _mm_add_ps(
                          _mm_add_ps(
                            _mm_mul_ps(*v12, _mm_shuffle_ps(v10, v10, 0)),
                            _mm_mul_ps(v12[1], _mm_shuffle_ps(v10, v10, 0x55))),
                          _mm_add_ps(_mm_mul_ps(v12[2], _mm_shuffle_ps(v10, v10, 0xAA)), v12[3])),
                  a2[0x21]) )
            {
              v15 = 0; /*0x936fee*/
              while ( 1 ) /*0x936ff0*/
              {
                if ( a2[4 * v13] <= 6u ) /*0x936ff4*/
                {
                  v16 = _mm_sub_ps(v14, *(__m128 *)(*((_DWORD *)this + 4) + v15 + 0x30)); /*0x93700b*/
                  v17 = _mm_mul_ps(v16, v16); /*0x93700e*/
                  v18 = *((float *)this + 0x2C) * *((float *)this + 0x2C) + flt_AA1D50; /*0x937011*/
                  v26 = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0] /*0x937031*/
                      + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
                  if ( v26 <= v18 ) /*0x937042*/
                    break; /*0x937042*/
                }
                ++v13; /*0x93704c*/
                v15 += 0x30; /*0x93704d*/
                if ( v13 >= a2[0x21] ) /*0x937052*/
                  goto LABEL_18; /*0x937052*/
              }
            }
            else
            {
LABEL_18:
              if ( a2[0x21] < 8u ) /*0x937058*/
              {
                v24 = sub_936460(a2, this->m128_i32[0], this->m128_i32[1], &v23); /*0x937073*/
                if ( v24 >= 0 ) /*0x937077*/
                {
                  v19 = **((__m128 ***)this + 4); /*0x937087*/
                  if ( v31 > 2 ) /*0x937089*/
                  {
                    if ( v31 > 6 ) /*0x9370a2*/
                      sub_936E10((__m128 **)this, v19, (int)&v23, v28); /*0x9370c5*/
                    else
                      sub_936D70((int)this, v19, (unsigned __int8 *)&v23, v28); /*0x9370b1*/
                  }
                  else
                  {
                    sub_936C10((__m128 **)this, v19, (unsigned __int8 *)&v23, v28); /*0x937098*/
                  }
                  if ( a2[0x21] <= 1u /*0x937110*/
                    || (v20 = _mm_mul_ps(*(__m128 *)(**((_DWORD **)this + 4) - 0x20), v19[1]),
                        v27 = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0]
                            + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]),
                        v27 > (double)*(float *)&SrcStr) )
                  {
                    v21 = (*(int (__thiscall **)(__int32, __int32, __int32, __int32, __m128 *))(*(_DWORD *)this->m128_i32[3] /*0x937131*/
                                                                                              + 8))(
                            this->m128_i32[3],
                            this->m128_i32[0],
                            this->m128_i32[1],
                            this->m128_i32[2],
                            v19);
                    v22 = v24; /*0x937138*/
                    *(_WORD *)&a2[4 * v24 + 2] = v21; /*0x93713c*/
                    if ( v21 == (__int16)0xFFFF ) /*0x937141*/
                    {
                      sub_9363C0(a2, v22); /*0x937146*/
                    }
                    else
                    {
                      **((_DWORD **)this + 4) += 0x30; /*0x937150*/
                      HIWORD(v23) = *(_WORD *)&a2[4 * v22 + 2]; /*0x937158*/
                      v19[2].m128_i16[0] = *(_WORD *)&a2[4 * v22 + 2]; /*0x937162*/
                      if ( (unsigned __int8)v23 <= 6u ) /*0x93716b*/
                        ++a2[0x20]; /*0x93716d*/
                    }
                  }
                  else
                  {
                    sub_9363C0(a2, v24); /*0x937119*/
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        while ( a2[4 * v9] != (_BYTE)v23 || a2[4 * v9 + 1] != v8 ) /*0x936f1d*/
        {
          if ( --v9 < 0 ) /*0x936f24*/
            goto LABEL_7; /*0x936f24*/
        }
      }
    }
    result = ++v25; /*0x937174*/
  }
  while ( (int)v25 < (int)&word_AA1D4E );
  return result; /*0x937186*/
}
