bool __thiscall sub_42C2D0(_BYTE *this, int a2, char a3)
{
  return (a3 || (((*(this + 0x194) >> 3) ^ (*(int *)(a2 + 0xC) < 0)) & 1) == 0)
      && (*(_DWORD *)(a2 + 0xC) & 0x7FFFFFFF) != 0;
}
