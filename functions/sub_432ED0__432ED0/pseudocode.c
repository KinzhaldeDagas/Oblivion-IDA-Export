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

  while ( 1 )
  {
    while ( sub_432A60(this, Comperand, *a3, a3[1]) )
    {
      result = *(this + 6);
      if ( (result & 0xFFFFFFFE) == 0 )
        goto LABEL_26;
      if ( (*(_DWORD *)((*(this + 6) & 0xFFFFFFFE) + 0xC) & 1) == 0 )
      {
        (*(void (__thiscall **)(LONG, int, int))(*(_DWORD *)*this + 0x20))(*this, *a3, a3[1]);
        *(_QWORD *)a3 = ((__int64 (__thiscall *)(LONG, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)*this + 0x24))(
                          *this,
                          *(_DWORD *)(*(this + 6) & 0xFFFFFFFE),
                          *(_DWORD *)((*(this + 6) & 0xFFFFFFFE) + 4));
        result = (LONG)a4;
        v6 = *a4;
        v7 = (int *)((*(this + 6) & 0xFFFFFFFE) + 8);
        if ( *a4 != *v7 )
        {
          if ( v6 )
          {
            result = InterlockedDecrement((volatile LONG *)(v6 + 8));
            if ( !result )
              result = (**(int (__thiscall ***)(int, int))v6)(v6, 1);
          }
          v8 = *v7;
          *a4 = v8;
          if ( v8 )
            result = InterlockedIncrement((volatile LONG *)(v8 + 8));
        }
        v9 = *(this + 6);
        goto LABEL_20;
      }
    }
    if ( (*(this + 5) & 0xFFFFFFFE) == 0 )
      break;
    if ( (*(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 0xC) & 1) == 0 )
    {
      (*(void (__thiscall **)(LONG, int, int))(*(_DWORD *)*this + 0x20))(*this, *a3, a3[1]);
      *(_QWORD *)a3 = ((__int64 (__thiscall *)(LONG, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)*this + 0x24))(
                        *this,
                        *(_DWORD *)(*(this + 5) & 0xFFFFFFFE),
                        *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 4));
      result = (LONG)a4;
      v10 = *a4;
      v11 = (int *)((*(this + 5) & 0xFFFFFFFE) + 8);
      if ( *a4 != *v11 )
      {
        if ( v10 )
        {
          result = InterlockedDecrement((volatile LONG *)(v10 + 8));
          if ( !result )
            result = (**(int (__thiscall ***)(int, int))v10)(v10, 1);
        }
        v12 = *v11;
        *a4 = v12;
        if ( v12 )
          result = InterlockedIncrement((volatile LONG *)(v12 + 8));
      }
      v9 = *(this + 5);
LABEL_20:
      LOBYTE(result) = 1;
      if ( (*(_DWORD *)((v9 & 0xFFFFFFFE) + 0xC) & 1) == 0 )
        goto LABEL_27;
      v13 = *a4;
      if ( *a4 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v13 + 8)) )
        {
          if ( v13 )
            (**(void (__thiscall ***)(int, int))v13)(v13, 1);
        }
        *a4 = 0;
      }
    }
  }
LABEL_26:
  LOBYTE(result) = 0;
LABEL_27:
  *(_DWORD *)*(this + 1) = 0;
  *(_DWORD *)*(this + 2) = 0;
  *(_DWORD *)*(this + 3) = 0;
  return result;
}
