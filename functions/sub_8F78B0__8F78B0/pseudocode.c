int __cdecl sub_8F78B0(int a1, int *a2, int a3, int a4)
{
  int v5[3]; // [esp+0h] [ebp-Ch] BYREF

  v5[2] = a4;
  v5[1] = 0x7F7FFFFF;
  v5[0] = (int)&off_A9B4E0;
  return sub_8F7610(a2, a1, a3, v5);
}
