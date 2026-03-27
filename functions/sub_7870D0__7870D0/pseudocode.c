int __thiscall sub_7870D0(_DWORD *this, char a2)
{
  int result; // eax

  result = *(this + 4);
  *(_BYTE *)(result + 0x14) = a2;
  return result;
}
