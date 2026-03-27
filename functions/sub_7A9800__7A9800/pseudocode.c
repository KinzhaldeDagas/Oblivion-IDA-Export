int __thiscall sub_7A9800(int this, int a2)
{
  int result; // eax

  if ( !*(_BYTE *)(this + 0x2268) )
  {
    *(_DWORD *)(this + 8) = a2;
    *(_BYTE *)(this + 0x2268) = 1;
    return a2;
  }
  return result;
}
