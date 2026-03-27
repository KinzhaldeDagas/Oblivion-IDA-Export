int __thiscall sub_8A2670(_DWORD *this, int a2, _DWORD **a3)
{
  int result; // eax

  result = sub_89D610(this, a2, a3);
  *(_DWORD *)(a2 + 0x10) = *(this + 4);
  return result;
}
