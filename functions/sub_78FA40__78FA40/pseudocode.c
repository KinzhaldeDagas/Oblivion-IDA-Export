unsigned int __thiscall sub_78FA40(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = *(this + 1);
  if ( !v3 || a2 >= (*(this + 2) - v3) / 0x54 )
    _invalid_parameter_noinfo();
  return *(this + 1) + 0x54 * a2;
}
