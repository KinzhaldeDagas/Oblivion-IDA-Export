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

  result = *((_BYTE *)this + 0x38); /*0x91033e*/
  if ( result ) /*0x910343*/
  {
    v4 = *((_DWORD *)this + 6); /*0x910349*/
    v5 = *(__m128 **)(v4 + 0x50); /*0x91034c*/
    v6 = v5 + 1; /*0x91034f*/
    hkBasis_ProjectVector(&v11, v5 + 1, v5 + 0xE); /*0x91035d*/
    v7 = _mm_mul_ps(*(this + 2), v11); /*0x910371*/
    *(float *)&v8 = (*((float *)this + 0xC) /*0x91039e*/
                   - (float)(_mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0]
                           + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0])))
                  * *((float *)this + 0xD);
    v10 = _mm_mul_ps(_mm_shuffle_ps((__m128)v8, (__m128)v8, 0), *(this + 2)); /*0x9103b2*/
    (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(v4 + 0x50) + 0x28))(*(_DWORD *)(v4 + 0x50), v12); /*0x9103bc*/
    hkBasis_TransformVector(&v10, v12, &v10); /*0x9103cd*/
    hkBasis_TransformVector(&v10, v6, &v10); /*0x9103dc*/
    v9 = *(_DWORD *)(a2 + 8); /*0x9103e9*/
    sub_8A6410(v4); /*0x9103ed*/
    return (*(__int8 (__thiscall **)(_DWORD, int, __m128 *))(**(_DWORD **)(v4 + 0x50) + 0x70))( /*0x910401*/
             *(_DWORD *)(v4 + 0x50),
             v9,
             &v10);
  }
  return result; /*0x910404*/
}
