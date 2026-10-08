int *__thiscall sub_431E10(int ***this, int a2, _DWORD *a3, int *a4)
{
  int **v5; // eax
  int *result; // eax
  int v7; // ebx
  int *v8; // edi
  int v9; // edi

  while ( 1 ) /*0x431e6e*/
  {
    do /*0x431e6e*/
    {
      v5 = (int **)&(*this)[3][a2]; /*0x431e35*/
      *(this + 4) = v5; /*0x431e39*/
      *(this + 5) = (int **)*v5; /*0x431e40*/
      **(this + 2) = (int *)((unsigned int)*(this + 5) & 0xFFFFFFFE); /*0x431e4c*/
      result = **(this + 4); /*0x431e5f*/
    }
    while ( result != (int *)((unsigned int)*(this + 5) & 0xFFFFFFFE) ); /*0x431e6e*/
    if ( ((unsigned int)*(this + 5) & 0xFFFFFFFE) == 0 ) /*0x431e79*/
      break; /*0x431e79*/
    ((void (__thiscall *)(_DWORD, _DWORD, _DWORD))(**this)[8])(*this, *a3, a3[1]); /*0x431e8e*/
    *(_QWORD *)a3 = ((__int64 (__thiscall *)(_DWORD, _DWORD, _DWORD))(**this)[9])( /*0x431ea6*/
                      *this,
                      *(_DWORD *)((unsigned int)*(this + 5) & 0xFFFFFFFE),
                      *(_DWORD *)(((unsigned int)*(this + 5) & 0xFFFFFFFE) + 4));
    result = a4; /*0x431ea9*/
    v7 = *a4; /*0x431eb3*/
    v8 = (int *)(((unsigned int)*(this + 5) & 0xFFFFFFFE) + 8); /*0x431eb8*/
    if ( *a4 != *v8 ) /*0x431ebd*/
    {
      if ( v7 ) /*0x431ec1*/
      {
        result = (int *)InterlockedDecrement((volatile LONG *)(v7 + 8)); /*0x431ec7*/
        if ( !result ) /*0x431ecf*/
          result = (int *)(**(int (__thiscall ***)(int, int))v7)(v7, 1); /*0x431edd*/
      }
      v9 = *v8; /*0x431edf*/
      *a4 = v9; /*0x431ee7*/
      if ( v9 ) /*0x431ee9*/
        result = (int *)InterlockedIncrement((volatile LONG *)(v9 + 8)); /*0x431eef*/
    }
    LOBYTE(result) = 1; /*0x431efe*/
    if ( (*(_DWORD *)(((unsigned int)*(this + 5) & 0xFFFFFFFE) + 0xC) & 1) == 0 ) /*0x431f02*/
      goto LABEL_12; /*0x431f02*/
  }
  LOBYTE(result) = 0; /*0x431f0a*/
LABEL_12:
  **(this + 1) = 0; /*0x431f0c*/
  **(this + 2) = 0; /*0x431f19*/
  **(this + 3) = 0; /*0x431f24*/
  return result; /*0x431f18*/
}
