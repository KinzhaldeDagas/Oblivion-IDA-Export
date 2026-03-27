unsigned int __thiscall sub_6F29D0(_DWORD *this, unsigned int a2, int a3, unsigned int a4, int a5)
{
  unsigned int v6; // ecx
  unsigned int result; // eax
  int v8; // edi
  char *v9; // ebp
  char *v10; // edi
  unsigned int v11; // ebp
  char *v12; // ebx
  bool v13; // cc

  v6 = *(this + 1);
  if ( v6 )
    result = (int)(*(this + 2) - v6) / 0xC;
  else
    result = 0;
  if ( result >= a2 )
  {
    if ( v6 )
    {
      v10 = (char *)*(this + 2);
      result = (int)&v10[-v6] / 0xC;
      if ( a2 < result )
      {
        if ( v6 > (unsigned int)v10 )
          _invalid_parameter_noinfo();
        v11 = *(this + 1);
        if ( v11 > *(this + 2) )
          _invalid_parameter_noinfo();
        v12 = (char *)(v11 + 0xC * a2);
        v13 = (unsigned int)v12 <= *(this + 2);
        a4 = v11;
        if ( !v13 || (unsigned int)v12 < *(this + 1) )
          _invalid_parameter_noinfo();
        return (unsigned int)sub_6F1470(this, &a3, (int)this, v12, (int)this, v10);
      }
    }
  }
  else
  {
    if ( v6 )
      v8 = (int)(*(this + 2) - v6) / 0xC;
    else
      v8 = 0;
    v9 = (char *)*(this + 2);
    if ( v6 > (unsigned int)v9 )
      _invalid_parameter_noinfo();
    return sub_6F1940(this, (int)this, v9, a2 - v8, &a3);
  }
  return result;
}
