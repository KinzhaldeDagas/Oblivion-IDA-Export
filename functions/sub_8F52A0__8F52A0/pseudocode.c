int __thiscall sub_8F52A0(_DWORD *this, int a2)
{
  *(_DWORD *)a2 = *(this + 3);
  *(_BYTE *)(a2 + 4) = 0;
  return a2;
}
