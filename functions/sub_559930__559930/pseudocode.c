void __thiscall sub_559930(int *this)
{
  float *v2; // ebx
  unsigned int v3; // edi
  int v4; // edi

  v2 = (float *)*(this + 2);
  if ( *(this + 1) > (unsigned int)v2 )
    _invalid_parameter_noinfo();
  v3 = *(this + 1);
  if ( v3 > *(this + 2) )
    _invalid_parameter_noinfo();
  if ( (float *)v3 != v2 )
  {
    v4 = sub_558610(v2, (float *)*(this + 2), v3);
    sub_557740(v4, *(this + 2));
    *(this + 2) = v4;
  }
}
