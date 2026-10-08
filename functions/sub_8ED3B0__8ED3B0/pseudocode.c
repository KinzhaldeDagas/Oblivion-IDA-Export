int __stdcall sub_8ED3B0(int a1)
{
  *(_DWORD *)a1 = 1; /*0x8ed3b4*/
  *(_BYTE *)(a1 + 4) = 1; /*0x8ed3ba*/
  return a1; /*0x8ed3be*/
}
