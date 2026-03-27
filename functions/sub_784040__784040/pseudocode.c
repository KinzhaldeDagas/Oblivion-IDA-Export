bool __thiscall sub_784040(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return *(this + 1) == a2[1];
}
