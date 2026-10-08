int __stdcall sub_9018E0(int a1, _DWORD *a2, int a3, int a4)
{
  int v5[3]; // [esp+0h] [ebp-Ch] BYREF

  v5[2] = a4; /*0x9018f3*/
  v5[1] = 0x7F7FFFFF; /*0x9018fe*/
  v5[0] = (int)&off_A9B4E0; /*0x901906*/
  return sub_900770(a2, a1, a3, v5); /*0x901916*/
}
