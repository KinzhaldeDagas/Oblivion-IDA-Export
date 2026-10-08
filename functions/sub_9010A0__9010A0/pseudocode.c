int __cdecl sub_9010A0(int a1, _DWORD *a2, int a3, int a4)
{
  int v5[3]; // [esp+0h] [ebp-Ch] BYREF

  v5[2] = a4; /*0x9010b3*/
  v5[1] = 0x7F7FFFFF; /*0x9010be*/
  v5[0] = (int)&off_A9B4E0; /*0x9010c6*/
  return sub_900770(a2, a1, a3, v5); /*0x9010d6*/
}
