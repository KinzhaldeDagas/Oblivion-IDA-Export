int __thiscall sub_8E8880(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = *(this + 4);
  *(_DWORD *)(result + 8 * a2 + 4) = a3;
  return result;
}
