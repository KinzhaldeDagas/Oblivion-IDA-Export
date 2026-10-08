int __cdecl sub_8F8D70(int a1, int a2, int a3)
{
  __m128 *v3; // eax

  v3 = **(__m128 ***)(a1 + 4); /*0x8f8d77*/
  *(_BYTE *)(a2 + 2) = 0; /*0x8f8d87*/
  *(_WORD *)a3 = 0xFFFF; /*0x8f8d8b*/
  *(_WORD *)(a3 + 2) = 0xFFFF; /*0x8f8d8e*/
  *(_WORD *)(a3 + 4) = 0xFFFF; /*0x8f8d92*/
  sub_8D1EF0(v3 + 1, (float *)(a3 + 8)); /*0x8f8d9e*/
  return a3 + 0x20; /*0x8f8da9*/
}
