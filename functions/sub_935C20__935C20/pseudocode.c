int __thiscall sub_935C20(__m128 *this, __m128 *a2)
{
  __int32 v2; // edx
  __m128 v3; // xmm0
  __m128 v5; // xmm1
  __int32 v6; // ecx
  __m128 v7; // xmm2
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  int v10; // ecx
  int result; // eax
  _OWORD v12[2]; // [esp+Ch] [ebp-30h] BYREF
  __int32 v13; // [esp+2Ch] [ebp-10h]
  __int32 v14; // [esp+30h] [ebp-Ch]

  v2 = a2[2].m128_i32[0];
  v3 = _mm_shuffle_ps(a2[1], a2[1], 0xFF);
  v5 = *(this + 1);
  v6 = a2[2].m128_i32[1];
  v7 = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), v5);
  v8 = (__m128)xmmword_A9B570;
  v12[0] = _mm_add_ps(*a2, v7);
  v9 = a2[1];
  v13 = v6;
  v10 = *((_DWORD *)this + 8);
  v14 = v2;
  v12[1] = _mm_xor_ps(v9, v8);
  (*(void (__thiscall **)(int, _OWORD *))(*(_DWORD *)v10 + 4))(v10, v12);
  result = *((_DWORD *)this + 8);
  this->m128_i32[1] = *(_DWORD *)(result + 4);
  return result;
}
