int __thiscall sub_4C9D20(int this, int a2)
{
  int result; // eax

  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 )
  {
    *(_DWORD *)(this + 0x50) = a2;
    return a2;
  }
  return result;
}
