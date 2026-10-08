int __cdecl sub_901E00(int *a1, int *a2, int a3, int a4)
{
  _DWORD v5[3]; // [esp+0h] [ebp-Ch] BYREF

  v5[2] = a4; /*0x901e13*/
  v5[1] = 0x7F7FFFFF; /*0x901e1e*/
  v5[0] = &off_A9B4E0; /*0x901e26*/
  return sub_9050F0(a2, a1, a3, (int)v5); /*0x901e36*/
}
