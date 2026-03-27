unsigned int __thiscall sub_57DDE0(int this)
{
  unsigned int result; // eax
  bool v2; // zf

  result = Seed;
  if ( Seed - *(_DWORD *)(this + 0x10) > 0x1F4 )
  {
    v2 = *(_BYTE *)(this + 8) == 0;
    *(_DWORD *)(this + 0x10) = result;
    *(_BYTE *)(this + 8) = v2;
  }
  return result;
}
