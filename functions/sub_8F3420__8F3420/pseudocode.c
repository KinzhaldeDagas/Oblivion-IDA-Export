int __stdcall sub_8F3420(int a1)
{
  *(_DWORD *)a1 = 2; /*0x8f3424*/
  *(_BYTE *)(a1 + 4) = 1; /*0x8f342a*/
  return a1; /*0x8f342e*/
}
