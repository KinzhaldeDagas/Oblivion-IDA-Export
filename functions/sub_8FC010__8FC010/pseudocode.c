int __thiscall sub_8FC010(void *this, __m128 **a2, _DWORD *a3, int a4, int a5)
{
  int v6[3]; // [esp+0h] [ebp-Ch] BYREF

  v6[2] = a5;
  v6[1] = 0x7F7FFFFF;
  v6[0] = (int)&off_A9B4E0;
  return sub_8FB980(this, a3, a2, a4, v6);
}
