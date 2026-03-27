unsigned int __thiscall sub_6EDA70(_DWORD *this, unsigned int a2)
{
  if ( a2 > *(this + 5) )
    _invalid_parameter_noinfo();
  if ( *(this + 6) < 0x10u )
    return (unsigned int)this + a2 + 4;
  else
    return *(this + 1) + a2;
}
