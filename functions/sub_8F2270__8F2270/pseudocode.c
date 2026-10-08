int __stdcall sub_8F2270(int a1)
{
  *(_DWORD *)a1 = 0x10; /*0x8f2274*/
  *(_BYTE *)(a1 + 4) = 1; /*0x8f227a*/
  return a1; /*0x8f227e*/
}
