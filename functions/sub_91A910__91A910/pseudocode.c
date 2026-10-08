int __thiscall sub_91A910(_DWORD *this, int a2)
{
  __m128 *v2; // esi
  int v4; // ecx
  __m128 *v5; // esi
  int v6; // ecx
  int v8; // [esp-4h] [ebp-54h]
  int v9; // [esp-4h] [ebp-54h]
  float v10[7]; // [esp+4h] [ebp-4Ch] BYREF
  __m128 v11; // [esp+20h] [ebp-30h]
  __m128 v12; // [esp+30h] [ebp-20h]
  __m128 v13; // [esp+40h] [ebp-10h]

  v2 = (__m128 *)(*(_DWORD *)(a2 + 0x50) + 0x50); /*0x91a922*/
  hkMatrix3_SetFromQuaternion(&v10[3], (float *)(*(_DWORD *)(a2 + 0x50) + 0x70)); /*0x91a92f*/
  v4 = *(this + 0xFFFFFFFB); /*0x91a947*/
  v8 = unk_BA8420; /*0x91a96a*/
  v13 = _mm_sub_ps( /*0x91a982*/
          *v2,
          _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(*(__m128 *)&v10[3], _mm_shuffle_ps(v2[4], v2[4], 0)),
              _mm_mul_ps(v11, _mm_shuffle_ps(v2[4], v2[4], 0x55))),
            _mm_mul_ps(v12, _mm_shuffle_ps(v2[4], v2[4], 0xAA))));
  (*(void (__thiscall **)(int, float *, int, int))(*(_DWORD *)v4 + 0xC))(v4, &v10[3], a2 + 0x15, v8); /*0x91a98a*/
  v5 = (__m128 *)(*(_DWORD *)(a2 + 0x50) + 0x50); /*0x91a990*/
  hkMatrix3_SetFromQuaternion(&v10[3], (float *)(*(_DWORD *)(a2 + 0x50) + 0x80)); /*0x91a99b*/
  v6 = *(this + 0xFFFFFFFB); /*0x91a9b3*/
  v9 = unk_BA8420; /*0x91a9dd*/
  v13 = _mm_sub_ps( /*0x91a9ef*/
          v5[1],
          _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(*(__m128 *)&v10[3], _mm_shuffle_ps(v5[4], v5[4], 0)),
              _mm_mul_ps(v11, _mm_shuffle_ps(v5[4], v5[4], 0x55))),
            _mm_mul_ps(v12, _mm_shuffle_ps(v5[4], v5[4], 0xAA))));
  return (*(int (__thiscall **)(int, float *, int, int))(*(_DWORD *)v6 + 0xC))(v6, &v10[3], a2 + 0x16, v9); /*0x91a9fa*/
}
