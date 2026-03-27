char __thiscall sub_43C220(int *this, LONG Comperand, _DWORD *a3)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  void (__thiscall ***v9)(_DWORD, int); // edi
  int v11; // [esp+14h] [ebp-1Ch]
  int *v12; // [esp+20h] [ebp-10h]
  unsigned int Comperanda; // [esp+34h] [ebp+4h]

  v12 = (int *)(*(_DWORD *)(*this + 0xC) + 4 * Comperand);
  do
  {
LABEL_2:
    *(this + 4) = (int)v12;
    *(this + 5) = *v12;
    *(_DWORD *)*(this + 2) = *(this + 5) & 0xFFFFFFFE;
  }
  while ( *(_DWORD *)*(this + 4) != (*(this + 5) & 0xFFFFFFFE) );
  while ( 1 )
  {
    if ( (*(this + 5) & 0xFFFFFFFE) == 0 )
      return 0;
    *(this + 6) = *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8);
    *(_DWORD *)*(this + 1) = *(this + 6) & 0xFFFFFFFE;
    if ( *(this + 6) != *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8) )
      goto LABEL_2;
    v4 = *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 4);
    v11 = v4;
    if ( v4 )
      InterlockedIncrement((volatile LONG *)(v4 + 8));
    Comperanda = *(this + 5) & 0xFFFFFFFE;
    if ( *(_DWORD *)*(this + 4) != Comperanda )
    {
      v9 = (void (__thiscall ***)(_DWORD, int))v11;
      if ( v11 && !InterlockedDecrement((volatile LONG *)(v11 + 8)) )
        goto LABEL_23;
      goto LABEL_2;
    }
    if ( (*(this + 6) & 1) == 0 )
      break;
    if ( InterlockedCompareExchange((volatile LONG *)*(this + 4), *(this + 6) & 0xFFFFFFFE, Comperanda) != Comperanda )
    {
      v9 = (void (__thiscall ***)(_DWORD, int))v11;
      if ( v11 && !InterlockedDecrement((volatile LONG *)(v11 + 8)) )
      {
LABEL_23:
        (**v9)(v9, 1);
        goto LABEL_2;
      }
      goto LABEL_2;
    }
    v5 = *(this + 5) & 0xFFFFFFFE;
    v6 = *(_DWORD *)(v5 + 4);
    if ( v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 8)) )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
      *(_DWORD *)(v5 + 4) = 0;
    }
    *(_DWORD *)(v5 + 4) = *(this + 7);
    v7 = ++*(this + 8);
    v8 = *this;
    *(this + 7) = v5;
    if ( v7 == *(_DWORD *)(v8 + 0x10) )
      sub_43A3F0(this);
LABEL_18:
    *(this + 5) = *(this + 6);
    *(_DWORD *)*(this + 2) = *(this + 6) & 0xFFFFFFFE;
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 8)) )
        (**(void (__thiscall ***)(int, int))v11)(v11, 1);
    }
  }
  if ( v11 != *a3 )
  {
    *(this + 4) = (*(this + 5) & 0xFFFFFFFE) + 8;
    *(_DWORD *)*(this + 3) = *(this + 5) & 0xFFFFFFFE;
    goto LABEL_18;
  }
  if ( v11 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v11 + 8)) )
      (**(void (__thiscall ***)(int, int))v11)(v11, 1);
  }
  return 1;
}
