int __thiscall sub_4FBFD0(int this, int a2)
{
  *(_DWORD *)this = 0; /*0x4fbffb*/
  *(_WORD *)(this + 4) = 0; /*0x4fbffd*/
  *(_WORD *)(this + 6) = 0; /*0x4fc001*/
  BSStringT_Set((BSStringT *)this, *(const char **)a2, 0); /*0x4fc011*/
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8); /*0x4fc019*/
  *(_DWORD *)(this + 0xC) = *(_DWORD *)(a2 + 0xC); /*0x4fc01f*/
  return this; /*0x4fc024*/
}
