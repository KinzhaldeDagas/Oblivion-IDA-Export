int __thiscall sub_4FBFD0(int this, int a2)
{
  *(_DWORD *)this = 0;
  *(_WORD *)(this + 4) = 0;
  *(_WORD *)(this + 6) = 0;
  BSStringT_Set((BSStringT *)this, *(const char **)a2, 0);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(this + 0xC) = *(_DWORD *)(a2 + 0xC);
  return this;
}
