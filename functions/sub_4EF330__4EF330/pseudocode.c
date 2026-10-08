int __stdcall sub_4EF330(int a1, int a2, char a3)
{
  *(_DWORD *)(a1 + 4) = a2; /*0x4ef33c*/
  *(_BYTE *)(a1 + 8) = a3; /*0x4ef33f*/
  return a1; /*0x4ef342*/
}
