int __thiscall sub_794730(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = *(this + 0x1B);
  if ( !v3 || !((*(this + 0x1C) - v3) >> 2) )
    _invalid_parameter_noinfo();
  return *(this + 0x1B) + 0xC * a2;
}
