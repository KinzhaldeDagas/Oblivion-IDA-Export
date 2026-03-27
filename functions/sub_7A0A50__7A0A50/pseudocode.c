void __thiscall __noreturn sub_7A0A50(unsigned int *this, int a2, unsigned int *a3, int a4, int a5)
{
  unsigned int v6; // edi
  unsigned int *v7; // ebx

  v6 = *(this + 1);
  if ( v6 && (int)(*(this + 2) - v6) / 0x30 )
  {
    if ( v6 > *(this + 2) )
      _invalid_parameter_noinfo();
    v7 = a3;
    if ( !a3 || a3 != this )
      _invalid_parameter_noinfo();
  }
  else
  {
    v7 = a3;
  }
  sub_79F700(this, (int)v7, a4, 1u, a5);
}
