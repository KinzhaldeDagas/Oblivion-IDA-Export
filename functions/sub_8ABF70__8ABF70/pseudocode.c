// TES4 authoritative: computes contact-match error from normal difference, contact plane/fraction difference, and resolved collidable-space point difference.
double __thiscall hkpCharacterProxy_ComputeContactMatchError(float *this, __m128 *candidate, __m128 *manifoldEntry)
{
  __m128 v3; // xmm0
  __int32 v4; // edx
  __m128 v5; // xmm1
  double v6; // st7
  __m128 v7; // xmm0
  double v8; // st7
  char v9; // cl
  double v10; // st7
  _DWORD *v11; // ecx
  __int32 v12; // eax
  bool v13; // zf
  _DWORD *v14; // ecx
  __m128 v15; // xmm0
  __m128 v16; // xmm0
  float v18; // [esp+4h] [ebp-28h]
  float v19; // [esp+8h] [ebp-24h]
  __m128 v20; // [esp+Ch] [ebp-20h] BYREF
  __m128 v21; // [esp+1Ch] [ebp-10h] BYREF

  v3 = _mm_mul_ps(candidate[1], manifoldEntry[1]);// Compares candidate and manifold contact normals through dot(normalA, normalB). /*0x8abf8e*/
  v4 = candidate[2].m128_i32[2]; /*0x8abfb3*/
  v5 = 0; /*0x8abfb6*/
  v6 = (fConstant_1 /*0x8abfb9*/
      - (float)(_mm_shuffle_ps(v3, v3, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v3, v3, 0x55).m128_f32[0] + v3.m128_f32[0])))
     * *(this + 0x18);
  v7 = 0; /*0x8abfbc*/
  v21 = 0; /*0x8abfbf*/
  v8 = v6 * *(this + 0x18); /*0x8abfc4*/
  v9 = *(_BYTE *)(v4 + 0x18); /*0x8abfc7*/
  v20 = 0; /*0x8abfcd*/
  v18 = v8; /*0x8abfd2*/
  v10 = candidate[1].m128_f32[3] - manifoldEntry[1].m128_f32[3];// Includes squared difference between contact normal.w / distance fields in the match error. /*0x8abfd9*/
  if ( v9 == 1 ) /*0x8abfe6*/
  {
    v11 = (_DWORD *)(v4 + *(_DWORD *)(v4 + 0x10)); /*0x8abfeb*/
    if ( v11 ) /*0x8abfed*/
    {
      sub_8ABCE0(v11, candidate, &v20); /*0x8abff5*/
      v7 = v20; /*0x8abffa*/
      v5 = v21; /*0x8abfff*/
    }
  }
  v12 = manifoldEntry[2].m128_i32[2]; /*0x8ac004*/
  v13 = *(_BYTE *)(v12 + 0x18) == 1; /*0x8ac007*/
  v21 = v5; /*0x8ac00b*/
  if ( v13 ) /*0x8ac010*/
  {
    v14 = (_DWORD *)(v12 + *(_DWORD *)(v12 + 0x10)); /*0x8ac015*/
    if ( v14 ) /*0x8ac017*/
    {
      sub_8ABCE0(v14, manifoldEntry, &v21); /*0x8ac01f*/
      v7 = v20; /*0x8ac024*/
    }
  }
  v15 = _mm_sub_ps(v7, v21);                    // Includes squared resolved collidable-space point delta in the match error when collidable transform data is available. /*0x8ac029*/
  v16 = _mm_mul_ps(v15, v15); /*0x8ac02e*/
  v19 = v10 * v10; /*0x8abfe0*/
  return (float)(_mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0] /*0x8ac06a*/
               + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]))
       * kFaceEarNormalMatchRadius
       + v18 * flt_A31C80
       + v19;
}
