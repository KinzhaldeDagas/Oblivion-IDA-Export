int *__thiscall sub_435D50(int ***this, int a2, _DWORD *a3, int *a4)
{
  int **v5; // eax
  int *result; // eax
  int v7; // ebx
  int *v8; // edi
  int v9; // edi

  while ( 1 )
  {
    do
    {
      v5 = (int **)&(*this)[3][a2];
      *(this + 4) = v5;
      *(this + 5) = (int **)*v5;
      **(this + 2) = (int *)((unsigned int)*(this + 5) & 0xFFFFFFFE);
      result = **(this + 4);
    }
    while ( result != (int *)((unsigned int)*(this + 5) & 0xFFFFFFFE) );
    if ( ((unsigned int)*(this + 5) & 0xFFFFFFFE) == 0 )
      break;
    ((void (__thiscall *)(int **, _DWORD))(**this)[8])(*this, *a3);
    *a3 = ((int (__thiscall *)(int **, _DWORD))(**this)[9])(*this, *(_DWORD *)((unsigned int)*(this + 5) & 0xFFFFFFFE));
    result = a4;
    v7 = *a4;
    v8 = (int *)(((unsigned int)*(this + 5) & 0xFFFFFFFE) + 4);
    if ( *a4 != *v8 )
    {
      if ( v7 )
      {
        result = (int *)InterlockedDecrement((volatile LONG *)(v7 + 8));
        if ( !result )
          result = (int *)(**(int (__thiscall ***)(int, int))v7)(v7, 1);
      }
      v9 = *v8;
      *a4 = v9;
      if ( v9 )
        result = (int *)InterlockedIncrement((volatile LONG *)(v9 + 8));
    }
    LOBYTE(result) = 1;
    if ( (*(_DWORD *)(((unsigned int)*(this + 5) & 0xFFFFFFFE) + 8) & 1) == 0 )
      goto LABEL_12;
  }
  LOBYTE(result) = 0;
LABEL_12:
  **(this + 1) = 0;
  **(this + 2) = 0;
  **(this + 3) = 0;
  return result;
}
