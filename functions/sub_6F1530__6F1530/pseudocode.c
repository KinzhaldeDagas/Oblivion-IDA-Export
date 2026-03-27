int *__thiscall sub_6F1530(char **this, int *a2, int a3, char *a4, int a5, char *a6)
{
  int v6; // ebp
  char *v8; // eax
  char *v9; // ecx
  int v10; // edx

  v6 = a3;
  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  v8 = a6;
  if ( a4 != a6 )
  {
    v9 = *(this + 2);
    if ( a6 != v9 )
    {
      v10 = a4 - a6;
      do
      {
        *(_DWORD *)&v8[v10] = *(_DWORD *)v8;
        *(_DWORD *)&v8[v10 + 4] = *((_DWORD *)v8 + 1);
        v8 += 8;
      }
      while ( v8 != v9 );
      v6 = a3;
    }
    *(this + 2) = &a4[8 * ((v9 - a6) >> 3)];
  }
  a2[1] = (int)a4;
  *a2 = v6;
  return a2;
}
