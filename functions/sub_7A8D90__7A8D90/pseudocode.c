unsigned int **__thiscall sub_7A8D90(unsigned int *this, unsigned int **a2, unsigned int *a3, char *a4, int *a5)
{
  unsigned int v6; // edi
  int v7; // ebx
  unsigned int v8; // edi
  unsigned int v9; // edi

  v6 = *(this + 1);
  if ( v6 && (int)(*(this + 2) - v6) >> 3 )
  {
    if ( v6 > *(this + 2) )
      _invalid_parameter_noinfo();
    if ( !a3 || a3 != this )
      _invalid_parameter_noinfo();
    v7 = (int)&a4[-v6] >> 3;
  }
  else
  {
    v7 = 0;
  }
  sub_7A8A40(this, (int)a3, a4, 1u, a5);
  v8 = *(this + 1);
  if ( v8 > *(this + 2) )
    _invalid_parameter_noinfo();
  v9 = v8 + 8 * v7;
  if ( v9 > *(this + 2) || v9 < *(this + 1) )
    _invalid_parameter_noinfo();
  a2[1] = (unsigned int *)v9;
  *a2 = this;
  return a2;
}
