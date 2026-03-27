void __thiscall sub_8A7930(LPCRITICAL_SECTION *this, __m128 *a2, float a3, int a4, int a5)
{
  int v5; // esi
  __m128 v6; // xmm0
  __m128 v8; // [esp+10h] [ebp-40h]
  __m128 v9; // [esp+20h] [ebp-30h]
  __m128 v10; // [esp+30h] [ebp-20h] BYREF
  __m128 v11; // [esp+40h] [ebp-10h] BYREF

  v5 = 0;
  v9 = 0;
  do
  {
    v8 = v9;
    v8.m128_f32[v5] = a3;
    v6 = _mm_sub_ps(*a2, v8);
    v11 = _mm_add_ps(*a2, v8);
    v10 = v6;
    sub_8A78E0(this, (int)&v11, (int)&v10, a4, a5);
    ++v5;
  }
  while ( v5 < 3 );
}
