unsigned int **__thiscall sub_791510(unsigned int *this, unsigned int **a2, unsigned int *a3, char *a4, int *a5)
{
  unsigned int v6; // edi
  unsigned int *v7; // ebx
  int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // edi

  v6 = *(this + 1);
  if ( v6 && (int)(*(this + 2) - v6) / 0x18 )
  {
    if ( v6 > *(this + 2) )
      _invalid_parameter_noinfo();
    v7 = a3;
    if ( !a3 || a3 != this )
      _invalid_parameter_noinfo();
    v8 = (int)&a4[-v6] / 0x18;
  }
  else
  {
    v7 = a3;
    v8 = 0;
  }
  sub_791140(this, (int)v7, a4, 1u, a5);
  v9 = *(this + 1);
  if ( v9 > *(this + 2) )
    _invalid_parameter_noinfo();
  v10 = v9 + 0x18 * v8;
  if ( v10 > *(this + 2) || v10 < *(this + 1) )
    _invalid_parameter_noinfo();
  a2[1] = (unsigned int *)v10;
  *a2 = this;
  return a2;
}
