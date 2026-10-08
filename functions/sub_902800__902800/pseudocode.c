int __cdecl sub_902800(__m128 **a1, int *a2, int a3, int a4)
{
  int v5[3]; // [esp+0h] [ebp-Ch] BYREF

  v5[2] = a4; /*0x902813*/
  v5[1] = 0x7F7FFFFF; /*0x90281e*/
  v5[0] = (int)&off_A9B4E0; /*0x902826*/
  return sub_902160(a2, a1, a3, v5); /*0x902836*/
}
