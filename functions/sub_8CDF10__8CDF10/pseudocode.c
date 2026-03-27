int __stdcall sub_8CDF10(int a1)
{
  *(_DWORD *)a1 = 8;
  *(_BYTE *)(a1 + 4) = 1;
  return a1;
}
