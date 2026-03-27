__m128 *__thiscall sub_928480(__m128 *this, int a2, int *a3)
{
  __m128 v5; // [esp+10h] [ebp-30h] BYREF
  __m128 v6; // [esp+20h] [ebp-20h] BYREF
  __m128 v7; // [esp+30h] [ebp-10h] BYREF

  sub_8F0F70(a2, a3, *(_DWORD *)(a2 + 0x28), 8);
  sub_88FCC0(&v5, *(__m128 **)(a2 + 0x1C), this + 1);
  sub_88FCC0(&v6, *(__m128 **)(a2 + 0x20), this + 2);
  sub_88FE00(&v7, *(__m128 **)(a2 + 0x1C), this + 3);
  return sub_8F1790(&v5, a2, (__m128 **)a3);
}
