int __thiscall sub_935BB0(_DWORD *this, __m128 *a2)
{
  __m128 v2; // xmm1
  __int32 v3; // edx
  __m128 v4; // xmm0
  __int32 v6; // ecx
  __m128 v7; // xmm0
  int v8; // ecx
  int result; // eax
  _OWORD v10[2]; // [esp+Ch] [ebp-30h] BYREF
  __int32 v11; // [esp+2Ch] [ebp-10h]
  __int32 v12; // [esp+30h] [ebp-Ch]

  v2 = a2[1]; /*0x935bc0*/
  v3 = a2[2].m128_i32[0]; /*0x935bc4*/
  v4 = _mm_shuffle_ps(v2, v2, 0xFF); /*0x935bc7*/
  v6 = a2[2].m128_i32[1]; /*0x935bd8*/
  v10[0] = _mm_add_ps(*a2, _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), v2)); /*0x935be1*/
  v7 = (__m128)xmmword_A9B570; /*0x935be6*/
  v11 = v6; /*0x935bed*/
  v8 = *(this + 2); /*0x935bf1*/
  v12 = v3; /*0x935bf4*/
  v10[1] = _mm_xor_ps(v2, v7); /*0x935bff*/
  (*(void (__thiscall **)(int, _OWORD *))(*(_DWORD *)v8 + 4))(v8, v10); /*0x935c07*/
  result = *(this + 2); /*0x935c0a*/
  *(this + 1) = *(_DWORD *)(result + 4); /*0x935c10*/
  return result; /*0x935c14*/
}
