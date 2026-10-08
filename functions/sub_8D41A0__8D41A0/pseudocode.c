int __cdecl sub_8D41A0(int a1, _DWORD *a2)
{
  int result; // eax
  int i; // edi
  char v4; // al
  __m128 *v5; // esi

  result = *(_DWORD *)(a1 + 0x38); /*0x8d41ab*/
  for ( i = 0; i < result; ++i ) /*0x8d41b4*/
  {
    v4 = *(_BYTE *)(i + *a2); /*0x8d41bb*/
    if ( v4 == 1 || v4 == 2 ) /*0x8d41c4*/
    {
      v5 = (__m128 *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x34) + 4 * i) + 0x50) + 0x10); /*0x8d41cf*/
      hkMatrix3_SetFromQuaternion( /*0x8d41d8*/
        v5->m128_f32,
        (float *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x34) + 4 * i) + 0x50) + 0x80));
      v5[3] = _mm_sub_ps( /*0x8d421a*/
                v5[5],
                _mm_add_ps(
                  _mm_add_ps(
                    _mm_mul_ps(*v5, _mm_shuffle_ps(v5[8], v5[8], 0)),
                    _mm_mul_ps(v5[1], _mm_shuffle_ps(v5[8], v5[8], 0x55))),
                  _mm_mul_ps(v5[2], _mm_shuffle_ps(v5[8], v5[8], 0xAA))));
    }
    result = *(_DWORD *)(a1 + 0x38); /*0x8d421e*/
  }
  return result; /*0x8d4226*/
}
