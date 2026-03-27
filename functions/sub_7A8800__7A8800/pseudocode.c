unsigned int *__thiscall sub_7A8800(unsigned int *this, int a2)
{
  unsigned int v3; // ebx
  int v4; // ebp
  unsigned int v5; // eax
  int v6; // eax
  int v8; // edx

  if ( !a2 )
    return this;
  if ( !*this || !*(this + 1) )
    _invalid_parameter_noinfo();
  v3 = *(_DWORD *)(*this + 8);
  v4 = *(this + 2);
  if ( a2 >= 0 )
  {
    if ( v3 > *(_DWORD *)(*this + 0xC) )
      _invalid_parameter_noinfo();
    if ( (unsigned int)(a2 + v4 + 0x20 * ((int)(*(this + 1) - v3) >> 2)) <= *(_DWORD *)*this )
      goto LABEL_14;
  }
  else
  {
    if ( v3 > *(_DWORD *)(*this + 0xC) )
      _invalid_parameter_noinfo();
    if ( v4 + 0x20 * ((int)(*(this + 1) - v3) >> 2) >= (unsigned int)-a2 )
      goto LABEL_14;
  }
  _invalid_parameter_noinfo();
LABEL_14:
  if ( a2 < 0 )
  {
    v5 = *(this + 2);
    if ( v5 < -a2 )
    {
      v6 = a2 + v5;
      *(this + 1) += 0xFFFFFFFC - 4 * ((0xFFFFFFFF - v6) >> 5);
      *(this + 2) = v6 & 0x1F;
      return this;
    }
  }
  v8 = *(this + 2);
  *(this + 1) += 4 * ((unsigned int)(v8 + a2) >> 5);
  *(this + 2) = (v8 + a2) & 0x1F;
  return this;
}
