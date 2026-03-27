void __thiscall __noreturn sub_7857D0(unsigned int *this, int a2, unsigned int *a3, char *a4, _DWORD *a5)
{
  unsigned int v6; // edi
  unsigned int *v7; // ebx

  v6 = *(this + 1);
  if ( v6 && (int)(*(this + 2) - v6) / 0x18 )
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
  sub_785050((int)this, (int)v7, a4, 1u, a5);
}
