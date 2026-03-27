unsigned int __thiscall sub_6F0400(int *this, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v5; // ecx
  unsigned int result; // eax
  int v7; // edi
  unsigned int v8; // ebp
  unsigned int v9; // edi
  unsigned int v10; // ebp
  unsigned int v11; // ebx
  bool v12; // cc

  v5 = *(this + 1);
  if ( v5 )
    result = (int)(*(this + 2) - v5) / 6;
  else
    result = 0;
  if ( result >= a2 )
  {
    if ( v5 )
    {
      v9 = *(this + 2);
      result = (int)(v9 - v5) / 6;
      if ( a2 < result )
      {
        if ( v5 > v9 )
          _invalid_parameter_noinfo();
        v10 = *(this + 1);
        if ( v10 > *(this + 2) )
          _invalid_parameter_noinfo();
        v11 = v10 + 6 * a2;
        v12 = v11 <= *(this + 2);
        a4 = v10;
        if ( !v12 || v11 < *(this + 1) )
          _invalid_parameter_noinfo();
        return (unsigned int)sub_556D00(this, &a3, (int)this, v11, (int)this, v9);
      }
    }
  }
  else
  {
    if ( v5 )
      v7 = (int)(*(this + 2) - v5) / 6;
    else
      v7 = 0;
    v8 = *(this + 2);
    if ( v5 > v8 )
      _invalid_parameter_noinfo();
    return sub_6F0160(this, (int)this, v8, a2 - v7, &a3);
  }
  return result;
}
