unsigned int **__thiscall sub_78C860(unsigned int *this, unsigned int **a2, unsigned int *a3, char *Src, _BYTE *a5)
{
  unsigned int v6; // edi
  char *v7; // ebx
  unsigned int v8; // edi
  char *v9; // edi

  v6 = *(this + 1);
  if ( v6 && *(this + 2) != v6 )
  {
    if ( v6 > *(this + 2) )
      _invalid_parameter_noinfo();
    if ( !a3 || a3 != this )
      _invalid_parameter_noinfo();
    v7 = &Src[-v6];
  }
  else
  {
    v7 = 0;
  }
  sub_6EF2F0(this, v6, (int)a3, Src, 1u, a5);
  v8 = *(this + 1);
  if ( v8 > *(this + 2) )
    _invalid_parameter_noinfo();
  v9 = &v7[v8];
  if ( (unsigned int)v9 > *(this + 2) || (unsigned int)v9 < *(this + 1) )
    _invalid_parameter_noinfo();
  a2[1] = (unsigned int *)v9;
  *a2 = this;
  return a2;
}
