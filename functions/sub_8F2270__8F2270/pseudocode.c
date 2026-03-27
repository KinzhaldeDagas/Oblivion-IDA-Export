int __stdcall sub_8F2270(int a1)
{
  *(_DWORD *)a1 = 0x10;
  *(_BYTE *)(a1 + 4) = 1;
  return a1;
}
