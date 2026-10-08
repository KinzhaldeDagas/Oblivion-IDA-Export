int __stdcall sub_8F6E80(int a1, __m128 **a2, int a3, int a4)
{
  int (__stdcall **v5)(char); // [esp+0h] [ebp-Ch] BYREF
  char v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v7 = a4; /*0x8f6e93*/
  v6 = 0; /*0x8f6e9e*/
  v5 = &off_A9B4F0; /*0x8f6ea3*/
  return sub_9091D0(a2, a1, a3, (int)&v5); /*0x8f6eb3*/
}
