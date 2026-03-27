unsigned int **__thiscall sub_54DA10(unsigned int *this, unsigned int **a2)
{
  unsigned int v3; // ebx
  bool v4; // cc

  v3 = *(this + 1);
  v4 = v3 <= *(this + 2);
  *a2 = 0;
  if ( !v4 )
    _invalid_parameter_noinfo();
  *a2 = this;
  a2[1] = (unsigned int *)v3;
  return a2;
}
