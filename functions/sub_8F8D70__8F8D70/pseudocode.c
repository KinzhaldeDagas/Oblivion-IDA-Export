int __cdecl sub_8F8D70(int a1, int a2, int a3)
{
  __m128 *v3; // eax

  v3 = **(__m128 ***)(a1 + 4);
  *(_BYTE *)(a2 + 2) = 0;
  *(_WORD *)a3 = 0xFFFF;
  *(_WORD *)(a3 + 2) = 0xFFFF;
  *(_WORD *)(a3 + 4) = 0xFFFF;
  sub_8D1EF0(v3 + 1, (float *)(a3 + 8));
  return a3 + 0x20;
}
