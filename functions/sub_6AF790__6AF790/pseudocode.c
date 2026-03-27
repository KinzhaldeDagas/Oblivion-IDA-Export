int __thiscall sub_6AF790(int *this, int a2)
{
  int result; // eax

  *(_DWORD *)(*(this + 3) + 4 * *this) = a2;
  result = ((unsigned __int16)*this + 1) & 0xFFF;
  *this = result;
  return result;
}
