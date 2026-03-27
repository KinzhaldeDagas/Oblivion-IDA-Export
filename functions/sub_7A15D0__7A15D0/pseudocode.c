void __thiscall __noreturn sub_7A15D0(unsigned int *this, int a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  char *v5; // edi
  char *v6; // edi
  int v7; // [esp+8h] [ebp-8h] BYREF

  v3 = *(this + 1);
  if ( v3 )
    v4 = (int)(*(this + 2) - v3) >> 4;
  else
    v4 = 0;
  if ( v3 )
  {
    if ( v4 < (int)(*(this + 3) - v3) >> 4 )
    {
      v5 = (char *)*(this + 2);
      LOBYTE(v7) = 0;
      sub_7A0C20(v5, 1u, a2);
    }
  }
  v6 = (char *)*(this + 2);
  if ( v3 > (unsigned int)v6 )
    _invalid_parameter_noinfo();
  sub_7A1320(this, (int)&v7, this, v6, a2);
}
