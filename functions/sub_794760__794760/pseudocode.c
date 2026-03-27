int __thiscall sub_794760(_DWORD *this, int a2)
{
  int v3; // ecx

  v3 = *(this + 0x2F);
  if ( !v3 || 2 * a2 >= (unsigned int)((*(this + 0x30) - v3) >> 2) )
    _invalid_parameter_noinfo();
  return *(this + 0x2F) + 8 * a2;
}
