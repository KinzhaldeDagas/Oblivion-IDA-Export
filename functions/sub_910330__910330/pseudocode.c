__int8 __thiscall sub_910330(__m128 *this, int a2)
{
  __int8 result; // al
  int v4; // esi
  __m128 *v5; // eax
  __m128 *v6; // ebx
  __m128 v7; // xmm0
  unsigned int v8; // [esp+Ch] [ebp-54h]
  int v9; // [esp+Ch] [ebp-54h]
  __m128 v10; // [esp+10h] [ebp-50h] BYREF
  __m128 v11; // [esp+20h] [ebp-40h] BYREF
  __m128 v12[3]; // [esp+30h] [ebp-30h] BYREF

  result = *((_BYTE *)this + 0x38);
  if ( result )
  {
    v4 = *((_DWORD *)this + 6);
    v5 = *(__m128 **)(v4 + 0x50);
    v6 = v5 + 1;
    sub_88FD90(&v11, v5 + 1, v5 + 0xE);
    v7 = _mm_mul_ps(*(this + 2), v11);
    *(float *)&v8 = (*((float *)this + 0xC)
                   - (float)(_mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0]
                           + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0])))
                  * *((float *)this + 0xD);
    v10 = _mm_mul_ps(_mm_shuffle_ps((__m128)v8, (__m128)v8, 0), *(this + 2));
    (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(v4 + 0x50) + 0x28))(*(_DWORD *)(v4 + 0x50), v12);
    sub_88FE00(&v10, v12, &v10);
    sub_88FE00(&v10, v6, &v10);
    v9 = *(_DWORD *)(a2 + 8);
    sub_8A6410(v4);
    return (*(__int8 (__thiscall **)(_DWORD, int, __m128 *))(**(_DWORD **)(v4 + 0x50) + 0x70))(
             *(_DWORD *)(v4 + 0x50),
             v9,
             &v10);
  }
  return result;
}
