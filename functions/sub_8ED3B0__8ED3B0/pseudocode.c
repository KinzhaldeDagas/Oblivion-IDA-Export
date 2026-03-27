int __stdcall sub_8ED3B0(int a1)
{
  *(_DWORD *)a1 = 1;
  *(_BYTE *)(a1 + 4) = 1;
  return a1;
}
