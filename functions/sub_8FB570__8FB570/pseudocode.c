int __cdecl sub_8FB570(__m128 **a1, _DWORD *a2, int a3, int a4)
{
  int v5[3]; // [esp+0h] [ebp-Ch] BYREF

  v5[2] = a4; /*0x8fb583*/
  v5[1] = 0x7F7FFFFF; /*0x8fb58e*/
  v5[0] = (int)&off_A9B4E0; /*0x8fb596*/
  return sub_8FB040(a2, a1, a3, v5); /*0x8fb5a6*/
}
