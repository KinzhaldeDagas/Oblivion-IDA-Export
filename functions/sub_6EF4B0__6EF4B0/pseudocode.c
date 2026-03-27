char *__thiscall sub_6EF4B0(char **this, unsigned int a2, int a3)
{
  char *result; // eax
  unsigned int v5; // ecx
  int v6; // ebx
  char *v7; // ebp
  char *v8; // ebp
  unsigned int v9; // ebx
  char *v10; // edi
  bool v11; // cc
  int v12[2]; // [esp+10h] [ebp-8h] BYREF

  result = *(this + 1);
  if ( result )
    v5 = *(this + 2) - result;
  else
    v5 = 0;
  if ( v5 >= a2 )
  {
    if ( result )
    {
      v8 = *(this + 2);
      if ( a2 < v8 - result )
      {
        if ( result > v8 )
          _invalid_parameter_noinfo();
        v9 = (unsigned int)*(this + 1);
        if ( v9 > (unsigned int)*(this + 2) )
          _invalid_parameter_noinfo();
        v10 = (char *)(v9 + a2);
        v11 = v9 + a2 <= (unsigned int)*(this + 2);
        v12[1] = v9;
        if ( !v11 || v10 < *(this + 1) )
          _invalid_parameter_noinfo();
        return (char *)sub_788B10(this, (int)v12, (int)this, v10, (int)this, v8);
      }
    }
  }
  else
  {
    if ( result )
      v6 = *(this + 2) - result;
    else
      v6 = 0;
    v7 = *(this + 2);
    if ( result > v7 )
      _invalid_parameter_noinfo();
    return sub_6EF2F0(this, a2 - v6, (int)this, v7, a2 - v6, &a3);
  }
  return result;
}
