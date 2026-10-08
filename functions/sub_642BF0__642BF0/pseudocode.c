LONG __thiscall sub_642BF0(_DWORD *this, LONG Comperand, int *a3, int *a4)
{
  LONG result; // eax
  int v6; // ebx
  int *v7; // edi
  int v8; // edi
  int v9; // ecx
  int v10; // ebx
  int *v11; // edi
  int v12; // edi
  int v13; // edi

  while ( 1 ) /*0x642c15*/
  {
    while ( sub_43C070(this, Comperand, *a3) ) /*0x642c15*/
    {
      if ( (*(this + 6) & 0xFFFFFFFE) == 0 ) /*0x642c24*/
        goto LABEL_26; /*0x642c24*/
      if ( (*(_DWORD *)((*(this + 6) & 0xFFFFFFFE) + 8) & 1) == 0 ) /*0x642c35*/
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*this + 0x20))(*this, *a3); /*0x642c41*/
        result = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*this + 0x24))( /*0x642c53*/
                   *this,
                   *(_DWORD *)(*(this + 6) & 0xFFFFFFFE));
        *a3 = result; /*0x642c55*/
        v6 = *a4; /*0x642c5a*/
        v7 = (int *)((*(this + 6) & 0xFFFFFFFE) + 4); /*0x642c60*/
        if ( *a4 != *v7 ) /*0x642c65*/
        {
          if ( v6 ) /*0x642c69*/
          {
            result = InterlockedDecrement((volatile LONG *)(v6 + 8)); /*0x642c6f*/
            if ( !result ) /*0x642c77*/
              result = (**(int (__thiscall ***)(int, int))v6)(v6, 1); /*0x642c85*/
          }
          v8 = *v7; /*0x642c87*/
          *a4 = v8; /*0x642c8b*/
          if ( v8 ) /*0x642c8e*/
            result = InterlockedIncrement((volatile LONG *)(v8 + 8)); /*0x642c94*/
        }
        v9 = *(this + 6); /*0x642c9a*/
        goto LABEL_20; /*0x642c9d*/
      }
    }
    result = *(this + 5); /*0x642ca2*/
    if ( (result & 0xFFFFFFFE) == 0 ) /*0x642caa*/
      break; /*0x642caa*/
    if ( (*(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8) & 1) == 0 ) /*0x642cbc*/
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*this + 0x20))(*this, *a3); /*0x642ccc*/
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*this + 0x24))( /*0x642cde*/
                 *this,
                 *(_DWORD *)(*(this + 5) & 0xFFFFFFFE));
      *a3 = result; /*0x642ce0*/
      v10 = *a4; /*0x642ce5*/
      v11 = (int *)((*(this + 5) & 0xFFFFFFFE) + 4); /*0x642ceb*/
      if ( *a4 != *v11 ) /*0x642cf0*/
      {
        if ( v10 ) /*0x642cf4*/
        {
          result = InterlockedDecrement((volatile LONG *)(v10 + 8)); /*0x642cfa*/
          if ( !result ) /*0x642d02*/
            result = (**(int (__thiscall ***)(int, int))v10)(v10, 1); /*0x642d10*/
        }
        v12 = *v11; /*0x642d12*/
        *a4 = v12; /*0x642d16*/
        if ( v12 ) /*0x642d19*/
          result = InterlockedIncrement((volatile LONG *)(v12 + 8)); /*0x642d1f*/
      }
      v9 = *(this + 5); /*0x642d25*/
LABEL_20:
      LOBYTE(result) = 1; /*0x642d28*/
      if ( (*(_DWORD *)((v9 & 0xFFFFFFFE) + 8) & 1) == 0 ) /*0x642d32*/
        goto LABEL_27; /*0x642d32*/
      v13 = *a4; /*0x642d34*/
      if ( *a4 ) /*0x642d34*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v13 + 8)) ) /*0x642d43*/
        {
          if ( v13 ) /*0x642d4f*/
            (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x642d59*/
        }
        *a4 = 0; /*0x642d5b*/
      }
    }
  }
LABEL_26:
  LOBYTE(result) = 0; /*0x642d67*/
LABEL_27:
  *(_DWORD *)*(this + 1) = 0; /*0x642d69*/
  *(_DWORD *)*(this + 2) = 0; /*0x642d76*/
  *(_DWORD *)*(this + 3) = 0; /*0x642d81*/
  return result; /*0x642d75*/
}
