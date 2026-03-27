int __thiscall sub_942980(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 + 2 * *(this + 2) + 2;
  *(_DWORD *)(*this + 4 * result) = a3;
  return result;
}
