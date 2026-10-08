LONG __thiscall sub_432ED0(LONG *this, LONG Comperand, int *a3, int *a4)
{
  LONG result; // eax
  int v6; // ebp
  int *v7; // edi
  int v8; // edi
  int v9; // ecx
  int v10; // ebp
  int *v11; // edi
  int v12; // edi
  int v13; // edi

  while ( 1 ) /*0x432ef5*/
  {
    while ( sub_432A60(this, Comperand, *a3, a3[1]) ) /*0x432ef5*/
    {
      result = *(this + 6); /*0x432efb*/
      if ( (result & 0xFFFFFFFE) == 0 ) /*0x432f03*/
        goto LABEL_26; /*0x432f03*/
      if ( (*(_DWORD *)((*(this + 6) & 0xFFFFFFFE) + 0xC) & 1) == 0 ) /*0x432f15*/
      {
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)*this + 0x20))(*this, *a3, a3[1]); /*0x432f25*/
        *(_QWORD *)a3 = ((__int64 (__thiscall *)(_DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)*this + 0x24))( /*0x432f3d*/
                          *this,
                          *(_DWORD *)(*(this + 6) & 0xFFFFFFFE),
                          *(_DWORD *)((*(this + 6) & 0xFFFFFFFE) + 4));
        result = (LONG)a4; /*0x432f3f*/
        v6 = *a4; /*0x432f49*/
        v7 = (int *)((*(this + 6) & 0xFFFFFFFE) + 8); /*0x432f4e*/
        if ( *a4 != *v7 ) /*0x432f53*/
        {
          if ( v6 ) /*0x432f57*/
          {
            result = InterlockedDecrement((volatile LONG *)(v6 + 8)); /*0x432f5d*/
            if ( !result ) /*0x432f65*/
              result = (**(int (__thiscall ***)(int, int))v6)(v6, 1); /*0x432f74*/
          }
          v8 = *v7; /*0x432f76*/
          *a4 = v8; /*0x432f7e*/
          if ( v8 ) /*0x432f80*/
            result = InterlockedIncrement((volatile LONG *)(v8 + 8)); /*0x432f86*/
        }
        v9 = *(this + 6); /*0x432f8c*/
        goto LABEL_20; /*0x432f8f*/
      }
    }
    if ( (*(this + 5) & 0xFFFFFFFE) == 0 ) /*0x432f9d*/
      break; /*0x432f9d*/
    if ( (*(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 0xC) & 1) == 0 ) /*0x432fae*/
    {
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)*this + 0x20))(*this, *a3, a3[1]); /*0x432fc2*/
      *(_QWORD *)a3 = ((__int64 (__thiscall *)(_DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)*this + 0x24))( /*0x432fda*/
                        *this,
                        *(_DWORD *)(*(this + 5) & 0xFFFFFFFE),
                        *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 4));
      result = (LONG)a4; /*0x432fdc*/
      v10 = *a4; /*0x432fe6*/
      v11 = (int *)((*(this + 5) & 0xFFFFFFFE) + 8); /*0x432feb*/
      if ( *a4 != *v11 ) /*0x432ff0*/
      {
        if ( v10 ) /*0x432ff4*/
        {
          result = InterlockedDecrement((volatile LONG *)(v10 + 8)); /*0x432ffa*/
          if ( !result ) /*0x433002*/
            result = (**(int (__thiscall ***)(int, int))v10)(v10, 1); /*0x433011*/
        }
        v12 = *v11; /*0x433013*/
        *a4 = v12; /*0x43301b*/
        if ( v12 ) /*0x43301d*/
          result = InterlockedIncrement((volatile LONG *)(v12 + 8)); /*0x433023*/
      }
      v9 = *(this + 5); /*0x433029*/
LABEL_20:
      LOBYTE(result) = 1; /*0x43302c*/
      if ( (*(_DWORD *)((v9 & 0xFFFFFFFE) + 0xC) & 1) == 0 ) /*0x433036*/
        goto LABEL_27; /*0x433036*/
      v13 = *a4; /*0x43303c*/
      if ( *a4 ) /*0x43303c*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v13 + 8)) ) /*0x43304a*/
        {
          if ( v13 ) /*0x433056*/
            (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x433060*/
        }
        *a4 = 0; /*0x433066*/
      }
    }
  }
LABEL_26:
  LOBYTE(result) = 0; /*0x433071*/
LABEL_27:
  *(_DWORD *)*(this + 1) = 0; /*0x433073*/
  *(_DWORD *)*(this + 2) = 0; /*0x433080*/
  *(_DWORD *)*(this + 3) = 0; /*0x43308b*/
  return result; /*0x43307f*/
}
