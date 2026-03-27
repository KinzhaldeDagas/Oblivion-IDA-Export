BOOL __thiscall sub_7877E0(_DWORD *this)
{
  unsigned int v2; // edi
  int v3; // ecx

  v2 = (*this)++;
  v3 = *(this + 2);
  if ( !v3 || v2 >= *(this + 3) - v3 )
    _invalid_parameter_noinfo();
  return *(_BYTE *)(v2 + *(this + 2)) != 0;
}
