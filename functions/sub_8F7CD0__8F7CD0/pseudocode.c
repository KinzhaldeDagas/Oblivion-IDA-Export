int __stdcall sub_8F7CD0(int a1, int *a2, int a3, int a4)
{
  int v5[3]; // [esp+0h] [ebp-Ch] BYREF

  v5[2] = a4; /*0x8f7cd7*/
  v5[1] = 0x7F7FFFFF; /*0x8f7cee*/
  v5[0] = (int)&off_A9B4E0; /*0x8f7cf6*/
  return sub_8F7370(a2, a1, a3, v5); /*0x8f7d03*/
}
