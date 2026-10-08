// TES4 authoritative: hkWorldRayCaster helper for collector-based broadphase raycasts. Confirms raycast output normal storage at bhkWorldRayCastData +0x30 and related output fields.
double __thiscall sub_8BA470(hkWorldRayCaster *this, int a2, int a3)
{
  int v3; // ebx
  int v4; // edx
  int v5; // ebx
  int v7; // eax
  __m128 *v8; // edi
  __m128 *v9; // eax
  __m128 v10; // xmm3
  __m128 v11; // xmm5
  __m128 v12; // xmm0
  __m128 v13; // xmm4
  __m128 v14; // xmm2
  __m128 v15; // xmm5
  int v16; // ecx
  __m128 v17; // xmm3
  __m128 v18; // xmm5
  __m128 v19; // xmm0
  hkVector4 *p_To; // edx
  __m128 v21; // xmm4
  __m128 v22; // xmm1
  int v23; // esi
  char v25; // [esp+17h] [ebp-9h] BYREF
  int v26; // [esp+18h] [ebp-8h]
  int v27; // [esp+1Ch] [ebp-4h]

  v3 = *(char *)(a2 + 5); /*0x8ba47d*/
  v4 = *(_DWORD *)(v3 + a2); /*0x8ba481*/
  v5 = a2 + v3; /*0x8ba484*/
  v7 = *((_DWORD *)&this->__vftable + 3) + a3 * LODWORD(this->data.WorldRayCastInput.From.x); /*0x8ba493*/
  v27 = v4; /*0x8ba498*/
  v26 = v7; /*0x8ba49c*/
  if ( !v4 ) /*0x8ba4a0*/
    return *(float *)(v7 + 4); /*0x8ba5ce*/
  v8 = (__m128 *)(*((_DWORD *)&this->__vftable + 1) + 0x30 * a3); /*0x8ba4b2*/
  if ( !*(_BYTE *)(***((int (__thiscall ****)(_DWORD, char *, __m128 *, int))&this->__vftable + 2))( /*0x8ba4bf*/
                    *((_DWORD *)&this->__vftable + 2),
                    &v25,
                    v8,
                    v5) )
    return *(float *)(v26 + 4); /*0x8ba5c2*/
  v9 = *(__m128 **)(v5 + 8); /*0x8ba4c8*/
  v10 = v9[2]; /*0x8ba4cb*/
  v11 = v9[1]; /*0x8ba4d6*/
  v12 = _mm_sub_ps(*(__m128 *)*((_DWORD *)&this->__vftable + 1), v9[3]); /*0x8ba4e0*/
  v13 = _mm_shuffle_ps(v10, v10, 0x44); /*0x8ba4e6*/
  v14 = _mm_shuffle_ps(*v9, v11, 0xEE); /*0x8ba4f8*/
  v15 = _mm_shuffle_ps(*v9, v11, 0x44); /*0x8ba4fc*/
  v16 = v27; /*0x8ba507*/
  this->data.WorldRayCastInput.To = (hkVector4)_mm_add_ps( /*0x8ba533*/
                                                 _mm_add_ps(
                                                   _mm_mul_ps(
                                                     _mm_shuffle_ps(v15, v13, 0x88),
                                                     _mm_shuffle_ps(v12, v12, 0)),
                                                   _mm_mul_ps(
                                                     _mm_shuffle_ps(v15, v13, 0xDD),
                                                     _mm_shuffle_ps(v12, v12, 0x55))),
                                                 _mm_mul_ps(
                                                   _mm_shuffle_ps(v14, _mm_shuffle_ps(v10, v10, 0xEE), 0x88),
                                                   _mm_shuffle_ps(v12, v12, 0xAA)));
  v17 = v9[2]; /*0x8ba537*/
  v18 = v9[1]; /*0x8ba542*/
  v19 = _mm_sub_ps(v8[1], v9[3]); /*0x8ba54a*/
  p_To = &this->data.WorldRayCastInput.To; /*0x8ba54d*/
  v21 = _mm_shuffle_ps(v17, v17, 0x44); /*0x8ba553*/
  v22 = _mm_shuffle_ps(*v9, v18, 0x44); /*0x8ba55d*/
  *(__m128 *)&this->data.WorldRayCastInput.EnableShapeCollectionFilter = _mm_add_ps( /*0x8ba59c*/
                                                                           _mm_add_ps(
                                                                             _mm_mul_ps(
                                                                               _mm_shuffle_ps(v22, v21, 0x88),
                                                                               _mm_shuffle_ps(v19, v19, 0)),
                                                                             _mm_mul_ps(
                                                                               _mm_shuffle_ps(v22, v21, 0xDD),
                                                                               _mm_shuffle_ps(v19, v19, 0x55))),
                                                                           _mm_mul_ps(
                                                                             _mm_shuffle_ps(
                                                                               _mm_shuffle_ps(*v9, v18, 0xEE),
                                                                               _mm_shuffle_ps(v17, v17, 0xEE),
                                                                               0x88),
                                                                             _mm_shuffle_ps(v19, v19, 0xAA)));
  LODWORD(this->data.WorldRayCastOutput.Normal.x) = v8[2].m128_i32[1]; /*0x8ba5a3*/
  v23 = v26; /*0x8ba5a6*/
  (*(void (__thiscall **)(int, hkVector4 *, int, int))(*(_DWORD *)v16 + 0x18))(v16, p_To, v5, v26); /*0x8ba5af*/
  return *(float *)(v23 + 4); /*0x8ba5b5*/
}
