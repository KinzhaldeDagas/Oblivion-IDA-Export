void __thiscall __noreturn sub_79F150(unsigned int *this, int a2, unsigned int *a3, char *a4, int a5)
{
  unsigned int v6; // ebx

  v6 = *(this + 1);
  if ( v6 )
  {
    if ( (int)(*(this + 2) - v6) >> 4 )
    {
      if ( v6 > *(this + 2) )
        _invalid_parameter_noinfo();
      if ( !a3 || a3 != this )
        _invalid_parameter_noinfo();
    }
  }
  sub_79EBB0(this, (int)a3, a4, 1u, a5);
}
