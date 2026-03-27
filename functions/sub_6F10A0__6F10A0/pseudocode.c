unsigned int __thiscall sub_6F10A0(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = *(this + 1);
  if ( !v3 || a2 >= (*(this + 2) - v3) / 0xC )
    _invalid_parameter_noinfo();
  return *(this + 1) + 0xC * a2;
}
