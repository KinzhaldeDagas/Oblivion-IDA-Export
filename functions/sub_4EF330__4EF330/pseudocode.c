int __stdcall sub_4EF330(int a1, int a2, char a3)
{
  *(_DWORD *)(a1 + 4) = a2;
  *(_BYTE *)(a1 + 8) = a3;
  return a1;
}
