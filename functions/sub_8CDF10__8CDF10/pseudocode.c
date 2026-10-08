int __stdcall sub_8CDF10(int a1)
{
  *(_DWORD *)a1 = 8; /*0x8cdf14*/
  *(_BYTE *)(a1 + 4) = 1; /*0x8cdf1a*/
  return a1; /*0x8cdf1e*/
}
