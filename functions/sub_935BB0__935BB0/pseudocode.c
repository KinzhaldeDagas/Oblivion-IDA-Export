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

  v2 = a2[1];
  v3 = a2[2].m128_i32[0];
  v4 = _mm_shuffle_ps(v2, v2, 0xFF);
  v6 = a2[2].m128_i32[1];
  v10[0] = _mm_add_ps(*a2, _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), v2));
  v7 = (__m128)xmmword_A9B570;
  v11 = v6;
  v8 = *(this + 2);
  v12 = v3;
  v10[1] = _mm_xor_ps(v2, v7);
  (*(void (__thiscall **)(int, _OWORD *))(*(_DWORD *)v8 + 4))(v8, v10);
  result = *(this + 2);
  *(this + 1) = *(_DWORD *)(result + 4);
  return result;
}
