_BYTE *__usercall sub_8BC6C0@<eax>(int a1@<ebx>, _BYTE *a2, _DWORD *a3, int a4, int a5, signed int a6)
{
  int v7[6]; // [esp+4h] [ebp-18h] BYREF

  sub_90F080(v7);
  sub_90F0B0(v7, a3);
  sub_8BC660(a1, a2, (int)v7, a4, a5, a6);
  sub_90F130(v7);
  return a2;
}
