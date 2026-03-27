int __thiscall sub_94F4E0(__m128 *this, int a2, int *a3, int a4)
{
  __m128 *v4; // ebx
  __m128 v6; // xmm1
  double v7; // st7
  int v8; // esi
  __m128 v9; // xmm3
  int v10; // eax
  unsigned int v12; // [esp+10h] [ebp-B4h]
  unsigned int v13; // [esp+10h] [ebp-B4h]
  __m128 v14; // [esp+14h] [ebp-B0h] BYREF
  __m128 v15; // [esp+24h] [ebp-A0h] BYREF
  __m128 v16; // [esp+34h] [ebp-90h] BYREF
  __m128 v17[4]; // [esp+44h] [ebp-80h] BYREF
  __m128 v18[4]; // [esp+84h] [ebp-40h] BYREF

  v4 = *(__m128 **)(a2 + 0xC);
  sub_958600((_DWORD *)this + 0x30, (int)a3);
  sub_94D100(this, a2, v17, v18);
  sub_88FCC0(this + 5, v17, v4 + 4);
  sub_88FCC0(this + 4, v18, v4 + 1);
  sub_94CF80(this, a4);
  sub_94CF30((int *)this, a4);
  (*(void (__thiscall **)(int *, __m128 *, __m128 *, unsigned int, int))(*a3 + 0x1C))(
    a3,
    this + 4,
    this + 5,
    0xFFFF0000,
    a4);
  sub_88FE00(&v16, this + 9, v4 + 5);
  v6 = *(this + 5);
  *(float *)&v12 = this->m128_f32[0] * flt_A3D65C;
  v7 = this->m128_f32[0] * flt_A45E4C;
  v8 = *a3;
  v9 = _mm_mul_ps(_mm_shuffle_ps((__m128)v12, (__m128)v12, 0), v16);
  *(float *)&v13 = v7;
  v14 = _mm_add_ps(v9, v6);
  v15 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v13, (__m128)v13, 0), v16), v6);
  v10 = sub_8AEBB0(0.0, 0.5, 1.0, 1.0);
  return (*(int (__thiscall **)(int *, __m128 *, __m128 *, int, int))(v8 + 0x1C))(a3, &v15, &v14, v10, a4);
}
