__m128 *__thiscall sub_8914C0(__m128 *this, __m128 *a2)
{
  __m128 *v3; // eax
  __m128 v4; // xmm0
  _DWORD *v5; // ecx
  __m128 *result; // eax
  __m128 v7; // [esp+Ch] [ebp-60h] BYREF
  __m128 v8[4]; // [esp+1Ch] [ebp-50h] BYREF

  v3 = *(__m128 **)(*((_DWORD *)this + 0xD9) + 8); /*0x8914dd*/
  v4 = v3[7]; /*0x8914e0*/
  v3 += 7; /*0x8914e4*/
  v8[0] = v4; /*0x8914e7*/
  v8[1] = v3[1]; /*0x8914f4*/
  v8[2] = v3[2]; /*0x891508*/
  v8[3] = v3[3]; /*0x891516*/
  hkBasis_TransformVector(&v7, v8, this + 0x34); /*0x89151b*/
  v5 = (_DWORD *)this->m128_i32[2]; /*0x891520*/
  if ( v5 ) /*0x891525*/
    result = (__m128 *)bhkCollisionWrapper_GetPositionPtr(v5); /*0x891527*/
  else
    result = (__m128 *)&unk_BA7A40; /*0x89152e*/
  *a2 = _mm_sub_ps(*result, v7); /*0x891542*/
  return result; /*0x891546*/
}
