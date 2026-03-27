char __thiscall sub_643000(_DWORD *this, LONG a2, LONG Comperand, int *a4, char a5)
{
  unsigned int v6; // edi
  _DWORD *v7; // edi
  int v8; // eax
  _DWORD *v9; // eax
  LONG v10; // ebp
  int v11; // ebp
  char v13; // [esp+17h] [ebp-15h]

  v13 = 1;
  v6 = 0;
  if ( !sub_43C070(this, a2, Comperand) )
  {
    do
    {
      if ( !v6 )
      {
        v7 = (_DWORD *)FormHeapAlloc(0xCu);
        if ( v7 )
        {
          v8 = (*(int (__thiscall **)(_DWORD, LONG))(*(_DWORD *)*this + 0x24))(*this, Comperand);
          v9 = sub_4BD150(v7, v8, a4);
        }
        else
        {
          v9 = 0;
        }
        v6 = (unsigned int)v9;
      }
      v10 = *(this + 5) & 0xFFFFFFFE;
      *(_DWORD *)(v6 + 8) = v10;
      if ( InterlockedCompareExchange((volatile LONG *)*(this + 4), v6 & 0xFFFFFFFE, v10) == v10 )
      {
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*this + 0x30))(*this);
        goto LABEL_18;
      }
    }
    while ( !sub_43C070(this, a2, Comperand) );
    if ( v6 )
    {
      v11 = *(_DWORD *)(v6 + 4);
      if ( v11 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v11 + 8)) )
          (**(void (__thiscall ***)(int, int))v11)(v11, 1);
      }
      FormHeapFree(v6);
    }
  }
  if ( a5 )
    sub_4348B0((int *)((*(this + 5) & 0xFFFFFFFE) + 4), a4);
  else
    v13 = 0;
LABEL_18:
  *(_DWORD *)*(this + 1) = 0;
  *(_DWORD *)*(this + 2) = 0;
  *(_DWORD *)*(this + 3) = 0;
  return v13;
}
