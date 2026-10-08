int __thiscall sub_8F9F20(float *this, __m128 **a2, __m128 **a3, int a4, int a5)
{
  int v6[3]; // [esp+0h] [ebp-Ch] BYREF

  v6[2] = a5; /*0x8f9f27*/
  v6[1] = 0x7F7FFFFF; /*0x8f9f3e*/
  v6[0] = (int)&off_A9B4E0; /*0x8f9f46*/
  return sub_8F96A0(this, a3, a2, a4, v6); /*0x8f9f53*/
}
