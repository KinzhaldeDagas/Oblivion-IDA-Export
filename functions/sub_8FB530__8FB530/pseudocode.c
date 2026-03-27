int __stdcall sub_8FB530(__m128 **a1, _DWORD *a2, int a3, int a4)
{
  int v5[3]; // [esp+0h] [ebp-Ch] BYREF

  v5[2] = a4;
  v5[1] = 0x7F7FFFFF;
  v5[0] = (int)&off_A9B4E0;
  return sub_8FAD60(a2, a1, a3, v5);
}
