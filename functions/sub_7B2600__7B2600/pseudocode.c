unsigned int *__thiscall sub_7B2600(unsigned int **this, unsigned int **a2, _DWORD *a3, unsigned int *a4)
{
  int v4; // esi
  int v6; // edi
  unsigned int v7; // eax
  unsigned int *result; // eax
  int v9; // eax
  unsigned int *v10; // edx
  unsigned int **v11; // ecx

  v4 = (int)*a2;
  *a3 = (*a2)[1];
  v6 = *a4;
  if ( *a4 != *(_DWORD *)(v4 + 8) )
  {
    if ( v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    }
    v7 = *(_DWORD *)(v4 + 8);
    *a4 = v7;
    if ( v7 )
      InterlockedIncrement((volatile LONG *)(v7 + 4));
  }
  result = *(unsigned int **)v4;
  if ( *(_DWORD *)v4 )
  {
    *a2 = result;
  }
  else
  {
    v9 = ((int (__thiscall *)(unsigned int **, _DWORD))(*this)[1])(this, *(_DWORD *)(v4 + 4));
    v10 = *(this + 1);
    result = (unsigned int *)(v9 + 1);
    if ( result >= v10 )
    {
LABEL_13:
      *a2 = 0;
      return (unsigned int *)a2;
    }
    else
    {
      v11 = (unsigned int **)&(*(this + 2))[(_DWORD)result];
      while ( !*v11 )
      {
        result = (unsigned int *)((char *)result + 1);
        ++v11;
        if ( result >= v10 )
          goto LABEL_13;
      }
      *a2 = *v11;
    }
  }
  return result;
}
