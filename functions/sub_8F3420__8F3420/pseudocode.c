int __stdcall sub_8F3420(int a1)
{
  *(_DWORD *)a1 = 2;
  *(_BYTE *)(a1 + 4) = 1;
  return a1;
}
