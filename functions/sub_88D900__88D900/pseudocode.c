void __thiscall sub_88D900(__m128 *this, __m128 *a2, char a3)
{
  int v4; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // edi
  int v7; // ebx
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  bool v10; // zf
  float v11; // [esp+4h] [ebp-E4h]
  float v12; // [esp+20h] [ebp-C8h]
  float v13; // [esp+20h] [ebp-C8h]
  int v14[4]; // [esp+28h] [ebp-C0h] BYREF
  __m128 v15; // [esp+38h] [ebp-B0h] BYREF
  __m128 v16; // [esp+48h] [ebp-A0h] BYREF
  __m128 v17[2]; // [esp+68h] [ebp-80h] BYREF
  __m128 v18; // [esp+88h] [ebp-60h] BYREF
  __m128 v19[3]; // [esp+98h] [ebp-50h] BYREF
  __m128 v20; // [esp+C8h] [ebp-20h]

  if ( !byte_BA7A04 )
  {
    v4 = 0;
    if ( (a3 & 1) != 0 )
    {
      v4 = 3;
    }
    else if ( (a3 & 2) != 0 )
    {
      v4 = 6;
    }
    if ( (a3 & 8) != 0 )
    {
      v4 += 2;
    }
    else if ( (a3 & 4) != 0 )
    {
      ++v4;
    }
    v12 = *(float *)(4 * v4 + 0xB2E4DC) + a2->m128_f32[3];
    *(float *)v14 = 0.0;
    *(float *)&v14[1] = 0.0;
    *(float *)&v14[2] = 1.0;
    *(float *)&v14[3] = 0.0;
    v11 = -v12;
    sub_8B1B00(&v15, (int)v14, v11);
    v20 = *a2;
    sub_8B1DD0(v19[0].m128_f32, v15.m128_f32);
    sub_88FCC0(&v18, v19, this + 4);
    v17[0] = _mm_add_ps(*(this + 2), v18);
    v17[1] = _mm_add_ps(*(this + 3), v18);
    sub_88D820((hkVector4 **)this, (hkVector4 *)&v16);
    if ( (_mm_movemask_ps(
            _mm_cmplt_ps(
              _mm_shuffle_ps((__m128)LODWORD(flt_A37080), (__m128)LODWORD(flt_A37080), 0),
              _mm_and_ps(_mm_sub_ps(v16, v17[0]), (__m128)xmmword_A372D0)))
        & 7) != 0 )
    {
      v5 = (_DWORD *)this->m128_i32[2];
      if ( v5 )
      {
        sub_89F570(this);
        sub_8CD9D0(v5, v17);
        sub_89F570(this);
      }
      v6 = (_DWORD *)this->m128_i32[2];
      if ( v6 )
      {
        v7 = v6[0x2B];
        sub_88D6C0((_DWORD *)this->m128_i32[2], v12);
        if ( v7 != v6[0x2B] )
          goto LABEL_19;
        v13 = *((float *)this + 0x18);
        if ( *((_BYTE *)this + 0x69) )
          v13 = v13 * dbl_A2FAA0;
        if ( v13 <= 0.0
          || (v8 = _mm_sub_ps(*a2, *(this + 5)),
              v9 = _mm_mul_ps(v8, v8),
              v16.m128_i32[0] = fsqrt(
                                  _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0]
                                + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0])),
              v16.m128_f32[0] > (double)v13) )
        {
LABEL_19:
          v10 = *((_BYTE *)this + 0x68) == 0;
          *(this + 5) = *a2;
          if ( v10 && !*(_BYTE *)(this->m128_i32[2] + 0xFD) )
          {
            (*(void (__thiscall **)(_DWORD *))(*v6 + 0x30))(v6);
            (*(void (__thiscall **)(_DWORD *))(*v6 + 0x38))(v6);
          }
        }
      }
    }
  }
}
