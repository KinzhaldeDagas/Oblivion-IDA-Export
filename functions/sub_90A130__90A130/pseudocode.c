int __cdecl sub_90A130(int *a1, __m128 **a2, _DWORD *a3, int a4)
{
  _DWORD v5[3]; // [esp+0h] [ebp-Ch] BYREF

  v5[2] = a4; /*0x90a143*/
  v5[1] = 0x7F7FFFFF; /*0x90a14e*/
  v5[0] = &off_A9B4E0; /*0x90a156*/
  return sub_909940(a2, a1, a3, (int)v5); /*0x90a166*/
}
