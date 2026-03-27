unsigned int __thiscall sub_6F2C20(char **this, unsigned int a2, float a3, unsigned int a4)
{
  unsigned int v5; // ecx
  unsigned int result; // eax
  int v7; // edi
  float *v8; // ebp
  char *v9; // ebp
  unsigned int v10; // edi
  char *v11; // edi

  v5 = (unsigned int)*(this + 1);
  if ( v5 )
    result = (int)&(*(this + 2))[-v5] >> 3;
  else
    result = 0;
  if ( result >= a2 )
  {
    if ( v5 )
    {
      v9 = *(this + 2);
      result = (int)&v9[-v5] >> 3;
      if ( a2 < result )
      {
        if ( v5 > (unsigned int)v9 )
          _invalid_parameter_noinfo();
        v10 = (unsigned int)*(this + 1);
        if ( v10 > (unsigned int)*(this + 2) )
          _invalid_parameter_noinfo();
        a4 = v10;
        v11 = (char *)(v10 + 8 * a2);
        if ( v11 > *(this + 2) || v11 < *(this + 1) )
          _invalid_parameter_noinfo();
        return (unsigned int)sub_6F1530(this, (int *)&a3, (int)this, v11, (int)this, v9);
      }
    }
  }
  else
  {
    if ( v5 )
      v7 = (int)&(*(this + 2))[-v5] >> 3;
    else
      v7 = 0;
    v8 = (float *)*(this + 2);
    if ( v5 > (unsigned int)v8 )
      _invalid_parameter_noinfo();
    return sub_6F2060((unsigned int *)this, (int)this, v8, a2 - v7, &a3);
  }
  return result;
}
