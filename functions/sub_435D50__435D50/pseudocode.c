int *__thiscall sub_435D50(int ***this, int a2, _DWORD *a3, int *a4)
{
  int **v5; // eax
  int *result; // eax
  int v7; // ebx
  int *v8; // edi
  int v9; // edi

  while ( 1 ) /*0x435dae*/
  {
    do /*0x435dae*/
    {
      v5 = (int **)&(*this)[3][a2]; /*0x435d75*/
      *(this + 4) = v5; /*0x435d79*/
      *(this + 5) = (int **)*v5; /*0x435d80*/
      **(this + 2) = (int *)((unsigned int)*(this + 5) & 0xFFFFFFFE); /*0x435d8c*/
      result = **(this + 4); /*0x435d9f*/
    }
    while ( result != (int *)((unsigned int)*(this + 5) & 0xFFFFFFFE) ); /*0x435dae*/
    if ( ((unsigned int)*(this + 5) & 0xFFFFFFFE) == 0 ) /*0x435db9*/
      break; /*0x435db9*/
    ((void (__thiscall *)(_DWORD, _DWORD))(**this)[8])(*this, *a3); /*0x435dca*/
    *a3 = ((int (__thiscall *)(_DWORD, _DWORD))(**this)[9])(*this, *(_DWORD *)((unsigned int)*(this + 5) & 0xFFFFFFFE)); /*0x435dde*/
    result = a4; /*0x435de4*/
    v7 = *a4; /*0x435de8*/
    v8 = (int *)(((unsigned int)*(this + 5) & 0xFFFFFFFE) + 4); /*0x435ded*/
    if ( *a4 != *v8 ) /*0x435df2*/
    {
      if ( v7 ) /*0x435df6*/
      {
        result = (int *)InterlockedDecrement((volatile LONG *)(v7 + 8)); /*0x435dfc*/
        if ( !result ) /*0x435e04*/
          result = (int *)(**(int (__thiscall ***)(int, int))v7)(v7, 1); /*0x435e12*/
      }
      v9 = *v8; /*0x435e14*/
      *a4 = v9; /*0x435e1c*/
      if ( v9 ) /*0x435e1e*/
        result = (int *)InterlockedIncrement((volatile LONG *)(v9 + 8)); /*0x435e24*/
    }
    LOBYTE(result) = 1; /*0x435e33*/
    if ( (*(_DWORD *)(((unsigned int)*(this + 5) & 0xFFFFFFFE) + 8) & 1) == 0 ) /*0x435e37*/
      goto LABEL_12; /*0x435e37*/
  }
  LOBYTE(result) = 0; /*0x435e3f*/
LABEL_12:
  **(this + 1) = 0; /*0x435e41*/
  **(this + 2) = 0; /*0x435e4e*/
  **(this + 3) = 0; /*0x435e59*/
  return result; /*0x435e4d*/
}
