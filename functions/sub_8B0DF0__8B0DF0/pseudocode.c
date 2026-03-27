int __thiscall sub_8B0DF0(int *this, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // ecx
  int result; // eax

  v4 = *(this + 2);
  v5 = *this;
  result = a2 + v4;
  *(_DWORD *)(v5 + 8 * result + 8) = a3;
  *(_DWORD *)(v5 + 8 * result + 0xC) = a4;
  return result;
}
