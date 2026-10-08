int __stdcall sub_8F6EC0(int a1, __m128 **a2, int a3, int a4)
{
  _DWORD v5[3]; // [esp+0h] [ebp-Ch] BYREF

  v5[2] = a4; /*0x8f6ed3*/
  v5[1] = 0x7F7FFFFF; /*0x8f6ede*/
  v5[0] = &off_A9B4E0; /*0x8f6ee6*/
  return sub_908DE0(a2, a1, a3, (int)v5); /*0x8f6ef6*/
}
