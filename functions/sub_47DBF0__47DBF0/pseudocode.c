unsigned int *__thiscall sub_47DBF0(unsigned int **this, unsigned int *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int *result; // eax
  int v6; // eax
  unsigned int *v7; // edx
  unsigned int *v8; // ecx

  result = (unsigned int *)*a2;
  *a3 = *(_DWORD *)(*a2 + 4);
  *a4 = result[2];
  a4[1] = result[3];
  a4[2] = result[4];
  if ( *result )
  {
    *a2 = *result;
  }
  else
  {
    v6 = ((int (__thiscall *)(unsigned int **, unsigned int))(*this)[1])(this, result[1]);
    v7 = *(this + 1);
    result = (unsigned int *)(v6 + 1);
    if ( result >= v7 )
    {
LABEL_7:
      *a2 = 0;
    }
    else
    {
      v8 = &(*(this + 2))[(_DWORD)result];
      while ( !*v8 )
      {
        result = (unsigned int *)((char *)result + 1);
        ++v8;
        if ( result >= v7 )
          goto LABEL_7;
      }
      *a2 = *v8;
    }
  }
  return result;
}
