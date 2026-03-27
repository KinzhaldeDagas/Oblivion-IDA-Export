int __thiscall sub_428E90(_DWORD *this)
{
  int result; // eax

  result = *(this + 3);
  *(_BYTE *)(result + 8) &= ~1u;
  return result;
}
