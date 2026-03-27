unsigned int __thiscall sub_52F3C0(unsigned int *this, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // eax
  unsigned int result; // eax
  unsigned int v6; // eax
  int v7; // edx

  sub_5A56F0(this);
  v4 = *(this + 3);
  if ( a2 <= v4 )
  {
    v6 = v4 + 1;
    if ( *(this + 2) < v6 )
      sub_452910(this, v6 + *(this + 5));
    unknown_libname_16(*(this + 1) + 4 * a2 + 4, *(this + 1) + 4 * a2, 4 * (*(this + 3) - a2));
    ++*(this + 3);
    v7 = *(this + 1);
    *(this + 4) = *(this + 3);
    result = a3;
    *(_DWORD *)(v7 + 4 * a2) = a3;
  }
  else
  {
    if ( a2 >= *(this + 2) )
      sub_452910(this, a2 + *(this + 5));
    return sub_446C50(this, a2, &a3);
  }
  return result;
}
