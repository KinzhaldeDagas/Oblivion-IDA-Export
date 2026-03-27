int __thiscall sub_8E1160(__m128 *this, __m128 *a2, __m128 *a3, int a4)
{
  __int32 v5; // edx
  int result; // eax
  double v7; // st7
  __m128 v8; // xmm0
  double v9; // st7
  __m128 v10; // xmm2
  _DWORD v11[7]; // [esp+0h] [ebp-2Ch] BYREF
  __m128 v12; // [esp+1Ch] [ebp-10h] BYREF

  v5 = this->m128_i32[0];
  *(__m128 *)&v11[3] = _mm_xor_ps(*a2, (__m128)xmmword_A965C0);
  result = (*(int (__thiscall **)(__m128 *, _DWORD *, __m128 *, int))(v5 + 0x30))(this, &v11[3], &v12, a4);
  v7 = fConstant_1;
  v8 = v12;
  *(this + 1) = _mm_add_ps(*(this + 1), v12);
  v9 = v7 / *((float *)this + 0xC);
  v10 = *(this + 1);
  v11[6] = 0;
  *(float *)&v11[3] = v9;
  *(float *)&v11[4] = fConstant_1 / *((float *)this + 0xD);
  *(float *)&v11[5] = fConstant_1 / *((float *)this + 0xE);
  *(this + 2) = _mm_add_ps(v10, *(__m128 *)&v11[3]);
  *a3 = _mm_xor_ps(v8, (__m128)xmmword_A965C0);
  return result;
}
