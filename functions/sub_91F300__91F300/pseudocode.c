int *__thiscall sub_91F300(int ***this)
{
  int *v1; // edx
  int *result; // eax
  int *v3; // edi

  v1 = **this;
  result = v1;
  v3 = &v1[(_DWORD)(*this)[1]];
  if ( v1 != v3 )
  {
    do
    {
      if ( *result >= 0 && v1[*result] >= 0 )
      {
        do
        {
          *result = v1[*result];
          v1 = **this;
        }
        while ( v1[*result] >= 0 );
      }
      ++result;
    }
    while ( result != v3 );
  }
  return result;
}
