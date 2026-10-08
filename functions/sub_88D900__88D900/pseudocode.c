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
  __m128 v14; // [esp+28h] [ebp-C0h] BYREF
  __m128 v15; // [esp+38h] [ebp-B0h] BYREF
  __m128 v16; // [esp+48h] [ebp-A0h] BYREF
  __m128 v17[2]; // [esp+68h] [ebp-80h] BYREF
  __m128 v18; // [esp+88h] [ebp-60h] BYREF
  __m128 v19[3]; // [esp+98h] [ebp-50h] BYREF
  __m128 v20; // [esp+C8h] [ebp-20h]

  if ( !unk_BA7A04 ) /*0x88d91a*/
  {
    v4 = 0; /*0x88d936*/
    if ( (a3 & 1) != 0 ) /*0x88d93b*/
    {
      v4 = 3; /*0x88d93d*/
    }
    else if ( (a3 & 2) != 0 ) /*0x88d947*/
    {
      v4 = 6; /*0x88d949*/
    }
    if ( (a3 & 8) != 0 ) /*0x88d951*/
    {
      v4 += 2; /*0x88d953*/
    }
    else if ( (a3 & 4) != 0 ) /*0x88d95b*/
    {
      ++v4; /*0x88d95d*/
    }
    v12 = *(float *)(4 * v4 + 0xB2E4DC) + a2->m128_f32[3]; /*0x88d973*/
    v14.m128_f32[0] = 0.0; /*0x88d979*/
    v14.m128_f32[1] = 0.0; /*0x88d97d*/
    v14.m128_f32[2] = 1.0; /*0x88d983*/
    v14.m128_f32[3] = 0.0; /*0x88d987*/
    v11 = -v12; /*0x88d991*/
    hkQuaternion_SetAxisAngleScaled(&v15, &v14, v11); /*0x88d995*/
    v20 = *a2; /*0x88d9a9*/
    hkMatrix3_SetFromQuaternion(v19[0].m128_f32, v15.m128_f32); /*0x88d9b1*/
    hkTransform_TransformPosition(&v18, v19, this + 4); /*0x88d9c9*/
    v17[0] = _mm_add_ps(*(this + 2), v18); /*0x88d9dd*/
    v17[1] = _mm_add_ps(*(this + 3), v18); /*0x88d9f0*/
    sub_88D820((hkVector4 **)this, (hkVector4 *)&v16); /*0x88d9f5*/
    if ( (_mm_movemask_ps( /*0x88da27*/
            _mm_cmplt_ps(
              _mm_shuffle_ps((__m128)LODWORD(flt_A37080), (__m128)LODWORD(flt_A37080), 0),
              _mm_and_ps(_mm_sub_ps(v16, v17[0]), (__m128)xmmword_A372D0)))
        & 7) != 0 )
    {
      v5 = (_DWORD *)this->m128_i32[2]; /*0x88da2d*/
      if ( v5 ) /*0x88da32*/
      {
        bhkRefObject_UpdateHavokObject(this); /*0x88da36*/
        sub_8CD9D0(v5, v17); /*0x88da42*/
        bhkRefObject_UpdateHavokObject(this); /*0x88da49*/
      }
      v6 = (_DWORD *)this->m128_i32[2]; /*0x88da4e*/
      if ( v6 ) /*0x88da53*/
      {
        v7 = v6[0x2B]; /*0x88da5d*/
        sub_88D6C0((_DWORD *)this->m128_i32[2], v12); /*0x88da69*/
        if ( v7 != v6[0x2B] ) /*0x88da74*/
          goto LABEL_19; /*0x88da74*/
        v13 = *((float *)this + 0x18); /*0x88da7d*/
        if ( *((_BYTE *)this + 0x69) ) /*0x88da76*/
          v13 = v13 * dbl_A2FAA0; /*0x88da8d*/
        if ( v13 <= 0.0 /*0x88dade*/
          || (v8 = _mm_sub_ps(*a2, *(this + 5)),
              v9 = _mm_mul_ps(v8, v8),
              v16.m128_i32[0] = fsqrt(
                                  _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0]
                                + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0])),
              v16.m128_f32[0] > (double)v13) )
        {
LABEL_19:
          v10 = *((_BYTE *)this + 0x68) == 0; /*0x88dae4*/
          *(this + 5) = *a2; /*0x88daef*/
          if ( v10 && !*(_BYTE *)(this->m128_i32[2] + 0xFD) ) /*0x88daf8*/
          {
            (*(void (__thiscall **)(_DWORD *))(*v6 + 0x30))(v6); /*0x88db08*/
            (*(void (__thiscall **)(_DWORD *))(*v6 + 0x38))(v6); /*0x88db11*/
          }
        }
      }
    }
  }
}
