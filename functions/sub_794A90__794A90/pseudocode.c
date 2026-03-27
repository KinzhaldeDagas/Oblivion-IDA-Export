unsigned int __thiscall sub_794A90(int this, unsigned __int16 a2)
{
  int v3; // ecx
  unsigned int result; // eax

  *(_WORD *)(this + 0x24) = a2;
  *(_WORD *)(this + 0x26) = 0;
  v3 = *(_DWORD *)(this + 0x2C);
  if ( v3 && (result = (*(_DWORD *)(this + 0x30) - v3) >> 2, a2 < result) )
  {
    *(_DWORD *)(v3 + 4 * a2) = 0;
  }
  else
  {
    _invalid_parameter_noinfo();
    result = *(_DWORD *)(this + 0x2C);
    *(_DWORD *)(result + 4 * a2) = 0;
  }
  return result;
}
