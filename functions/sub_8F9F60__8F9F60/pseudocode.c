int __cdecl sub_8F9F60(__m128 **a1, __m128 **a2, int a3, int a4)
{
  int v5[3]; // [esp+0h] [ebp-Ch] BYREF

  v5[2] = a4; /*0x8f9f73*/
  v5[1] = 0x7F7FFFFF; /*0x8f9f7e*/
  v5[0] = (int)&off_A9B4E0; /*0x8f9f86*/
  return sub_8F98C0(a2, a1, a3, v5); /*0x8f9f96*/
}
